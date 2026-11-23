#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8000EA74_F674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EA78: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000EA7C: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EA80: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EA84: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EA88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000EA8C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000EA90: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000EA94: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EA98: sub.s       $f14, $f18, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8000EA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EAA0: jal         0x800040A8
    // 0x8000EAA4: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000EAA4: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    after_0:
    // 0x8000EAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EAAC: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8000EAB0: andi        $v0, $t6, 0x3FF
    ctx->r2 = ctx->r14 & 0X3FF;
    // 0x8000EAB4: jr          $ra
    // 0x8000EAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000EAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80026FE8_27BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026FE8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80026FEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80026FF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80026FF4: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x80026FF8: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    // 0x80026FFC: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x80027000: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80027004: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80027008: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8002700C: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x80027010: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x80027014: ori         $t7, $t7, 0x1404
    ctx->r15 = ctx->r15 | 0X1404;
    // 0x80027018: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8002701C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80027020: addiu       $t8, $zero, -0x5
    ctx->r24 = ADD32(0, -0X5);
    // 0x80027024: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x80027028: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002702C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027030: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80027034: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x80027038: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8002703C: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x80027040: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x80027044: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80027048: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8002704C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x80027050: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027054: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80027058: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8002705C: lw          $ra, 0x98($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X98);
    // 0x80027060: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x80027064: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80027068: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x8002706C: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x80027070: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80027074: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x80027078: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8002707C: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x80027080: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80027084: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80027088: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8002708C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027090: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80027094: or          $t3, $t9, $t7
    ctx->r11 = ctx->r25 | ctx->r15;
    // 0x80027098: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8002709C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800270A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800270A4: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800270A8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800270AC: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x800270B0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800270B4: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x800270B8: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x800270BC: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x800270C0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800270C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800270C8: multu       $ra, $t9
    result = U64(U32(ctx->r31)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800270CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800270D0: sll         $t2, $ra, 1
    ctx->r10 = S32(ctx->r31 << 1);
    // 0x800270D4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800270D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800270DC: srl         $a1, $t2, 3
    ctx->r5 = S32(U32(ctx->r10) >> 3);
    // 0x800270E0: addiu       $t5, $t2, 0x7
    ctx->r13 = ADD32(ctx->r10, 0X7);
    // 0x800270E4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800270E8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800270EC: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
    // 0x800270F0: mflo        $t0
    ctx->r8 = lo;
    // 0x800270F4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x800270F8: sltiu       $at, $t0, 0x7FF
    ctx->r1 = ctx->r8 < 0X7FF ? 1 : 0;
    // 0x800270FC: beq         $at, $zero, L_8002710C
    if (ctx->r1 == 0) {
        // 0x80027100: addiu       $t2, $ra, -0x1
        ctx->r10 = ADD32(ctx->r31, -0X1);
            goto L_8002710C;
    }
    // 0x80027100: addiu       $t2, $ra, -0x1
    ctx->r10 = ADD32(ctx->r31, -0X1);
    // 0x80027104: b           L_8002710C
    // 0x80027108: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
        goto L_8002710C;
    // 0x80027108: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_8002710C:
    // 0x8002710C: bne         $a1, $zero, L_8002711C
    if (ctx->r5 != 0) {
        // 0x80027110: lui         $at, 0x700
        ctx->r1 = S32(0X700 << 16);
            goto L_8002711C;
    }
    // 0x80027110: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80027114: b           L_8002711C
    // 0x80027118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8002711C;
    // 0x80027118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8002711C:
    // 0x8002711C: bne         $a1, $zero, L_8002712C
    if (ctx->r5 != 0) {
        // 0x80027120: addiu       $t7, $a2, 0x7FF
        ctx->r15 = ADD32(ctx->r6, 0X7FF);
            goto L_8002712C;
    }
    // 0x80027120: addiu       $t7, $a2, 0x7FF
    ctx->r15 = ADD32(ctx->r6, 0X7FF);
    // 0x80027124: b           L_80027130
    // 0x80027128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80027130;
    // 0x80027128: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002712C:
    // 0x8002712C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80027130:
    // 0x80027130: divu        $zero, $t7, $a0
    lo = S32(U32(ctx->r15) / U32(ctx->r4)); hi = S32(U32(ctx->r15) % U32(ctx->r4));
    // 0x80027134: mflo        $t6
    ctx->r14 = lo;
    // 0x80027138: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8002713C: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x80027140: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80027144: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80027148: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8002714C: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80027150: srl         $t9, $t5, 3
    ctx->r25 = S32(U32(ctx->r13) >> 3);
    // 0x80027154: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x80027158: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8002715C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80027160: sll         $t8, $t6, 9
    ctx->r24 = S32(ctx->r14 << 9);
    // 0x80027164: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80027168: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x8002716C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80027170: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80027174: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80027178: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8002717C: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x80027180: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80027184: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80027188: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8002718C: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80027190: bne         $a0, $zero, L_8002719C
    if (ctx->r4 != 0) {
        // 0x80027194: nop
    
            goto L_8002719C;
    }
    // 0x80027194: nop

    // 0x80027198: break       7
    do_break(2147643800);
L_8002719C:
    // 0x8002719C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800271A0: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x800271A4: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x800271A8: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x800271AC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800271B0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x800271B4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800271B8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x800271BC: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x800271C0: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800271C4: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x800271C8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800271CC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800271D0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800271D4: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800271D8: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x800271DC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x800271E0: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x800271E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800271E8: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
    // 0x800271EC: bne         $t9, $at, L_80027330
    if (ctx->r25 != ctx->r1) {
        // 0x800271F0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80027330;
    }
    // 0x800271F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800271F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800271F8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x800271FC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80027200: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x80027204: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027208: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8002720C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80027210: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x80027214: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027218: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8002721C: andi        $t8, $a3, 0x1FF
    ctx->r24 = ctx->r7 & 0X1FF;
    // 0x80027220: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80027224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80027228: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8002722C: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80027230: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027234: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80027238: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8002723C: or          $ra, $s0, $zero
    ctx->r31 = ctx->r16 | 0;
    // 0x80027240: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80027244: sltiu       $at, $t0, 0x7FF
    ctx->r1 = ctx->r8 < 0X7FF ? 1 : 0;
    // 0x80027248: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x8002724C: sw          $t7, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r15;
    // 0x80027250: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027254: beq         $at, $zero, L_80027264
    if (ctx->r1 == 0) {
        // 0x80027258: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80027264;
    }
    // 0x80027258: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8002725C: b           L_80027268
    // 0x80027260: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
        goto L_80027268;
    // 0x80027260: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_80027264:
    // 0x80027264: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
L_80027268:
    // 0x80027268: bne         $a1, $zero, L_80027278
    if (ctx->r5 != 0) {
        // 0x8002726C: lui         $t0, 0x100
        ctx->r8 = S32(0X100 << 16);
            goto L_80027278;
    }
    // 0x8002726C: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x80027270: b           L_8002727C
    // 0x80027274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8002727C;
    // 0x80027274: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80027278:
    // 0x80027278: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_8002727C:
    // 0x8002727C: bne         $a1, $zero, L_8002728C
    if (ctx->r5 != 0) {
        // 0x80027280: addiu       $t8, $a2, 0x7FF
        ctx->r24 = ADD32(ctx->r6, 0X7FF);
            goto L_8002728C;
    }
    // 0x80027280: addiu       $t8, $a2, 0x7FF
    ctx->r24 = ADD32(ctx->r6, 0X7FF);
    // 0x80027284: b           L_80027290
    // 0x80027288: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80027290;
    // 0x80027288: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002728C:
    // 0x8002728C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80027290:
    // 0x80027290: divu        $zero, $t8, $a0
    lo = S32(U32(ctx->r24) / U32(ctx->r4)); hi = S32(U32(ctx->r24) % U32(ctx->r4));
    // 0x80027294: mflo        $t9
    ctx->r25 = lo;
    // 0x80027298: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8002729C: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x800272A0: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800272A4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800272A8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800272AC: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800272B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800272B4: sw          $t6, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r14;
    // 0x800272B8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800272BC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800272C0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800272C4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800272C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800272CC: or          $t7, $t5, $a3
    ctx->r15 = ctx->r13 | ctx->r7;
    // 0x800272D0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800272D4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800272D8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800272DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800272E0: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x800272E4: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x800272E8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800272EC: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x800272F0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x800272F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800272F8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x800272FC: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80027300: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80027304: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x80027308: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8002730C: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x80027310: or          $t9, $t2, $t0
    ctx->r25 = ctx->r10 | ctx->r8;
    // 0x80027314: or          $t7, $t9, $t4
    ctx->r15 = ctx->r25 | ctx->r12;
    // 0x80027318: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8002731C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80027320: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80027324: bne         $a0, $zero, L_80027330
    if (ctx->r4 != 0) {
        // 0x80027328: nop
    
            goto L_80027330;
    }
    // 0x80027328: nop

    // 0x8002732C: break       7
    do_break(2147644204);
L_80027330:
    // 0x80027330: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80027334: lui         $v0, 0x8FFF
    ctx->r2 = S32(0X8FFF << 16);
    // 0x80027338: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8002733C: subu        $t8, $v0, $t6
    ctx->r24 = SUB32(ctx->r2, ctx->r14);
    // 0x80027340: and         $t9, $s0, $t8
    ctx->r25 = ctx->r16 & ctx->r24;
    // 0x80027344: and         $a1, $t9, $v0
    ctx->r5 = ctx->r25 & ctx->r2;
    // 0x80027348: jal         0x80040620
    // 0x8002734C: and         $a0, $t6, $v0
    ctx->r4 = ctx->r14 & ctx->r2;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8002734C: and         $a0, $t6, $v0
    ctx->r4 = ctx->r14 & ctx->r2;
    after_0:
    // 0x80027350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80027354: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80027358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002735C: jr          $ra
    // 0x80027360: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80027360: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8000B578_C178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B578: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000B57C: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x8000B580: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x8000B584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B58C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8000B590: beq         $t7, $zero, L_8000B5A8
    if (ctx->r15 == 0) {
        // 0x8000B594: sw          $t7, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r15;
            goto L_8000B5A8;
    }
    // 0x8000B594: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x8000B598: jal         0x8000B5BC
    // 0x8000B59C: nop

    func_8000B5BC_C1BC(rdram, ctx);
        goto after_0;
    // 0x8000B59C: nop

    after_0:
    // 0x8000B5A0: b           L_8000B5AC
    // 0x8000B5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000B5AC;
    // 0x8000B5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000B5A8:
    // 0x8000B5A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000B5AC:
    // 0x8000B5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B5B4: jr          $ra
    // 0x8000B5B8: nop

    TRACE_RETURN()
    return;
    // 0x8000B5B8: nop

;}
RECOMP_FUNC void func_80039A70_3A670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039A70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80039A74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80039A78: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80039A7C: addiu       $s1, $s1, 0x9F0
    ctx->r17 = ADD32(ctx->r17, 0X9F0);
    // 0x80039A80: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80039A84: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80039A88: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80039A8C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80039A90: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80039A94: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80039A98: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80039A9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80039AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80039AA4: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x80039AA8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80039AAC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80039AB0: blez        $t6, L_80039CA4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80039AB4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80039CA4;
    }
    // 0x80039AB4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80039AB8: lui         $fp, 0x801C
    ctx->r30 = S32(0X801C << 16);
    // 0x80039ABC: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x80039AC0: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x80039AC4: addiu       $s5, $s5, -0x5DD0
    ctx->r21 = ADD32(ctx->r21, -0X5DD0);
    // 0x80039AC8: addiu       $s6, $s6, 0xA68
    ctx->r22 = ADD32(ctx->r22, 0XA68);
    // 0x80039ACC: addiu       $fp, $fp, 0xA20
    ctx->r30 = ADD32(ctx->r30, 0XA20);
    // 0x80039AD0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80039AD4: addiu       $s7, $zero, 0x1C
    ctx->r23 = ADD32(0, 0X1C);
    // 0x80039AD8: lbu         $t7, 0x1($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1);
L_80039ADC:
    // 0x80039ADC: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x80039AE0: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x80039AE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80039AE8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80039AEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80039AF0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80039AF4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80039AF8: andi        $t2, $t1, 0x7FFF
    ctx->r10 = ctx->r9 & 0X7FFF;
    // 0x80039AFC: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x80039B00: addiu       $t0, $t0, 0xC28
    ctx->r8 = ADD32(ctx->r8, 0XC28);
    // 0x80039B04: sltiu       $at, $t2, 0x100
    ctx->r1 = ctx->r10 < 0X100 ? 1 : 0;
    // 0x80039B08: bne         $at, $zero, L_80039BE8
    if (ctx->r1 != 0) {
        // 0x80039B0C: addu        $s0, $t9, $t0
        ctx->r16 = ADD32(ctx->r25, ctx->r8);
            goto L_80039BE8;
    }
    // 0x80039B0C: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x80039B10: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80039B14: lbu         $t3, 0x2972($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X2972);
    // 0x80039B18: beql        $t3, $zero, L_80039B64
    if (ctx->r11 == 0) {
        // 0x80039B1C: lbu         $t9, 0x10($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X10);
            goto L_80039B64;
    }
    goto skip_0;
    // 0x80039B1C: lbu         $t9, 0x10($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X10);
    skip_0:
    // 0x80039B20: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039B24: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80039B28: sb          $t4, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r12;
    // 0x80039B2C: lbu         $t5, 0x1($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X1);
    // 0x80039B30: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80039B34: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80039B38: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80039B3C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80039B40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80039B44: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x80039B48: mflo        $t8
    ctx->r24 = lo;
    // 0x80039B4C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80039B50: jal         0x80048640
    // 0x80039B54: nop

    alSynSetFXMix(rdram, ctx);
        goto after_0;
    // 0x80039B54: nop

    after_0:
    // 0x80039B58: b           L_80039BA4
    // 0x80039B5C: lbu         $t4, 0xE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE);
        goto L_80039BA4;
    // 0x80039B5C: lbu         $t4, 0xE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE);
    // 0x80039B60: lbu         $t9, 0x10($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X10);
L_80039B64:
    // 0x80039B64: beql        $t9, $zero, L_80039BA4
    if (ctx->r25 == 0) {
        // 0x80039B68: lbu         $t4, 0xE($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XE);
            goto L_80039BA4;
    }
    goto skip_1;
    // 0x80039B68: lbu         $t4, 0xE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE);
    skip_1:
    // 0x80039B6C: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039B70: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x80039B74: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x80039B78: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80039B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80039B80: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80039B84: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80039B88: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80039B8C: addu        $t2, $s6, $t1
    ctx->r10 = ADD32(ctx->r22, ctx->r9);
    // 0x80039B90: mflo        $t3
    ctx->r11 = lo;
    // 0x80039B94: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x80039B98: jal         0x80048640
    // 0x80039B9C: nop

    alSynSetFXMix(rdram, ctx);
        goto after_1;
    // 0x80039B9C: nop

    after_1:
    // 0x80039BA0: lbu         $t4, 0xE($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XE);
L_80039BA4:
    // 0x80039BA4: beql        $t4, $zero, L_80039BEC
    if (ctx->r12 == 0) {
        // 0x80039BA8: lbu         $t0, 0x4($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0X4);
            goto L_80039BEC;
    }
    goto skip_2;
    // 0x80039BA8: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
    skip_2:
    // 0x80039BAC: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039BB0: lbu         $t5, 0x1($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X1);
    // 0x80039BB4: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x80039BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80039BBC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80039BC0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80039BC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80039BC8: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x80039BCC: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    // 0x80039BD0: mflo        $t8
    ctx->r24 = lo;
    // 0x80039BD4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80039BD8: jal         0x800486E0
    // 0x80039BDC: nop

    alSynSetVol(rdram, ctx);
        goto after_2;
    // 0x80039BDC: nop

    after_2:
    // 0x80039BE0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80039BE4: sb          $t9, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r25;
L_80039BE8:
    // 0x80039BE8: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
L_80039BEC:
    // 0x80039BEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80039BF0: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x80039BF4: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x80039BF8: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x80039BFC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80039C00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80039C04: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80039C08: lbu         $t2, 0x2($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X2);
    // 0x80039C0C: addiu       $s3, $s3, 0xB0
    ctx->r19 = ADD32(ctx->r19, 0XB0);
    // 0x80039C10: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80039C14: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
    // 0x80039C18: lbu         $t3, 0x3($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X3);
    // 0x80039C1C: sb          $t3, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r11;
    // 0x80039C20: lw          $t4, -0x4($s4)
    ctx->r12 = MEM_W(ctx->r20, -0X4);
    // 0x80039C24: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x80039C28: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x80039C2C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    // 0x80039C30: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x80039C34: lh          $t9, 0x30($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X30);
    // 0x80039C38: lh          $t0, 0x34($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X34);
    // 0x80039C3C: lh          $t1, 0x42($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X42);
    // 0x80039C40: lh          $t2, 0x8A($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8A);
    // 0x80039C44: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    // 0x80039C48: andi        $t4, $zero, 0xFF
    ctx->r12 = 0 & 0XFF;
    // 0x80039C4C: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
    // 0x80039C50: sh          $t6, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r14;
    // 0x80039C54: sb          $t8, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r24;
    // 0x80039C58: sb          $t8, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r24;
    // 0x80039C5C: sb          $zero, 0x92($s0)
    MEM_B(0X92, ctx->r16) = 0;
    // 0x80039C60: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x80039C64: sh          $t4, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r12;
    // 0x80039C68: sb          $zero, 0x9E($s0)
    MEM_B(0X9E, ctx->r16) = 0;
    // 0x80039C6C: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x80039C70: sb          $zero, 0x47($s0)
    MEM_B(0X47, ctx->r16) = 0;
    // 0x80039C74: sb          $zero, 0x5B($s0)
    MEM_B(0X5B, ctx->r16) = 0;
    // 0x80039C78: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80039C7C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80039C80: sh          $zero, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = 0;
    // 0x80039C84: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80039C88: sh          $t0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r8;
    // 0x80039C8C: sh          $t1, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r9;
    // 0x80039C90: sb          $t2, 0x7D($s0)
    MEM_B(0X7D, ctx->r16) = ctx->r10;
    // 0x80039C94: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x80039C98: slt         $at, $s2, $t5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80039C9C: bnel        $at, $zero, L_80039ADC
    if (ctx->r1 != 0) {
        // 0x80039CA0: lbu         $t7, 0x1($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X1);
            goto L_80039ADC;
    }
    goto skip_3;
    // 0x80039CA0: lbu         $t7, 0x1($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1);
    skip_3:
L_80039CA4:
    // 0x80039CA4: lui         $fp, 0x801C
    ctx->r30 = S32(0X801C << 16);
    // 0x80039CA8: addiu       $fp, $fp, 0xA20
    ctx->r30 = ADD32(ctx->r30, 0XA20);
    // 0x80039CAC: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80039CB0: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x80039CB4: lhu         $t7, 0x9E8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X9E8);
    // 0x80039CB8: andi        $t6, $v0, 0x7FFF
    ctx->r14 = ctx->r2 & 0X7FFF;
    // 0x80039CBC: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x80039CC0: bne         $t6, $t7, L_80039CD8
    if (ctx->r14 != ctx->r15) {
        // 0x80039CC4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80039CD8;
    }
    // 0x80039CC4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80039CC8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039CCC: sh          $zero, 0x9E8($at)
    MEM_H(0X9E8, ctx->r1) = 0;
    // 0x80039CD0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039CD4: sb          $zero, 0x9E0($at)
    MEM_B(0X9E0, ctx->r1) = 0;
L_80039CD8:
    // 0x80039CD8: lhu         $t8, 0x9EA($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X9EA);
    // 0x80039CDC: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x80039CE0: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x80039CE4: bne         $v0, $t8, L_80039CF8
    if (ctx->r2 != ctx->r24) {
        // 0x80039CE8: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_80039CF8;
    }
    // 0x80039CE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039CEC: sh          $zero, 0x9EA($at)
    MEM_H(0X9EA, ctx->r1) = 0;
    // 0x80039CF0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039CF4: sb          $zero, 0x9E1($at)
    MEM_B(0X9E1, ctx->r1) = 0;
L_80039CF8:
    // 0x80039CF8: lhu         $t9, 0x9EC($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X9EC);
    // 0x80039CFC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039D00: bne         $v0, $t9, L_80039D14
    if (ctx->r2 != ctx->r25) {
        // 0x80039D04: nop
    
            goto L_80039D14;
    }
    // 0x80039D04: nop

    // 0x80039D08: sh          $zero, 0x9EC($at)
    MEM_H(0X9EC, ctx->r1) = 0;
    // 0x80039D0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039D10: sb          $zero, 0x9E2($at)
    MEM_B(0X9E2, ctx->r1) = 0;
L_80039D14:
    // 0x80039D14: lhu         $t0, 0x9EE($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X9EE);
    // 0x80039D18: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039D1C: bnel        $v0, $t0, L_80039D34
    if (ctx->r2 != ctx->r8) {
        // 0x80039D20: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80039D34;
    }
    goto skip_4;
    // 0x80039D20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x80039D24: sh          $zero, 0x9EE($at)
    MEM_H(0X9EE, ctx->r1) = 0;
    // 0x80039D28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039D2C: sb          $zero, 0x9E3($at)
    MEM_B(0X9E3, ctx->r1) = 0;
    // 0x80039D30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80039D34:
    // 0x80039D34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80039D38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80039D3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80039D40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80039D44: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80039D48: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80039D4C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80039D50: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80039D54: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80039D58: jr          $ra
    // 0x80039D5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80039D5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003CF24_3DB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CF24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CF2C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CF30: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003CF34: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x8003CF38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003CF3C: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x8003CF40: addiu       $t0, $t0, 0xA68
    ctx->r8 = ADD32(ctx->r8, 0XA68);
    // 0x8003CF44: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8003CF48: beq         $t6, $zero, L_8003CF80
    if (ctx->r14 == 0) {
        // 0x8003CF4C: lui         $t8, 0x801C
        ctx->r24 = S32(0X801C << 16);
            goto L_8003CF80;
    }
    // 0x8003CF4C: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003CF50: sb          $t7, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r15;
    // 0x8003CF54: lbu         $t8, 0x9CC($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X9CC);
    // 0x8003CF58: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x8003CF5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003CF60: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003CF64: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CF68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CF6C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8003CF70: jal         0x800486E0
    // 0x8003CF74: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    alSynSetVol(rdram, ctx);
        goto after_0;
    // 0x8003CF74: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_0:
    // 0x8003CF78: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CF7C: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
L_8003CF80:
    // 0x8003CF80: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003CF84: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CF88: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003CF8C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8003CF90: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8003CF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CF98: jr          $ra
    // 0x8003CF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003CF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003674C_3734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003674C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036754: lw          $a1, 0x78($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X78);
    // 0x80036758: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x8003675C: beq         $a1, $zero, L_80036784
    if (ctx->r5 == 0) {
        // 0x80036760: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80036784;
    }
    // 0x80036760: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80036764: jal         0x800364FC
    // 0x80036768: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800364FC_370FC(rdram, ctx);
        goto after_0;
    // 0x80036768: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003676C: bne         $v0, $zero, L_8003677C
    if (ctx->r2 != 0) {
        // 0x80036770: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8003677C;
    }
    // 0x80036770: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80036774: b           L_80036788
    // 0x80036778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80036788;
    // 0x80036778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003677C:
    // 0x8003677C: jal         0x800367E4
    // 0x80036780: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800367E4_373E4(rdram, ctx);
        goto after_1;
    // 0x80036780: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_80036784:
    // 0x80036784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80036788:
    // 0x80036788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003678C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80036790: jr          $ra
    // 0x80036794: nop

    TRACE_RETURN()
    return;
    // 0x80036794: nop

;}
RECOMP_FUNC void func_8002A718_2B318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A718: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8002A71C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8002A720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A724: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002A728: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x8002A72C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8002A730: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8002A734: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8002A738: jal         0x8002A750
    // 0x8002A73C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002A750_2B350(rdram, ctx);
        goto after_0;
    // 0x8002A73C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8002A740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A748: jr          $ra
    // 0x8002A74C: nop

    TRACE_RETURN()
    return;
    // 0x8002A74C: nop

;}
RECOMP_FUNC void func_8000693C_753C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000693C: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80006940: lw          $t6, -0x4DD0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4DD0);
    // 0x80006944: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x80006948: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8000694C: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x80006950: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80006954: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80006958: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000695C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80006960: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80006964: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80006968: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8000696C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80006970: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80006974: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80006978: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8000697C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80006980: ori         $t2, $t2, 0x1402
    ctx->r10 = ctx->r10 | 0X1402;
    // 0x80006984: lui         $t3, 0x30
    ctx->r11 = S32(0X30 << 16);
    // 0x80006988: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8000698C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80006990: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80006994: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80006998: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8000699C: bne         $t6, $zero, L_800069A8
    if (ctx->r14 != 0) {
        // 0x800069A0: nop
    
            goto L_800069A8;
    }
    // 0x800069A0: nop

    // 0x800069A4: break       7
    do_break(2147510692);
L_800069A8:
    // 0x800069A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800069AC: bne         $t6, $at, L_800069C0
    if (ctx->r14 != ctx->r1) {
        // 0x800069B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800069C0;
    }
    // 0x800069B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800069B4: bne         $t7, $at, L_800069C0
    if (ctx->r15 != ctx->r1) {
        // 0x800069B8: nop
    
            goto L_800069C0;
    }
    // 0x800069B8: nop

    // 0x800069BC: break       6
    do_break(2147510716);
L_800069C0:
    // 0x800069C0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800069C4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x800069C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800069CC: lui         $t5, 0xB600
    ctx->r13 = S32(0XB600 << 16);
    // 0x800069D0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800069D4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800069D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800069DC: mflo        $t8
    ctx->r24 = lo;
    // 0x800069E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800069E4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800069E8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800069EC: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x800069F0: lui         $t9, 0xF0A
    ctx->r25 = S32(0XF0A << 16);
    // 0x800069F4: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x800069F8: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x800069FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A00: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80006A04: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80006A08: lwc1        $f6, 0x742C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X742C);
    // 0x80006A0C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A10: lwc1        $f8, 0x7420($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7420);
    // 0x80006A14: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80006A18: lui         $a1, 0x7801
    ctx->r5 = S32(0X7801 << 16);
    // 0x80006A1C: ori         $a1, $a1, 0x7801
    ctx->r5 = ctx->r5 | 0X7801;
    // 0x80006A20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80006A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80006A28: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80006A2C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80006A30: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80006A34: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80006A38: jal         0x80006BF8
    // 0x80006A3C: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    func_80006BF8_77F8(rdram, ctx);
        goto after_0;
    // 0x80006A3C: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x80006A40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A44: lwc1        $f16, 0x7424($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7424);
    // 0x80006A48: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A4C: lwc1        $f18, 0x7420($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7420);
    // 0x80006A50: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80006A54: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80006A58: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80006A5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80006A60: lui         $a1, 0x3C1
    ctx->r5 = S32(0X3C1 << 16);
    // 0x80006A64: ori         $a1, $a1, 0x3C1
    ctx->r5 = ctx->r5 | 0X3C1;
    // 0x80006A68: add.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80006A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80006A70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80006A74: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80006A78: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x80006A7C: mul.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80006A80: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80006A84: jal         0x80006BF8
    // 0x80006A88: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80006BF8_77F8(rdram, ctx);
        goto after_1;
    // 0x80006A88: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80006A8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A90: lwc1        $f8, 0x7428($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7428);
    // 0x80006A94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006A98: lwc1        $f10, 0x7420($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7420);
    // 0x80006A9C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80006AA0: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80006AA4: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80006AA8: lui         $a1, 0x1F
    ctx->r5 = S32(0X1F << 16);
    // 0x80006AAC: ori         $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 | 0X1F;
    // 0x80006AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80006AB4: add.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80006AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80006ABC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80006AC0: mul.s       $f2, $f16, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80006AC4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80006AC8: jal         0x80006BF8
    // 0x80006ACC: nop

    func_80006BF8_77F8(rdram, ctx);
        goto after_2;
    // 0x80006ACC: nop

    after_2:
    // 0x80006AD0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006AD4: lwc1        $f4, 0x7430($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7430);
    // 0x80006AD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006ADC: lwc1        $f6, 0x7420($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7420);
    // 0x80006AE0: lui         $a1, 0x1F
    ctx->r5 = S32(0X1F << 16);
    // 0x80006AE4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80006AE8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80006AEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80006AF0: ori         $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 | 0X1F;
    // 0x80006AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80006AF8: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80006AFC: mul.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80006B00: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80006B04: jal         0x80006BF8
    // 0x80006B08: nop

    func_80006BF8_77F8(rdram, ctx);
        goto after_3;
    // 0x80006B08: nop

    after_3:
    // 0x80006B0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80006B10: jal         0x80006B44
    // 0x80006B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006B44_7744(rdram, ctx);
        goto after_4;
    // 0x80006B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80006B18: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80006B1C: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80006B20: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80006B24: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80006B28: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80006B2C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80006B30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80006B34: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80006B38: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80006B3C: jr          $ra
    // 0x80006B40: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80006B40: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800369B4_375B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800369B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800369B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800369BC: jal         0x80036A28
    // 0x800369C0: nop

    func_80036A28_37628(rdram, ctx);
        goto after_0;
    // 0x800369C0: nop

    after_0:
    // 0x800369C4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800369C8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800369CC: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x800369D0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800369D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800369D8: lw          $t8, -0x4FEC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4FEC);
    // 0x800369DC: sb          $t6, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r14;
    // 0x800369E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800369E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800369E8: jr          $ra
    // 0x800369EC: nop

    TRACE_RETURN()
    return;
    // 0x800369EC: nop

;}
RECOMP_FUNC void func_80012628_13228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012628: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001262C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80012630: lwc1        $f6, 0x8C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80012634: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80012638: swc1        $f12, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f12.u32l;
    // 0x8001263C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80012640: swc1        $f14, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f14.u32l;
    // 0x80012644: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80012648: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001264C: bc1f        L_8001266C
    if (!c1cs) {
        // 0x80012650: swc1        $f4, 0xB8($a0)
        MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
            goto L_8001266C;
    }
    // 0x80012650: swc1        $f4, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f4.u32l;
    // 0x80012654: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012658: lwc1        $f8, 0x54($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8001265C: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80012660: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80012664: b           L_80012678
    // 0x80012668: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012678;
    // 0x80012668: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8001266C:
    // 0x8001266C: lwc1        $f16, 0x54($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80012670: lwc1        $f18, 0x30($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80012674: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80012678:
    // 0x80012678: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001267C: lwc1        $f2, 0x64($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80012680: lwc1        $f12, 0x34($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80012684: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80012688: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8001268C: nop

    // 0x80012690: bc1f        L_800126A4
    if (!c1cs) {
        // 0x80012694: swc1        $f4, 0x58($v0)
        MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
            goto L_800126A4;
    }
    // 0x80012694: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
    // 0x80012698: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8001269C: b           L_800126A8
    // 0x800126A0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800126A8;
    // 0x800126A0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800126A4:
    // 0x800126A4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800126A8:
    // 0x800126A8: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800126AC: lwc1        $f2, 0x5C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x800126B0: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x800126B4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800126B8: nop

    // 0x800126BC: bc1f        L_800126D0
    if (!c1cs) {
        // 0x800126C0: swc1        $f6, 0x68($v0)
        MEM_W(0X68, ctx->r2) = ctx->f6.u32l;
            goto L_800126D0;
    }
    // 0x800126C0: swc1        $f6, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f6.u32l;
    // 0x800126C4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800126C8: b           L_800126D4
    // 0x800126CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800126D4;
    // 0x800126CC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800126D0:
    // 0x800126D0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800126D4:
    // 0x800126D4: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800126D8: jr          $ra
    // 0x800126DC: swc1        $f8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x800126DC: swc1        $f8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80034680_35280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034684: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80034688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003468C: sw          $a2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r6;
    // 0x80034690: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    // 0x80034694: swc1        $f12, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f12.u32l;
    // 0x80034698: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8003469C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x800346A0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800346A4: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x800346A8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800346AC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x800346B0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800346B4: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x800346B8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800346BC: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x800346C0: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x800346C4: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x800346C8: lhu         $t7, 0x42($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X42);
    // 0x800346CC: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x800346D0: lhu         $t8, 0x46($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X46);
    // 0x800346D4: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x800346D8: lhu         $t9, 0x4A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X4A);
    // 0x800346DC: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    // 0x800346E0: lhu         $t0, 0x4E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4E);
    // 0x800346E4: sh          $t0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r8;
    // 0x800346E8: lhu         $t1, 0x52($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X52);
    // 0x800346EC: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x800346F0: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x800346F4: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    // 0x800346F8: jal         0x80014218
    // 0x800346FC: sh          $t1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r9;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x800346FC: sh          $t1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r9;
    after_0:
    // 0x80034700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034708: jr          $ra
    // 0x8003470C: nop

    TRACE_RETURN()
    return;
    // 0x8003470C: nop

;}
RECOMP_FUNC void func_8000C53C_D13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C53C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C540: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C544: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C548: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C54C: beq         $v0, $zero, L_8000C558
    if (ctx->r2 == 0) {
        // 0x8000C550: nop
    
            goto L_8000C558;
    }
    // 0x8000C550: nop

    // 0x8000C554: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
L_8000C558:
    // 0x8000C558: jr          $ra
    // 0x8000C55C: nop

    TRACE_RETURN()
    return;
    // 0x8000C55C: nop

;}
RECOMP_FUNC void alAdpcmPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F35C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8004F360: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8004F364: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x8004F368: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8004F36C: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8004F370: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8004F374: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8004F378: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8004F37C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8004F380: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8004F384: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8004F388: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8004F38C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8004F390: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004F394: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x8004F398: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8004F39C: bne         $a2, $zero, L_8004F3AC
    if (ctx->r6 != 0) {
        // 0x8004F3A0: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_8004F3AC;
    }
    // 0x8004F3A0: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8004F3A4: b           L_8004F7CC
    // 0x8004F3A8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
        goto L_8004F7CC;
    // 0x8004F3A8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_8004F3AC:
    // 0x8004F3AC: lw          $t6, 0x2C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X2C);
    // 0x8004F3B0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F3B4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F3B8: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8004F3BC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8004F3C0: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x8004F3C4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8004F3C8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8004F3CC: lw          $t9, 0x28($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X28);
    // 0x8004F3D0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x8004F3D4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F3D8: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x8004F3DC: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x8004F3E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004F3E4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8004F3E8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8004F3EC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x8004F3F0: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x8004F3F4: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    // 0x8004F3F8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8004F3FC: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x8004F400: sltu        $t1, $a0, $t9
    ctx->r9 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x8004F404: beq         $t1, $zero, L_8004F418
    if (ctx->r9 == 0) {
        // 0x8004F408: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_8004F418;
    }
    // 0x8004F408: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8004F40C: lw          $t1, 0x24($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X24);
    // 0x8004F410: sltu        $t6, $zero, $t1
    ctx->r14 = 0 < ctx->r9 ? 1 : 0;
    // 0x8004F414: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_8004F418:
    // 0x8004F418: beq         $t1, $zero, L_8004F428
    if (ctx->r9 == 0) {
        // 0x8004F41C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8004F428;
    }
    // 0x8004F41C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8004F420: b           L_8004F428
    // 0x8004F424: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
        goto L_8004F428;
    // 0x8004F424: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
L_8004F428:
    // 0x8004F428: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F42C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8004F430: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8004F434: beq         $v1, $zero, L_8004F444
    if (ctx->r3 == 0) {
        // 0x8004F438: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8004F444;
    }
    // 0x8004F438: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8004F43C: b           L_8004F444
    // 0x8004F440: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_8004F444;
    // 0x8004F440: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_8004F444:
    // 0x8004F444: subu        $a0, $a1, $a2
    ctx->r4 = SUB32(ctx->r5, ctx->r6);
    // 0x8004F448: bgez        $a0, L_8004F454
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8004F44C: nop
    
            goto L_8004F454;
    }
    // 0x8004F44C: nop

    // 0x8004F450: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8004F454:
    // 0x8004F454: beq         $t1, $zero, L_8004F65C
    if (ctx->r9 == 0) {
        // 0x8004F458: addiu       $fp, $a0, 0xF
        ctx->r30 = ADD32(ctx->r4, 0XF);
            goto L_8004F65C;
    }
    // 0x8004F458: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8004F45C: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8004F460: sra         $t8, $fp, 4
    ctx->r24 = S32(SIGNED(ctx->r30) >> 4);
    // 0x8004F464: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x8004F468: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x8004F46C: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x8004F470: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8004F474: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8004F478: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8004F47C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x8004F480: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x8004F484: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8004F488: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x8004F48C: jal         0x8004F230
    // 0x8004F490: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    _decodeChunk(rdram, ctx);
        goto after_0;
    // 0x8004F490: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x8004F494: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F498: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8004F49C: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8004F4A0: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x8004F4A4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8004F4A8: beq         $v1, $zero, L_8004F4C4
    if (ctx->r3 == 0) {
        // 0x8004F4AC: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_8004F4C4;
    }
    // 0x8004F4AC: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8004F4B0: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x8004F4B4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8004F4B8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004F4BC: b           L_8004F4D0
    // 0x8004F4C0: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
        goto L_8004F4D0;
    // 0x8004F4C0: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_8004F4C4:
    // 0x8004F4C4: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    // 0x8004F4C8: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x8004F4CC: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
L_8004F4D0:
    // 0x8004F4D0: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x8004F4D4: lw          $t7, 0x28($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X28);
    // 0x8004F4D8: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004F4DC: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x8004F4E0: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x8004F4E4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8004F4E8: srl         $t9, $v0, 4
    ctx->r25 = S32(U32(ctx->r2) >> 4);
    // 0x8004F4EC: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8004F4F0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8004F4F4: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8004F4F8: addiu       $t9, $t7, 0x9
    ctx->r25 = ADD32(ctx->r15, 0X9);
    // 0x8004F4FC: sw          $t9, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r25;
    // 0x8004F500: sw          $v0, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r2;
    // 0x8004F504: beq         $at, $zero, L_8004F62C
    if (ctx->r1 == 0) {
        // 0x8004F508: lh          $a2, 0x0($a3)
        ctx->r6 = MEM_H(ctx->r7, 0X0);
            goto L_8004F62C;
    }
    // 0x8004F508: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x8004F50C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
L_8004F510:
    // 0x8004F510: addiu       $t8, $fp, 0x1
    ctx->r24 = ADD32(ctx->r30, 0X1);
    // 0x8004F514: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x8004F518: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x8004F51C: addu        $a3, $t6, $a2
    ctx->r7 = ADD32(ctx->r14, ctx->r6);
    // 0x8004F520: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x8004F524: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x8004F528: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F52C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x8004F530: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8004F534: beq         $v0, $at, L_8004F548
    if (ctx->r2 == ctx->r1) {
        // 0x8004F538: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_8004F548;
    }
    // 0x8004F538: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8004F53C: beq         $v0, $zero, L_8004F548
    if (ctx->r2 == 0) {
        // 0x8004F540: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8004F548;
    }
    // 0x8004F540: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8004F544: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_8004F548:
    // 0x8004F548: lw          $t8, 0x20($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X20);
    // 0x8004F54C: lw          $t6, 0x1C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X1C);
    // 0x8004F550: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8004F554: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8004F558: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
    // 0x8004F55C: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x8004F560: beq         $at, $zero, L_8004F570
    if (ctx->r1 == 0) {
        // 0x8004F564: sll         $s5, $a3, 16
        ctx->r21 = S32(ctx->r7 << 16);
            goto L_8004F570;
    }
    // 0x8004F564: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x8004F568: b           L_8004F574
    // 0x8004F56C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
        goto L_8004F574;
    // 0x8004F56C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_8004F570:
    // 0x8004F570: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8004F574:
    // 0x8004F574: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F578: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8004F57C: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x8004F580: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x8004F584: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8004F588: bgez        $a0, L_8004F594
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8004F58C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8004F594;
    }
    // 0x8004F58C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8004F590: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8004F594:
    // 0x8004F594: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x8004F598: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8004F59C: sra         $t9, $fp, 4
    ctx->r25 = S32(SIGNED(ctx->r30) >> 4);
    // 0x8004F5A0: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8004F5A4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8004F5A8: ori         $t6, $s4, 0x2
    ctx->r14 = ctx->r20 | 0X2;
    // 0x8004F5AC: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x8004F5B0: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8004F5B4: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8004F5B8: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    // 0x8004F5BC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x8004F5C0: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x8004F5C4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8004F5C8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8004F5CC: jal         0x8004F230
    // 0x8004F5D0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    _decodeChunk(rdram, ctx);
        goto after_1;
    // 0x8004F5D0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_1:
    // 0x8004F5D4: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F5D8: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x8004F5DC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F5E0: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8004F5E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F5E8: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x8004F5EC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8004F5F0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8004F5F4: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x8004F5F8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8004F5FC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8004F600: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x8004F604: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8004F608: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8004F60C: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x8004F610: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8004F614: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8004F618: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8004F61C: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004F620: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8004F624: bne         $at, $zero, L_8004F510
    if (ctx->r1 != 0) {
        // 0x8004F628: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_8004F510;
    }
    // 0x8004F628: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
L_8004F62C:
    // 0x8004F62C: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F630: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x8004F634: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8004F638: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x8004F63C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8004F640: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x8004F644: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x8004F648: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8004F64C: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x8004F650: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x8004F654: b           L_8004F7CC
    // 0x8004F658: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_8004F7CC;
    // 0x8004F658: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_8004F65C:
    // 0x8004F65C: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x8004F660: sra         $t7, $fp, 4
    ctx->r15 = S32(SIGNED(ctx->r30) >> 4);
    // 0x8004F664: lw          $t9, 0x44($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X44);
    // 0x8004F668: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x8004F66C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8004F670: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x8004F674: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x8004F678: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8004F67C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8004F680: subu        $t6, $t3, $t8
    ctx->r14 = SUB32(ctx->r11, ctx->r24);
    // 0x8004F684: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x8004F688: bgez        $v1, L_8004F694
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004F68C: sll         $a1, $fp, 4
        ctx->r5 = S32(ctx->r30 << 4);
            goto L_8004F694;
    }
    // 0x8004F68C: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
    // 0x8004F690: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004F694:
    // 0x8004F694: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8004F698: mflo        $v0
    ctx->r2 = lo;
    // 0x8004F69C: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x8004F6A0: addu        $t4, $a1, $a2
    ctx->r12 = ADD32(ctx->r5, ctx->r6);
    // 0x8004F6A4: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004F6A8: beq         $at, $zero, L_8004F6B4
    if (ctx->r1 == 0) {
        // 0x8004F6AC: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_8004F6B4;
    }
    // 0x8004F6AC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8004F6B0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_8004F6B4:
    // 0x8004F6B4: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8004F6B8: subu        $t6, $a0, $t8
    ctx->r14 = SUB32(ctx->r4, ctx->r24);
    // 0x8004F6BC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004F6C0: beq         $at, $zero, L_8004F770
    if (ctx->r1 == 0) {
        // 0x8004F6C4: subu        $a2, $t1, $v1
        ctx->r6 = SUB32(ctx->r9, ctx->r3);
            goto L_8004F770;
    }
    // 0x8004F6C4: subu        $a2, $t1, $v1
    ctx->r6 = SUB32(ctx->r9, ctx->r3);
    // 0x8004F6C8: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x8004F6CC: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x8004F6D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8004F6D4: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x8004F6D8: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x8004F6DC: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8004F6E0: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x8004F6E4: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x8004F6E8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8004F6EC: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8004F6F0: subu        $s6, $a1, $a0
    ctx->r22 = SUB32(ctx->r5, ctx->r4);
    // 0x8004F6F4: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8004F6F8: jal         0x8004F230
    // 0x8004F6FC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    _decodeChunk(rdram, ctx);
        goto after_2;
    // 0x8004F6FC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x8004F700: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F704: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8004F708: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8004F70C: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x8004F710: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8004F714: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8004F718: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8004F71C: beq         $v1, $zero, L_8004F738
    if (ctx->r3 == 0) {
        // 0x8004F720: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_8004F738;
    }
    // 0x8004F720: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8004F724: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x8004F728: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8004F72C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004F730: b           L_8004F744
    // 0x8004F734: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_8004F744;
    // 0x8004F734: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_8004F738:
    // 0x8004F738: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x8004F73C: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x8004F740: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_8004F744:
    // 0x8004F744: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x8004F748: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x8004F74C: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x8004F750: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8004F754: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x8004F758: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x8004F75C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8004F760: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x8004F764: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x8004F768: b           L_8004F778
    // 0x8004F76C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_8004F778;
    // 0x8004F76C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_8004F770:
    // 0x8004F770: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x8004F774: sw          $t3, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r11;
L_8004F778:
    // 0x8004F778: beq         $a0, $zero, L_8004F7C8
    if (ctx->r4 == 0) {
        // 0x8004F77C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_8004F7C8;
    }
    // 0x8004F77C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8004F780: beq         $t5, $zero, L_8004F798
    if (ctx->r13 == 0) {
        // 0x8004F784: sw          $zero, 0x3C($s7)
        MEM_W(0X3C, ctx->r23) = 0;
            goto L_8004F798;
    }
    // 0x8004F784: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x8004F788: subu        $v1, $t4, $a0
    ctx->r3 = SUB32(ctx->r12, ctx->r4);
    // 0x8004F78C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8004F790: b           L_8004F79C
    // 0x8004F794: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8004F79C;
    // 0x8004F794: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8004F798:
    // 0x8004F798: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004F79C:
    // 0x8004F79C: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x8004F7A0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8004F7A4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8004F7A8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x8004F7AC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8004F7B0: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8004F7B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8004F7B8: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8004F7BC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8004F7C0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8004F7C4: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
L_8004F7C8:
    // 0x8004F7C8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8004F7CC:
    // 0x8004F7CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8004F7D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8004F7D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8004F7D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8004F7DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8004F7E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8004F7E4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8004F7E8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8004F7EC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8004F7F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8004F7F4: jr          $ra
    // 0x8004F7F8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x8004F7F8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_800109A4_115A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800109A4: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    // 0x800109A8: beq         $at, $zero, L_800109C4
    if (ctx->r1 == 0) {
        // 0x800109AC: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_800109C4;
    }
    // 0x800109AC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800109B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800109B4: addu        $at, $at, $t6
    gpr jr_addend_800109BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800109B8: lw          $t6, -0x502C($at)
    ctx->r14 = ADD32(ctx->r1, -0X502C);
    // 0x800109BC: jr          $t6
    // 0x800109C0: nop

    switch (jr_addend_800109BC >> 2) {
        case 0: goto L_800109C4; break;
        case 1: goto L_800109DC; break;
        case 2: goto L_800109F4; break;
        case 3: goto L_80010A0C; break;
        case 4: goto L_80010A24; break;
        case 5: goto L_80010A3C; break;
        case 6: goto L_80010A54; break;
        default: switch_error(__func__, 0x800109BC, 0x8007AFD4);
    }
    // 0x800109C0: nop

L_800109C4:
    // 0x800109C4: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x800109C8: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x800109CC: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x800109D0: addiu       $t7, $t7, 0x3320
    ctx->r15 = ADD32(ctx->r15, 0X3320);
    // 0x800109D4: b           L_80010A68
    // 0x800109D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80010A68;
    // 0x800109D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_800109DC:
    // 0x800109DC: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x800109E0: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x800109E4: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x800109E8: addiu       $t8, $t8, 0x3828
    ctx->r24 = ADD32(ctx->r24, 0X3828);
    // 0x800109EC: b           L_80010A68
    // 0x800109F0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80010A68;
    // 0x800109F0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_800109F4:
    // 0x800109F4: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x800109F8: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x800109FC: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80010A00: addiu       $t9, $t9, 0x3868
    ctx->r25 = ADD32(ctx->r25, 0X3868);
    // 0x80010A04: b           L_80010A68
    // 0x80010A08: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_80010A68;
    // 0x80010A08: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80010A0C:
    // 0x80010A0C: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80010A10: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80010A14: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80010A18: addiu       $t6, $t6, 0x33A0
    ctx->r14 = ADD32(ctx->r14, 0X33A0);
    // 0x80010A1C: b           L_80010A68
    // 0x80010A20: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80010A68;
    // 0x80010A20: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80010A24:
    // 0x80010A24: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80010A28: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80010A2C: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80010A30: addiu       $t7, $t7, 0x33E0
    ctx->r15 = ADD32(ctx->r15, 0X33E0);
    // 0x80010A34: b           L_80010A68
    // 0x80010A38: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80010A68;
    // 0x80010A38: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80010A3C:
    // 0x80010A3C: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80010A40: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x80010A44: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80010A48: addiu       $t8, $t8, 0x3420
    ctx->r24 = ADD32(ctx->r24, 0X3420);
    // 0x80010A4C: b           L_80010A68
    // 0x80010A50: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80010A68;
    // 0x80010A50: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80010A54:
    // 0x80010A54: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x80010A58: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x80010A5C: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x80010A60: addiu       $t9, $t9, 0x3360
    ctx->r25 = ADD32(ctx->r25, 0X3360);
    // 0x80010A64: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80010A68:
    // 0x80010A68: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80010A6C: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x80010A70: lui         $t3, 0xFD10
    ctx->r11 = S32(0XFD10 << 16);
    // 0x80010A74: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80010A78: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80010A7C: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x80010A80: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80010A84: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80010A88: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x80010A8C: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80010A90: lui         $t4, 0xE800
    ctx->r12 = S32(0XE800 << 16);
    // 0x80010A94: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80010A98: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80010A9C: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80010AA0: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x80010AA4: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x80010AA8: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80010AAC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80010AB0: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80010AB4: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80010AB8: lui         $a1, 0xE600
    ctx->r5 = S32(0XE600 << 16);
    // 0x80010ABC: addiu       $a2, $t2, 0x8
    ctx->r6 = ADD32(ctx->r10, 0X8);
    // 0x80010AC0: sw          $a1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r5;
    // 0x80010AC4: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80010AC8: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x80010ACC: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x80010AD0: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x80010AD4: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80010AD8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80010ADC: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x80010AE0: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x80010AE4: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80010AE8: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    // 0x80010AEC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80010AF0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80010AF4: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x80010AF8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80010AFC: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80010B00: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80010B04: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80010B08: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x80010B0C: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x80010B10: ori         $t8, $t8, 0x110
    ctx->r24 = ctx->r24 | 0X110;
    // 0x80010B14: addiu       $a2, $t2, 0x8
    ctx->r6 = ADD32(ctx->r10, 0X8);
    // 0x80010B18: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80010B1C: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x80010B20: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x80010B24: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80010B28: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x80010B2C: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x80010B30: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x80010B34: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x80010B38: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x80010B3C: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80010B40: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x80010B44: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80010B48: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x80010B4C: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x80010B50: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x80010B54: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80010B58: jr          $ra
    // 0x80010B5C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x80010B5C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8000C570_D170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C570: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C574: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C578: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C57C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C580: beq         $v0, $zero, L_8000C59C
    if (ctx->r2 == 0) {
        // 0x8000C584: nop
    
            goto L_8000C59C;
    }
    // 0x8000C584: nop

    // 0x8000C588: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C58C: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C590: ori         $t1, $t9, 0x8
    ctx->r9 = ctx->r25 | 0X8;
    // 0x8000C594: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C598: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_8000C59C:
    // 0x8000C59C: jr          $ra
    // 0x8000C5A0: nop

    TRACE_RETURN()
    return;
    // 0x8000C5A0: nop

;}
RECOMP_FUNC void func_80000AD8_16D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80000AD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80000ADC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80000AE0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80000AE4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80000AE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80000AEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80000AF0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80000AF4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80000AF8: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x80000AFC: lui         $s3, 0xC
    ctx->r19 = S32(0XC << 16);
    // 0x80000B00: lui         $s5, 0x3
    ctx->r21 = S32(0X3 << 16);
    // 0x80000B04: lui         $s6, 0x8005
    ctx->r22 = S32(0X8005 << 16);
    // 0x80000B08: lui         $fp, 0x8005
    ctx->r30 = S32(0X8005 << 16);
    // 0x80000B0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80000B10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80000B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80000B18: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80000B1C: addiu       $fp, $fp, 0x48E0
    ctx->r30 = ADD32(ctx->r30, 0X48E0);
    // 0x80000B20: addiu       $s6, $s6, 0x48E8
    ctx->r22 = ADD32(ctx->r22, 0X48E8);
    // 0x80000B24: ori         $s5, $s5, 0x8000
    ctx->r21 = ctx->r21 | 0X8000;
    // 0x80000B28: ori         $s3, $s3, 0x3394
    ctx->r19 = ctx->r19 | 0X3394;
    // 0x80000B2C: addiu       $s2, $s2, -0x3A38
    ctx->r18 = ADD32(ctx->r18, -0X3A38);
    // 0x80000B30: addiu       $s4, $zero, 0x374
    ctx->r20 = ADD32(0, 0X374);
    // 0x80000B34: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_80000B38:
    // 0x80000B38: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000B3C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80000B40: addiu       $a1, $a1, 0x48D0
    ctx->r5 = ADD32(ctx->r5, 0X48D0);
    // 0x80000B44: addiu       $a0, $a0, -0x5740
    ctx->r4 = ADD32(ctx->r4, -0X5740);
    // 0x80000B48: jal         0x80040110
    // 0x80000B4C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80000B4C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80000B50: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80000B54: sw          $s7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r23;
    // 0x80000B58: sw          $s7, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r23;
    // 0x80000B5C: jal         0x800403A0
    // 0x80000B60: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    osContStartReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80000B60: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    after_1:
    // 0x80000B64: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80000B68: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80000B6C: ori         $at, $at, 0xD6D8
    ctx->r1 = ctx->r1 | 0XD6D8;
    // 0x80000B70: addu        $t6, $v0, $s5
    ctx->r14 = ADD32(ctx->r2, ctx->r21);
    // 0x80000B74: lh          $t7, 0x2DB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2DB2);
    // 0x80000B78: multu       $t7, $at
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80000B7C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80000B80: mflo        $t8
    ctx->r24 = lo;
    // 0x80000B84: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80000B88: jal         0x800011A0
    // 0x80000B8C: sw          $t9, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r25;
    func_800011A0_1DA0(rdram, ctx);
        goto after_2;
    // 0x80000B8C: sw          $t9, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = ctx->r25;
    after_2:
    // 0x80000B90: jal         0x800012FC
    // 0x80000B94: nop

    func_800012FC_1EFC(rdram, ctx);
        goto after_3;
    // 0x80000B94: nop

    after_3:
    // 0x80000B98: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80000B9C: addu        $t1, $t0, $s5
    ctx->r9 = ADD32(ctx->r8, ctx->r21);
    // 0x80000BA0: lh          $t2, 0x2DC4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2DC4);
    // 0x80000BA4: beq         $t2, $zero, L_80000BB4
    if (ctx->r10 == 0) {
        // 0x80000BA8: nop
    
            goto L_80000BB4;
    }
    // 0x80000BA8: nop

    // 0x80000BAC: jal         0x80001614
    // 0x80000BB0: nop

    func_80001614_2214(rdram, ctx);
        goto after_4;
    // 0x80000BB0: nop

    after_4:
L_80000BB4:
    // 0x80000BB4: jal         0x80001498
    // 0x80000BB8: nop

    func_80001498_2098(rdram, ctx);
        goto after_5;
    // 0x80000BB8: nop

    after_5:
    // 0x80000BBC: jal         0x80004AF8
    // 0x80000BC0: nop

    func_80004AF8_56F8(rdram, ctx);
        goto after_6;
    // 0x80000BC0: nop

    after_6:
    // 0x80000BC4: jal         0x80002040
    // 0x80000BC8: nop

    func_80002040_2C40(rdram, ctx);
        goto after_7;
    // 0x80000BC8: nop

    after_7:
    // 0x80000BCC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80000BD0: addu        $t3, $v0, $s5
    ctx->r11 = ADD32(ctx->r2, ctx->r21);
    // 0x80000BD4: lh          $t4, 0x2DC8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2DC8);
    // 0x80000BD8: bne         $t4, $zero, L_80000C80
    if (ctx->r12 != 0) {
        // 0x80000BDC: nop
    
            goto L_80000C80;
    }
    // 0x80000BDC: nop

    // 0x80000BE0: jal         0x8000AAE8
    // 0x80000BE4: addu        $a0, $v0, $s3
    ctx->r4 = ADD32(ctx->r2, ctx->r19);
    func_8000AAE8_B6E8(rdram, ctx);
        goto after_8;
    // 0x80000BE4: addu        $a0, $v0, $s3
    ctx->r4 = ADD32(ctx->r2, ctx->r19);
    after_8:
    // 0x80000BE8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80000BEC: jal         0x8000AA00
    // 0x80000BF0: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    func_8000AA00_B600(rdram, ctx);
        goto after_9;
    // 0x80000BF0: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    after_9:
    // 0x80000BF4: jal         0x80016950
    // 0x80000BF8: nop

    func_80016950_17550(rdram, ctx);
        goto after_10;
    // 0x80000BF8: nop

    after_10:
    // 0x80000BFC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80000C00: lbu         $t6, 0x7AE8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7AE8);
    // 0x80000C04: bnel        $t6, $zero, L_80000C18
    if (ctx->r14 != 0) {
        // 0x80000C08: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80000C18;
    }
    goto skip_0;
    // 0x80000C08: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x80000C0C: jal         0x8000AB74
    // 0x80000C10: nop

    func_8000AB74_B774(rdram, ctx);
        goto after_11;
    // 0x80000C10: nop

    after_11:
    // 0x80000C14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80000C18:
    // 0x80000C18: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80000C1C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80000C20: mflo        $s1
    ctx->r17 = lo;
    // 0x80000C24: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x80000C28: jal         0x8000A99C
    // 0x80000C2C: addu        $a0, $t8, $s3
    ctx->r4 = ADD32(ctx->r24, ctx->r19);
    func_8000A99C_B59C(rdram, ctx);
        goto after_12;
    // 0x80000C2C: addu        $a0, $t8, $s3
    ctx->r4 = ADD32(ctx->r24, ctx->r19);
    after_12:
    // 0x80000C30: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80000C34: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x80000C38: jal         0x800087C4
    // 0x80000C3C: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    func_800087C4_93C4(rdram, ctx);
        goto after_13;
    // 0x80000C3C: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    after_13:
    // 0x80000C40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80000C44: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80000C48: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80000C4C: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x80000C50: bne         $at, $zero, L_80000C18
    if (ctx->r1 != 0) {
        // 0x80000C54: nop
    
            goto L_80000C18;
    }
    // 0x80000C54: nop

    // 0x80000C58: jal         0x800012FC
    // 0x80000C5C: nop

    func_800012FC_1EFC(rdram, ctx);
        goto after_14;
    // 0x80000C5C: nop

    after_14:
    // 0x80000C60: jal         0x8000433C
    // 0x80000C64: nop

    func_8000433C_4F3C(rdram, ctx);
        goto after_15;
    // 0x80000C64: nop

    after_15:
    // 0x80000C68: jal         0x8000B8B0
    // 0x80000C6C: nop

    func_8000B8B0_C4B0(rdram, ctx);
        goto after_16;
    // 0x80000C6C: nop

    after_16:
    // 0x80000C70: jal         0x8003EFB0
    // 0x80000C74: nop

    func_8003EFB0_3FBB0(rdram, ctx);
        goto after_17;
    // 0x80000C74: nop

    after_17:
    // 0x80000C78: jal         0x800379D0
    // 0x80000C7C: nop

    func_800379D0_385D0(rdram, ctx);
        goto after_18;
    // 0x80000C7C: nop

    after_18:
L_80000C80:
    // 0x80000C80: jal         0x80001328
    // 0x80000C84: nop

    func_80001328_1F28(rdram, ctx);
        goto after_19;
    // 0x80000C84: nop

    after_19:
    // 0x80000C88: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
    // 0x80000C8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80000C90: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80000C94: jal         0x80005A64
    // 0x80000C98: sb          $t3, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r11;
    func_80005A64_6664(rdram, ctx);
        goto after_20;
    // 0x80000C98: sb          $t3, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r11;
    after_20:
    // 0x80000C9C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80000CA0: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x80000CA4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80000CA8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000CAC: addu        $t4, $v0, $s5
    ctx->r12 = ADD32(ctx->r2, ctx->r21);
    // 0x80000CB0: lhu         $t5, 0x2DCE($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2DCE);
    // 0x80000CB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80000CB8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80000CBC: sh          $t6, -0x5232($at)
    MEM_H(-0X5232, ctx->r1) = ctx->r14;
    // 0x80000CC0: b           L_80000B38
    // 0x80000CC4: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
        goto L_80000B38;
    // 0x80000CC4: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80000CC8: nop

    // 0x80000CCC: nop

    // 0x80000CD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80000CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80000CD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80000CDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80000CE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80000CE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80000CE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80000CEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80000CF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80000CF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80000CF8: jr          $ra
    // 0x80000CFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80000CFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80006568_7168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000656C: sltiu       $at, $a0, 0xE
    ctx->r1 = ctx->r4 < 0XE ? 1 : 0;
    // 0x80006570: beq         $at, $zero, L_8000692C
    if (ctx->r1 == 0) {
        // 0x80006574: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000692C;
    }
    // 0x80006574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006578: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000657C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80006580: addu        $at, $at, $t6
    gpr jr_addend_80006588 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80006584: lw          $t6, -0x5680($at)
    ctx->r14 = ADD32(ctx->r1, -0X5680);
    // 0x80006588: jr          $t6
    // 0x8000658C: nop

    switch (jr_addend_80006588 >> 2) {
        case 0: goto L_80006590; break;
        case 1: goto L_800065A8; break;
        case 2: goto L_8000660C; break;
        case 3: goto L_80006630; break;
        case 4: goto L_80006668; break;
        case 5: goto L_800066C8; break;
        case 6: goto L_800066EC; break;
        case 7: goto L_80006704; break;
        case 8: goto L_80006758; break;
        case 9: goto L_80006790; break;
        case 10: goto L_80006808; break;
        case 11: goto L_80006820; break;
        case 12: goto L_80006874; break;
        case 13: goto L_800068D8; break;
        default: switch_error(__func__, 0x80006588, 0x8007A980);
    }
    // 0x8000658C: nop

L_80006590:
    // 0x80006590: jal         0x80041EE0
    // 0x80006594: nop

    osGetTime_recomp(rdram, ctx);
        goto after_0;
    // 0x80006594: nop

    after_0:
    // 0x80006598: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000659C: sw          $v0, 0x73C0($at)
    MEM_W(0X73C0, ctx->r1) = ctx->r2;
    // 0x800065A0: b           L_8000692C
    // 0x800065A4: sw          $v1, 0x73C4($at)
    MEM_W(0X73C4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x800065A4: sw          $v1, 0x73C4($at)
    MEM_W(0X73C4, ctx->r1) = ctx->r3;
L_800065A8:
    // 0x800065A8: jal         0x80041EE0
    // 0x800065AC: nop

    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x800065AC: nop

    after_1:
    // 0x800065B0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800065B4: addiu       $a2, $a2, 0x73C8
    ctx->r6 = ADD32(ctx->r6, 0X73C8);
    // 0x800065B8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800065BC: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x800065C0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800065C4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800065C8: lw          $t1, 0x73C4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X73C4);
    // 0x800065CC: lw          $t0, 0x73C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X73C0);
    // 0x800065D0: sltu        $at, $v1, $t1
    ctx->r1 = ctx->r3 < ctx->r9 ? 1 : 0;
    // 0x800065D4: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x800065D8: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x800065DC: jal         0x80042148
    // 0x800065E0: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    __ull_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x800065E0: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    after_2:
    // 0x800065E4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800065E8: addiu       $v1, $v1, 0x743C
    ctx->r3 = ADD32(ctx->r3, 0X743C);
    // 0x800065EC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800065F0: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800065F4: jal         0x80041EE0
    // 0x800065F8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    osGetTime_recomp(rdram, ctx);
        goto after_3;
    // 0x800065F8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    after_3:
    // 0x800065FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006600: sw          $v0, 0x73F0($at)
    MEM_W(0X73F0, ctx->r1) = ctx->r2;
    // 0x80006604: b           L_8000692C
    // 0x80006608: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x80006608: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
L_8000660C:
    // 0x8000660C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80006610: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80006614: addiu       $v1, $v1, 0x743C
    ctx->r3 = ADD32(ctx->r3, 0X743C);
    // 0x80006618: jal         0x80041EE0
    // 0x8000661C: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    osGetTime_recomp(rdram, ctx);
        goto after_4;
    // 0x8000661C: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    after_4:
    // 0x80006620: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006624: sw          $v0, 0x73C0($at)
    MEM_W(0X73C0, ctx->r1) = ctx->r2;
    // 0x80006628: b           L_8000692C
    // 0x8000662C: sw          $v1, 0x73C4($at)
    MEM_W(0X73C4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x8000662C: sw          $v1, 0x73C4($at)
    MEM_W(0X73C4, ctx->r1) = ctx->r3;
L_80006630:
    // 0x80006630: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80006634: lw          $t2, 0x73F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X73F0);
    // 0x80006638: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8000663C: lw          $t3, 0x73F4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X73F4);
    // 0x80006640: bnel        $t2, $zero, L_80006930
    if (ctx->r10 != 0) {
        // 0x80006644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006930;
    }
    goto skip_0;
    // 0x80006644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80006648: bnel        $t3, $zero, L_80006930
    if (ctx->r11 != 0) {
        // 0x8000664C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006930;
    }
    goto skip_1;
    // 0x8000664C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80006650: jal         0x80041EE0
    // 0x80006654: nop

    osGetTime_recomp(rdram, ctx);
        goto after_5;
    // 0x80006654: nop

    after_5:
    // 0x80006658: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000665C: sw          $v0, 0x73F0($at)
    MEM_W(0X73F0, ctx->r1) = ctx->r2;
    // 0x80006660: b           L_8000692C
    // 0x80006664: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x80006664: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
L_80006668:
    // 0x80006668: jal         0x80041EE0
    // 0x8000666C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_6;
    // 0x8000666C: nop

    after_6:
    // 0x80006670: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80006674: addiu       $a2, $a2, 0x73F8
    ctx->r6 = ADD32(ctx->r6, 0X73F8);
    // 0x80006678: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8000667C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80006680: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80006684: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80006688: lw          $t7, 0x73F4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X73F4);
    // 0x8000668C: lw          $t6, 0x73F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X73F0);
    // 0x80006690: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x80006694: subu        $a0, $v0, $t6
    ctx->r4 = SUB32(ctx->r2, ctx->r14);
    // 0x80006698: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x8000669C: jal         0x80042148
    // 0x800066A0: subu        $a1, $v1, $t7
    ctx->r5 = SUB32(ctx->r3, ctx->r15);
    __ull_to_f_recomp(rdram, ctx);
        goto after_7;
    // 0x800066A0: subu        $a1, $v1, $t7
    ctx->r5 = SUB32(ctx->r3, ctx->r15);
    after_7:
    // 0x800066A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800066A8: addiu       $a0, $a0, 0x7440
    ctx->r4 = ADD32(ctx->r4, 0X7440);
    // 0x800066AC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x800066B0: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x800066B4: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x800066B8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800066BC: sw          $t8, 0x73F0($at)
    MEM_W(0X73F0, ctx->r1) = ctx->r24;
    // 0x800066C0: b           L_8000692C
    // 0x800066C4: sw          $t9, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r25;
        goto L_8000692C;
    // 0x800066C4: sw          $t9, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r25;
L_800066C8:
    // 0x800066C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800066CC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800066D0: addiu       $a0, $a0, 0x7440
    ctx->r4 = ADD32(ctx->r4, 0X7440);
    // 0x800066D4: jal         0x80041EE0
    // 0x800066D8: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    osGetTime_recomp(rdram, ctx);
        goto after_8;
    // 0x800066D8: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    after_8:
    // 0x800066DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800066E0: sw          $v0, 0x73F0($at)
    MEM_W(0X73F0, ctx->r1) = ctx->r2;
    // 0x800066E4: b           L_8000692C
    // 0x800066E8: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x800066E8: sw          $v1, 0x73F4($at)
    MEM_W(0X73F4, ctx->r1) = ctx->r3;
L_800066EC:
    // 0x800066EC: jal         0x80041EE0
    // 0x800066F0: nop

    osGetTime_recomp(rdram, ctx);
        goto after_9;
    // 0x800066F0: nop

    after_9:
    // 0x800066F4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800066F8: sw          $v0, 0x7400($at)
    MEM_W(0X7400, ctx->r1) = ctx->r2;
    // 0x800066FC: b           L_8000692C
    // 0x80006700: sw          $v1, 0x7404($at)
    MEM_W(0X7404, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x80006700: sw          $v1, 0x7404($at)
    MEM_W(0X7404, ctx->r1) = ctx->r3;
L_80006704:
    // 0x80006704: jal         0x80041EE0
    // 0x80006708: nop

    osGetTime_recomp(rdram, ctx);
        goto after_10;
    // 0x80006708: nop

    after_10:
    // 0x8000670C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80006710: addiu       $a2, $a2, 0x7408
    ctx->r6 = ADD32(ctx->r6, 0X7408);
    // 0x80006714: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80006718: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x8000671C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80006720: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80006724: lw          $t3, 0x7404($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7404);
    // 0x80006728: lw          $t2, 0x7400($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7400);
    // 0x8000672C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x80006730: subu        $a0, $v0, $t2
    ctx->r4 = SUB32(ctx->r2, ctx->r10);
    // 0x80006734: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x80006738: jal         0x80042148
    // 0x8000673C: subu        $a1, $v1, $t3
    ctx->r5 = SUB32(ctx->r3, ctx->r11);
    __ull_to_f_recomp(rdram, ctx);
        goto after_11;
    // 0x8000673C: subu        $a1, $v1, $t3
    ctx->r5 = SUB32(ctx->r3, ctx->r11);
    after_11:
    // 0x80006740: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80006744: addiu       $v0, $v0, 0x7444
    ctx->r2 = ADD32(ctx->r2, 0X7444);
    // 0x80006748: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000674C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80006750: b           L_8000692C
    // 0x80006754: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
        goto L_8000692C;
    // 0x80006754: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_80006758:
    // 0x80006758: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8000675C: lw          $t4, 0x73D0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X73D0);
    // 0x80006760: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80006764: lw          $t5, 0x73D4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X73D4);
    // 0x80006768: bnel        $t4, $zero, L_80006930
    if (ctx->r12 != 0) {
        // 0x8000676C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006930;
    }
    goto skip_2;
    // 0x8000676C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80006770: bnel        $t5, $zero, L_80006930
    if (ctx->r13 != 0) {
        // 0x80006774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006930;
    }
    goto skip_3;
    // 0x80006774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80006778: jal         0x80041EE0
    // 0x8000677C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_12;
    // 0x8000677C: nop

    after_12:
    // 0x80006780: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006784: sw          $v0, 0x73D0($at)
    MEM_W(0X73D0, ctx->r1) = ctx->r2;
    // 0x80006788: b           L_8000692C
    // 0x8000678C: sw          $v1, 0x73D4($at)
    MEM_W(0X73D4, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x8000678C: sw          $v1, 0x73D4($at)
    MEM_W(0X73D4, ctx->r1) = ctx->r3;
L_80006790:
    // 0x80006790: jal         0x80041EE0
    // 0x80006794: nop

    osGetTime_recomp(rdram, ctx);
        goto after_13;
    // 0x80006794: nop

    after_13:
    // 0x80006798: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8000679C: addiu       $a2, $a2, 0x73D8
    ctx->r6 = ADD32(ctx->r6, 0X73D8);
    // 0x800067A0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800067A4: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x800067A8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800067AC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800067B0: lw          $t9, 0x73D4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X73D4);
    // 0x800067B4: lw          $t8, 0x73D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X73D0);
    // 0x800067B8: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x800067BC: subu        $a0, $v0, $t8
    ctx->r4 = SUB32(ctx->r2, ctx->r24);
    // 0x800067C0: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x800067C4: jal         0x80042148
    // 0x800067C8: subu        $a1, $v1, $t9
    ctx->r5 = SUB32(ctx->r3, ctx->r25);
    __ull_to_f_recomp(rdram, ctx);
        goto after_14;
    // 0x800067C8: subu        $a1, $v1, $t9
    ctx->r5 = SUB32(ctx->r3, ctx->r25);
    after_14:
    // 0x800067CC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800067D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800067D4: swc1        $f0, 0x7430($at)
    MEM_W(0X7430, ctx->r1) = ctx->f0.u32l;
    // 0x800067D8: addiu       $v0, $v0, 0x7448
    ctx->r2 = ADD32(ctx->r2, 0X7448);
    // 0x800067DC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800067E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800067E4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800067E8: swc1        $f4, 0x7434($at)
    MEM_W(0X7434, ctx->r1) = ctx->f4.u32l;
    // 0x800067EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800067F0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x800067F4: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x800067F8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x800067FC: sw          $t1, 0x73D4($at)
    MEM_W(0X73D4, ctx->r1) = ctx->r9;
    // 0x80006800: b           L_8000692C
    // 0x80006804: sw          $t0, 0x73D0($at)
    MEM_W(0X73D0, ctx->r1) = ctx->r8;
        goto L_8000692C;
    // 0x80006804: sw          $t0, 0x73D0($at)
    MEM_W(0X73D0, ctx->r1) = ctx->r8;
L_80006808:
    // 0x80006808: jal         0x80041EE0
    // 0x8000680C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_15;
    // 0x8000680C: nop

    after_15:
    // 0x80006810: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006814: sw          $v0, 0x7410($at)
    MEM_W(0X7410, ctx->r1) = ctx->r2;
    // 0x80006818: b           L_8000692C
    // 0x8000681C: sw          $v1, 0x7414($at)
    MEM_W(0X7414, ctx->r1) = ctx->r3;
        goto L_8000692C;
    // 0x8000681C: sw          $v1, 0x7414($at)
    MEM_W(0X7414, ctx->r1) = ctx->r3;
L_80006820:
    // 0x80006820: jal         0x80041EE0
    // 0x80006824: nop

    osGetTime_recomp(rdram, ctx);
        goto after_16;
    // 0x80006824: nop

    after_16:
    // 0x80006828: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8000682C: addiu       $a2, $a2, 0x7418
    ctx->r6 = ADD32(ctx->r6, 0X7418);
    // 0x80006830: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80006834: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80006838: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8000683C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80006840: lw          $t5, 0x7414($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7414);
    // 0x80006844: lw          $t4, 0x7410($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7410);
    // 0x80006848: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x8000684C: subu        $a0, $v0, $t4
    ctx->r4 = SUB32(ctx->r2, ctx->r12);
    // 0x80006850: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x80006854: jal         0x80042148
    // 0x80006858: subu        $a1, $v1, $t5
    ctx->r5 = SUB32(ctx->r3, ctx->r13);
    __ull_to_f_recomp(rdram, ctx);
        goto after_17;
    // 0x80006858: subu        $a1, $v1, $t5
    ctx->r5 = SUB32(ctx->r3, ctx->r13);
    after_17:
    // 0x8000685C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80006860: addiu       $v0, $v0, 0x7448
    ctx->r2 = ADD32(ctx->r2, 0X7448);
    // 0x80006864: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80006868: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8000686C: b           L_8000692C
    // 0x80006870: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8000692C;
    // 0x80006870: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_80006874:
    // 0x80006874: jal         0x80041EE0
    // 0x80006878: nop

    osGetTime_recomp(rdram, ctx);
        goto after_18;
    // 0x80006878: nop

    after_18:
    // 0x8000687C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80006880: addiu       $a2, $a2, 0x73E0
    ctx->r6 = ADD32(ctx->r6, 0X73E0);
    // 0x80006884: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80006888: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x8000688C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80006890: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80006894: lw          $t9, 0x73EC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X73EC);
    // 0x80006898: lw          $t8, 0x73E8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X73E8);
    // 0x8000689C: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x800068A0: subu        $a0, $v0, $t8
    ctx->r4 = SUB32(ctx->r2, ctx->r24);
    // 0x800068A4: subu        $a0, $a0, $at
    ctx->r4 = SUB32(ctx->r4, ctx->r1);
    // 0x800068A8: jal         0x80042148
    // 0x800068AC: subu        $a1, $v1, $t9
    ctx->r5 = SUB32(ctx->r3, ctx->r25);
    __ull_to_f_recomp(rdram, ctx);
        goto after_19;
    // 0x800068AC: subu        $a1, $v1, $t9
    ctx->r5 = SUB32(ctx->r3, ctx->r25);
    after_19:
    // 0x800068B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800068B4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800068B8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800068BC: lw          $t1, 0x73E4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X73E4);
    // 0x800068C0: lw          $t0, 0x73E0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X73E0);
    // 0x800068C4: swc1        $f0, 0x7420($at)
    MEM_W(0X7420, ctx->r1) = ctx->f0.u32l;
    // 0x800068C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800068CC: sw          $t1, 0x73EC($at)
    MEM_W(0X73EC, ctx->r1) = ctx->r9;
    // 0x800068D0: b           L_8000692C
    // 0x800068D4: sw          $t0, 0x73E8($at)
    MEM_W(0X73E8, ctx->r1) = ctx->r8;
        goto L_8000692C;
    // 0x800068D4: sw          $t0, 0x73E8($at)
    MEM_W(0X73E8, ctx->r1) = ctx->r8;
L_800068D8:
    // 0x800068D8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800068DC: addiu       $v1, $v1, 0x743C
    ctx->r3 = ADD32(ctx->r3, 0X743C);
    // 0x800068E0: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800068E4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800068E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800068EC: addiu       $a0, $a0, 0x7440
    ctx->r4 = ADD32(ctx->r4, 0X7440);
    // 0x800068F0: swc1        $f16, 0x7424($at)
    MEM_W(0X7424, ctx->r1) = ctx->f16.u32l;
    // 0x800068F4: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800068F8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800068FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006900: addiu       $v0, $v0, 0x7444
    ctx->r2 = ADD32(ctx->r2, 0X7444);
    // 0x80006904: swc1        $f18, 0x7428($at)
    MEM_W(0X7428, ctx->r1) = ctx->f18.u32l;
    // 0x80006908: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000690C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80006910: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80006914: swc1        $f4, 0x742C($at)
    MEM_W(0X742C, ctx->r1) = ctx->f4.u32l;
    // 0x80006918: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8000691C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80006920: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80006924: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80006928: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_8000692C:
    // 0x8000692C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80006930:
    // 0x80006930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006934: jr          $ra
    // 0x80006938: nop

    TRACE_RETURN()
    return;
    // 0x80006938: nop

;}
RECOMP_FUNC void alMainBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EB90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8004EB94: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8004EB98: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8004EB9C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8004EBA0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8004EBA4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8004EBA8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004EBAC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8004EBB0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8004EBB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8004EBB8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8004EBBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004EBC0: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8004EBC4: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8004EBC8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8004EBCC: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x8004EBD0: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x8004EBD4: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x8004EBD8: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8004EBDC: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8004EBE0: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8004EBE4: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x8004EBE8: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8004EBEC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x8004EBF0: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x8004EBF4: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x8004EBF8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8004EBFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004EC00: blez        $t8, L_8004EC7C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8004EC04: addiu       $s3, $t0, 0x10
        ctx->r19 = ADD32(ctx->r8, 0X10);
            goto L_8004EC7C;
    }
    // 0x8004EC04: addiu       $s3, $t0, 0x10
    ctx->r19 = ADD32(ctx->r8, 0X10);
    // 0x8004EC08: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x8004EC0C: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x8004EC10: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x8004EC14: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_8004EC18:
    // 0x8004EC18: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8004EC1C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8004EC20: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8004EC24: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8004EC28: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8004EC2C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8004EC30: jalr        $t9
    // 0x8004EC34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004EC34: nop

    after_0:
    // 0x8004EC38: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x8004EC3C: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x8004EC40: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8004EC44: ori         $t2, $t2, 0x440
    ctx->r10 = ctx->r10 | 0X440;
    // 0x8004EC48: ori         $t3, $t3, 0x580
    ctx->r11 = ctx->r11 | 0X580;
    // 0x8004EC4C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8004EC50: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x8004EC54: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8004EC58: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x8004EC5C: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x8004EC60: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x8004EC64: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x8004EC68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004EC6C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8004EC70: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8004EC74: bne         $at, $zero, L_8004EC18
    if (ctx->r1 != 0) {
        // 0x8004EC78: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_8004EC18;
    }
    // 0x8004EC78: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_8004EC7C:
    // 0x8004EC7C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004EC80: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x8004EC84: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8004EC88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004EC8C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8004EC90: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8004EC94: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8004EC98: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004EC9C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8004ECA0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8004ECA4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8004ECA8: jr          $ra
    // 0x8004ECAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8004ECAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8003D01C_3DC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D024: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003D028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003D02C: jal         0x8003D428
    // 0x8003D030: sw          $a0, 0x7860($at)
    MEM_W(0X7860, ctx->r1) = ctx->r4;
    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x8003D030: sw          $a0, 0x7860($at)
    MEM_W(0X7860, ctx->r1) = ctx->r4;
    after_0:
    // 0x8003D034: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003D038: jal         0x8003521C
    // 0x8003D03C: addiu       $a0, $a0, -0x3030
    ctx->r4 = ADD32(ctx->r4, -0X3030);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8003D03C: addiu       $a0, $a0, -0x3030
    ctx->r4 = ADD32(ctx->r4, -0X3030);
    after_1:
    // 0x8003D040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D044: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8003D048: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D04C: sb          $t6, 0x7930($at)
    MEM_B(0X7930, ctx->r1) = ctx->r14;
    // 0x8003D050: jr          $ra
    // 0x8003D054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003D054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _Ldunscale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A7E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A7E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8004A7E8: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004A7EC: sra         $s2, $t6, 16
    ctx->r18 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004A7F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004A7F4: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x8004A7F8: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004A7FC: andi        $t6, $s4, 0xFF
    ctx->r14 = ctx->r20 & 0XFF;
    // 0x8004A800: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x8004A804: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x8004A808: bgtz        $s3, L_8004A81C
    if (SIGNED(ctx->r19) > 0) {
        // 0x8004A80C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004A81C;
    }
    // 0x8004A80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A810: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x8004A814: addiu       $s1, $s1, -0x2BB0
    ctx->r17 = ADD32(ctx->r17, -0X2BB0);
    // 0x8004A818: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8004A81C:
    // 0x8004A81C: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x8004A820: beq         $v0, $s4, L_8004A854
    if (ctx->r2 == ctx->r20) {
        // 0x8004A824: or          $v1, $s4, $zero
        ctx->r3 = ctx->r20 | 0;
            goto L_8004A854;
    }
    // 0x8004A824: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x8004A828: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x8004A82C: beq         $a0, $v1, L_8004A838
    if (ctx->r4 == ctx->r3) {
        // 0x8004A830: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_8004A838;
    }
    // 0x8004A830: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x8004A834: bne         $v1, $at, L_8004AA90
    if (ctx->r3 != ctx->r1) {
        // 0x8004A838: slti        $at, $s2, -0x4
        ctx->r1 = SIGNED(ctx->r18) < -0X4 ? 1 : 0;
            goto L_8004AA90;
    }
L_8004A838:
    // 0x8004A838: slti        $at, $s2, -0x4
    ctx->r1 = SIGNED(ctx->r18) < -0X4 ? 1 : 0;
    // 0x8004A83C: bne         $at, $zero, L_8004AA90
    if (ctx->r1 != 0) {
        // 0x8004A840: nop
    
            goto L_8004AA90;
    }
    // 0x8004A840: nop

    // 0x8004A844: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8004A848: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8004A84C: beq         $at, $zero, L_8004AA90
    if (ctx->r1 == 0) {
        // 0x8004A850: nop
    
            goto L_8004AA90;
    }
    // 0x8004A850: nop

L_8004A854:
    // 0x8004A854: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004A858: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8004A85C: beq         $v0, $v1, L_8004A898
    if (ctx->r2 == ctx->r3) {
        // 0x8004A860: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8004A898;
    }
    // 0x8004A860: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004A864: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x8004A868: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A86C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8004A870: bne         $t7, $zero, L_8004A888
    if (ctx->r15 != 0) {
        // 0x8004A874: slt         $at, $s3, $v0
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8004A888;
    }
    // 0x8004A874: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004A878: beql        $at, $zero, L_8004A88C
    if (ctx->r1 == 0) {
        // 0x8004A87C: subu        $t8, $v0, $s2
        ctx->r24 = SUB32(ctx->r2, ctx->r18);
            goto L_8004A88C;
    }
    goto skip_0;
    // 0x8004A87C: subu        $t8, $v0, $s2
    ctx->r24 = SUB32(ctx->r2, ctx->r18);
    skip_0:
    // 0x8004A880: sw          $s3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r19;
    // 0x8004A884: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8004A888:
    // 0x8004A888: subu        $t8, $v0, $s2
    ctx->r24 = SUB32(ctx->r2, ctx->r18);
L_8004A88C:
    // 0x8004A88C: bgez        $t8, L_8004A898
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8004A890: sw          $t8, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r24;
            goto L_8004A898;
    }
    // 0x8004A890: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x8004A894: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_8004A898:
    // 0x8004A898: bgtz        $s2, L_8004A968
    if (SIGNED(ctx->r18) > 0) {
        // 0x8004A89C: slt         $at, $s3, $s2
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_8004A968;
    }
    // 0x8004A89C: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004A8A0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004A8A4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004A8A8: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x8004A8AC: negu        $v1, $s2
    ctx->r3 = SUB32(0, ctx->r18);
    // 0x8004A8B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8004A8B4: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x8004A8B8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004A8BC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A8C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004A8C4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004A8C8: bgtz        $v0, L_8004A8E0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A8CC: sw          $t8, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r24;
            goto L_8004A8E0;
    }
    // 0x8004A8CC: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x8004A8D0: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x8004A8D4: andi        $t9, $t6, 0x8
    ctx->r25 = ctx->r14 & 0X8;
    // 0x8004A8D8: beql        $t9, $zero, L_8004A908
    if (ctx->r25 == 0) {
        // 0x8004A8DC: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8004A908;
    }
    goto skip_1;
    // 0x8004A8DC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_1:
L_8004A8E0:
    // 0x8004A8E0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8004A8E4: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x8004A8E8: addiu       $t7, $zero, 0x2E
    ctx->r15 = ADD32(0, 0X2E);
    // 0x8004A8EC: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8004A8F0: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
    // 0x8004A8F4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004A8F8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A8FC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x8004A900: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x8004A904: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8004A908:
    // 0x8004A908: beql        $at, $zero, L_8004A924
    if (ctx->r1 == 0) {
        // 0x8004A90C: addu        $t8, $v0, $s2
        ctx->r24 = ADD32(ctx->r2, ctx->r18);
            goto L_8004A924;
    }
    goto skip_2;
    // 0x8004A90C: addu        $t8, $v0, $s2
    ctx->r24 = ADD32(ctx->r2, ctx->r18);
    skip_2:
    // 0x8004A910: negu        $s2, $v0
    ctx->r18 = SUB32(0, ctx->r2);
    // 0x8004A914: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x8004A918: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8004A91C: negu        $v1, $s2
    ctx->r3 = SUB32(0, ctx->r18);
    // 0x8004A920: addu        $t8, $v0, $s2
    ctx->r24 = ADD32(ctx->r2, ctx->r18);
L_8004A924:
    // 0x8004A924: slt         $at, $t8, $s3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004A928: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8004A92C: beq         $at, $zero, L_8004A940
    if (ctx->r1 == 0) {
        // 0x8004A930: sw          $t8, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r24;
            goto L_8004A940;
    }
    // 0x8004A930: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x8004A934: sll         $s3, $t8, 16
    ctx->r19 = S32(ctx->r24 << 16);
    // 0x8004A938: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004A93C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_8004A940:
    // 0x8004A940: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004A944: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8004A948: sw          $s3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r19;
    // 0x8004A94C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8004A950: jal         0x8004A4A0
    // 0x8004A954: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A954: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x8004A958: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8004A95C: subu        $t6, $t8, $s3
    ctx->r14 = SUB32(ctx->r24, ctx->r19);
    // 0x8004A960: b           L_8004ACEC
    // 0x8004A964: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
        goto L_8004ACEC;
    // 0x8004A964: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
L_8004A968:
    // 0x8004A968: beq         $at, $zero, L_8004A9E0
    if (ctx->r1 == 0) {
        // 0x8004A96C: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8004A9E0;
    }
    // 0x8004A96C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004A970: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004A974: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8004A978: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004A97C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8004A980: jal         0x8004A4A0
    // 0x8004A984: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8004A984: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_1:
    // 0x8004A988: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004A98C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A990: subu        $t7, $s2, $s3
    ctx->r15 = SUB32(ctx->r18, ctx->r19);
    // 0x8004A994: addu        $t6, $t8, $s3
    ctx->r14 = ADD32(ctx->r24, ctx->r19);
    // 0x8004A998: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x8004A99C: bgtz        $v0, L_8004A9B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A9A0: sw          $t7, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r15;
            goto L_8004A9B4;
    }
    // 0x8004A9A0: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
    // 0x8004A9A4: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004A9A8: andi        $t8, $t9, 0x8
    ctx->r24 = ctx->r25 & 0X8;
    // 0x8004A9AC: beq         $t8, $zero, L_8004A9D8
    if (ctx->r24 == 0) {
        // 0x8004A9B0: nop
    
            goto L_8004A9D8;
    }
    // 0x8004A9B0: nop

L_8004A9B4:
    // 0x8004A9B4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004A9B8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8004A9BC: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x8004A9C0: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004A9C4: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x8004A9C8: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x8004A9CC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A9D0: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8004A9D4: sw          $t9, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r25;
L_8004A9D8:
    // 0x8004A9D8: b           L_8004ACEC
    // 0x8004A9DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8004ACEC;
    // 0x8004A9DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8004A9E0:
    // 0x8004A9E0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x8004A9E4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004A9E8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8004A9EC: jal         0x8004A4A0
    // 0x8004A9F0: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8004A9F0: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_2:
    // 0x8004A9F4: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004A9F8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004A9FC: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8004AA00: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x8004AA04: addu        $t9, $t7, $s2
    ctx->r25 = ADD32(ctx->r15, ctx->r18);
    // 0x8004AA08: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x8004AA0C: bgtz        $v0, L_8004AA24
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004AA10: sra         $s3, $t6, 16
        ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8004AA24;
    }
    // 0x8004AA10: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004AA14: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x8004AA18: andi        $t9, $t7, 0x8
    ctx->r25 = ctx->r15 & 0X8;
    // 0x8004AA1C: beql        $t9, $zero, L_8004AA4C
    if (ctx->r25 == 0) {
        // 0x8004AA20: slt         $at, $v0, $s3
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_8004AA4C;
    }
    goto skip_3;
    // 0x8004AA20: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    skip_3:
L_8004AA24:
    // 0x8004AA24: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8004AA28: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004AA2C: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x8004AA30: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004AA34: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x8004AA38: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004AA3C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004AA40: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8004AA44: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x8004AA48: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
L_8004AA4C:
    // 0x8004AA4C: beq         $at, $zero, L_8004AA60
    if (ctx->r1 == 0) {
        // 0x8004AA50: addu        $a1, $s2, $s1
        ctx->r5 = ADD32(ctx->r18, ctx->r17);
            goto L_8004AA60;
    }
    // 0x8004AA50: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    // 0x8004AA54: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x8004AA58: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004AA5C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_8004AA60:
    // 0x8004AA60: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8004AA64: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004AA68: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8004AA6C: jal         0x8004A4A0
    // 0x8004AA70: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8004AA70: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    after_3:
    // 0x8004AA74: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004AA78: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x8004AA7C: addu        $t6, $t7, $s3
    ctx->r14 = ADD32(ctx->r15, ctx->r19);
    // 0x8004AA80: subu        $t8, $t9, $s3
    ctx->r24 = SUB32(ctx->r25, ctx->r19);
    // 0x8004AA84: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x8004AA88: b           L_8004ACEC
    // 0x8004AA8C: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
        goto L_8004ACEC;
    // 0x8004AA8C: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
L_8004AA90:
    // 0x8004AA90: beq         $a0, $v1, L_8004AAA0
    if (ctx->r4 == ctx->r3) {
        // 0x8004AA94: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_8004AAA0;
    }
    // 0x8004AA94: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x8004AA98: bnel        $v1, $at, L_8004AAE0
    if (ctx->r3 != ctx->r1) {
        // 0x8004AA9C: lw          $t8, 0x8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X8);
            goto L_8004AAE0;
    }
    goto skip_4;
    // 0x8004AA9C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    skip_4:
L_8004AAA0:
    // 0x8004AAA0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004AAA4: addiu       $s4, $zero, 0x45
    ctx->r20 = ADD32(0, 0X45);
    // 0x8004AAA8: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004AAAC: beql        $at, $zero, L_8004AAC0
    if (ctx->r1 == 0) {
        // 0x8004AAB0: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_8004AAC0;
    }
    goto skip_5;
    // 0x8004AAB0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    skip_5:
    // 0x8004AAB4: sw          $s3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r19;
    // 0x8004AAB8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x8004AABC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
L_8004AAC0:
    // 0x8004AAC0: bgez        $t7, L_8004AACC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8004AAC4: sw          $t7, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r15;
            goto L_8004AACC;
    }
    // 0x8004AAC4: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
    // 0x8004AAC8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_8004AACC:
    // 0x8004AACC: bne         $a0, $v1, L_8004AADC
    if (ctx->r4 != ctx->r3) {
        // 0x8004AAD0: nop
    
            goto L_8004AADC;
    }
    // 0x8004AAD0: nop

    // 0x8004AAD4: b           L_8004AADC
    // 0x8004AAD8: addiu       $s4, $zero, 0x65
    ctx->r20 = ADD32(0, 0X65);
        goto L_8004AADC;
    // 0x8004AAD8: addiu       $s4, $zero, 0x65
    ctx->r20 = ADD32(0, 0X65);
L_8004AADC:
    // 0x8004AADC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_8004AAE0:
    // 0x8004AAE0: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004AAE4: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x8004AAE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004AAEC: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8004AAF0: sb          $t9, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r25;
    // 0x8004AAF4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004AAF8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004AAFC: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8004AB00: bgtz        $v0, L_8004AB18
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004AB04: sw          $t7, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r15;
            goto L_8004AB18;
    }
    // 0x8004AB04: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x8004AB08: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x8004AB0C: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x8004AB10: beq         $t6, $zero, L_8004AB3C
    if (ctx->r14 == 0) {
        // 0x8004AB14: nop
    
            goto L_8004AB3C;
    }
    // 0x8004AB14: nop

L_8004AB18:
    // 0x8004AB18: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8004AB1C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8004AB20: addiu       $t8, $zero, 0x2E
    ctx->r24 = ADD32(0, 0X2E);
    // 0x8004AB24: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8004AB28: sb          $t8, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r24;
    // 0x8004AB2C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004AB30: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004AB34: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8004AB38: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
L_8004AB3C:
    // 0x8004AB3C: blezl       $v0, L_8004AB98
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004AB40: lw          $t6, 0x8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8);
            goto L_8004AB98;
    }
    goto skip_6;
    // 0x8004AB40: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    skip_6:
    // 0x8004AB44: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8004AB48: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x8004AB4C: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004AB50: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004AB54: beq         $at, $zero, L_8004AB68
    if (ctx->r1 == 0) {
        // 0x8004AB58: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8004AB68;
    }
    // 0x8004AB58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004AB5C: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x8004AB60: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004AB64: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
L_8004AB68:
    // 0x8004AB68: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8004AB6C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8004AB70: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8004AB74: jal         0x8004A4A0
    // 0x8004AB78: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8004AB78: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    after_4:
    // 0x8004AB7C: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x8004AB80: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x8004AB84: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x8004AB88: subu        $t8, $t9, $s3
    ctx->r24 = SUB32(ctx->r25, ctx->r19);
    // 0x8004AB8C: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x8004AB90: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x8004AB94: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
L_8004AB98:
    // 0x8004AB98: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004AB9C: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x8004ABA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004ABA4: bltz        $s2, L_8004ABBC
    if (SIGNED(ctx->r18) < 0) {
        // 0x8004ABA8: sb          $s4, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r20;
            goto L_8004ABBC;
    }
    // 0x8004ABA8: sb          $s4, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r20;
    // 0x8004ABAC: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x8004ABB0: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
    // 0x8004ABB4: b           L_8004ABD8
    // 0x8004ABB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8004ABD8;
    // 0x8004ABB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004ABBC:
    // 0x8004ABBC: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    // 0x8004ABC0: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004ABC4: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x8004ABC8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004ABCC: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x8004ABD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004ABD4: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_8004ABD8:
    // 0x8004ABD8: slti        $at, $s2, 0x64
    ctx->r1 = SIGNED(ctx->r18) < 0X64 ? 1 : 0;
    // 0x8004ABDC: bnel        $at, $zero, L_8004AC88
    if (ctx->r1 != 0) {
        // 0x8004ABE0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8004AC88;
    }
    goto skip_7;
    // 0x8004ABE0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_7:
    // 0x8004ABE4: slti        $at, $s2, 0x3E8
    ctx->r1 = SIGNED(ctx->r18) < 0X3E8 ? 1 : 0;
    // 0x8004ABE8: bne         $at, $zero, L_8004AC38
    if (ctx->r1 != 0) {
        // 0x8004ABEC: addiu       $v0, $zero, 0x3E8
        ctx->r2 = ADD32(0, 0X3E8);
            goto L_8004AC38;
    }
    // 0x8004ABEC: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x8004ABF0: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x8004ABF4: bne         $v0, $zero, L_8004AC00
    if (ctx->r2 != 0) {
        // 0x8004ABF8: nop
    
            goto L_8004AC00;
    }
    // 0x8004ABF8: nop

    // 0x8004ABFC: break       7
    do_break(2147789820);
L_8004AC00:
    // 0x8004AC00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AC04: bne         $v0, $at, L_8004AC18
    if (ctx->r2 != ctx->r1) {
        // 0x8004AC08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004AC18;
    }
    // 0x8004AC08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004AC0C: bne         $s2, $at, L_8004AC18
    if (ctx->r18 != ctx->r1) {
        // 0x8004AC10: nop
    
            goto L_8004AC18;
    }
    // 0x8004AC10: nop

    // 0x8004AC14: break       6
    do_break(2147789844);
L_8004AC18:
    // 0x8004AC18: mfhi        $s2
    ctx->r18 = hi;
    // 0x8004AC1C: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004AC20: mflo        $t9
    ctx->r25 = lo;
    // 0x8004AC24: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x8004AC28: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004AC2C: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8004AC30: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x8004AC34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004AC38:
    // 0x8004AC38: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8004AC3C: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x8004AC40: bne         $v0, $zero, L_8004AC4C
    if (ctx->r2 != 0) {
        // 0x8004AC44: nop
    
            goto L_8004AC4C;
    }
    // 0x8004AC44: nop

    // 0x8004AC48: break       7
    do_break(2147789896);
L_8004AC4C:
    // 0x8004AC4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AC50: bne         $v0, $at, L_8004AC64
    if (ctx->r2 != ctx->r1) {
        // 0x8004AC54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004AC64;
    }
    // 0x8004AC54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004AC58: bne         $s2, $at, L_8004AC64
    if (ctx->r18 != ctx->r1) {
        // 0x8004AC5C: nop
    
            goto L_8004AC64;
    }
    // 0x8004AC5C: nop

    // 0x8004AC60: break       6
    do_break(2147789920);
L_8004AC64:
    // 0x8004AC64: mfhi        $s2
    ctx->r18 = hi;
    // 0x8004AC68: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004AC6C: mflo        $t9
    ctx->r25 = lo;
    // 0x8004AC70: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x8004AC74: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004AC78: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8004AC7C: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x8004AC80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004AC84: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8004AC88:
    // 0x8004AC88: div         $zero, $s2, $v0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r2)));
    // 0x8004AC8C: bne         $v0, $zero, L_8004AC98
    if (ctx->r2 != 0) {
        // 0x8004AC90: nop
    
            goto L_8004AC98;
    }
    // 0x8004AC90: nop

    // 0x8004AC94: break       7
    do_break(2147789972);
L_8004AC98:
    // 0x8004AC98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AC9C: bne         $v0, $at, L_8004ACB0
    if (ctx->r2 != ctx->r1) {
        // 0x8004ACA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004ACB0;
    }
    // 0x8004ACA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004ACA4: bne         $s2, $at, L_8004ACB0
    if (ctx->r18 != ctx->r1) {
        // 0x8004ACA8: nop
    
            goto L_8004ACB0;
    }
    // 0x8004ACA8: nop

    // 0x8004ACAC: break       6
    do_break(2147789996);
L_8004ACB0:
    // 0x8004ACB0: mfhi        $s2
    ctx->r18 = hi;
    // 0x8004ACB4: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8004ACB8: mflo        $t9
    ctx->r25 = lo;
    // 0x8004ACBC: addiu       $t8, $t9, 0x30
    ctx->r24 = ADD32(ctx->r25, 0X30);
    // 0x8004ACC0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004ACC4: addiu       $t9, $t7, 0x30
    ctx->r25 = ADD32(ctx->r15, 0X30);
    // 0x8004ACC8: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x8004ACCC: sb          $t9, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r25;
    // 0x8004ACD0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8004ACD4: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8004ACD8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8004ACDC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8004ACE0: subu        $t6, $s1, $t8
    ctx->r14 = SUB32(ctx->r17, ctx->r24);
    // 0x8004ACE4: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x8004ACE8: sw          $t9, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r25;
L_8004ACEC:
    // 0x8004ACEC: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x8004ACF0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8004ACF4: andi        $t6, $t8, 0x14
    ctx->r14 = ctx->r24 & 0X14;
    // 0x8004ACF8: bnel        $t6, $at, L_8004AD3C
    if (ctx->r14 != ctx->r1) {
        // 0x8004ACFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004AD3C;
    }
    goto skip_8;
    // 0x8004ACFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x8004AD00: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x8004AD04: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8004AD08: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x8004AD0C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8004AD10: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004AD14: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x8004AD18: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x8004AD1C: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x8004AD20: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004AD24: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x8004AD28: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004AD2C: beq         $at, $zero, L_8004AD38
    if (ctx->r1 == 0) {
        // 0x8004AD30: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_8004AD38;
    }
    // 0x8004AD30: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x8004AD34: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
L_8004AD38:
    // 0x8004AD38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004AD3C:
    // 0x8004AD3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AD40: jr          $ra
    // 0x8004AD44: nop

    TRACE_RETURN()
    return;
    // 0x8004AD44: nop

    // 0x8004AD48: jr          $ra
    // 0x8004AD4C: nop

    TRACE_RETURN()
    return;
    // 0x8004AD4C: nop

;}
RECOMP_FUNC void func_80034E08_35A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034E10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80034E14: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80034E18: jal         0x80034B58
    // 0x80034E1C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_80034B58_35758(rdram, ctx);
        goto after_0;
    // 0x80034E1C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x80034E20: jal         0x80034D24
    // 0x80034E24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80034D24_35924(rdram, ctx);
        goto after_1;
    // 0x80034E24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034E30: jr          $ra
    // 0x80034E34: nop

    TRACE_RETURN()
    return;
    // 0x80034E34: nop

;}
RECOMP_FUNC void func_8000B8A4_C4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B8A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000B8A8: jr          $ra
    // 0x8000B8AC: sw          $a0, 0x7C54($at)
    MEM_W(0X7C54, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8000B8AC: sw          $a0, 0x7C54($at)
    MEM_W(0X7C54, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80033BDC_347DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033BDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80033BE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80033BE4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80033BE8: c.eq.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl == ctx->f18.fl;
    // 0x80033BEC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80033BF0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80033BF4: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x80033BF8: bc1f        L_80033C6C
    if (!c1cs) {
        // 0x80033BFC: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_80033C6C;
    }
    // 0x80033BFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80033C00: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80033C04: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80033C08: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x80033C0C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80033C10: nop

    // 0x80033C14: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80033C18: nop

    // 0x80033C1C: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80033C20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80033C24: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80033C28: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80033C2C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80033C30: nop

    // 0x80033C34: bc1f        L_80033C44
    if (!c1cs) {
        // 0x80033C38: nop
    
            goto L_80033C44;
    }
    // 0x80033C38: nop

    // 0x80033C3C: b           L_80033CFC
    // 0x80033C40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80033CFC;
    // 0x80033C40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80033C44:
    // 0x80033C44: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80033C48: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80033C4C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80033C50: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80033C54: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80033C58: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80033C5C: jal         0x80033D40
    // 0x80033C60: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_80033D40_34940(rdram, ctx);
        goto after_0;
    // 0x80033C60: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x80033C64: b           L_80033CFC
    // 0x80033C68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80033CFC;
    // 0x80033C68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80033C6C:
    // 0x80033C6C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80033C70: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80033C74: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x80033C78: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80033C7C: nop

    // 0x80033C80: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80033C84: nop

    // 0x80033C88: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80033C8C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80033C90: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80033C94: nop

    // 0x80033C98: bc1f        L_80033CA8
    if (!c1cs) {
        // 0x80033C9C: nop
    
            goto L_80033CA8;
    }
    // 0x80033C9C: nop

    // 0x80033CA0: b           L_80033CFC
    // 0x80033CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80033CFC;
    // 0x80033CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80033CA8:
    // 0x80033CA8: sub.s       $f6, $f22, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f22.fl - ctx->f16.fl;
    // 0x80033CAC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80033CB0: nop

    // 0x80033CB4: bc1t        L_80033CD0
    if (c1cs) {
        // 0x80033CB8: nop
    
            goto L_80033CD0;
    }
    // 0x80033CB8: nop

    // 0x80033CBC: add.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f22.fl + ctx->f16.fl;
    // 0x80033CC0: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80033CC4: nop

    // 0x80033CC8: bc1fl       L_80033CDC
    if (!c1cs) {
        // 0x80033CCC: lw          $t8, 0x50($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X50);
            goto L_80033CDC;
    }
    goto skip_0;
    // 0x80033CCC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    skip_0:
L_80033CD0:
    // 0x80033CD0: b           L_80033CFC
    // 0x80033CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80033CFC;
    // 0x80033CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033CD8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
L_80033CDC:
    // 0x80033CDC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80033CE0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80033CE4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80033CE8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80033CEC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80033CF0: jal         0x80033D40
    // 0x80033CF4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80033D40_34940(rdram, ctx);
        goto after_1;
    // 0x80033CF4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_1:
    // 0x80033CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80033CFC:
    // 0x80033CFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80033D00: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80033D04: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80033D08: jr          $ra
    // 0x80033D0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80033D0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001D718_1E318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D718: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D71C: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D720: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001D724: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001D728: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001D72C: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x8001D730: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D734: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D738: bc1f        L_8001D750
    if (!c1cs) {
        // 0x8001D73C: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_8001D750;
    }
    // 0x8001D73C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D740: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001D744: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001D748: b           L_8001D75C
    // 0x8001D74C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
        goto L_8001D75C;
    // 0x8001D74C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_8001D750:
    // 0x8001D750: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001D754: nop

    // 0x8001D758: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_8001D75C:
    // 0x8001D75C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D760: bc1fl       L_8001D774
    if (!c1cs) {
        // 0x8001D764: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_8001D774;
    }
    goto skip_0;
    // 0x8001D764: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_0:
    // 0x8001D768: b           L_8001D774
    // 0x8001D76C: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_8001D774;
    // 0x8001D76C: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x8001D770: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_8001D774:
    // 0x8001D774: ldc1        $f10, -0x46D8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X46D8);
    // 0x8001D778: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8001D77C: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8001D780: nop

    // 0x8001D784: bc1fl       L_8001D7E4
    if (!c1cs) {
        // 0x8001D788: lwc1        $f4, 0x8($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8001D7E4;
    }
    goto skip_1;
    // 0x8001D788: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    skip_1:
    // 0x8001D78C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D790: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8001D794: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D798: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8001D79C: nop

    // 0x8001D7A0: bc1fl       L_8001D7C8
    if (!c1cs) {
        // 0x8001D7A4: lwc1        $f6, 0x8($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
            goto L_8001D7C8;
    }
    goto skip_2;
    // 0x8001D7A4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x8001D7A8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D7AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D7B0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8001D7B4: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x8001D7B8: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D7BC: jr          $ra
    // 0x8001D7C0: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8001D7C0: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x8001D7C4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
L_8001D7C8:
    // 0x8001D7C8: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8001D7CC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D7D0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8001D7D4: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x8001D7D8: jr          $ra
    // 0x8001D7DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8001D7DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001D7E0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
L_8001D7E4:
    // 0x8001D7E4: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D7E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D7EC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001D7F0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D7F4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8001D7F8: nop

    // 0x8001D7FC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8001D800: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8001D804: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D808: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001D80C: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001D810: nop

    // 0x8001D814: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001D818: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8001D81C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8001D820: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8001D824: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8001D828: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8001D82C: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x8001D830: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D834: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001D838: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D83C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001D840: nop

    // 0x8001D844: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001D848: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8001D84C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D850: div.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001D854: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001D858: nop

    // 0x8001D85C: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8001D860: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001D864: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8001D868: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8001D86C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8001D870: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8001D874: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8001D878: nop

    // 0x8001D87C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001D880: nop

    // 0x8001D884: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8001D888: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001D88C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8001D890: jr          $ra
    // 0x8001D894: nop

    TRACE_RETURN()
    return;
    // 0x8001D894: nop

;}
RECOMP_FUNC void func_80007634_8234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007634: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80007638: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000763C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80007640: bnel        $v0, $at, L_80007670
    if (ctx->r2 != ctx->r1) {
        // 0x80007644: lw          $v0, 0x2A8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X2A8);
            goto L_80007670;
    }
    goto skip_0;
    // 0x80007644: lw          $v0, 0x2A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2A8);
    skip_0:
    // 0x80007648: lw          $v0, 0x2A4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2A4);
    // 0x8000764C: beql        $v0, $zero, L_80007660
    if (ctx->r2 == 0) {
        // 0x80007650: sw          $a1, 0x29C($a0)
        MEM_W(0X29C, ctx->r4) = ctx->r5;
            goto L_80007660;
    }
    goto skip_1;
    // 0x80007650: sw          $a1, 0x29C($a0)
    MEM_W(0X29C, ctx->r4) = ctx->r5;
    skip_1:
    // 0x80007654: b           L_80007660
    // 0x80007658: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_80007660;
    // 0x80007658: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8000765C: sw          $a1, 0x29C($a0)
    MEM_W(0X29C, ctx->r4) = ctx->r5;
L_80007660:
    // 0x80007660: sw          $a1, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = ctx->r5;
    // 0x80007664: b           L_80007688
    // 0x80007668: sw          $t6, 0x2B8($a0)
    MEM_W(0X2B8, ctx->r4) = ctx->r14;
        goto L_80007688;
    // 0x80007668: sw          $t6, 0x2B8($a0)
    MEM_W(0X2B8, ctx->r4) = ctx->r14;
    // 0x8000766C: lw          $v0, 0x2A8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2A8);
L_80007670:
    // 0x80007670: beql        $v0, $zero, L_80007684
    if (ctx->r2 == 0) {
        // 0x80007674: sw          $a1, 0x2A0($a0)
        MEM_W(0X2A0, ctx->r4) = ctx->r5;
            goto L_80007684;
    }
    goto skip_2;
    // 0x80007674: sw          $a1, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->r5;
    skip_2:
    // 0x80007678: b           L_80007684
    // 0x8000767C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
        goto L_80007684;
    // 0x8000767C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80007680: sw          $a1, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->r5;
L_80007684:
    // 0x80007684: sw          $a1, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = ctx->r5;
L_80007688:
    // 0x80007688: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8000768C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80007690: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80007694: jr          $ra
    // 0x80007698: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80007698: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_80003A94_4694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003A94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80003A98: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x80003A9C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80003AA0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80003AA4: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x80003AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003AAC: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80003AB0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80003AB4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80003AB8: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80003ABC: bc1f        L_80003ACC
    if (!c1cs) {
        // 0x80003AC0: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_80003ACC;
    }
    // 0x80003AC0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80003AC4: b           L_80003ACC
    // 0x80003AC8: neg.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = -ctx->f4.fl;
        goto L_80003ACC;
    // 0x80003AC8: neg.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = -ctx->f4.fl;
L_80003ACC:
    // 0x80003ACC: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80003AD0: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80003AD4: bc1f        L_80003AE4
    if (!c1cs) {
        // 0x80003AD8: nop
    
            goto L_80003AE4;
    }
    // 0x80003AD8: nop

    // 0x80003ADC: b           L_80003AE4
    // 0x80003AE0: neg.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = -ctx->f6.fl;
        goto L_80003AE4;
    // 0x80003AE0: neg.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = -ctx->f6.fl;
L_80003AE4:
    // 0x80003AE4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80003AE8: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003AEC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80003AF0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80003AF4: nop

    // 0x80003AF8: bc1fl       L_80003B0C
    if (!c1cs) {
        // 0x80003AFC: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_80003B0C;
    }
    goto skip_0;
    // 0x80003AFC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x80003B00: b           L_80003B0C
    // 0x80003B04: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_80003B0C;
    // 0x80003B04: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x80003B08: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_80003B0C:
    // 0x80003B0C: ldc1        $f4, -0x5740($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5740);
    // 0x80003B10: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x80003B14: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80003B18: nop

    // 0x80003B1C: bc1tl       L_80003B30
    if (c1cs) {
        // 0x80003B20: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80003B30;
    }
    goto skip_1;
    // 0x80003B20: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x80003B24: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80003B28: div.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80003B2C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80003B30:
    // 0x80003B30: nop

    // 0x80003B34: bc1fl       L_80003B98
    if (!c1cs) {
        // 0x80003B38: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80003B98;
    }
    goto skip_2;
    // 0x80003B38: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80003B3C: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x80003B40: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x80003B44: bc1fl       L_80003B58
    if (!c1cs) {
        // 0x80003B48: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_80003B58;
    }
    goto skip_3;
    // 0x80003B48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_3:
    // 0x80003B4C: b           L_80003CB8
    // 0x80003B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003CB8;
    // 0x80003B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80003B54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_80003B58:
    // 0x80003B58: nop

    // 0x80003B5C: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80003B60: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80003B64: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80003B68: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80003B6C: nop

    // 0x80003B70: sltiu       $at, $a0, 0x2001
    ctx->r1 = ctx->r4 < 0X2001 ? 1 : 0;
    // 0x80003B74: bne         $at, $zero, L_80003B80
    if (ctx->r1 != 0) {
        // 0x80003B78: nop
    
            goto L_80003B80;
    }
    // 0x80003B78: nop

    // 0x80003B7C: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
L_80003B80:
    // 0x80003B80: jal         0x800039C0
    // 0x80003B84: nop

    func_800039C0_45C0(rdram, ctx);
        goto after_0;
    // 0x80003B84: nop

    after_0:
    // 0x80003B88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80003B8C: b           L_80003C18
    // 0x80003B90: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
        goto L_80003C18;
    // 0x80003B90: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80003B94: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80003B98:
    // 0x80003B98: nop

    // 0x80003B9C: bc1fl       L_80003C08
    if (!c1cs) {
        // 0x80003BA0: c.eq.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
            goto L_80003C08;
    }
    goto skip_4;
    // 0x80003BA0: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    skip_4:
    // 0x80003BA4: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x80003BA8: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x80003BAC: bc1fl       L_80003BC0
    if (!c1cs) {
        // 0x80003BB0: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_80003BC0;
    }
    goto skip_5;
    // 0x80003BB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_5:
    // 0x80003BB4: b           L_80003CB8
    // 0x80003BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003CB8;
    // 0x80003BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80003BBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_80003BC0:
    // 0x80003BC0: nop

    // 0x80003BC4: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80003BC8: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80003BCC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80003BD0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80003BD4: nop

    // 0x80003BD8: sltiu       $at, $a0, 0x2001
    ctx->r1 = ctx->r4 < 0X2001 ? 1 : 0;
    // 0x80003BDC: bne         $at, $zero, L_80003BE8
    if (ctx->r1 != 0) {
        // 0x80003BE0: nop
    
            goto L_80003BE8;
    }
    // 0x80003BE0: nop

    // 0x80003BE4: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
L_80003BE8:
    // 0x80003BE8: jal         0x800039C0
    // 0x80003BEC: nop

    func_800039C0_45C0(rdram, ctx);
        goto after_1;
    // 0x80003BEC: nop

    after_1:
    // 0x80003BF0: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x80003BF4: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x80003BF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80003BFC: b           L_80003C18
    // 0x80003C00: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
        goto L_80003C18;
    // 0x80003C00: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x80003C04: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
L_80003C08:
    // 0x80003C08: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
    // 0x80003C0C: bc1fl       L_80003C1C
    if (!c1cs) {
        // 0x80003C10: lwc1        $f18, 0x34($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
            goto L_80003C1C;
    }
    goto skip_6;
    // 0x80003C10: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    skip_6:
    // 0x80003C14: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
L_80003C18:
    // 0x80003C18: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
L_80003C1C:
    // 0x80003C1C: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
    // 0x80003C20: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80003C24: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80003C28: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80003C2C: bc1fl       L_80003C58
    if (!c1cs) {
        // 0x80003C30: c.lt.s      $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
            goto L_80003C58;
    }
    goto skip_7;
    // 0x80003C30: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    skip_7:
    // 0x80003C34: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x80003C38: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x80003C3C: bc1fl       L_80003C58
    if (!c1cs) {
        // 0x80003C40: c.lt.s      $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
            goto L_80003C58;
    }
    goto skip_8;
    // 0x80003C40: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    skip_8:
    // 0x80003C44: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x80003C48: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x80003C4C: b           L_80003CB4
    // 0x80003C50: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
        goto L_80003CB4;
    // 0x80003C50: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80003C54: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
L_80003C58:
    // 0x80003C58: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80003C5C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80003C60: bc1fl       L_80003C8C
    if (!c1cs) {
        // 0x80003C64: c.le.s      $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
            goto L_80003C8C;
    }
    goto skip_9;
    // 0x80003C64: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    skip_9:
    // 0x80003C68: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80003C6C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80003C70: bc1fl       L_80003C8C
    if (!c1cs) {
        // 0x80003C74: c.le.s      $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
            goto L_80003C8C;
    }
    goto skip_10;
    // 0x80003C74: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    skip_10:
    // 0x80003C78: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80003C7C: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x80003C80: b           L_80003CB4
    // 0x80003C84: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_80003CB4;
    // 0x80003C84: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x80003C88: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
L_80003C8C:
    // 0x80003C8C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80003C90: bc1fl       L_80003CB8
    if (!c1cs) {
        // 0x80003C94: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80003CB8;
    }
    goto skip_11;
    // 0x80003C94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_11:
    // 0x80003C98: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80003C9C: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x80003CA0: bc1fl       L_80003CB8
    if (!c1cs) {
        // 0x80003CA4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80003CB8;
    }
    goto skip_12;
    // 0x80003CA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_12:
    // 0x80003CA8: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x80003CAC: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x80003CB0: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_80003CB4:
    // 0x80003CB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80003CB8:
    // 0x80003CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003CBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80003CC0: jr          $ra
    // 0x80003CC4: nop

    TRACE_RETURN()
    return;
    // 0x80003CC4: nop

;}
RECOMP_FUNC void func_80001640_2240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001640: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80001644: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80001648: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000164C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80001650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80001654: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80001658: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8000165C: jal         0x800406A0
    // 0x80001660: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80001660: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80001664: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80001668: jal         0x80040750
    // 0x8000166C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    osInvalICache_recomp(rdram, ctx);
        goto after_1;
    // 0x8000166C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80001670: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80001674: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x80001678: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000167C: addiu       $t8, $t8, -0x5798
    ctx->r24 = ADD32(ctx->r24, -0X5798);
    // 0x80001680: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80001684: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80001688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000168C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80001690: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80001694: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80001698: jal         0x800407D0
    // 0x8000169C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8000169C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x800016A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800016A4: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    // 0x800016A8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800016AC: jal         0x80040110
    // 0x800016B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800016B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800016B4: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x800016B8: beq         $v1, $zero, L_800016D4
    if (ctx->r3 == 0) {
        // 0x800016BC: addiu       $v0, $zero, 0xFFF
        ctx->r2 = ADD32(0, 0XFFF);
            goto L_800016D4;
    }
    // 0x800016BC: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
L_800016C0:
    // 0x800016C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800016C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800016C8: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x800016CC: bne         $v1, $zero, L_800016C0
    if (ctx->r3 != 0) {
        // 0x800016D0: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_800016C0;
    }
    // 0x800016D0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800016D4:
    // 0x800016D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800016D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800016DC: jr          $ra
    // 0x800016E0: nop

    TRACE_RETURN()
    return;
    // 0x800016E0: nop

;}
RECOMP_FUNC void func_8003F1FC_3FDFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F1FC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F200: lw          $t6, 0x7768($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7768);
    // 0x8003F204: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8003F208: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8003F20C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8003F210: bne         $a0, $t7, L_8003F230
    if (ctx->r4 != ctx->r15) {
        // 0x8003F214: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8003F230;
    }
    // 0x8003F214: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8003F218: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003F21C: lh          $v1, 0x77F0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X77F0);
    // 0x8003F220: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8003F224: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003F228: jr          $ra
    // 0x8003F22C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x8003F22C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8003F230:
    // 0x8003F230: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003F234: jr          $ra
    // 0x8003F238: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x8003F238: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80037080_37C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037080: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80037084: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80037088: jr          $ra
    // 0x8003708C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003708C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80022EC0_23AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80022EC0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80022EC4: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x80022EC8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022ECC: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80022ED0: addiu       $t8, $t8, -0x2F10
    ctx->r24 = ADD32(ctx->r24, -0X2F10);
    // 0x80022ED4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022ED8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022EDC: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80022EE0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022EE4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022EE8: lhu         $a2, 0xE($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0XE);
    // 0x80022EEC: andi        $t9, $a2, 0x10
    ctx->r25 = ctx->r6 & 0X10;
    // 0x80022EF0: beql        $t9, $zero, L_80022FD8
    if (ctx->r25 == 0) {
        // 0x80022EF4: andi        $t9, $a2, 0x20
        ctx->r25 = ctx->r6 & 0X20;
            goto L_80022FD8;
    }
    goto skip_0;
    // 0x80022EF4: andi        $t9, $a2, 0x20
    ctx->r25 = ctx->r6 & 0X20;
    skip_0:
    // 0x80022EF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022EFC: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x80022F00: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80022F04: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80022F08: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80022F0C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80022F10: lbu         $t6, 0x2C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2C);
    // 0x80022F14: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x80022F18: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x80022F1C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80022F20: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80022F24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022F28: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x80022F2C: ori         $t3, $t3, 0x4240
    ctx->r11 = ctx->r11 | 0X4240;
    // 0x80022F30: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80022F34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80022F38: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80022F3C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80022F40: lhu         $t4, 0xE($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XE);
    // 0x80022F44: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x80022F48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80022F4C: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x80022F50: beq         $t5, $zero, L_80022FB4
    if (ctx->r13 == 0) {
        // 0x80022F54: ori         $t7, $t7, 0xFFFF
        ctx->r15 = ctx->r15 | 0XFFFF;
            goto L_80022FB4;
    }
    // 0x80022F54: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x80022F58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022F5C: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x80022F60: lui         $t8, 0xFF2C
    ctx->r24 = S32(0XFF2C << 16);
    // 0x80022F64: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022F68: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022F6C: ori         $t8, $t8, 0xFE7F
    ctx->r24 = ctx->r24 | 0XFE7F;
    // 0x80022F70: ori         $t7, $t7, 0x97FF
    ctx->r15 = ctx->r15 | 0X97FF;
    // 0x80022F74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022F78: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022F7C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022F80: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x80022F84: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    // 0x80022F88: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80022F8C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80022F90: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80022F94: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80022F98: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022F9C: lui         $t5, 0xF900
    ctx->r13 = S32(0XF900 << 16);
    // 0x80022FA0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80022FA4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80022FA8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80022FAC: b           L_80023038
    // 0x80022FB0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_80023038;
    // 0x80022FB0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_80022FB4:
    // 0x80022FB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022FB8: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80022FBC: ori         $t8, $t8, 0xF67B
    ctx->r24 = ctx->r24 | 0XF67B;
    // 0x80022FC0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80022FC4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80022FC8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80022FCC: b           L_80023038
    // 0x80022FD0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80023038;
    // 0x80022FD0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80022FD4: andi        $t9, $a2, 0x20
    ctx->r25 = ctx->r6 & 0X20;
L_80022FD8:
    // 0x80022FD8: beq         $t9, $zero, L_80023038
    if (ctx->r25 == 0) {
        // 0x80022FDC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80023038;
    }
    // 0x80022FDC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80022FE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80022FE4: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x80022FE8: lui         $t5, 0xF0A
    ctx->r13 = S32(0XF0A << 16);
    // 0x80022FEC: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80022FF0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80022FF4: ori         $t5, $t5, 0x7008
    ctx->r13 = ctx->r13 | 0X7008;
    // 0x80022FF8: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x80022FFC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80023000: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80023004: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023008: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8002300C: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x80023010: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80023014: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80023018: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8002301C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80023020: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023024: lui         $t9, 0xF900
    ctx->r25 = S32(0XF900 << 16);
    // 0x80023028: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8002302C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80023030: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80023034: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80023038:
    // 0x80023038: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002303C: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x80023040: ori         $t4, $t4, 0xC02
    ctx->r12 = ctx->r12 | 0XC02;
    // 0x80023044: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80023048: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8002304C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80023050: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80023054: lhu         $a2, 0xE($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0XE);
    // 0x80023058: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    // 0x8002305C: beq         $t5, $zero, L_800231BC
    if (ctx->r13 == 0) {
        // 0x80023060: andi        $t6, $a2, 0x8
        ctx->r14 = ctx->r6 & 0X8;
            goto L_800231BC;
    }
    // 0x80023060: andi        $t6, $a2, 0x8
    ctx->r14 = ctx->r6 & 0X8;
    // 0x80023064: beql        $t6, $zero, L_80023118
    if (ctx->r14 == 0) {
        // 0x80023068: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80023118;
    }
    goto skip_1;
    // 0x80023068: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8002306C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023070: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x80023074: lui         $t4, 0xE800
    ctx->r12 = S32(0XE800 << 16);
    // 0x80023078: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8002307C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80023080: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80023084: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80023088: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8002308C: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x80023090: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80023094: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023098: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8002309C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x800230A0: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800230A4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800230A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800230AC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800230B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800230B4: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x800230B8: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800230BC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800230C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800230C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800230C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800230CC: lui         $t5, 0x73F
    ctx->r13 = S32(0X73F << 16);
    // 0x800230D0: ori         $t5, $t5, 0xC000
    ctx->r13 = ctx->r13 | 0XC000;
    // 0x800230D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800230D8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800230DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800230E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800230E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800230E8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800230EC: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800230F0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800230F4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800230F8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800230FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023100: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80023104: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80023108: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8002310C: jr          $ra
    // 0x80023110: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80023110: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80023114: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80023118:
    // 0x80023118: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8002311C: lui         $t5, 0xE800
    ctx->r13 = S32(0XE800 << 16);
    // 0x80023120: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80023124: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80023128: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8002312C: lw          $t3, 0x3C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X3C);
    // 0x80023130: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x80023134: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80023138: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8002313C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023140: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x80023144: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x80023148: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8002314C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80023150: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80023154: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80023158: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002315C: lui         $t5, 0xF000
    ctx->r13 = S32(0XF000 << 16);
    // 0x80023160: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80023164: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80023168: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8002316C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80023170: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023174: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x80023178: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8002317C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80023180: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80023184: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80023188: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8002318C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023190: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80023194: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80023198: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8002319C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800231A0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800231A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800231A8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800231AC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800231B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800231B4: jr          $ra
    // 0x800231B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x800231B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_800231BC:
    // 0x800231BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800231C0: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x800231C4: ori         $t3, $t3, 0xE02
    ctx->r11 = ctx->r11 | 0XE02;
    // 0x800231C8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800231CC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800231D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800231D4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800231D8: jr          $ra
    // 0x800231DC: nop

    TRACE_RETURN()
    return;
    // 0x800231DC: nop

;}
RECOMP_FUNC void func_8000F178_FD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F178: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000F17C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F180: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000F184: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8000F188: lui         $a1, 0x8006
    ctx->r5 = S32(0X8006 << 16);
    // 0x8000F18C: addiu       $a1, $a1, 0x36E0
    ctx->r5 = ADD32(ctx->r5, 0X36E0);
    // 0x8000F190: beq         $v1, $zero, L_8000F1E0
    if (ctx->r3 == 0) {
        // 0x8000F194: lw          $t0, 0x0($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X0);
            goto L_8000F1E0;
    }
    // 0x8000F194: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8000F198: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x8000F19C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8000F1A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8000F1A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8000F1A8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8000F1AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8000F1B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000F1B4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8000F1B8: jal         0x8000DF10
    // 0x8000F1BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x8000F1BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8000F1C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000F1C4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8000F1C8: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x8000F1CC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8000F1D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8000F1D4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8000F1D8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000F1DC: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
L_8000F1E0:
    // 0x8000F1E0: beq         $t0, $zero, L_8000F224
    if (ctx->r8 == 0) {
        // 0x8000F1E4: lui         $a1, 0x8006
        ctx->r5 = S32(0X8006 << 16);
            goto L_8000F224;
    }
    // 0x8000F1E4: lui         $a1, 0x8006
    ctx->r5 = S32(0X8006 << 16);
    // 0x8000F1E8: lbu         $t2, 0x2F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2F);
    // 0x8000F1EC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8000F1F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8000F1F4: addiu       $a1, $a1, 0x36E0
    ctx->r5 = ADD32(ctx->r5, 0X36E0);
    // 0x8000F1F8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8000F1FC: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x8000F200: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8000F204: jal         0x8000DFA0
    // 0x8000F208: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8000DFA0_EBA0(rdram, ctx);
        goto after_1;
    // 0x8000F208: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x8000F20C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000F210: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8000F214: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x8000F218: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8000F21C: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8000F220: sw          $t4, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r12;
L_8000F224:
    // 0x8000F224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F22C: jr          $ra
    // 0x8000F230: nop

    TRACE_RETURN()
    return;
    // 0x8000F230: nop

;}
RECOMP_FUNC void func_8003996C_3A56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003996C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80039974: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039978: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003997C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80039984: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80039988: lhu         $t7, 0x1E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1E);
    // 0x8003998C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80039990: bne         $a0, $zero, L_800399A8
    if (ctx->r4 != 0) {
        // 0x80039994: sb          $t7, 0x2970($at)
        MEM_B(0X2970, ctx->r1) = ctx->r15;
            goto L_800399A8;
    }
    // 0x80039994: sb          $t7, 0x2970($at)
    MEM_B(0X2970, ctx->r1) = ctx->r15;
    // 0x80039998: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003999C: lw          $t8, 0xC28($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XC28);
    // 0x800399A0: bnel        $t8, $zero, L_80039A64
    if (ctx->r24 != 0) {
        // 0x800399A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80039A64;
    }
    goto skip_0;
    // 0x800399A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_800399A8:
    // 0x800399A8: lhu         $t9, 0x1E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1E);
    // 0x800399AC: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x800399B0: addiu       $t3, $t3, -0xEB4
    ctx->r11 = ADD32(ctx->r11, -0XEB4);
    // 0x800399B4: addiu       $t0, $t9, -0x10
    ctx->r8 = ADD32(ctx->r25, -0X10);
    // 0x800399B8: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x800399BC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800399C0: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x800399C4: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x800399C8: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x800399CC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x800399D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800399D4: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x800399D8: addiu       $a2, $a2, 0x9F0
    ctx->r6 = ADD32(ctx->r6, 0X9F0);
    // 0x800399DC: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x800399E0: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x800399E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800399E8: addiu       $t6, $t6, 0xA28
    ctx->r14 = ADD32(ctx->r14, 0XA28);
    // 0x800399EC: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x800399F0: addiu       $t9, $t9, 0x1730
    ctx->r25 = ADD32(ctx->r25, 0X1730);
    // 0x800399F4: andi        $a3, $t4, 0xFF
    ctx->r7 = ctx->r12 & 0XFF;
    // 0x800399F8: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x800399FC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80039A00: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    // 0x80039A04: blez        $a3, L_80039A3C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80039A08: sb          $t5, 0x3($a2)
        MEM_B(0X3, ctx->r6) = ctx->r13;
            goto L_80039A3C;
    }
    // 0x80039A08: sb          $t5, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r13;
    // 0x80039A0C: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x80039A10: addiu       $v0, $t0, 0xA28
    ctx->r2 = ADD32(ctx->r8, 0XA28);
    // 0x80039A14: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x80039A18: addu        $a1, $t1, $v0
    ctx->r5 = ADD32(ctx->r9, ctx->r2);
    // 0x80039A1C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80039A20:
    // 0x80039A20: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x80039A24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039A28: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80039A2C: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x80039A30: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80039A34: bne         $at, $zero, L_80039A20
    if (ctx->r1 != 0) {
        // 0x80039A38: sw          $t3, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r11;
            goto L_80039A20;
    }
    // 0x80039A38: sw          $t3, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r11;
L_80039A3C:
    // 0x80039A3C: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x80039A40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039A44: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x80039A48: sw          $t4, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = ctx->r12;
    // 0x80039A4C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80039A50: sb          $zero, 0x1($a2)
    MEM_B(0X1, ctx->r6) = 0;
    // 0x80039A54: sb          $t5, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r13;
    // 0x80039A58: jal         0x80039A70
    // 0x80039A5C: sb          $t6, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r14;
    func_80039A70_3A670(rdram, ctx);
        goto after_0;
    // 0x80039A5C: sb          $t6, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r14;
    after_0:
    // 0x80039A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039A64:
    // 0x80039A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039A68: jr          $ra
    // 0x80039A6C: nop

    TRACE_RETURN()
    return;
    // 0x80039A6C: nop

;}
RECOMP_FUNC void func_8003C498_3D098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C498: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003C49C: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003C4A0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003C4A4: lbu         $t6, 0x7D($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7D);
    // 0x8003C4A8: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x8003C4AC: lw          $t1, 0x80($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X80);
    // 0x8003C4B0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8003C4B4: divu        $zero, $t7, $t8
    lo = S32(U32(ctx->r15) / U32(ctx->r24)); hi = S32(U32(ctx->r15) % U32(ctx->r24));
    // 0x8003C4B8: mflo        $v0
    ctx->r2 = lo;
    // 0x8003C4BC: lw          $t2, 0x28($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X28);
    // 0x8003C4C0: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8003C4C4: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
    // 0x8003C4C8: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x8003C4CC: subu        $a0, $t1, $t2
    ctx->r4 = SUB32(ctx->r9, ctx->r10);
    // 0x8003C4D0: div         $zero, $a0, $t0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r8)));
    // 0x8003C4D4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8003C4D8: mflo        $t3
    ctx->r11 = lo;
    // 0x8003C4DC: sw          $t3, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r11;
    // 0x8003C4E0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003C4E4: bne         $t8, $zero, L_8003C4F0
    if (ctx->r24 != 0) {
        // 0x8003C4E8: nop
    
            goto L_8003C4F0;
    }
    // 0x8003C4E8: nop

    // 0x8003C4EC: break       7
    do_break(2147730668);
L_8003C4F0:
    // 0x8003C4F0: lw          $a1, 0x84($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X84);
    // 0x8003C4F4: bne         $v0, $zero, L_8003C500
    if (ctx->r2 != 0) {
        // 0x8003C4F8: nop
    
            goto L_8003C500;
    }
    // 0x8003C4F8: nop

    // 0x8003C4FC: break       7
    do_break(2147730684);
L_8003C500:
    // 0x8003C500: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C504: bne         $v0, $at, L_8003C518
    if (ctx->r2 != ctx->r1) {
        // 0x8003C508: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C518;
    }
    // 0x8003C508: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C50C: bne         $a0, $at, L_8003C518
    if (ctx->r4 != ctx->r1) {
        // 0x8003C510: nop
    
            goto L_8003C518;
    }
    // 0x8003C510: nop

    // 0x8003C514: break       6
    do_break(2147730708);
L_8003C518:
    // 0x8003C518: bne         $a1, $zero, L_8003C538
    if (ctx->r5 != 0) {
        // 0x8003C51C: nop
    
            goto L_8003C538;
    }
    // 0x8003C51C: nop

    // 0x8003C520: bgez        $a0, L_8003C534
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8003C524: addiu       $t5, $a1, 0x1
        ctx->r13 = ADD32(ctx->r5, 0X1);
            goto L_8003C534;
    }
    // 0x8003C524: addiu       $t5, $a1, 0x1
    ctx->r13 = ADD32(ctx->r5, 0X1);
    // 0x8003C528: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x8003C52C: jr          $ra
    // 0x8003C530: sw          $t4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x8003C530: sw          $t4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r12;
L_8003C534:
    // 0x8003C534: sw          $t5, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r13;
L_8003C538:
    // 0x8003C538: jr          $ra
    // 0x8003C53C: nop

    TRACE_RETURN()
    return;
    // 0x8003C53C: nop

;}
RECOMP_FUNC void func_8003ED60_3F960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003ED60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003ED64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ED68: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003ED6C: lw          $a0, 0x785C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X785C);
    // 0x8003ED70: jal         0x8003F038
    // 0x8003ED74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003F038_3FC38(rdram, ctx);
        goto after_0;
    // 0x8003ED74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8003ED78: beq         $v0, $zero, L_8003EFA0
    if (ctx->r2 == 0) {
        // 0x8003ED7C: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8003EFA0;
    }
    // 0x8003ED7C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8003ED80: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8003ED84: beql        $v0, $zero, L_8003EFA4
    if (ctx->r2 == 0) {
        // 0x8003ED88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EFA4;
    }
    goto skip_0;
    // 0x8003ED88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003ED8C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003ED90: beql        $t6, $zero, L_8003EFA4
    if (ctx->r14 == 0) {
        // 0x8003ED94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EFA4;
    }
    goto skip_1;
    // 0x8003ED94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8003ED98: lh          $t7, 0x30($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X30);
    // 0x8003ED9C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003EDA0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8003EDA4: bne         $t7, $at, L_8003EFA0
    if (ctx->r15 != ctx->r1) {
        // 0x8003EDA8: addiu       $a2, $a2, -0x3A34
        ctx->r6 = ADD32(ctx->r6, -0X3A34);
            goto L_8003EFA0;
    }
    // 0x8003EDA8: addiu       $a2, $a2, -0x3A34
    ctx->r6 = ADD32(ctx->r6, -0X3A34);
    // 0x8003EDAC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EDB0: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003EDB4: addiu       $t6, $t6, 0x77F0
    ctx->r14 = ADD32(ctx->r14, 0X77F0);
    // 0x8003EDB8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8003EDBC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8003EDC0: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8003EDC4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EDC8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8003EDCC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EDD0: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8003EDD4: ori         $t8, $t8, 0xE02
    ctx->r24 = ctx->r24 | 0XE02;
    // 0x8003EDD8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8003EDDC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8003EDE0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EDE4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8003EDE8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EDEC: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x8003EDF0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003EDF4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8003EDF8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8003EDFC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003EE00: lw          $a0, 0x785C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X785C);
    // 0x8003EE04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003EE08: jal         0x8003F038
    // 0x8003EE0C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8003F038_3FC38(rdram, ctx);
        goto after_1;
    // 0x8003EE0C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8003EE10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003EE14: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8003EE18: addiu       $a2, $a2, -0x3A34
    ctx->r6 = ADD32(ctx->r6, -0X3A34);
    // 0x8003EE1C: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x8003EE20: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EE24: lui         $t9, 0x705
    ctx->r25 = S32(0X705 << 16);
    // 0x8003EE28: ori         $t9, $t9, 0x4150
    ctx->r25 = ctx->r25 | 0X4150;
    // 0x8003EE2C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8003EE30: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8003EE34: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x8003EE38: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EE3C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8003EE40: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EE44: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8003EE48: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8003EE4C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8003EE50: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8003EE54: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8003EE58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003EE5C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EE60: lui         $t6, 0x73F
    ctx->r14 = S32(0X73F << 16);
    // 0x8003EE64: ori         $t6, $t6, 0xF100
    ctx->r14 = ctx->r14 | 0XF100;
    // 0x8003EE68: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8003EE6C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8003EE70: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8003EE74: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EE78: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EE7C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8003EE80: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x8003EE84: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8003EE88: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8003EE8C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8003EE90: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003EE94: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EE98: lui         $t7, 0x5
    ctx->r15 = S32(0X5 << 16);
    // 0x8003EE9C: ori         $t7, $t7, 0x4150
    ctx->r15 = ctx->r15 | 0X4150;
    // 0x8003EEA0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8003EEA4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8003EEA8: ori         $t6, $t6, 0x1000
    ctx->r14 = ctx->r14 | 0X1000;
    // 0x8003EEAC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003EEB0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8003EEB4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EEB8: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x8003EEBC: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x8003EEC0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8003EEC4: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8003EEC8: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8003EECC: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8003EED0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EED4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8003EED8: lw          $t3, 0x7758($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7758);
    // 0x8003EEDC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EEE0: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8003EEE4: addiu       $t3, $t3, 0xF
    ctx->r11 = ADD32(ctx->r11, 0XF);
    // 0x8003EEE8: lw          $t4, 0x775C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X775C);
    // 0x8003EEEC: addiu       $t8, $t3, 0x1F
    ctx->r24 = ADD32(ctx->r11, 0X1F);
    // 0x8003EEF0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003EEF4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8003EEF8: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8003EEFC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8003EF00: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8003EF04: addiu       $t4, $t4, 0x1E
    ctx->r12 = ADD32(ctx->r12, 0X1E);
    // 0x8003EF08: addiu       $t9, $t4, 0x1F
    ctx->r25 = ADD32(ctx->r12, 0X1F);
    // 0x8003EF0C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8003EF10: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8003EF14: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8003EF18: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8003EF1C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8003EF20: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8003EF24: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8003EF28: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003EF2C: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x8003EF30: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8003EF34: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8003EF38: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8003EF3C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8003EF40: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003EF44: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8003EF48: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003EF4C: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x8003EF50: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8003EF54: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8003EF58: lw          $t6, 0x785C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X785C);
    // 0x8003EF5C: lui         $t9, 0xB300
    ctx->r25 = S32(0XB300 << 16);
    // 0x8003EF60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003EF64: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x8003EF68: beq         $t8, $zero, L_8003EF78
    if (ctx->r24 == 0) {
        // 0x8003EF6C: nop
    
            goto L_8003EF78;
    }
    // 0x8003EF6C: nop

    // 0x8003EF70: b           L_8003EF78
    // 0x8003EF74: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
        goto L_8003EF78;
    // 0x8003EF74: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
L_8003EF78:
    // 0x8003EF78: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8003EF7C: ori         $t6, $t7, 0x400
    ctx->r14 = ctx->r15 | 0X400;
    // 0x8003EF80: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8003EF84: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003EF88: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x8003EF8C: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x8003EF90: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8003EF94: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8003EF98: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8003EF9C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_8003EFA0:
    // 0x8003EFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EFA4:
    // 0x8003EFA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003EFA8: jr          $ra
    // 0x8003EFAC: nop

    TRACE_RETURN()
    return;
    // 0x8003EFAC: nop

;}
RECOMP_FUNC void func_80015F58_16B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015F60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80015F64: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80015F68: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80015F6C: beq         $a1, $at, L_80015F7C
    if (ctx->r5 == ctx->r1) {
        // 0x80015F70: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80015F7C;
    }
    // 0x80015F70: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80015F74: bne         $a1, $at, L_80015FC4
    if (ctx->r5 != ctx->r1) {
        // 0x80015F78: nop
    
            goto L_80015FC4;
    }
    // 0x80015F78: nop

L_80015F7C:
    // 0x80015F7C: jal         0x80014CC4
    // 0x80015F80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x80015F80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80015F84: bne         $v0, $zero, L_80015FA8
    if (ctx->r2 != 0) {
        // 0x80015F88: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_80015FA8;
    }
    // 0x80015F88: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80015F8C: jal         0x80014CC4
    // 0x80015F90: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015F90: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_1:
    // 0x80015F94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80015F98: jal         0x8001605C
    // 0x80015F9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001605C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80015F9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80015FA0: b           L_80015FD0
    // 0x80015FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80015FD0;
    // 0x80015FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80015FA8:
    // 0x80015FA8: jal         0x80014CC4
    // 0x80015FAC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80014CC4_158C4(rdram, ctx);
        goto after_3;
    // 0x80015FAC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x80015FB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80015FB4: jal         0x80016120
    // 0x80015FB8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80016120_16D20(rdram, ctx);
        goto after_4;
    // 0x80015FB8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80015FBC: b           L_80015FD0
    // 0x80015FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80015FD0;
    // 0x80015FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80015FC4:
    // 0x80015FC4: jal         0x80014CC4
    // 0x80015FC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80014CC4_158C4(rdram, ctx);
        goto after_5;
    // 0x80015FC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
    // 0x80015FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80015FD0:
    // 0x80015FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015FD4: jr          $ra
    // 0x80015FD8: nop

    TRACE_RETURN()
    return;
    // 0x80015FD8: nop

;}
RECOMP_FUNC void func_800240DC_24CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800240DC: bgez        $a0, L_800240EC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800240E0: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_800240EC;
    }
    // 0x800240E0: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x800240E4: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x800240E8: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_800240EC:
    // 0x800240EC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800240F0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800240F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800240F8: lbu         $t8, -0x39F8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X39F8);
    // 0x800240FC: bgez        $a0, L_80024110
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80024100: andi        $t9, $a0, 0x7
        ctx->r25 = ctx->r4 & 0X7;
            goto L_80024110;
    }
    // 0x80024100: andi        $t9, $a0, 0x7
    ctx->r25 = ctx->r4 & 0X7;
    // 0x80024104: beq         $t9, $zero, L_80024110
    if (ctx->r25 == 0) {
        // 0x80024108: nop
    
            goto L_80024110;
    }
    // 0x80024108: nop

    // 0x8002410C: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80024110:
    // 0x80024110: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80024114: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80024118: sllv        $t3, $t1, $t0
    ctx->r11 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x8002411C: and         $v0, $t8, $t3
    ctx->r2 = ctx->r24 & ctx->r11;
    // 0x80024120: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80024124: jr          $ra
    // 0x80024128: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    TRACE_RETURN()
    return;
    // 0x80024128: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_80002AB8_36B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002AB8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80002ABC: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80002AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002AC4: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x80002AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002ACC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80002AD0: lbu         $a0, -0x522A($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X522A);
    // 0x80002AD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80002AD8: beq         $a0, $zero, L_80002B00
    if (ctx->r4 == 0) {
        // 0x80002ADC: nop
    
            goto L_80002B00;
    }
    // 0x80002ADC: nop

    // 0x80002AE0: beq         $a0, $at, L_80002B58
    if (ctx->r4 == ctx->r1) {
        // 0x80002AE4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80002B58;
    }
    // 0x80002AE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80002AE8: beq         $a0, $at, L_80002B98
    if (ctx->r4 == ctx->r1) {
        // 0x80002AEC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80002B98;
    }
    // 0x80002AEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80002AF0: beq         $a0, $at, L_80002BE8
    if (ctx->r4 == ctx->r1) {
        // 0x80002AF4: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_80002BE8;
    }
    // 0x80002AF4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002AF8: b           L_80002C70
    // 0x80002AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002C70;
    // 0x80002AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002B00:
    // 0x80002B00: jal         0x8000383C
    // 0x80002B04: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80002B04: nop

    after_0:
    // 0x80002B08: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002B0C: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    // 0x80002B10: jal         0x80001C00
    // 0x80002B14: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x80002B14: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x80002B18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80002B1C: beq         $v0, $zero, L_80002B34
    if (ctx->r2 == 0) {
        // 0x80002B20: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_80002B34;
    }
    // 0x80002B20: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
L_80002B24:
    // 0x80002B24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80002B28: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80002B2C: bne         $t6, $zero, L_80002B24
    if (ctx->r14 != 0) {
        // 0x80002B30: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80002B24;
    }
    // 0x80002B30: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80002B34:
    // 0x80002B34: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80002B38: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80002B3C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002B40: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80002B44: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80002B48: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80002B4C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80002B50: b           L_80002C6C
    // 0x80002B54: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
        goto L_80002C6C;
    // 0x80002B54: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
L_80002B58:
    // 0x80002B58: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002B5C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80002B60: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80002B64: sh          $zero, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = 0;
    // 0x80002B68: jal         0x8003488C
    // 0x80002B6C: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    func_8003488C_3548C(rdram, ctx);
        goto after_2;
    // 0x80002B6C: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    after_2:
    // 0x80002B70: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80002B74: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80002B78: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x80002B7C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002B80: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80002B84: lbu         $t9, -0x522A($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X522A);
    // 0x80002B88: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80002B8C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80002B90: b           L_80002C6C
    // 0x80002B94: sb          $t0, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r8;
        goto L_80002C6C;
    // 0x80002B94: sb          $t0, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r8;
L_80002B98:
    // 0x80002B98: jal         0x80034734
    // 0x80002B9C: nop

    func_80034734_35334(rdram, ctx);
        goto after_3;
    // 0x80002B9C: nop

    after_3:
    // 0x80002BA0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002BA4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002BA8: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002BAC: lbu         $t1, 0x2DD6($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2DD6);
    // 0x80002BB0: beql        $t1, $zero, L_80002C70
    if (ctx->r9 == 0) {
        // 0x80002BB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002C70;
    }
    goto skip_0;
    // 0x80002BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002BB8: jal         0x80038BC8
    // 0x80002BBC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x80002BBC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x80002BC0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80002BC4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80002BC8: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x80002BCC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002BD0: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x80002BD4: lbu         $t2, -0x522A($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X522A);
    // 0x80002BD8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80002BDC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80002BE0: b           L_80002C6C
    // 0x80002BE4: sb          $t3, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r11;
        goto L_80002C6C;
    // 0x80002BE4: sb          $t3, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r11;
L_80002BE8:
    // 0x80002BE8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002BEC: addiu       $t4, $v1, 0x7FFF
    ctx->r12 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002BF0: lbu         $t4, 0x2DD6($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2DD6);
    // 0x80002BF4: beql        $t4, $zero, L_80002C70
    if (ctx->r12 == 0) {
        // 0x80002BF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002C70;
    }
    goto skip_1;
    // 0x80002BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80002BFC: jal         0x8000383C
    // 0x80002C00: nop

    func_8000383C_443C(rdram, ctx);
        goto after_5;
    // 0x80002C00: nop

    after_5:
    // 0x80002C04: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002C08: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002C0C: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002C10: lbu         $v0, 0x2DD6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DD6);
    // 0x80002C14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80002C18: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x80002C1C: bne         $v0, $at, L_80002C38
    if (ctx->r2 != ctx->r1) {
        // 0x80002C20: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_80002C38;
    }
    // 0x80002C20: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80002C24: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002C28: jal         0x80003728
    // 0x80002C2C: sh          $t5, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r13;
    func_80003728_4328(rdram, ctx);
        goto after_6;
    // 0x80002C2C: sh          $t5, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r13;
    after_6:
    // 0x80002C30: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80002C34: lbu         $v0, 0x7A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7A95);
L_80002C38:
    // 0x80002C38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80002C3C: bne         $v0, $at, L_80002C6C
    if (ctx->r2 != ctx->r1) {
        // 0x80002C40: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_80002C6C;
    }
    // 0x80002C40: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80002C44: lhu         $t6, -0x37F4($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X37F4);
    // 0x80002C48: addiu       $at, $zero, 0x1D1
    ctx->r1 = ADD32(0, 0X1D1);
    // 0x80002C4C: bne         $t6, $at, L_80002C64
    if (ctx->r14 != ctx->r1) {
        // 0x80002C50: nop
    
            goto L_80002C64;
    }
    // 0x80002C50: nop

    // 0x80002C54: jal         0x80003728
    // 0x80002C58: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80003728_4328(rdram, ctx);
        goto after_7;
    // 0x80002C58: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_7:
    // 0x80002C5C: b           L_80002C70
    // 0x80002C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002C70;
    // 0x80002C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002C64:
    // 0x80002C64: jal         0x80003728
    // 0x80002C68: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80003728_4328(rdram, ctx);
        goto after_8;
    // 0x80002C68: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_8:
L_80002C6C:
    // 0x80002C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002C70:
    // 0x80002C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002C74: jr          $ra
    // 0x80002C78: nop

    TRACE_RETURN()
    return;
    // 0x80002C78: nop

;}
RECOMP_FUNC void alEnvmixerPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005020C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80050210: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80050214: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80050218: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005021C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80050220: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80050224: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80050228: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005022C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80050230: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80050234: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80050238: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005023C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80050240: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80050244: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80050248: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8005024C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80050250: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80050254: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x80050258: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x8005025C: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x80050260: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x80050264: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x80050268: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8005026C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80050270: beql        $t8, $zero, L_800506E4
    if (ctx->r24 == 0) {
        // 0x80050274: or          $s3, $fp, $zero
        ctx->r19 = ctx->r30 | 0;
            goto L_800506E4;
    }
    goto skip_0;
    // 0x80050274: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    skip_0:
    // 0x80050278: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_8005027C:
    // 0x8005027C: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x80050280: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x80050284: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80050288: subu        $t7, $t9, $v0
    ctx->r15 = SUB32(ctx->r25, ctx->r2);
    // 0x8005028C: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80050290: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x80050294: bne         $at, $zero, L_800506E0
    if (ctx->r1 != 0) {
        // 0x80050298: sw          $t9, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r25;
            goto L_800506E0;
    }
    // 0x80050298: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x8005029C: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x800502A0: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
    // 0x800502A4: beq         $at, $zero, L_80050658
    if (ctx->r1 == 0) {
        // 0x800502A8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80050658;
    }
    // 0x800502A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800502AC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800502B0: addu        $at, $at, $t9
    gpr jr_addend_800502B8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800502B4: lw          $t9, -0x2B20($at)
    ctx->r25 = ADD32(ctx->r1, -0X2B20);
    // 0x800502B8: jr          $t9
    // 0x800502BC: nop

    switch (jr_addend_800502B8 >> 2) {
        case 0: goto L_80050638; break;
        case 1: goto L_80050658; break;
        case 2: goto L_80050658; break;
        case 3: goto L_80050658; break;
        case 4: goto L_80050658; break;
        case 5: goto L_80050658; break;
        case 6: goto L_80050658; break;
        case 7: goto L_80050658; break;
        case 8: goto L_80050658; break;
        case 9: goto L_80050658; break;
        case 10: goto L_80050658; break;
        case 11: goto L_80050400; break;
        case 12: goto L_80050400; break;
        case 13: goto L_800502C0; break;
        case 14: goto L_800505A4; break;
        case 15: goto L_800505F8; break;
        case 16: goto L_80050400; break;
        default: switch_error(__func__, 0x800502B8, 0x8007D4E0);
    }
    // 0x800502BC: nop

L_800502C0:
    // 0x800502C0: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x800502C4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800502C8: beql        $t6, $zero, L_800502E8
    if (ctx->r14 == 0) {
        // 0x800502CC: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_800502E8;
    }
    goto skip_1;
    // 0x800502CC: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_1:
    // 0x800502D0: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x800502D4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800502D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800502DC: jalr        $t9
    // 0x800502E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800502E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800502E4: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_800502E8:
    // 0x800502E8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800502EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800502F0: jalr        $t9
    // 0x800502F4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800502F4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x800502F8: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x800502FC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80050300: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80050304: jalr        $t9
    // 0x80050308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80050308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8005030C: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
    // 0x80050310: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x80050314: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80050318: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x8005031C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x80050320: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050324: mflo        $a0
    ctx->r4 = lo;
    // 0x80050328: sra         $t7, $a0, 15
    ctx->r15 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8005032C: sh          $t7, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r15;
    // 0x80050330: lbu         $t6, 0x12($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X12);
    // 0x80050334: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80050338: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x8005033C: lbu         $t9, 0x13($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13);
    // 0x80050340: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80050344: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80050348: lh          $t7, -0x5B10($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5B10);
    // 0x8005034C: sh          $t7, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r15;
    // 0x80050350: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x80050354: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80050358: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8005035C: negu        $t8, $t9
    ctx->r24 = SUB32(0, ctx->r25);
    // 0x80050360: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80050364: lh          $t7, -0x5A12($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5A12);
    // 0x80050368: sh          $t7, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r15;
    // 0x8005036C: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80050370: beql        $t6, $zero, L_80050388
    if (ctx->r14 == 0) {
        // 0x80050374: lh          $v0, 0x18($fp)
        ctx->r2 = MEM_H(ctx->r30, 0X18);
            goto L_80050388;
    }
    goto skip_2;
    // 0x80050374: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    skip_2:
    // 0x80050378: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8005037C: b           L_800503CC
    // 0x80050380: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
        goto L_800503CC;
    // 0x80050380: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x80050384: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
L_80050388:
    // 0x80050388: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8005038C: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x80050390: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80050394: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80050398: lh          $t8, -0x5B10($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5B10);
    // 0x8005039C: negu        $t9, $t9
    ctx->r25 = SUB32(0, ctx->r25);
    // 0x800503A0: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800503A4: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x800503A8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800503AC: mflo        $t7
    ctx->r15 = lo;
    // 0x800503B0: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x800503B4: sh          $t6, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r14;
    // 0x800503B8: lh          $t8, -0x5A12($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5A12);
    // 0x800503BC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800503C0: mflo        $t7
    ctx->r15 = lo;
    // 0x800503C4: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x800503C8: sh          $t6, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r14;
L_800503CC:
    // 0x800503CC: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x800503D0: beql        $t9, $zero, L_80050698
    if (ctx->r25 == 0) {
        // 0x800503D4: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_80050698;
    }
    goto skip_3;
    // 0x800503D4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    skip_3:
    // 0x800503D8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x800503DC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x800503E0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x800503E4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x800503E8: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x800503EC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800503F0: jalr        $t9
    // 0x800503F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800503F4: nop

    after_3:
    // 0x800503F8: b           L_80050698
    // 0x800503FC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_80050698;
    // 0x800503FC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80050400:
    // 0x80050400: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x80050404: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80050408: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8005040C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80050410: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80050414: jal         0x8004FEC4
    // 0x80050418: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    _pullSubFrame(rdram, ctx);
        goto after_4;
    // 0x80050418: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_4:
    // 0x8005041C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80050420: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80050424: lw          $a3, 0x30($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X30);
    // 0x80050428: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8005042C: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80050430: bnel        $at, $zero, L_8005049C
    if (ctx->r1 != 0) {
        // 0x80050434: lh          $t6, 0x1C($fp)
        ctx->r14 = MEM_H(ctx->r30, 0X1C);
            goto L_8005049C;
    }
    goto skip_4;
    // 0x80050434: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
    skip_4:
    // 0x80050438: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    // 0x8005043C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80050440: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x80050444: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80050448: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8005044C: lh          $t7, -0x5B10($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5B10);
    // 0x80050450: negu        $t8, $t8
    ctx->r24 = SUB32(0, ctx->r24);
    // 0x80050454: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050458: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8005045C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80050460: mflo        $t6
    ctx->r14 = lo;
    // 0x80050464: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80050468: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x8005046C: lh          $t7, -0x5A12($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5A12);
    // 0x80050470: lh          $t8, 0x28($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X28);
    // 0x80050474: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x80050478: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005047C: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x80050480: mflo        $t6
    ctx->r14 = lo;
    // 0x80050484: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80050488: sh          $t9, 0x2E($fp)
    MEM_H(0X2E, ctx->r30) = ctx->r25;
    // 0x8005048C: lh          $t7, 0x2E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X2E);
    // 0x80050490: b           L_800504EC
    // 0x80050494: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
        goto L_800504EC;
    // 0x80050494: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
    // 0x80050498: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
L_8005049C:
    // 0x8005049C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800504A0: lh          $a1, 0x26($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X26);
    // 0x800504A4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800504A8: lhu         $a2, 0x24($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X24);
    // 0x800504AC: jal         0x8005015C
    // 0x800504B0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    _getVol(rdram, ctx);
        goto after_5;
    // 0x800504B0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x800504B4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800504B8: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    // 0x800504BC: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    // 0x800504C0: lh          $a1, 0x2C($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X2C);
    // 0x800504C4: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x800504C8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800504CC: lhu         $a2, 0x2A($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X2A);
    // 0x800504D0: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x800504D4: jal         0x8005015C
    // 0x800504D8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    _getVol(rdram, ctx);
        goto after_6;
    // 0x800504D8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x800504DC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800504E0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x800504E4: nop

    // 0x800504E8: sh          $t9, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r25;
L_800504EC:
    // 0x800504EC: lh          $t8, 0x1C($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X1C);
    // 0x800504F0: bnel        $t8, $zero, L_80050500
    if (ctx->r24 != 0) {
        // 0x800504F4: lh          $t7, 0x1E($fp)
        ctx->r15 = MEM_H(ctx->r30, 0X1E);
            goto L_80050500;
    }
    goto skip_5;
    // 0x800504F4: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    skip_5:
    // 0x800504F8: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x800504FC: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
L_80050500:
    // 0x80050500: bnel        $t7, $zero, L_80050510
    if (ctx->r15 != 0) {
        // 0x80050504: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_80050510;
    }
    goto skip_6;
    // 0x80050504: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_6:
    // 0x80050508: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x8005050C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_80050510:
    // 0x80050510: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80050514: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x80050518: bnel        $a0, $at, L_80050530
    if (ctx->r4 != ctx->r1) {
        // 0x8005051C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80050530;
    }
    goto skip_7;
    // 0x8005051C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_7:
    // 0x80050520: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x80050524: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x80050528: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8005052C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80050530:
    // 0x80050530: bnel        $a0, $at, L_80050560
    if (ctx->r4 != ctx->r1) {
        // 0x80050534: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80050560;
    }
    goto skip_8;
    // 0x80050534: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x80050538: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x8005053C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80050540: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050544: mflo        $v0
    ctx->r2 = lo;
    // 0x80050548: sra         $t9, $v0, 15
    ctx->r25 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8005054C: sh          $t9, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r25;
    // 0x80050550: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x80050554: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x80050558: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8005055C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_80050560:
    // 0x80050560: bne         $a0, $at, L_8005059C
    if (ctx->r4 != ctx->r1) {
        // 0x80050564: nop
    
            goto L_8005059C;
    }
    // 0x80050564: nop

    // 0x80050568: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8005056C: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80050570: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x80050574: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80050578: lh          $t9, -0x5B10($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5B10);
    // 0x8005057C: sh          $t9, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r25;
    // 0x80050580: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x80050584: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80050588: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8005058C: negu        $t6, $t7
    ctx->r14 = SUB32(0, ctx->r15);
    // 0x80050590: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80050594: lh          $t9, -0x5A12($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5A12);
    // 0x80050598: sh          $t9, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r25;
L_8005059C:
    // 0x8005059C: b           L_80050694
    // 0x800505A0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
        goto L_80050694;
    // 0x800505A0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
L_800505A4:
    // 0x800505A4: lh          $t8, 0xA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA);
    // 0x800505A8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800505AC: beql        $t8, $zero, L_800505CC
    if (ctx->r24 == 0) {
        // 0x800505B0: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_800505CC;
    }
    goto skip_9;
    // 0x800505B0: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_9:
    // 0x800505B4: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x800505B8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800505BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800505C0: jalr        $t9
    // 0x800505C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x800505C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800505C8: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_800505CC:
    // 0x800505CC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800505D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800505D4: jalr        $t9
    // 0x800505D8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x800505D8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x800505DC: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x800505E0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800505E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800505E8: jalr        $t9
    // 0x800505EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x800505EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800505F0: b           L_80050698
    // 0x800505F4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_80050698;
    // 0x800505F4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_800505F8:
    // 0x800505F8: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x800505FC: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80050600: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x80050604: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80050608: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8005060C: jal         0x8004FEC4
    // 0x80050610: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    _pullSubFrame(rdram, ctx);
        goto after_10;
    // 0x80050610: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_10:
    // 0x80050614: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80050618: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8005061C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80050620: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80050624: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80050628: jalr        $t9
    // 0x8005062C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8005062C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80050630: b           L_80050698
    // 0x80050634: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_80050698;
    // 0x80050634: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80050638:
    // 0x80050638: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8005063C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80050640: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    // 0x80050644: sw          $zero, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = 0;
    // 0x80050648: jal         0x800478B0
    // 0x8005064C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    _freePVoice(rdram, ctx);
        goto after_12;
    // 0x8005064C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_12:
    // 0x80050650: b           L_80050698
    // 0x80050654: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_80050698;
    // 0x80050654: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80050658:
    // 0x80050658: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8005065C: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80050660: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x80050664: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80050668: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8005066C: jal         0x8004FEC4
    // 0x80050670: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    _pullSubFrame(rdram, ctx);
        goto after_13;
    // 0x80050670: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_13:
    // 0x80050674: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80050678: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8005067C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    // 0x80050680: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80050684: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80050688: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x8005068C: jalr        $t9
    // 0x80050690: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80050690: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    after_14:
L_80050694:
    // 0x80050694: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80050698:
    // 0x80050698: lh          $t6, 0x8E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8E);
    // 0x8005069C: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800506A0: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x800506A4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x800506A8: sh          $t9, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r25;
    // 0x800506AC: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x800506B0: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x800506B4: lw          $a0, 0x3C($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X3C);
    // 0x800506B8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x800506BC: bne         $t9, $zero, L_800506C8
    if (ctx->r25 != 0) {
        // 0x800506C0: sw          $t9, 0x3C($fp)
        MEM_W(0X3C, ctx->r30) = ctx->r25;
            goto L_800506C8;
    }
    // 0x800506C0: sw          $t9, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r25;
    // 0x800506C4: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
L_800506C8:
    // 0x800506C8: jal         0x80047948
    // 0x800506CC: nop

    __freeParam(rdram, ctx);
        goto after_15;
    // 0x800506CC: nop

    after_15:
    // 0x800506D0: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x800506D4: lw          $t7, 0x3C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X3C);
    // 0x800506D8: bnel        $t7, $zero, L_8005027C
    if (ctx->r15 != 0) {
        // 0x800506DC: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_8005027C;
    }
    goto skip_10;
    // 0x800506DC: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_10:
L_800506E0:
    // 0x800506E0: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
L_800506E4:
    // 0x800506E4: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x800506E8: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x800506EC: lw          $s5, 0xB0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB0);
    // 0x800506F0: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x800506F4: jal         0x8004FEC4
    // 0x800506F8: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    _pullSubFrame(rdram, ctx);
        goto after_16;
    // 0x800506F8: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_16:
    // 0x800506FC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80050700: lw          $t9, 0x30($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X30);
    // 0x80050704: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80050708: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8005070C: beql        $at, $zero, L_8005071C
    if (ctx->r1 == 0) {
        // 0x80050710: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8005071C;
    }
    goto skip_11;
    // 0x80050710: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_11:
    // 0x80050714: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x80050718: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8005071C:
    // 0x8005071C: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x80050720: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80050724: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80050728: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005072C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80050730: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80050734: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80050738: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005073C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80050740: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80050744: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80050748: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005074C: jr          $ra
    // 0x80050750: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80050750: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_800125D0_131D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800125D0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800125D4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800125D8: sb          $a1, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r5;
    // 0x800125DC: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    // 0x800125E0: swc1        $f14, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f14.u32l;
    // 0x800125E4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800125E8: jr          $ra
    // 0x800125EC: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800125EC: swc1        $f4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800215D0_221D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800215D0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800215D4: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x800215D8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800215DC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x800215E0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x800215E4: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x800215E8: lhu         $v0, 0x3094($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X3094);
    // 0x800215EC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800215F0: addiu       $t0, $t0, -0x3A34
    ctx->r8 = ADD32(ctx->r8, -0X3A34);
    // 0x800215F4: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x800215F8: beq         $t8, $zero, L_80021614
    if (ctx->r24 == 0) {
        // 0x800215FC: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80021614;
    }
    // 0x800215FC: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80021600: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80021604: lw          $v1, -0x2E98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E98);
    // 0x80021608: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8002160C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80021610: sw          $v1, -0x2E98($at)
    MEM_W(-0X2E98, ctx->r1) = ctx->r3;
L_80021614:
    // 0x80021614: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80021618: beq         $t9, $zero, L_80021624
    if (ctx->r25 == 0) {
        // 0x8002161C: lw          $v1, -0x2E98($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X2E98);
            goto L_80021624;
    }
    // 0x8002161C: lw          $v1, -0x2E98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2E98);
    // 0x80021620: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80021624:
    // 0x80021624: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80021628: sw          $v1, -0x2E9C($at)
    MEM_W(-0X2E9C, ctx->r1) = ctx->r3;
    // 0x8002162C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80021630: lui         $t2, 0xFF10
    ctx->r10 = S32(0XFF10 << 16);
    // 0x80021634: ori         $t2, $t2, 0x13F
    ctx->r10 = ctx->r10 | 0X13F;
    // 0x80021638: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x8002163C: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x80021640: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80021644: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x80021648: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002164C: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80021650: addu        $t4, $t3, $a3
    ctx->r12 = ADD32(ctx->r11, ctx->r7);
    // 0x80021654: lh          $t5, 0x2DB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2DB0);
    // 0x80021658: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x8002165C: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x80021660: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80021664: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80021668: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002166C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80021670: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021674: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80021678: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x8002167C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80021680: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80021684: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x80021688: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8002168C: addiu       $t3, $t3, -0x2F10
    ctx->r11 = ADD32(ctx->r11, -0X2F10);
    // 0x80021690: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80021694: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x80021698: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8002169C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800216A0: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x800216A4: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x800216A8: jr          $ra
    // 0x800216AC: sw          $v1, -0x2E98($at)
    MEM_W(-0X2E98, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x800216AC: sw          $v1, -0x2E98($at)
    MEM_W(-0X2E98, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void bzero_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049480: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80049484: bne         $at, $zero, L_800494FC
    if (ctx->r1 != 0) {
        // 0x80049488: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_800494FC;
    }
    // 0x80049488: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8004948C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80049490: beq         $v1, $zero, L_800494A0
    if (ctx->r3 == 0) {
        // 0x80049494: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_800494A0;
    }
    // 0x80049494: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80049498: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8004949C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_800494A0:
    // 0x800494A0: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x800494A4: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x800494A8: beq         $a3, $zero, L_800494DC
    if (ctx->r7 == 0) {
        // 0x800494AC: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_800494DC;
    }
    // 0x800494AC: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x800494B0: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_800494B4:
    // 0x800494B4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x800494B8: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x800494BC: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x800494C0: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x800494C4: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x800494C8: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x800494CC: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x800494D0: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x800494D4: bne         $a0, $a3, L_800494B4
    if (ctx->r4 != ctx->r7) {
        // 0x800494D8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_800494B4;
    }
    // 0x800494D8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_800494DC:
    // 0x800494DC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800494E0: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x800494E4: beq         $a3, $zero, L_800494FC
    if (ctx->r7 == 0) {
        // 0x800494E8: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_800494FC;
    }
    // 0x800494E8: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x800494EC: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_800494F0:
    // 0x800494F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800494F4: bne         $a0, $a3, L_800494F0
    if (ctx->r4 != ctx->r7) {
        // 0x800494F8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_800494F0;
    }
    // 0x800494F8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_800494FC:
    // 0x800494FC: blez        $a1, L_80049514
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80049500: nop
    
            goto L_80049514;
    }
    // 0x80049500: nop

    // 0x80049504: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_80049508:
    // 0x80049508: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8004950C: bne         $a0, $a1, L_80049508
    if (ctx->r4 != ctx->r5) {
        // 0x80049510: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_80049508;
    }
    // 0x80049510: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_80049514:
    // 0x80049514: jr          $ra
    // 0x80049518: nop

    TRACE_RETURN()
    return;
    // 0x80049518: nop

;}
RECOMP_FUNC void func_80035D84_36984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035D84: jr          $ra
    // 0x80035D88: nop

    TRACE_RETURN()
    return;
    // 0x80035D88: nop

;}
RECOMP_FUNC void func_8000B864_C464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B864: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000B868: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x8000B86C: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x8000B870: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x8000B874: sw          $t6, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r14;
    // 0x8000B878: jr          $ra
    // 0x8000B87C: sw          $t7, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8000B87C: sw          $t7, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void alSynStartVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004880C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80048810: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80048814: beql        $t6, $zero, L_80048880
    if (ctx->r14 == 0) {
        // 0x80048818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048880;
    }
    goto skip_0;
    // 0x80048818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8004881C: jal         0x80047960
    // 0x80048820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80048820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80048824: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80048828: beq         $v0, $zero, L_8004887C
    if (ctx->r2 == 0) {
        // 0x8004882C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004887C;
    }
    // 0x8004882C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80048830: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80048834: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80048838: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x8004883C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80048840: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80048844: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80048848: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8004884C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80048850: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80048854: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80048858: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004885C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80048860: lh          $t4, 0x1A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X1A);
    // 0x80048864: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
    // 0x80048868: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    // 0x8004886C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x80048870: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80048874: jalr        $t9
    // 0x80048878: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80048878: nop

    after_1:
L_8004887C:
    // 0x8004887C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048880:
    // 0x80048880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048884: jr          $ra
    // 0x80048888: nop

    TRACE_RETURN()
    return;
    // 0x80048888: nop

;}
RECOMP_FUNC void func_8003DDC4_3E9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DDC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003DDC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003DDCC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003DDD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003DDD4: jal         0x800141C4
    // 0x8003DDD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8003DDD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8003DDDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003DDE0: bne         $v0, $at, L_8003DE10
    if (ctx->r2 != ctx->r1) {
        // 0x8003DDE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8003DE10;
    }
    // 0x8003DDE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003DDE8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003DDEC: jal         0x80013B14
    // 0x8003DDF0: lhu         $a0, 0x78EA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X78EA);
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x8003DDF0: lhu         $a0, 0x78EA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X78EA);
    after_1:
    // 0x8003DDF4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003DDF8: jal         0x8003CFA0
    // 0x8003DDFC: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    func_8003CFA0_3DBA0(rdram, ctx);
        goto after_2;
    // 0x8003DDFC: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    after_2:
    // 0x8003DE00: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003DE04: jal         0x800141C4
    // 0x8003DE08: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x8003DE08: lw          $a0, 0x78E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78E8);
    after_3:
    // 0x8003DE0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8003DE10:
    // 0x8003DE10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8003DE14: jal         0x80001E50
    // 0x8003DE18: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80001E50_2A50(rdram, ctx);
        goto after_4;
    // 0x8003DE18: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x8003DE1C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DE20: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8003DE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003DE28: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x8003DE2C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8003DE30: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x8003DE34: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x8003DE38: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8003DE3C: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8003DE40: jr          $ra
    // 0x8003DE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003DE44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002BDEC_2C9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BDEC: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x8002BDF0: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8002BDF4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8002BDF8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002BDFC: lw          $v1, -0x70A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X70A0);
    // 0x8002BE00: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8002BE04: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8002BE08: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8002BE0C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8002BE10: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002BE14: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002BE18: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8002BE1C: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8002BE20: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8002BE24: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8002BE28: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8002BE2C: sw          $a0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r4;
    // 0x8002BE30: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x8002BE34: sw          $a2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r6;
    // 0x8002BE38: sw          $a3, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r7;
    // 0x8002BE3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002BE40: sh          $zero, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = 0;
    // 0x8002BE44: swc1        $f28, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f28.u32l;
    // 0x8002BE48: swc1        $f28, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f28.u32l;
    // 0x8002BE4C: bne         $v1, $zero, L_8002BE8C
    if (ctx->r3 != 0) {
        // 0x8002BE50: swc1        $f28, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->f28.u32l;
            goto L_8002BE8C;
    }
    // 0x8002BE50: swc1        $f28, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f28.u32l;
    // 0x8002BE54: addiu       $t7, $sp, 0xD4
    ctx->r15 = ADD32(ctx->r29, 0XD4);
    // 0x8002BE58: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x8002BE5C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
L_8002BE60:
    // 0x8002BE60: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8002BE64: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002BE68: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002BE6C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8002BE70: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8002BE74: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8002BE78: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8002BE7C: bne         $t7, $t9, L_8002BE60
    if (ctx->r15 != ctx->r25) {
        // 0x8002BE80: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8002BE60;
    }
    // 0x8002BE80: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8002BE84: b           L_8002C99C
    // 0x8002BE88: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_8002C99C;
    // 0x8002BE88: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002BE8C:
    // 0x8002BE8C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BE90: lwc1        $f4, -0x3C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3C80);
    // 0x8002BE94: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002BE98: lwc1        $f6, -0x3C7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3C7C);
    // 0x8002BE9C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8002BEA0: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x8002BEA4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8002BEA8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8002BEAC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8002BEB0: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x8002BEB4: lw          $a3, -0x709C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X709C);
    // 0x8002BEB8: lwc1        $f30, 0x1A4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x8002BEBC: lwc1        $f12, 0x1A8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x8002BEC0: lwc1        $f2, 0x1AC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002BEC4: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x8002BEC8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8002BECC: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8002BED0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x8002BED4: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8002BED8: swc1        $f6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f6.u32l;
L_8002BEDC:
    // 0x8002BEDC: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BEE0: lwc1        $f18, 0x1B0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002BEE4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002BEE8: c.lt.s      $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x8002BEEC: mflo        $t8
    ctx->r24 = lo;
    // 0x8002BEF0: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x8002BEF4: bc1f        L_8002BF28
    if (!c1cs) {
        // 0x8002BEF8: lhu         $a1, 0x0($v1)
        ctx->r5 = MEM_HU(ctx->r3, 0X0);
            goto L_8002BF28;
    }
    // 0x8002BEF8: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x8002BEFC: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BF00: mflo        $t9
    ctx->r25 = lo;
    // 0x8002BF04: addu        $t7, $a3, $t9
    ctx->r15 = ADD32(ctx->r7, ctx->r25);
    // 0x8002BF08: lh          $t6, 0x6($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X6);
    // 0x8002BF0C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002BF10: nop

    // 0x8002BF14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002BF18: c.lt.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl < ctx->f30.fl;
    // 0x8002BF1C: nop

    // 0x8002BF20: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002BF24: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_0;
    // 0x8002BF24: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_0:
L_8002BF28:
    // 0x8002BF28: c.lt.s      $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f18.fl < ctx->f28.fl;
    // 0x8002BF2C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8002BF30: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x8002BF34: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8002BF38: bc1f        L_8002BF60
    if (!c1cs) {
        // 0x8002BF3C: addu        $a0, $a3, $t8
        ctx->r4 = ADD32(ctx->r7, ctx->r24);
            goto L_8002BF60;
    }
    // 0x8002BF3C: addu        $a0, $a3, $t8
    ctx->r4 = ADD32(ctx->r7, ctx->r24);
    // 0x8002BF40: lh          $t9, 0xC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC);
    // 0x8002BF44: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002BF48: nop

    // 0x8002BF4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002BF50: c.lt.s      $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f30.fl < ctx->f6.fl;
    // 0x8002BF54: nop

    // 0x8002BF58: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002BF5C: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_1;
    // 0x8002BF5C: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_1:
L_8002BF60:
    // 0x8002BF60: lh          $t7, 0xC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XC);
    // 0x8002BF64: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002BF68: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002BF6C: nop

    // 0x8002BF70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002BF74: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8002BF78: c.lt.s      $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f30.fl < ctx->f4.fl;
    // 0x8002BF7C: nop

    // 0x8002BF80: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002BF84: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_2;
    // 0x8002BF84: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_2:
    // 0x8002BF88: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x8002BF8C: lwc1        $f16, 0x1B8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002BF90: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002BF94: nop

    // 0x8002BF98: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002BF9C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8002BFA0: c.lt.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl < ctx->f30.fl;
    // 0x8002BFA4: nop

    // 0x8002BFA8: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002BFAC: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_3;
    // 0x8002BFAC: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_3:
    // 0x8002BFB0: c.lt.s      $f28, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f28.fl < ctx->f16.fl;
    // 0x8002BFB4: nop

    // 0x8002BFB8: bc1fl       L_8002BFE4
    if (!c1cs) {
        // 0x8002BFBC: c.lt.s      $f16, $f28
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
            goto L_8002BFE4;
    }
    goto skip_4;
    // 0x8002BFBC: c.lt.s      $f16, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
    skip_4:
    // 0x8002BFC0: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x8002BFC4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002BFC8: nop

    // 0x8002BFCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002BFD0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8002BFD4: nop

    // 0x8002BFD8: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002BFDC: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_5;
    // 0x8002BFDC: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_5:
    // 0x8002BFE0: c.lt.s      $f16, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
L_8002BFE4:
    // 0x8002BFE4: nop

    // 0x8002BFE8: bc1fl       L_8002C014
    if (!c1cs) {
        // 0x8002BFEC: lh          $t7, 0x10($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X10);
            goto L_8002C014;
    }
    goto skip_6;
    // 0x8002BFEC: lh          $t7, 0x10($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X10);
    skip_6:
    // 0x8002BFF0: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x8002BFF4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8002BFF8: nop

    // 0x8002BFFC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002C000: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8002C004: nop

    // 0x8002C008: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C00C: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_7;
    // 0x8002C00C: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_7:
    // 0x8002C010: lh          $t7, 0x10($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X10);
L_8002C014:
    // 0x8002C014: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002C018: nop

    // 0x8002C01C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002C020: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8002C024: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8002C028: nop

    // 0x8002C02C: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C030: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_8;
    // 0x8002C030: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_8:
    // 0x8002C034: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x8002C038: lwc1        $f14, 0x1B4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C03C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002C040: nop

    // 0x8002C044: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002C048: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8002C04C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8002C050: nop

    // 0x8002C054: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C058: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_9;
    // 0x8002C058: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_9:
    // 0x8002C05C: c.lt.s      $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f28.fl < ctx->f14.fl;
    // 0x8002C060: nop

    // 0x8002C064: bc1fl       L_8002C090
    if (!c1cs) {
        // 0x8002C068: c.lt.s      $f14, $f28
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
            goto L_8002C090;
    }
    goto skip_10;
    // 0x8002C068: c.lt.s      $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
    skip_10:
    // 0x8002C06C: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x8002C070: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002C074: nop

    // 0x8002C078: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002C07C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8002C080: nop

    // 0x8002C084: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C088: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_11;
    // 0x8002C088: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_11:
    // 0x8002C08C: c.lt.s      $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
L_8002C090:
    // 0x8002C090: nop

    // 0x8002C094: bc1fl       L_8002C0C0
    if (!c1cs) {
        // 0x8002C098: lh          $t7, 0xE($a0)
        ctx->r15 = MEM_H(ctx->r4, 0XE);
            goto L_8002C0C0;
    }
    goto skip_12;
    // 0x8002C098: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    skip_12:
    // 0x8002C09C: lh          $t9, 0xE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE);
    // 0x8002C0A0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002C0A4: nop

    // 0x8002C0A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002C0AC: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8002C0B0: nop

    // 0x8002C0B4: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C0B8: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_13;
    // 0x8002C0B8: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_13:
    // 0x8002C0BC: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
L_8002C0C0:
    // 0x8002C0C0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002C0C4: nop

    // 0x8002C0C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002C0CC: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8002C0D0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002C0D4: nop

    // 0x8002C0D8: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C0DC: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_14;
    // 0x8002C0DC: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_14:
    // 0x8002C0E0: swc1        $f2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f2.u32l;
    // 0x8002C0E4: swc1        $f12, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f12.u32l;
    // 0x8002C0E8: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8002C0EC: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x8002C0F0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002C0F4: nop

    // 0x8002C0F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C0FC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8002C100: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002C104: nop

    // 0x8002C108: bc1fl       L_8002C390
    if (!c1cs) {
        // 0x8002C10C: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8002C390;
    }
    goto skip_15;
    // 0x8002C10C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_15:
    // 0x8002C110: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
L_8002C114:
    // 0x8002C114: lwc1        $f14, 0x1B4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C118: bne         $t4, $a1, L_8002C158
    if (ctx->r12 != ctx->r5) {
        // 0x8002C11C: lwc1        $f16, 0x1B8($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
            goto L_8002C158;
    }
    // 0x8002C11C: lwc1        $f16, 0x1B8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002C120: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x8002C124: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x8002C128: lw          $t8, 0x1A0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A0);
L_8002C12C:
    // 0x8002C12C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002C130: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002C134: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002C138: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002C13C: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002C140: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002C144: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002C148: bne         $t9, $t6, L_8002C12C
    if (ctx->r25 != ctx->r14) {
        // 0x8002C14C: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002C12C;
    }
    // 0x8002C14C: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8002C150: b           L_8002C99C
    // 0x8002C154: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_8002C99C;
    // 0x8002C154: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002C158:
    // 0x8002C158: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002C15C: c.lt.s      $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x8002C160: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002C164: mflo        $t7
    ctx->r15 = lo;
    // 0x8002C168: addu        $t6, $a3, $t7
    ctx->r14 = ADD32(ctx->r7, ctx->r15);
    // 0x8002C16C: bc1f        L_8002C1A0
    if (!c1cs) {
        // 0x8002C170: lhu         $a1, 0x0($t6)
        ctx->r5 = MEM_HU(ctx->r14, 0X0);
            goto L_8002C1A0;
    }
    // 0x8002C170: lhu         $a1, 0x0($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X0);
    // 0x8002C174: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002C178: mflo        $t9
    ctx->r25 = lo;
    // 0x8002C17C: addu        $t8, $a3, $t9
    ctx->r24 = ADD32(ctx->r7, ctx->r25);
    // 0x8002C180: lh          $t7, 0x6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X6);
    // 0x8002C184: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8002C188: nop

    // 0x8002C18C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C190: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x8002C194: nop

    // 0x8002C198: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C19C: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_16;
    // 0x8002C19C: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_16:
L_8002C1A0:
    // 0x8002C1A0: c.lt.s      $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f18.fl < ctx->f28.fl;
    // 0x8002C1A4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002C1A8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002C1AC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002C1B0: addu        $a0, $a3, $t6
    ctx->r4 = ADD32(ctx->r7, ctx->r14);
    // 0x8002C1B4: bc1f        L_8002C1DC
    if (!c1cs) {
        // 0x8002C1B8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8002C1DC;
    }
    // 0x8002C1B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8002C1BC: lh          $t9, 0xC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XC);
    // 0x8002C1C0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002C1C4: nop

    // 0x8002C1C8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002C1CC: c.lt.s      $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f30.fl < ctx->f4.fl;
    // 0x8002C1D0: nop

    // 0x8002C1D4: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C1D8: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_17;
    // 0x8002C1D8: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_17:
L_8002C1DC:
    // 0x8002C1DC: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    // 0x8002C1E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002C1E4: nop

    // 0x8002C1E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C1EC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8002C1F0: c.lt.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl < ctx->f10.fl;
    // 0x8002C1F4: nop

    // 0x8002C1F8: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C1FC: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_18;
    // 0x8002C1FC: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_18:
    // 0x8002C200: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8002C204: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002C208: nop

    // 0x8002C20C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002C210: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8002C214: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x8002C218: nop

    // 0x8002C21C: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C220: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_19;
    // 0x8002C220: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_19:
    // 0x8002C224: c.lt.s      $f28, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f28.fl < ctx->f16.fl;
    // 0x8002C228: nop

    // 0x8002C22C: bc1fl       L_8002C258
    if (!c1cs) {
        // 0x8002C230: c.lt.s      $f16, $f28
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
            goto L_8002C258;
    }
    goto skip_20;
    // 0x8002C230: c.lt.s      $f16, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
    skip_20:
    // 0x8002C234: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x8002C238: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8002C23C: nop

    // 0x8002C240: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002C244: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8002C248: nop

    // 0x8002C24C: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C250: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_21;
    // 0x8002C250: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_21:
    // 0x8002C254: c.lt.s      $f16, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f16.fl < ctx->f28.fl;
L_8002C258:
    // 0x8002C258: nop

    // 0x8002C25C: bc1fl       L_8002C288
    if (!c1cs) {
        // 0x8002C260: lh          $t8, 0x10($a0)
        ctx->r24 = MEM_H(ctx->r4, 0X10);
            goto L_8002C288;
    }
    goto skip_22;
    // 0x8002C260: lh          $t8, 0x10($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X10);
    skip_22:
    // 0x8002C264: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x8002C268: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002C26C: nop

    // 0x8002C270: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C274: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8002C278: nop

    // 0x8002C27C: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C280: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_23;
    // 0x8002C280: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_23:
    // 0x8002C284: lh          $t8, 0x10($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X10);
L_8002C288:
    // 0x8002C288: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002C28C: nop

    // 0x8002C290: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002C294: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8002C298: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8002C29C: nop

    // 0x8002C2A0: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C2A4: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_24;
    // 0x8002C2A4: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_24:
    // 0x8002C2A8: lh          $t7, 0xA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA);
    // 0x8002C2AC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002C2B0: nop

    // 0x8002C2B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002C2B8: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8002C2BC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8002C2C0: nop

    // 0x8002C2C4: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C2C8: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_25;
    // 0x8002C2C8: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_25:
    // 0x8002C2CC: c.lt.s      $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f28.fl < ctx->f14.fl;
    // 0x8002C2D0: nop

    // 0x8002C2D4: bc1fl       L_8002C300
    if (!c1cs) {
        // 0x8002C2D8: c.lt.s      $f14, $f28
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
            goto L_8002C300;
    }
    goto skip_26;
    // 0x8002C2D8: c.lt.s      $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
    skip_26:
    // 0x8002C2DC: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8002C2E0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002C2E4: nop

    // 0x8002C2E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C2EC: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8002C2F0: nop

    // 0x8002C2F4: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C2F8: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_27;
    // 0x8002C2F8: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_27:
    // 0x8002C2FC: c.lt.s      $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f14.fl < ctx->f28.fl;
L_8002C300:
    // 0x8002C300: nop

    // 0x8002C304: bc1fl       L_8002C330
    if (!c1cs) {
        // 0x8002C308: lh          $t8, 0xE($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XE);
            goto L_8002C330;
    }
    goto skip_28;
    // 0x8002C308: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    skip_28:
    // 0x8002C30C: lh          $t9, 0xE($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE);
    // 0x8002C310: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8002C314: nop

    // 0x8002C318: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002C31C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8002C320: nop

    // 0x8002C324: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C328: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_29;
    // 0x8002C328: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_29:
    // 0x8002C32C: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
L_8002C330:
    // 0x8002C330: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8002C334: nop

    // 0x8002C338: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002C33C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8002C340: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8002C344: nop

    // 0x8002C348: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C34C: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_30;
    // 0x8002C34C: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_30:
    // 0x8002C350: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8002C354: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002C358: nop

    // 0x8002C35C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002C360: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8002C364: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8002C368: nop

    // 0x8002C36C: bc1tl       L_8002C114
    if (c1cs) {
        // 0x8002C370: lwc1        $f0, 0x1BC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
            goto L_8002C114;
    }
    goto skip_31;
    // 0x8002C370: lwc1        $f0, 0x1BC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1BC);
    skip_31:
    // 0x8002C374: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002C378: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002C37C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002C380: addu        $v1, $a3, $t6
    ctx->r3 = ADD32(ctx->r7, ctx->r14);
    // 0x8002C384: swc1        $f2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f2.u32l;
    // 0x8002C388: swc1        $f12, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f12.u32l;
    // 0x8002C38C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8002C390:
    // 0x8002C390: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8002C394: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002C398: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x8002C39C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002C3A0: addiu       $v0, $s2, 0x3
    ctx->r2 = ADD32(ctx->r18, 0X3);
    // 0x8002C3A4: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8002C3A8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8002C3AC: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x8002C3B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002C3B4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8002C3B8: sh          $t9, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r25;
    // 0x8002C3BC: swc1        $f10, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f10.u32l;
L_8002C3C0:
    // 0x8002C3C0: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002C3C4: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002C3C8: mflo        $t7
    ctx->r15 = lo;
    // 0x8002C3CC: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x8002C3D0: lhu         $s2, 0x0($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X0);
    // 0x8002C3D4: multu       $s2, $s0
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002C3D8: mflo        $t6
    ctx->r14 = lo;
    // 0x8002C3DC: addu        $s3, $s1, $t6
    ctx->r19 = ADD32(ctx->r17, ctx->r14);
    // 0x8002C3E0: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8002C3E4: lwc1        $f16, 0x4($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8002C3E8: lwc1        $f18, 0x8($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8002C3EC: mul.s       $f4, $f30, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f14.fl);
    // 0x8002C3F0: lwc1        $f20, 0xC($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8002C3F4: lbu         $s4, 0x10($s3)
    ctx->r20 = MEM_BU(ctx->r19, 0X10);
    // 0x8002C3F8: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8002C3FC: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8002C400: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x8002C404: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8002C408: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8002C40C: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002C410: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8002C414: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C418: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x8002C41C: beq         $s4, $zero, L_8002C438
    if (ctx->r20 == 0) {
        // 0x8002C420: mov.s       $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
            goto L_8002C438;
    }
    // 0x8002C420: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x8002C424: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C428: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x8002C42C: nop

    // 0x8002C430: bc1fl       L_8002C5BC
    if (!c1cs) {
        // 0x8002C434: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002C5BC;
    }
    goto skip_32;
    // 0x8002C434: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_32:
L_8002C438:
    // 0x8002C438: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8002C43C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002C440: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8002C444: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002C448: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8002C44C: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8002C450: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002C454: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x8002C458: c.eq.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d == ctx->f8.d;
    // 0x8002C45C: nop

    // 0x8002C460: bc1fl       L_8002C478
    if (!c1cs) {
        // 0x8002C464: neg.s       $f4, $f20
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
            goto L_8002C478;
    }
    goto skip_33;
    // 0x8002C464: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    skip_33:
    // 0x8002C468: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8002C46C: b           L_8002C480
    // 0x8002C470: nop

        goto L_8002C480;
    // 0x8002C470: nop

    // 0x8002C474: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
L_8002C478:
    // 0x8002C478: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8002C47C: div.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
L_8002C480:
    // 0x8002C480: bne         $s5, $zero, L_8002C578
    if (ctx->r21 != 0) {
        // 0x8002C484: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8002C578;
    }
    // 0x8002C484: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C488: ldc1        $f10, -0x3C78($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3C78);
    // 0x8002C48C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C490: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C494: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x8002C498: nop

    // 0x8002C49C: bc1f        L_8002C4F8
    if (!c1cs) {
        // 0x8002C4A0: nop
    
            goto L_8002C4F8;
    }
    // 0x8002C4A0: nop

    // 0x8002C4A4: ldc1        $f8, -0x3C70($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3C70);
    // 0x8002C4A8: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002C4AC: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C4B0: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x8002C4B4: nop

    // 0x8002C4B8: bc1f        L_8002C4F8
    if (!c1cs) {
        // 0x8002C4BC: nop
    
            goto L_8002C4F8;
    }
    // 0x8002C4BC: nop

    // 0x8002C4C0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002C4C4: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002C4C8: mov.s       $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    ctx->f2.fl = ctx->f28.fl;
    // 0x8002C4CC: add.s       $f6, $f30, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f30.fl + ctx->f4.fl;
    // 0x8002C4D0: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8002C4D4: nop

    // 0x8002C4D8: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8002C4DC: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8002C4E0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8002C4E4: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002C4E8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002C4EC: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8002C4F0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002C4F4: add.s       $f24, $f10, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f20.fl;
L_8002C4F8:
    // 0x8002C4F8: beql        $a2, $zero, L_8002C57C
    if (ctx->r6 == 0) {
        // 0x8002C4FC: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_34;
    // 0x8002C4FC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_34:
    // 0x8002C500: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C504: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x8002C508: c.eq.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d == ctx->f8.d;
    // 0x8002C50C: nop

    // 0x8002C510: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C514: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_35;
    // 0x8002C514: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_35:
    // 0x8002C518: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002C51C: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002C520: c.le.d      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.d <= ctx->f22.d;
    // 0x8002C524: nop

    // 0x8002C528: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C52C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_36;
    // 0x8002C52C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_36:
    // 0x8002C530: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    // 0x8002C534: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002C538: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C53C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_37;
    // 0x8002C53C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_37:
    // 0x8002C540: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x8002C544: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002C548: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C54C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_38;
    // 0x8002C54C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_38:
    // 0x8002C550: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x8002C554: lwc1        $f6, 0x148($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8002C558: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C55C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_39;
    // 0x8002C55C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_39:
    // 0x8002C560: c.eq.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl == ctx->f20.fl;
    // 0x8002C564: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002C568: bc1fl       L_8002C57C
    if (!c1cs) {
        // 0x8002C56C: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_8002C57C;
    }
    goto skip_40;
    // 0x8002C56C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_40:
    // 0x8002C570: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002C574: nop

L_8002C578:
    // 0x8002C578: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
L_8002C57C:
    // 0x8002C57C: c.lt.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d < ctx->f10.d;
    // 0x8002C580: nop

    // 0x8002C584: bc1fl       L_8002C5BC
    if (!c1cs) {
        // 0x8002C588: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002C5BC;
    }
    goto skip_41;
    // 0x8002C588: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_41:
    // 0x8002C58C: c.le.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl <= ctx->f26.fl;
    // 0x8002C590: nop

    // 0x8002C594: bc1fl       L_8002C5BC
    if (!c1cs) {
        // 0x8002C598: cvt.d.s     $f8, $f24
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
            goto L_8002C5BC;
    }
    goto skip_42;
    // 0x8002C598: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    skip_42:
    // 0x8002C59C: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
    // 0x8002C5A0: swc1        $f14, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f14.u32l;
    // 0x8002C5A4: swc1        $f16, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f16.u32l;
    // 0x8002C5A8: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x8002C5AC: swc1        $f20, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f20.u32l;
    // 0x8002C5B0: swc1        $f24, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f24.u32l;
    // 0x8002C5B4: andi        $t2, $s4, 0xFF
    ctx->r10 = ctx->r20 & 0XFF;
    // 0x8002C5B8: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
L_8002C5BC:
    // 0x8002C5BC: c.lt.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d < ctx->f8.d;
    // 0x8002C5C0: nop

    // 0x8002C5C4: bc1fl       L_8002C878
    if (!c1cs) {
        // 0x8002C5C8: lh          $s2, 0x2($v1)
        ctx->r18 = MEM_H(ctx->r3, 0X2);
            goto L_8002C878;
    }
    goto skip_43;
    // 0x8002C5C8: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    skip_43:
    // 0x8002C5CC: lh          $s2, 0x4($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X4);
    // 0x8002C5D0: lwc1        $f4, 0x1BC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x8002C5D4: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002C5D8: bne         $s2, $zero, L_8002C86C
    if (ctx->r18 != 0) {
        // 0x8002C5DC: lwc1        $f10, 0x16C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
            goto L_8002C86C;
    }
    // 0x8002C5DC: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002C5E0: c.lt.s      $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f26.fl < ctx->f4.fl;
    // 0x8002C5E4: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x8002C5E8: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x8002C5EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C5F0: bc1f        L_8002C80C
    if (!c1cs) {
        // 0x8002C5F4: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8002C80C;
    }
    // 0x8002C5F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002C5F8: mul.s       $f2, $f6, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8002C5FC: swc1        $f10, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
    // 0x8002C600: lwc1        $f10, 0x158($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8002C604: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8002C608: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002C60C: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x8002C610: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8002C614: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x8002C618: swc1        $f10, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f10.u32l;
    // 0x8002C61C: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x8002C620: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    // 0x8002C624: bc1f        L_8002C638
    if (!c1cs) {
        // 0x8002C628: swc1        $f4, 0x14C($sp)
        MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
            goto L_8002C638;
    }
    // 0x8002C628: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C62C: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8002C630: b           L_8002C640
    // 0x8002C634: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002C640;
    // 0x8002C634: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_8002C638:
    // 0x8002C638: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8002C63C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002C640:
    // 0x8002C640: ldc1        $f4, -0x3C68($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3C68);
    // 0x8002C644: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002C648: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002C64C: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x8002C650: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C654: bc1f        L_8002C698
    if (!c1cs) {
        // 0x8002C658: nop
    
            goto L_8002C698;
    }
    // 0x8002C658: nop

    // 0x8002C65C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8002C660: c.eq.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d == ctx->f10.d;
    // 0x8002C664: nop

    // 0x8002C668: bc1t        L_8002C698
    if (c1cs) {
        // 0x8002C66C: nop
    
            goto L_8002C698;
    }
    // 0x8002C66C: nop

    // 0x8002C670: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C674: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C678: c.le.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d <= ctx->f8.d;
    // 0x8002C67C: nop

    // 0x8002C680: bc1f        L_8002C694
    if (!c1cs) {
        // 0x8002C684: nop
    
            goto L_8002C694;
    }
    // 0x8002C684: nop

    // 0x8002C688: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C68C: b           L_8002C698
    // 0x8002C690: lwc1        $f16, -0x3C60($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C60);
        goto L_8002C698;
    // 0x8002C690: lwc1        $f16, -0x3C60($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C60);
L_8002C694:
    // 0x8002C694: lwc1        $f16, -0x3C5C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3C5C);
L_8002C698:
    // 0x8002C698: mul.s       $f2, $f4, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8002C69C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C6A0: add.s       $f30, $f16, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x8002C6A4: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x8002C6A8: nop

    // 0x8002C6AC: bc1fl       L_8002C6C4
    if (!c1cs) {
        // 0x8002C6B0: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_8002C6C4;
    }
    goto skip_44;
    // 0x8002C6B0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_44:
    // 0x8002C6B4: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x8002C6B8: b           L_8002C6C8
    // 0x8002C6BC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002C6C8;
    // 0x8002C6BC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8002C6C0: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_8002C6C4:
    // 0x8002C6C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002C6C8:
    // 0x8002C6C8: ldc1        $f10, -0x3C58($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3C58);
    // 0x8002C6CC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002C6D0: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x8002C6D4: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x8002C6D8: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002C6DC: bc1f        L_8002C720
    if (!c1cs) {
        // 0x8002C6E0: nop
    
            goto L_8002C720;
    }
    // 0x8002C6E0: nop

    // 0x8002C6E4: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8002C6E8: c.eq.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d == ctx->f4.d;
    // 0x8002C6EC: nop

    // 0x8002C6F0: bc1t        L_8002C720
    if (c1cs) {
        // 0x8002C6F4: nop
    
            goto L_8002C720;
    }
    // 0x8002C6F4: nop

    // 0x8002C6F8: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C6FC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C700: c.le.d      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.d <= ctx->f6.d;
    // 0x8002C704: nop

    // 0x8002C708: bc1f        L_8002C71C
    if (!c1cs) {
        // 0x8002C70C: nop
    
            goto L_8002C71C;
    }
    // 0x8002C70C: nop

    // 0x8002C710: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C714: b           L_8002C720
    // 0x8002C718: lwc1        $f14, -0x3C50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C50);
        goto L_8002C720;
    // 0x8002C718: lwc1        $f14, -0x3C50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C50);
L_8002C71C:
    // 0x8002C71C: lwc1        $f14, -0x3C4C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X3C4C);
L_8002C720:
    // 0x8002C720: mul.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8002C724: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C728: lwc1        $f6, 0x1B8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x8002C72C: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x8002C730: nop

    // 0x8002C734: bc1fl       L_8002C74C
    if (!c1cs) {
        // 0x8002C738: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8002C74C;
    }
    goto skip_45;
    // 0x8002C738: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_45:
    // 0x8002C73C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8002C740: b           L_8002C750
    // 0x8002C744: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8002C750;
    // 0x8002C744: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8002C748: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_8002C74C:
    // 0x8002C74C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8002C750:
    // 0x8002C750: ldc1        $f4, -0x3C48($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3C48);
    // 0x8002C754: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8002C758: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8002C75C: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x8002C760: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002C764: bc1fl       L_8002C7AC
    if (!c1cs) {
        // 0x8002C768: lwc1        $f10, 0x138($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
            goto L_8002C7AC;
    }
    goto skip_46;
    // 0x8002C768: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    skip_46:
    // 0x8002C76C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8002C770: c.eq.d      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.d == ctx->f10.d;
    // 0x8002C774: nop

    // 0x8002C778: bc1tl       L_8002C7AC
    if (c1cs) {
        // 0x8002C77C: lwc1        $f10, 0x138($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
            goto L_8002C7AC;
    }
    goto skip_47;
    // 0x8002C77C: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    skip_47:
    // 0x8002C780: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C784: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C788: c.le.d      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.d <= ctx->f8.d;
    // 0x8002C78C: nop

    // 0x8002C790: bc1f        L_8002C7A4
    if (!c1cs) {
        // 0x8002C794: nop
    
            goto L_8002C7A4;
    }
    // 0x8002C794: nop

    // 0x8002C798: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002C79C: b           L_8002C7A8
    // 0x8002C7A0: lwc1        $f12, -0x3C40($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C40);
        goto L_8002C7A8;
    // 0x8002C7A0: lwc1        $f12, -0x3C40($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C40);
L_8002C7A4:
    // 0x8002C7A4: lwc1        $f12, -0x3C3C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3C3C);
L_8002C7A8:
    // 0x8002C7A8: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
L_8002C7AC:
    // 0x8002C7AC: add.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x8002C7B0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002C7B4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8002C7B8: add.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x8002C7BC: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x8002C7C0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8002C7C4: bne         $t9, $zero, L_8002C3C0
    if (ctx->r25 != 0) {
        // 0x8002C7C8: swc1        $f8, 0x138($sp)
        MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
            goto L_8002C3C0;
    }
    // 0x8002C7C8: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x8002C7CC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8002C7D0: sh          $t8, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r24;
    // 0x8002C7D4: addiu       $t6, $sp, 0xD4
    ctx->r14 = ADD32(ctx->r29, 0XD4);
    // 0x8002C7D8: addiu       $t8, $t6, 0x48
    ctx->r24 = ADD32(ctx->r14, 0X48);
    // 0x8002C7DC: lw          $t7, 0x1A0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A0);
L_8002C7E0:
    // 0x8002C7E0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8002C7E4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002C7E8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002C7EC: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x8002C7F0: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8002C7F4: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002C7F8: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002C7FC: bne         $t6, $t8, L_8002C7E0
    if (ctx->r14 != ctx->r24) {
        // 0x8002C800: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8002C7E0;
    }
    // 0x8002C800: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8002C804: b           L_8002C99C
    // 0x8002C808: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_8002C99C;
    // 0x8002C808: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002C80C:
    // 0x8002C80C: bne         $t4, $a1, L_8002C84C
    if (ctx->r12 != ctx->r5) {
        // 0x8002C810: andi        $v0, $a1, 0xFFFF
        ctx->r2 = ctx->r5 & 0XFFFF;
            goto L_8002C84C;
    }
    // 0x8002C810: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002C814: addiu       $t8, $sp, 0xD4
    ctx->r24 = ADD32(ctx->r29, 0XD4);
    // 0x8002C818: addiu       $t7, $t8, 0x48
    ctx->r15 = ADD32(ctx->r24, 0X48);
    // 0x8002C81C: lw          $t9, 0x1A0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A0);
L_8002C820:
    // 0x8002C820: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002C824: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002C828: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002C82C: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8002C830: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8002C834: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x8002C838: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8002C83C: bne         $t8, $t7, L_8002C820
    if (ctx->r24 != ctx->r15) {
        // 0x8002C840: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_8002C820;
    }
    // 0x8002C840: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x8002C844: b           L_8002C99C
    // 0x8002C848: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_8002C99C;
    // 0x8002C848: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002C84C:
    // 0x8002C84C: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x8002C850: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002C854: lwc1        $f30, 0x1A4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x8002C858: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C85C: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
L_8002C860:
    // 0x8002C860: lwc1        $f12, 0x13C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002C864: b           L_8002BEDC
    // 0x8002C868: lwc1        $f2, 0x138($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X138);
        goto L_8002BEDC;
    // 0x8002C868: lwc1        $f2, 0x138($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X138);
L_8002C86C:
    // 0x8002C86C: b           L_8002C3C0
    // 0x8002C870: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002C3C0;
    // 0x8002C870: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8002C874: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
L_8002C878:
    // 0x8002C878: bne         $s2, $zero, L_8002C994
    if (ctx->r18 != 0) {
        // 0x8002C87C: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_8002C994;
    }
    // 0x8002C87C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x8002C880: bne         $a2, $at, L_8002C940
    if (ctx->r6 != ctx->r1) {
        // 0x8002C884: andi        $v0, $a1, 0xFFFF
        ctx->r2 = ctx->r5 & 0XFFFF;
            goto L_8002C940;
    }
    // 0x8002C884: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8002C888: bne         $t3, $zero, L_8002C8B0
    if (ctx->r11 != 0) {
        // 0x8002C88C: lwc1        $f10, 0x16C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
            goto L_8002C8B0;
    }
    // 0x8002C88C: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x8002C890: lwc1        $f8, 0x168($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8002C894: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x8002C898: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8002C89C: swc1        $f10, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
    // 0x8002C8A0: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8002C8A4: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    // 0x8002C8A8: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C8AC: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
L_8002C8B0:
    // 0x8002C8B0: lwc1        $f10, 0x1A4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x8002C8B4: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002C8B8: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x8002C8BC: sub.s       $f2, $f30, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f30.fl - ctx->f10.fl;
    // 0x8002C8C0: lwc1        $f10, 0x1AC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002C8C4: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x8002C8C8: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8002C8CC: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8002C8D0: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x8002C8D4: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8002C8D8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8002C8DC: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8002C8E0: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8002C8E4: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002C8E8: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002C8EC: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8002C8F0: nop

    // 0x8002C8F4: bc1f        L_8002C940
    if (!c1cs) {
        // 0x8002C8F8: nop
    
            goto L_8002C940;
    }
    // 0x8002C8F8: nop

    // 0x8002C8FC: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8002C900: lwc1        $f6, 0x150($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8002C904: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8002C908: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8002C90C: lhu         $t7, 0x126($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X126);
    // 0x8002C910: sh          $t6, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r14;
    // 0x8002C914: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x8002C918: swc1        $f16, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f16.u32l;
    // 0x8002C91C: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x8002C920: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    // 0x8002C924: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x8002C928: sb          $t3, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r11;
    // 0x8002C92C: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x8002C930: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x8002C934: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    // 0x8002C938: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x8002C93C: sh          $t7, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r15;
L_8002C940:
    // 0x8002C940: bne         $t4, $a1, L_8002C980
    if (ctx->r12 != ctx->r5) {
        // 0x8002C944: lwc1        $f4, 0x1A8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
            goto L_8002C980;
    }
    // 0x8002C944: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x8002C948: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x8002C94C: addiu       $t7, $t9, 0x48
    ctx->r15 = ADD32(ctx->r25, 0X48);
    // 0x8002C950: lw          $t8, 0x1A0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A0);
L_8002C954:
    // 0x8002C954: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002C958: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8002C95C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002C960: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x8002C964: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8002C968: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8002C96C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8002C970: bne         $t9, $t7, L_8002C954
    if (ctx->r25 != ctx->r15) {
        // 0x8002C974: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8002C954;
    }
    // 0x8002C974: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8002C978: b           L_8002C99C
    // 0x8002C97C: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_8002C99C;
    // 0x8002C97C: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002C980:
    // 0x8002C980: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002C984: lwc1        $f30, 0x1A4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x8002C988: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C98C: b           L_8002C860
    // 0x8002C990: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
        goto L_8002C860;
    // 0x8002C990: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
L_8002C994:
    // 0x8002C994: b           L_8002C3C0
    // 0x8002C998: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_8002C3C0;
    // 0x8002C998: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_8002C99C:
    // 0x8002C99C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002C9A0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8002C9A4: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8002C9A8: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8002C9AC: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8002C9B0: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8002C9B4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002C9B8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C9BC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002C9C0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8002C9C4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8002C9C8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8002C9CC: jr          $ra
    // 0x8002C9D0: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    TRACE_RETURN()
    return;
    // 0x8002C9D0: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void func_80014C54_15854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014C54: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80014C58: addiu       $a0, $a0, -0x523C
    ctx->r4 = ADD32(ctx->r4, -0X523C);
    // 0x80014C5C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80014C60: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80014C64: addiu       $a1, $a1, -0x5234
    ctx->r5 = ADD32(ctx->r5, -0X5234);
    // 0x80014C68: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80014C6C: bltz        $t7, L_80014C90
    if (SIGNED(ctx->r15) < 0) {
        // 0x80014C70: sw          $t7, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r15;
            goto L_80014C90;
    }
    // 0x80014C70: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80014C74: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80014C78: addiu       $a1, $a1, -0x5234
    ctx->r5 = ADD32(ctx->r5, -0X5234);
    // 0x80014C7C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80014C80: srlv        $v0, $t8, $t7
    ctx->r2 = S32(U32(ctx->r24) >> (ctx->r15 & 31));
    // 0x80014C84: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80014C88: jr          $ra
    // 0x80014C8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    TRACE_RETURN()
    return;
    // 0x80014C8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80014C90:
    // 0x80014C90: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80014C94: addiu       $a2, $a2, -0x7EA0
    ctx->r6 = ADD32(ctx->r6, -0X7EA0);
    // 0x80014C98: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80014C9C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80014CA0: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80014CA4: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x80014CA8: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x80014CAC: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80014CB0: srl         $t3, $t1, 7
    ctx->r11 = S32(U32(ctx->r9) >> 7);
    // 0x80014CB4: andi        $v0, $t3, 0x1
    ctx->r2 = ctx->r11 & 0X1;
    // 0x80014CB8: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x80014CBC: jr          $ra
    // 0x80014CC0: nop

    TRACE_RETURN()
    return;
    // 0x80014CC0: nop

;}
RECOMP_FUNC void func_8000A548_B148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A548: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000A54C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8000A550: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000A554: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A558: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8000A55C: lui         $at, 0xB
    ctx->r1 = S32(0XB << 16);
    // 0x8000A560: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A564: ori         $at, $at, 0xBB90
    ctx->r1 = ctx->r1 | 0XBB90;
    // 0x8000A568: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000A56C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8000A570: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000A574: addiu       $s2, $a1, 0x1
    ctx->r18 = ADD32(ctx->r5, 0X1);
    // 0x8000A578: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A57C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A580: addiu       $t8, $t8, -0x3340
    ctx->r24 = ADD32(ctx->r24, -0X3340);
    // 0x8000A584: slt         $at, $a0, $s2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8000A588: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A58C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x8000A590: beq         $at, $zero, L_8000A5AC
    if (ctx->r1 == 0) {
        // 0x8000A594: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8000A5AC;
    }
    // 0x8000A594: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_8000A598:
    // 0x8000A598: jal         0x8000A5C4
    // 0x8000A59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A5C4_B1C4(rdram, ctx);
        goto after_0;
    // 0x8000A59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A5A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A5A4: bne         $s1, $s2, L_8000A598
    if (ctx->r17 != ctx->r18) {
        // 0x8000A5A8: addiu       $s0, $s0, 0x98
        ctx->r16 = ADD32(ctx->r16, 0X98);
            goto L_8000A598;
    }
    // 0x8000A5A8: addiu       $s0, $s0, 0x98
    ctx->r16 = ADD32(ctx->r16, 0X98);
L_8000A5AC:
    // 0x8000A5AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A5B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A5B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A5BC: jr          $ra
    // 0x8000A5C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A5C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000EFD0_FBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EFD8: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8000EFDC: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x8000EFE0: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x8000EFE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000EFE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000EFEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000EFF0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000EFF4: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x8000EFF8: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8000EFFC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8000F000: nop

    // 0x8000F004: bc1f        L_8000F01C
    if (!c1cs) {
        // 0x8000F008: nop
    
            goto L_8000F01C;
    }
    // 0x8000F008: nop

    // 0x8000F00C: jal         0x80034ED4
    // 0x8000F010: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x8000F010: nop

    after_0:
    // 0x8000F014: b           L_8000F16C
    // 0x8000F018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000F16C;
    // 0x8000F018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F01C:
    // 0x8000F01C: ldc1        $f18, -0x5380($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5380);
    // 0x8000F020: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8000F024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8000F028: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8000F02C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8000F030: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000F034: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8000F038: nop

    // 0x8000F03C: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8000F040: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8000F044: nop

    // 0x8000F048: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8000F04C: beql        $a0, $zero, L_8000F0A0
    if (ctx->r4 == 0) {
        // 0x8000F050: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_8000F0A0;
    }
    goto skip_0;
    // 0x8000F050: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8000F054: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8000F058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000F05C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8000F060: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x8000F064: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8000F068: nop

    // 0x8000F06C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x8000F070: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8000F074: nop

    // 0x8000F078: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8000F07C: bne         $a0, $zero, L_8000F094
    if (ctx->r4 != 0) {
        // 0x8000F080: nop
    
            goto L_8000F094;
    }
    // 0x8000F080: nop

    // 0x8000F084: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8000F088: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F08C: b           L_8000F0AC
    // 0x8000F090: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8000F0AC;
    // 0x8000F090: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8000F094:
    // 0x8000F094: b           L_8000F0AC
    // 0x8000F098: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8000F0AC;
    // 0x8000F098: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8000F09C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_8000F0A0:
    // 0x8000F0A0: nop

    // 0x8000F0A4: bltz        $a0, L_8000F094
    if (SIGNED(ctx->r4) < 0) {
        // 0x8000F0A8: nop
    
            goto L_8000F094;
    }
    // 0x8000F0A8: nop

L_8000F0AC:
    // 0x8000F0AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000F0B0: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x8000F0B4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8000F0B8: jal         0x80003E10
    // 0x8000F0BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8000F0BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8000F0C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000F0C4: ldc1        $f10, -0x5378($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5378);
    // 0x8000F0C8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8000F0CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000F0D0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8000F0D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000F0D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000F0DC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8000F0E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000F0E4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000F0E8: nop

    // 0x8000F0EC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000F0F0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000F0F4: nop

    // 0x8000F0F8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000F0FC: beql        $a1, $zero, L_8000F14C
    if (ctx->r5 == 0) {
        // 0x8000F100: mfc1        $a1, $f4
        ctx->r5 = (int32_t)ctx->f4.u32l;
            goto L_8000F14C;
    }
    goto skip_1;
    // 0x8000F100: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x8000F104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000F108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000F10C: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8000F110: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000F114: nop

    // 0x8000F118: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000F11C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000F120: nop

    // 0x8000F124: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000F128: bne         $a1, $zero, L_8000F140
    if (ctx->r5 != 0) {
        // 0x8000F12C: nop
    
            goto L_8000F140;
    }
    // 0x8000F12C: nop

    // 0x8000F130: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8000F134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F138: b           L_8000F158
    // 0x8000F13C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8000F158;
    // 0x8000F13C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8000F140:
    // 0x8000F140: b           L_8000F158
    // 0x8000F144: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8000F158;
    // 0x8000F144: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8000F148: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
L_8000F14C:
    // 0x8000F14C: nop

    // 0x8000F150: bltz        $a1, L_8000F140
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000F154: nop
    
            goto L_8000F140;
    }
    // 0x8000F154: nop

L_8000F158:
    // 0x8000F158: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000F15C: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8000F160: jal         0x8000F178
    // 0x8000F164: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8000F178_FD78(rdram, ctx);
        goto after_2;
    // 0x8000F164: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x8000F168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000F16C:
    // 0x8000F16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F170: jr          $ra
    // 0x8000F174: nop

    TRACE_RETURN()
    return;
    // 0x8000F174: nop

;}
RECOMP_FUNC void func_8000E39C_EF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E39C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000E3A0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E3A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E3A8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x8000E3AC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8000E3B0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8000E3B4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8000E3B8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8000E3BC: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8000E3C0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000E3C4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000E3C8: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8000E3CC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8000E3D0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000E3D4: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000E3D8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000E3DC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000E3E0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8000E3E4: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8000E3E8: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x8000E3EC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E3F0: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000E3F4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8000E3F8: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8000E3FC: add.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x8000E400: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8000E404: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8000E408: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8000E40C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8000E410: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8000E414: jal         0x800417E0
    // 0x8000E418: div.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000E418: div.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    after_0:
    // 0x8000E41C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000E420: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000E424: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E428: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000E42C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8000E430: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000E434: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x8000E438: bc1fl       L_8000E450
    if (!c1cs) {
        // 0x8000E43C: lwc1        $f6, 0x1C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8000E450;
    }
    goto skip_0;
    // 0x8000E43C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8000E440: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8000E444: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x8000E448: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x8000E44C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
L_8000E450:
    // 0x8000E450: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E454: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8000E458: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000E45C: jal         0x800417E0
    // 0x8000E460: div.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x8000E460: div.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    after_1:
    // 0x8000E464: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000E468: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E46C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E470: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x8000E474: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x8000E478: bc1fl       L_8000E490
    if (!c1cs) {
        // 0x8000E47C: lwc1        $f10, 0x20($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
            goto L_8000E490;
    }
    goto skip_1;
    // 0x8000E47C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x8000E480: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x8000E484: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8000E488: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x8000E48C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
L_8000E490:
    // 0x8000E490: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000E494: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E498: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8000E49C: jal         0x800417E0
    // 0x8000E4A0: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x8000E4A0: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    after_2:
    // 0x8000E4A4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E4A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E4AC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8000E4B0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E4B4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8000E4B8: nop

    // 0x8000E4BC: bc1fl       L_8000E4D4
    if (!c1cs) {
        // 0x8000E4C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000E4D4;
    }
    goto skip_2;
    // 0x8000E4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8000E4C4: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8000E4C8: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8000E4CC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x8000E4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000E4D4:
    // 0x8000E4D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8000E4D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E4DC: jr          $ra
    // 0x8000E4E0: nop

    TRACE_RETURN()
    return;
    // 0x8000E4E0: nop

;}
