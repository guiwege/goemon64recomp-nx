#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8000433C_4F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000433C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80004340: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80004344: addiu       $t3, $t3, -0x3A34
    ctx->r11 = ADD32(ctx->r11, -0X3A34);
    // 0x80004348: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8000434C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80004350: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80004354: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80004358: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x8000435C: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80004360: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80004364: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80004368: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8000436C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80004370: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x80004374: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80004378: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x8000437C: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80004380: addiu       $t8, $t8, -0x2AF8
    ctx->r24 = ADD32(ctx->r24, -0X2AF8);
    // 0x80004384: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80004388: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000438C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80004390: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80004394: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80004398: addiu       $t7, $t7, -0x4DB8
    ctx->r15 = ADD32(ctx->r15, -0X4DB8);
    // 0x8000439C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800043A0: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800043A4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x800043A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800043AC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800043B0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800043B4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x800043B8: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x800043BC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800043C0: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x800043C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800043C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800043CC: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800043D0: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x800043D4: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x800043D8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800043DC: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800043E0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800043E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800043E8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800043EC: lui         $s0, 0xE600
    ctx->r16 = S32(0XE600 << 16);
    // 0x800043F0: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x800043F4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800043F8: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800043FC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004400: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80004404: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80004408: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8000440C: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x80004410: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80004414: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80004418: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000441C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80004420: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80004424: lui         $s1, 0xE700
    ctx->r17 = S32(0XE700 << 16);
    // 0x80004428: lui         $t8, 0x8030
    ctx->r24 = S32(0X8030 << 16);
    // 0x8000442C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80004430: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80004434: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004438: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x8000443C: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80004440: addiu       $t8, $t8, 0x1000
    ctx->r24 = ADD32(ctx->r24, 0X1000);
    // 0x80004444: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x80004448: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000444C: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x80004450: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80004454: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80004458: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8000445C: lui         $t7, 0x704
    ctx->r15 = S32(0X704 << 16);
    // 0x80004460: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x80004464: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80004468: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x8000446C: lui         $t6, 0xF550
    ctx->r14 = S32(0XF550 << 16);
    // 0x80004470: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80004474: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80004478: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8000447C: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x80004480: ori         $t7, $t7, 0xF100
    ctx->r15 = ctx->r15 | 0XF100;
    // 0x80004484: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80004488: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8000448C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004490: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x80004494: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80004498: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8000449C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x800044A0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800044A4: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800044A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800044AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800044B0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800044B4: lui         $t6, 0xF540
    ctx->r14 = S32(0XF540 << 16);
    // 0x800044B8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x800044BC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800044C0: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x800044C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800044C8: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x800044CC: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800044D0: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x800044D4: ori         $t6, $t6, 0x1000
    ctx->r14 = ctx->r14 | 0X1000;
    // 0x800044D8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800044DC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x800044E0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800044E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800044E8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800044EC: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x800044F0: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x800044F4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800044F8: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x800044FC: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80004500: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80004504: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80004508: lw          $s0, -0x3A38($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A38);
    // 0x8000450C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80004510: ori         $at, $at, 0xB168
    ctx->r1 = ctx->r1 | 0XB168;
    // 0x80004514: lui         $s7, 0x1000
    ctx->r23 = S32(0X1000 << 16);
    // 0x80004518: lui         $ra, 0x8006
    ctx->r31 = S32(0X8006 << 16);
    // 0x8000451C: addiu       $ra, $ra, -0x4C64
    ctx->r31 = ADD32(ctx->r31, -0X4C64);
    // 0x80004520: ori         $s7, $s7, 0x400
    ctx->r23 = ctx->r23 | 0X400;
    // 0x80004524: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x80004528: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8000452C: lui         $s4, 0xE400
    ctx->r20 = S32(0XE400 << 16);
    // 0x80004530: lui         $s5, 0xB400
    ctx->r21 = S32(0XB400 << 16);
    // 0x80004534: lui         $s6, 0xB300
    ctx->r22 = S32(0XB300 << 16);
    // 0x80004538: addiu       $fp, $zero, 0x7
    ctx->r30 = ADD32(0, 0X7);
    // 0x8000453C: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
L_80004540:
    // 0x80004540: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80004544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004548: beql        $v1, $zero, L_800048C0
    if (ctx->r3 == 0) {
        // 0x8000454C: lh          $t6, 0x32($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X32);
            goto L_800048C0;
    }
    goto skip_0;
    // 0x8000454C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    skip_0:
    // 0x80004550: beq         $v1, $at, L_80004568
    if (ctx->r3 == ctx->r1) {
        // 0x80004554: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80004568;
    }
    // 0x80004554: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80004558: beq         $v1, $at, L_80004718
    if (ctx->r3 == ctx->r1) {
        // 0x8000455C: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_80004718;
    }
    // 0x8000455C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80004560: b           L_800048C0
    // 0x80004564: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
        goto L_800048C0;
    // 0x80004564: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_80004568:
    // 0x80004568: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x8000456C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80004570: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80004574: beq         $a1, $zero, L_800048BC
    if (ctx->r5 == 0) {
        // 0x80004578: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_800048BC;
    }
L_80004578:
    // 0x80004578: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8000457C: beq         $a1, $at, L_800046FC
    if (ctx->r5 == ctx->r1) {
        // 0x80004580: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_800046FC;
    }
    // 0x80004580: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80004584: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80004588: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x8000458C: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x80004590: addu        $a2, $t7, $t5
    ctx->r6 = ADD32(ctx->r15, ctx->r13);
    // 0x80004594: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80004598: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8000459C: addiu       $t7, $a1, -0x30
    ctx->r15 = ADD32(ctx->r5, -0X30);
    // 0x800045A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800045A4: addiu       $t9, $t9, -0x4D90
    ctx->r25 = ADD32(ctx->r25, -0X4D90);
    // 0x800045A8: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x800045AC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800045B0: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x800045B4: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800045B8: addiu       $t9, $a2, 0x7
    ctx->r25 = ADD32(ctx->r6, 0X7);
    // 0x800045BC: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x800045C0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800045C4: lh          $s1, 0x0($v1)
    ctx->r17 = MEM_H(ctx->r3, 0X0);
    // 0x800045C8: blez        $t7, L_800045D8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800045CC: lh          $s2, 0x2($v1)
        ctx->r18 = MEM_H(ctx->r3, 0X2);
            goto L_800045D8;
    }
    // 0x800045CC: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    // 0x800045D0: b           L_800045DC
    // 0x800045D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_800045DC;
    // 0x800045D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_800045D8:
    // 0x800045D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800045DC:
    // 0x800045DC: addiu       $t6, $a3, 0x7
    ctx->r14 = ADD32(ctx->r7, 0X7);
    // 0x800045E0: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x800045E4: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800045E8: blez        $t8, L_800045F8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800045EC: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_800045F8;
    }
    // 0x800045EC: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x800045F0: b           L_800045FC
    // 0x800045F4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_800045FC;
    // 0x800045F4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_800045F8:
    // 0x800045F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800045FC:
    // 0x800045FC: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x80004600: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80004604: or          $t6, $t9, $s4
    ctx->r14 = ctx->r25 | ctx->r20;
    // 0x80004608: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000460C: sll         $t7, $a0, 18
    ctx->r15 = S32(ctx->r4 << 18);
    // 0x80004610: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80004614: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80004618: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000461C: blez        $t6, L_8000462C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80004620: sw          $t9, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r25;
            goto L_8000462C;
    }
    // 0x80004620: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80004624: b           L_80004630
    // 0x80004628: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
        goto L_80004630;
    // 0x80004628: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_8000462C:
    // 0x8000462C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80004630:
    // 0x80004630: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x80004634: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x80004638: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8000463C: blez        $t8, L_8000464C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80004640: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_8000464C;
    }
    // 0x80004640: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80004644: b           L_80004650
    // 0x80004648: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_80004650;
    // 0x80004648: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8000464C:
    // 0x8000464C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80004650:
    // 0x80004650: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x80004654: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80004658: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x8000465C: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80004660: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x80004664: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x80004668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8000466C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80004670: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x80004674: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80004678: bgez        $a0, L_800046A0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8000467C: sw          $s5, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r21;
            goto L_800046A0;
    }
    // 0x8000467C: sw          $s5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r21;
    // 0x80004680: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x80004684: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80004688: bgez        $t9, L_80004698
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8000468C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80004698;
    }
    // 0x8000468C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80004690: b           L_800046A0
    // 0x80004694: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_800046A0;
    // 0x80004694: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_80004698:
    // 0x80004698: b           L_800046A0
    // 0x8000469C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_800046A0;
    // 0x8000469C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_800046A0:
    // 0x800046A0: bgez        $t0, L_800046C8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800046A4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800046C8;
    }
    // 0x800046A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800046A8: sll         $v0, $a2, 10
    ctx->r2 = S32(ctx->r6 << 10);
    // 0x800046AC: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x800046B0: bgez        $t6, L_800046C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800046B4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800046C0;
    }
    // 0x800046B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800046B8: b           L_800046C8
    // 0x800046BC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
        goto L_800046C8;
    // 0x800046BC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_800046C0:
    // 0x800046C0: b           L_800046C8
    // 0x800046C4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_800046C8;
    // 0x800046C4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_800046C8:
    // 0x800046C8: subu        $t8, $s2, $v1
    ctx->r24 = SUB32(ctx->r18, ctx->r3);
    // 0x800046CC: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x800046D0: subu        $t6, $s1, $a3
    ctx->r14 = SUB32(ctx->r17, ctx->r7);
    // 0x800046D4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x800046D8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x800046DC: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x800046E0: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x800046E4: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x800046E8: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800046EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800046F0: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x800046F4: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x800046F8: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
L_800046FC:
    // 0x800046FC: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x80004700: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x80004704: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x80004708: bne         $a1, $zero, L_80004578
    if (ctx->r5 != 0) {
        // 0x8000470C: sra         $t5, $t9, 16
        ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80004578;
    }
    // 0x8000470C: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80004710: b           L_800048C0
    // 0x80004714: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
        goto L_800048C0;
    // 0x80004714: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_80004718:
    // 0x80004718: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_8000471C:
    // 0x8000471C: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80004720: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80004724: subu        $t6, $fp, $t4
    ctx->r14 = SUB32(ctx->r30, ctx->r12);
    // 0x80004728: addu        $a2, $t7, $t5
    ctx->r6 = ADD32(ctx->r15, ctx->r13);
    // 0x8000472C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80004730: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x80004734: srlv        $v1, $v1, $t7
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r15 & 31));
    // 0x80004738: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8000473C: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80004740: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80004744: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80004748: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x8000474C: addu        $a1, $ra, $t6
    ctx->r5 = ADD32(ctx->r31, ctx->r14);
    // 0x80004750: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x80004754: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80004758: addiu       $t6, $a2, 0x7
    ctx->r14 = ADD32(ctx->r6, 0X7);
    // 0x8000475C: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x80004760: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80004764: lh          $s1, 0x0($a1)
    ctx->r17 = MEM_H(ctx->r5, 0X0);
    // 0x80004768: blez        $t8, L_80004778
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8000476C: lh          $s2, 0x2($a1)
        ctx->r18 = MEM_H(ctx->r5, 0X2);
            goto L_80004778;
    }
    // 0x8000476C: lh          $s2, 0x2($a1)
    ctx->r18 = MEM_H(ctx->r5, 0X2);
    // 0x80004770: b           L_8000477C
    // 0x80004774: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_8000477C;
    // 0x80004774: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_80004778:
    // 0x80004778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8000477C:
    // 0x8000477C: addiu       $t7, $a3, 0x7
    ctx->r15 = ADD32(ctx->r7, 0X7);
    // 0x80004780: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x80004784: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80004788: blez        $t9, L_80004798
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8000478C: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_80004798;
    }
    // 0x8000478C: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x80004790: b           L_8000479C
    // 0x80004794: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8000479C;
    // 0x80004794: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80004798:
    // 0x80004798: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8000479C:
    // 0x8000479C: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x800047A0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800047A4: or          $t7, $t6, $s4
    ctx->r15 = ctx->r14 | ctx->r20;
    // 0x800047A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800047AC: sll         $t8, $a0, 18
    ctx->r24 = S32(ctx->r4 << 18);
    // 0x800047B0: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800047B4: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800047B8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800047BC: blez        $t7, L_800047CC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800047C0: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_800047CC;
    }
    // 0x800047C0: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x800047C4: b           L_800047D0
    // 0x800047C8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
        goto L_800047D0;
    // 0x800047C8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_800047CC:
    // 0x800047CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_800047D0:
    // 0x800047D0: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x800047D4: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x800047D8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800047DC: blez        $t9, L_800047EC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800047E0: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_800047EC;
    }
    // 0x800047E0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800047E4: b           L_800047F0
    // 0x800047E8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_800047F0;
    // 0x800047E8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_800047EC:
    // 0x800047EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800047F0:
    // 0x800047F0: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x800047F4: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x800047F8: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x800047FC: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x80004800: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80004804: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x80004808: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8000480C: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x80004810: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x80004814: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x80004818: bgez        $a0, L_80004840
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8000481C: sw          $s5, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r21;
            goto L_80004840;
    }
    // 0x8000481C: sw          $s5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r21;
    // 0x80004820: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x80004824: sra         $t6, $v0, 7
    ctx->r14 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80004828: bgez        $t6, L_80004838
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000482C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80004838;
    }
    // 0x8000482C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80004830: b           L_80004844
    // 0x80004834: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
        goto L_80004844;
    // 0x80004834: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_80004838:
    // 0x80004838: b           L_80004844
    // 0x8000483C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_80004844;
    // 0x8000483C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_80004840:
    // 0x80004840: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80004844:
    // 0x80004844: bgez        $t0, L_8000486C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80004848: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_8000486C;
    }
    // 0x80004848: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8000484C: sll         $v0, $a2, 10
    ctx->r2 = S32(ctx->r6 << 10);
    // 0x80004850: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x80004854: bgez        $t7, L_80004864
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80004858: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80004864;
    }
    // 0x80004858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000485C: b           L_80004870
    // 0x80004860: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_80004870;
    // 0x80004860: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80004864:
    // 0x80004864: b           L_80004870
    // 0x80004868: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_80004870;
    // 0x80004868: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8000486C:
    // 0x8000486C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80004870:
    // 0x80004870: subu        $t9, $s2, $v1
    ctx->r25 = SUB32(ctx->r18, ctx->r3);
    // 0x80004874: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x80004878: subu        $t7, $s1, $a3
    ctx->r15 = SUB32(ctx->r17, ctx->r7);
    // 0x8000487C: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80004880: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80004884: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80004888: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8000488C: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80004890: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80004894: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x80004898: sra         $t4, $t8, 16
    ctx->r12 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8000489C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800048A0: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x800048A4: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x800048A8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x800048AC: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800048B0: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x800048B4: bne         $at, $zero, L_8000471C
    if (ctx->r1 != 0) {
        // 0x800048B8: sw          $s6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r22;
            goto L_8000471C;
    }
    // 0x800048B8: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
L_800048BC:
    // 0x800048BC: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
L_800048C0:
    // 0x800048C0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800048C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800048C8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800048CC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800048D0: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x800048D4: bne         $at, $zero, L_80004540
    if (ctx->r1 != 0) {
        // 0x800048D8: sh          $t7, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r15;
            goto L_80004540;
    }
    // 0x800048D8: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x800048DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800048E0: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x800048E4: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x800048E8: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x800048EC: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x800048F0: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x800048F4: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x800048F8: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x800048FC: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x80004900: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80004904: jr          $ra
    // 0x80004908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80004908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80003880_4480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003888: jal         0x80004240
    // 0x8000388C: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x8000388C: nop

    after_0:
    // 0x80003890: jal         0x8003488C
    // 0x80003894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003488C_3548C(rdram, ctx);
        goto after_1;
    // 0x80003894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80003898: jal         0x8000A0F0
    // 0x8000389C: nop

    func_8000A0F0_ACF0(rdram, ctx);
        goto after_2;
    // 0x8000389C: nop

    after_2:
    // 0x800038A0: jal         0x80035B50
    // 0x800038A4: nop

    func_80035B50_36750(rdram, ctx);
        goto after_3;
    // 0x800038A4: nop

    after_3:
    // 0x800038A8: jal         0x8000B880
    // 0x800038AC: nop

    func_8000B880_C480(rdram, ctx);
        goto after_4;
    // 0x800038AC: nop

    after_4:
    // 0x800038B0: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x800038B4: jal         0x8000B8A4
    // 0x800038B8: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    func_8000B8A4_C4A4(rdram, ctx);
        goto after_5;
    // 0x800038B8: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    after_5:
    // 0x800038BC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x800038C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800038C4: jal         0x80013940
    // 0x800038C8: sh          $t6, 0x7AE4($at)
    MEM_H(0X7AE4, ctx->r1) = ctx->r14;
    func_80013940_14540(rdram, ctx);
        goto after_6;
    // 0x800038C8: sh          $t6, 0x7AE4($at)
    MEM_H(0X7AE4, ctx->r1) = ctx->r14;
    after_6:
    // 0x800038CC: jal         0x80041770
    // 0x800038D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_7;
    // 0x800038D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x800038D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800038D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800038DC: jr          $ra
    // 0x800038E0: nop

    TRACE_RETURN()
    return;
    // 0x800038E0: nop

;}
RECOMP_FUNC void func_800239B8_245B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800239B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800239BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800239C0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800239C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800239C8: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x800239CC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800239D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800239D4: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x800239D8: lhu         $a1, 0x1B8($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X1B8);
    // 0x800239DC: lw          $a2, 0x1B4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1B4);
    // 0x800239E0: addiu       $t8, $v0, 0x1BA
    ctx->r24 = ADD32(ctx->r2, 0X1BA);
    // 0x800239E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800239E8: jal         0x80045B80
    // 0x800239EC: addiu       $a3, $v0, 0x1BE
    ctx->r7 = ADD32(ctx->r2, 0X1BE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x800239EC: addiu       $a3, $v0, 0x1BE
    ctx->r7 = ADD32(ctx->r2, 0X1BE);
    after_0:
    // 0x800239F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800239F4: jal         0x80023ADC
    // 0x800239F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x800239F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800239FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80023A00: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80023A04: lw          $t9, -0x717C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X717C);
    // 0x80023A08: sw          $v0, 0x3FC($t9)
    MEM_W(0X3FC, ctx->r25) = ctx->r2;
    // 0x80023A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80023A10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80023A14: jr          $ra
    // 0x80023A18: nop

    TRACE_RETURN()
    return;
    // 0x80023A18: nop

;}
RECOMP_FUNC void guLookAt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046E18: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80046E1C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80046E20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80046E24: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80046E28: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80046E2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80046E30: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80046E34: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80046E38: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80046E3C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80046E40: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80046E44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80046E48: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80046E4C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80046E50: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80046E54: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80046E58: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80046E5C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80046E60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80046E64: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80046E68: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80046E6C: jal         0x80046B60
    // 0x80046E70: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    guLookAtF(rdram, ctx);
        goto after_0;
    // 0x80046E70: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80046E74: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80046E78: jal         0x80043AA0
    // 0x80046E7C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80046E7C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x80046E80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80046E84: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80046E88: jr          $ra
    // 0x80046E8C: nop

    TRACE_RETURN()
    return;
    // 0x80046E8C: nop

;}
RECOMP_FUNC void alHeapDBAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800476B0: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800476B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800476B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800476BC: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800476C0: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x800476C4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800476C8: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x800476CC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800476D0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800476D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800476D8: mflo        $v0
    ctx->r2 = lo;
    // 0x800476DC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x800476E0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x800476E4: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x800476E8: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x800476EC: bne         $at, $zero, L_800476FC
    if (ctx->r1 != 0) {
        // 0x800476F0: addu        $t2, $a0, $t7
        ctx->r10 = ADD32(ctx->r4, ctx->r15);
            goto L_800476FC;
    }
    // 0x800476F0: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x800476F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800476F8: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
L_800476FC:
    // 0x800476FC: jr          $ra
    // 0x80047700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80047700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80007324_7F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007324: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80007328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000732C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007330: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80007334: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80007338: lw          $a1, 0x2AC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2AC);
    // 0x8000733C: sw          $zero, 0x2AC($a0)
    MEM_W(0X2AC, ctx->r4) = 0;
    // 0x80007340: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80007344: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x80007348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000734C: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x80007350: beq         $t6, $at, L_8000735C
    if (ctx->r14 == ctx->r1) {
        // 0x80007354: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_8000735C;
    }
    // 0x80007354: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80007358: sb          $zero, 0x7858($at)
    MEM_B(0X7858, ctx->r1) = 0;
L_8000735C:
    // 0x8000735C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80007360: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x80007364: beql        $t8, $zero, L_80007408
    if (ctx->r24 == 0) {
        // 0x80007368: lw          $t4, 0x4($a1)
        ctx->r12 = MEM_W(ctx->r5, 0X4);
            goto L_80007408;
    }
    goto skip_0;
    // 0x80007368: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x8000736C: jal         0x80042660
    // 0x80007370: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x80007370: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80007374: beq         $v0, $zero, L_80007404
    if (ctx->r2 == 0) {
        // 0x80007378: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_80007404;
    }
    // 0x80007378: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8000737C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x80007380: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x80007384: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80007388: jal         0x80041EE0
    // 0x8000738C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    osGetTime_recomp(rdram, ctx);
        goto after_1;
    // 0x8000738C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x80007390: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80007394: lw          $t3, 0x5C($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X5C);
    // 0x80007398: lw          $t2, 0x58($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X58);
    // 0x8000739C: addiu       $a0, $a1, 0x60
    ctx->r4 = ADD32(ctx->r5, 0X60);
    // 0x800073A0: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x800073A4: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x800073A8: subu        $t5, $v1, $t3
    ctx->r13 = SUB32(ctx->r3, ctx->r11);
    // 0x800073AC: subu        $t4, $v0, $t2
    ctx->r12 = SUB32(ctx->r2, ctx->r10);
    // 0x800073B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800073B4: subu        $t4, $t4, $at
    ctx->r12 = SUB32(ctx->r12, ctx->r1);
    // 0x800073B8: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x800073BC: sltu        $at, $t9, $t7
    ctx->r1 = ctx->r25 < ctx->r15 ? 1 : 0;
    // 0x800073C0: addu        $t8, $at, $t4
    ctx->r24 = ADD32(ctx->r1, ctx->r12);
    // 0x800073C4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800073C8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800073CC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800073D0: lw          $t1, 0x8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X8);
    // 0x800073D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800073D8: andi        $t0, $t1, 0x7
    ctx->r8 = ctx->r9 & 0X7;
    // 0x800073DC: bnel        $t0, $at, L_80007420
    if (ctx->r8 != ctx->r1) {
        // 0x800073E0: lw          $t6, 0x2AC($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2AC);
            goto L_80007420;
    }
    goto skip_1;
    // 0x800073E0: lw          $t6, 0x2AC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2AC);
    skip_1:
    // 0x800073E4: lw          $t2, 0x2A0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2A0);
    // 0x800073E8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800073EC: lw          $t3, 0x2A8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2A8);
    // 0x800073F0: sw          $a1, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r5;
    // 0x800073F4: bnel        $t3, $zero, L_80007420
    if (ctx->r11 != 0) {
        // 0x800073F8: lw          $t6, 0x2AC($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2AC);
            goto L_80007420;
    }
    goto skip_2;
    // 0x800073F8: lw          $t6, 0x2AC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2AC);
    skip_2:
    // 0x800073FC: b           L_8000741C
    // 0x80007400: sw          $a1, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r5;
        goto L_8000741C;
    // 0x80007400: sw          $a1, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r5;
L_80007404:
    // 0x80007404: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
L_80007408:
    // 0x80007408: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8000740C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80007410: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80007414: jal         0x80007550
    // 0x80007418: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    func_80007550_8150(rdram, ctx);
        goto after_2;
    // 0x80007418: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    after_2:
L_8000741C:
    // 0x8000741C: lw          $t6, 0x2AC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2AC);
L_80007420:
    // 0x80007420: lw          $t9, 0x2B0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2B0);
    // 0x80007424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80007428: sltiu       $t7, $t6, 0x1
    ctx->r15 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8000742C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80007430: sltiu       $t1, $t9, 0x1
    ctx->r9 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80007434: or          $a3, $t8, $t1
    ctx->r7 = ctx->r24 | ctx->r9;
    // 0x80007438: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8000743C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80007440: jal         0x800077B8
    // 0x80007444: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800077B8_83B8(rdram, ctx);
        goto after_3;
    // 0x80007444: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80007448: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8000744C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80007450: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80007454: beql        $v0, $a3, L_80007468
    if (ctx->r2 == ctx->r7) {
        // 0x80007458: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80007468;
    }
    goto skip_3;
    // 0x80007458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8000745C: jal         0x8000769C
    // 0x80007460: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_8000769C_829C(rdram, ctx);
        goto after_4;
    // 0x80007460: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80007464: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80007468:
    // 0x80007468: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000746C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80007470: jr          $ra
    // 0x80007474: nop

    TRACE_RETURN()
    return;
    // 0x80007474: nop

;}
RECOMP_FUNC void func_80037CB0_388B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037CB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80037CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037CB8: beq         $a1, $zero, L_80037D04
    if (ctx->r5 == 0) {
        // 0x80037CBC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80037D04;
    }
    // 0x80037CBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80037CC0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80037CC4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80037CC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80037CCC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80037CD0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80037CD4: addiu       $t7, $t7, 0x71F0
    ctx->r15 = ADD32(ctx->r15, 0X71F0);
    // 0x80037CD8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80037CDC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80037CE0: jal         0x80046340
    // 0x80037CE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    osMotorStart_recomp(rdram, ctx);
        goto after_0;
    // 0x80037CE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80037CE8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80037CEC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80037CF0: addiu       $t9, $t9, -0x2510
    ctx->r25 = ADD32(ctx->r25, -0X2510);
    // 0x80037CF4: sll         $t8, $a2, 5
    ctx->r24 = S32(ctx->r6 << 5);
    // 0x80037CF8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80037CFC: b           L_80037D44
    // 0x80037D00: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
        goto L_80037D44;
    // 0x80037D00: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_80037D04:
    // 0x80037D04: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x80037D08: subu        $t0, $t0, $a2
    ctx->r8 = SUB32(ctx->r8, ctx->r6);
    // 0x80037D0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80037D10: addu        $t0, $t0, $a2
    ctx->r8 = ADD32(ctx->r8, ctx->r6);
    // 0x80037D14: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80037D18: addiu       $t1, $t1, 0x71F0
    ctx->r9 = ADD32(ctx->r9, 0X71F0);
    // 0x80037D1C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80037D20: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x80037D24: jal         0x800461A0
    // 0x80037D28: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    osMotorStop_recomp(rdram, ctx);
        goto after_1;
    // 0x80037D28: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80037D2C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80037D30: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80037D34: addiu       $t3, $t3, -0x2510
    ctx->r11 = ADD32(ctx->r11, -0X2510);
    // 0x80037D38: sll         $t2, $a2, 5
    ctx->r10 = S32(ctx->r6 << 5);
    // 0x80037D3C: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x80037D40: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_80037D44:
    // 0x80037D44: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    // 0x80037D48: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80037D4C: bne         $a0, $zero, L_80037D60
    if (ctx->r4 != 0) {
        // 0x80037D50: nop
    
            goto L_80037D60;
    }
    // 0x80037D50: nop

    // 0x80037D54: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80037D58: b           L_80037D94
    // 0x80037D5C: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
        goto L_80037D94;
    // 0x80037D5C: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
L_80037D60:
    // 0x80037D60: bnel        $a0, $at, L_80037D98
    if (ctx->r4 != ctx->r1) {
        // 0x80037D64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80037D98;
    }
    goto skip_0;
    // 0x80037D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80037D68: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x80037D6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80037D70: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80037D74: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x80037D78: bne         $at, $zero, L_80037D90
    if (ctx->r1 != 0) {
        // 0x80037D7C: sw          $t5, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r13;
            goto L_80037D90;
    }
    // 0x80037D7C: sw          $t5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r13;
    // 0x80037D80: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80037D84: jal         0x80037B54
    // 0x80037D88: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80037B54_38754(rdram, ctx);
        goto after_2;
    // 0x80037D88: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x80037D8C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
L_80037D90:
    // 0x80037D90: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
L_80037D94:
    // 0x80037D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037D98:
    // 0x80037D98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80037D9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80037DA0: jr          $ra
    // 0x80037DA4: nop

    TRACE_RETURN()
    return;
    // 0x80037DA4: nop

;}
RECOMP_FUNC void alSynSetFXParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048928: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004892C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80048930: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80048934: lw          $t9, 0x28($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X28);
    // 0x80048938: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x8004893C: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80048940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80048944: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80048948: jalr        $t9
    // 0x8004894C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8004894C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x80048950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048958: jr          $ra
    // 0x8004895C: nop

    TRACE_RETURN()
    return;
    // 0x8004895C: nop

;}
RECOMP_FUNC void func_8003E1A8_3EDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E1A8: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003E1AC: lw          $t6, 0x7754($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7754);
    // 0x8003E1B0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8003E1B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E1B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E1BC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8003E1C0: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8003E1C4: addiu       $v1, $v1, 0x78D8
    ctx->r3 = ADD32(ctx->r3, 0X78D8);
    // 0x8003E1C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E1CC: lh          $t8, 0x32($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X32);
    // 0x8003E1D0: lh          $t9, 0x3E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3E);
    // 0x8003E1D4: lw          $t1, 0x50($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X50);
    // 0x8003E1D8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003E1DC: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8003E1E0: addiu       $t3, $t2, -0xE
    ctx->r11 = ADD32(ctx->r10, -0XE);
    // 0x8003E1E4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8003E1E8: lh          $t5, 0x42($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X42);
    // 0x8003E1EC: lh          $t4, 0x40($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X40);
    // 0x8003E1F0: lh          $t7, 0x34($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X34);
    // 0x8003E1F4: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x8003E1F8: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E1FC: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003E200: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x8003E204: addiu       $t2, $t2, 0x7150
    ctx->r10 = ADD32(ctx->r10, 0X7150);
    // 0x8003E208: ori         $t3, $t3, 0xFF
    ctx->r11 = ctx->r11 | 0XFF;
    // 0x8003E20C: sw          $t2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r10;
    // 0x8003E210: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x8003E214: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8003E218: mflo        $t6
    ctx->r14 = lo;
    // 0x8003E21C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E220: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8003E224: addiu       $t1, $t0, -0xC
    ctx->r9 = ADD32(ctx->r8, -0XC);
    // 0x8003E228: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8003E22C: jr          $ra
    // 0x8003E230: sw          $t4, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x8003E230: sw          $t4, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r12;
;}
RECOMP_FUNC void func_800355F4_361F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800355F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800355F8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800355FC: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80035600: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80035604: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80035608: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x8003560C: lhu         $t7, 0x66($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X66);
    // 0x80035610: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x80035614: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80035618: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003561C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80035620: lhu         $t9, 0x7A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7A);
    // 0x80035624: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x80035628: lhu         $t1, 0x82($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X82);
    // 0x8003562C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80035630: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80035634: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035638: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8003563C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80035640: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80035644: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80035648: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x8003564C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80035650: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80035654: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80035658: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8003565C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80035660: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80035664: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80035668: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8003566C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80035670: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80035674: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80035678: jal         0x80035690
    // 0x8003567C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_80035690_36290(rdram, ctx);
        goto after_0;
    // 0x8003567C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_0:
    // 0x80035680: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80035684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80035688: jr          $ra
    // 0x8003568C: nop

    TRACE_RETURN()
    return;
    // 0x8003568C: nop

;}
RECOMP_FUNC void func_800283E8_28FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800283E8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800283EC: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x800283F0: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x800283F4: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x800283F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800283FC: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x80028400: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028404: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x80028408: lwc1        $f4, -0x3E80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3E80);
    // 0x8002840C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028410: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
    // 0x80028414: lwc1        $f6, -0x3E7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3E7C);
    // 0x80028418: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8002841C: sw          $fp, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r30;
    // 0x80028420: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80028424: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80028428: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8002842C: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80028430: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80028434: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80028438: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8002843C: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x80028440: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x80028444: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x80028448: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x8002844C: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x80028450: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x80028454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028458: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8002845C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80028460: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80028464: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80028468: bc1f        L_80028480
    if (!c1cs) {
        // 0x8002846C: swc1        $f6, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
            goto L_80028480;
    }
    // 0x8002846C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x80028470: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028474: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80028478: b           L_80028490
    // 0x8002847C: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
        goto L_80028490;
    // 0x8002847C: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
L_80028480:
    // 0x80028480: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80028484: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028488: nop

    // 0x8002848C: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
L_80028490:
    // 0x80028490: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x80028494: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x80028498: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x8002849C: lw          $s2, 0xE4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE4);
    // 0x800284A0: lw          $s1, 0xEC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XEC);
    // 0x800284A4: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x800284A8: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800284AC: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
L_800284B0:
    // 0x800284B0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800284B4: lwc1        $f0, 0xE0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800284B8: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800284BC: mflo        $t6
    ctx->r14 = lo;
    // 0x800284C0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x800284C4: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x800284C8: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800284CC: mflo        $a1
    ctx->r5 = lo;
    // 0x800284D0: addu        $t2, $a0, $a1
    ctx->r10 = ADD32(ctx->r4, ctx->r5);
    // 0x800284D4: lh          $t7, 0x6($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X6);
    // 0x800284D8: addu        $a3, $s0, $a1
    ctx->r7 = ADD32(ctx->r16, ctx->r5);
    // 0x800284DC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800284E0: nop

    // 0x800284E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800284E8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800284EC: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x800284F0: nop

    // 0x800284F4: bc1t        L_800285BC
    if (c1cs) {
        // 0x800284F8: nop
    
            goto L_800285BC;
    }
    // 0x800284F8: nop

    // 0x800284FC: lh          $t8, 0xC($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XC);
    // 0x80028500: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80028504: nop

    // 0x80028508: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002850C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80028510: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80028514: nop

    // 0x80028518: bc1t        L_800285BC
    if (c1cs) {
        // 0x8002851C: nop
    
            goto L_800285BC;
    }
    // 0x8002851C: nop

    // 0x80028520: lh          $t9, 0x8($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X8);
    // 0x80028524: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80028528: nop

    // 0x8002852C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028530: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80028534: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x80028538: nop

    // 0x8002853C: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028540: nop
    
            goto L_800285BC;
    }
    // 0x80028540: nop

    // 0x80028544: lh          $t6, 0xE($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XE);
    // 0x80028548: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002854C: nop

    // 0x80028550: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028554: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80028558: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x8002855C: nop

    // 0x80028560: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028564: nop
    
            goto L_800285BC;
    }
    // 0x80028564: nop

    // 0x80028568: lh          $t7, 0xA($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XA);
    // 0x8002856C: lwc1        $f2, 0xD8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80028570: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80028574: nop

    // 0x80028578: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002857C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80028580: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80028584: nop

    // 0x80028588: bc1t        L_800285BC
    if (c1cs) {
        // 0x8002858C: nop
    
            goto L_800285BC;
    }
    // 0x8002858C: nop

    // 0x80028590: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x80028594: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x80028598: lh          $t8, 0x10($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X10);
    // 0x8002859C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800285A0: nop

    // 0x800285A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800285A8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800285AC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800285B0: nop

    // 0x800285B4: bc1fl       L_800286E0
    if (!c1cs) {
        // 0x800285B8: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_800286E0;
    }
    goto skip_0;
    // 0x800285B8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_0:
L_800285BC:
    // 0x800285BC: beq         $t5, $a2, L_80028AE4
    if (ctx->r13 == ctx->r6) {
        // 0x800285C0: lwc1        $f2, 0xD8($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_80028AE4;
    }
    // 0x800285C0: lwc1        $f2, 0xD8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x800285C4: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800285C8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800285CC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800285D0: mflo        $t9
    ctx->r25 = lo;
    // 0x800285D4: addu        $t6, $a0, $t9
    ctx->r14 = ADD32(ctx->r4, ctx->r25);
    // 0x800285D8: lhu         $a2, 0x0($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X0);
    // 0x800285DC: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800285E0: mflo        $a1
    ctx->r5 = lo;
    // 0x800285E4: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x800285E8: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x800285EC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800285F0: nop

    // 0x800285F4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800285F8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800285FC: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80028600: nop

    // 0x80028604: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028608: nop
    
            goto L_800285BC;
    }
    // 0x80028608: nop

    // 0x8002860C: addu        $a3, $s0, $a1
    ctx->r7 = ADD32(ctx->r16, ctx->r5);
    // 0x80028610: lh          $t9, 0xC($a3)
    ctx->r25 = MEM_H(ctx->r7, 0XC);
    // 0x80028614: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80028618: nop

    // 0x8002861C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028620: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80028624: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80028628: nop

    // 0x8002862C: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028630: nop
    
            goto L_800285BC;
    }
    // 0x80028630: nop

    // 0x80028634: lh          $t6, 0x8($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X8);
    // 0x80028638: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002863C: nop

    // 0x80028640: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80028644: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80028648: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8002864C: nop

    // 0x80028650: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028654: nop
    
            goto L_800285BC;
    }
    // 0x80028654: nop

    // 0x80028658: lh          $t7, 0xE($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XE);
    // 0x8002865C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80028660: nop

    // 0x80028664: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028668: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8002866C: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x80028670: nop

    // 0x80028674: bc1t        L_800285BC
    if (c1cs) {
        // 0x80028678: nop
    
            goto L_800285BC;
    }
    // 0x80028678: nop

    // 0x8002867C: lh          $t8, 0xA($a3)
    ctx->r24 = MEM_H(ctx->r7, 0XA);
    // 0x80028680: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80028684: nop

    // 0x80028688: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002868C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80028690: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x80028694: nop

    // 0x80028698: bc1t        L_800285BC
    if (c1cs) {
        // 0x8002869C: nop
    
            goto L_800285BC;
    }
    // 0x8002869C: nop

    // 0x800286A0: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    // 0x800286A4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800286A8: nop

    // 0x800286AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800286B0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800286B4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x800286B8: nop

    // 0x800286BC: bc1t        L_800285BC
    if (c1cs) {
        // 0x800286C0: nop
    
            goto L_800285BC;
    }
    // 0x800286C0: nop

    // 0x800286C4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800286C8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x800286CC: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800286D0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x800286D4: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x800286D8: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x800286DC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_800286E0:
    // 0x800286E0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800286E4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800286E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800286EC: addiu       $v0, $s6, 0x3
    ctx->r2 = ADD32(ctx->r22, 0X3);
    // 0x800286F0: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x800286F4: lhu         $s4, 0x2($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X2);
    // 0x800286F8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800286FC: andi        $t2, $t7, 0xFFFF
    ctx->r10 = ctx->r15 & 0XFFFF;
    // 0x80028700: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80028704: andi        $a1, $s3, 0xFFFF
    ctx->r5 = ctx->r19 & 0XFFFF;
    // 0x80028708: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
L_8002870C:
    // 0x8002870C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028710: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80028714: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80028718: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8002871C: mflo        $t8
    ctx->r24 = lo;
    // 0x80028720: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x80028724: lhu         $s6, 0x0($v1)
    ctx->r22 = MEM_HU(ctx->r3, 0X0);
    // 0x80028728: multu       $s6, $s3
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002872C: mflo        $t9
    ctx->r25 = lo;
    // 0x80028730: addu        $fp, $s2, $t9
    ctx->r30 = ADD32(ctx->r18, ctx->r25);
    // 0x80028734: lwc1        $f8, 0xC($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0XC);
    // 0x80028738: lwc1        $f26, 0x0($fp)
    ctx->f26.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8002873C: lwc1        $f28, 0x8($fp)
    ctx->f28.u32l = MEM_W(ctx->r30, 0X8);
    // 0x80028740: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80028744: lwc1        $f14, 0x4($fp)
    ctx->f14.u32l = MEM_W(ctx->r30, 0X4);
    // 0x80028748: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002874C: mul.s       $f20, $f4, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80028750: lbu         $s7, 0x10($fp)
    ctx->r23 = MEM_BU(ctx->r30, 0X10);
    // 0x80028754: mul.s       $f22, $f6, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x80028758: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x8002875C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80028760: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80028764: add.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x80028768: add.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8002876C: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80028770: beq         $s7, $zero, L_8002878C
    if (ctx->r23 == 0) {
        // 0x80028774: mov.s       $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
            goto L_8002878C;
    }
    // 0x80028774: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80028778: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8002877C: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x80028780: nop

    // 0x80028784: bc1fl       L_800288F8
    if (!c1cs) {
        // 0x80028788: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_800288F8;
    }
    goto skip_1;
    // 0x80028788: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_1:
L_8002878C:
    // 0x8002878C: mul.s       $f0, $f14, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80028790: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80028794: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80028798: c.eq.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d == ctx->f10.d;
    // 0x8002879C: nop

    // 0x800287A0: bc1fl       L_800287B8
    if (!c1cs) {
        // 0x800287A4: neg.s       $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
            goto L_800287B8;
    }
    goto skip_2;
    // 0x800287A4: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    skip_2:
    // 0x800287A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800287AC: b           L_800287C0
    // 0x800287B0: nop

        goto L_800287C0;
    // 0x800287B0: nop

    // 0x800287B4: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
L_800287B8:
    // 0x800287B8: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x800287BC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
L_800287C0:
    // 0x800287C0: bne         $v0, $zero, L_800288B4
    if (ctx->r2 != 0) {
        // 0x800287C4: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_800288B4;
    }
    // 0x800287C4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800287C8: ldc1        $f8, -0x3E78($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3E78);
    // 0x800287CC: cvt.d.s     $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f10.d = CVT_D_S(ctx->f30.fl);
    // 0x800287D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800287D4: c.eq.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d == ctx->f10.d;
    // 0x800287D8: nop

    // 0x800287DC: bc1t        L_80028834
    if (c1cs) {
        // 0x800287E0: nop
    
            goto L_80028834;
    }
    // 0x800287E0: nop

    // 0x800287E4: ldc1        $f4, -0x3E70($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3E70);
    // 0x800287E8: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x800287EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800287F0: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x800287F4: nop

    // 0x800287F8: bc1f        L_80028834
    if (!c1cs) {
        // 0x800287FC: nop
    
            goto L_80028834;
    }
    // 0x800287FC: nop

    // 0x80028800: ldc1        $f6, -0x3E68($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3E68);
    // 0x80028804: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80028808: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8002880C: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x80028810: nop

    // 0x80028814: bc1f        L_80028834
    if (!c1cs) {
        // 0x80028818: nop
    
            goto L_80028834;
    }
    // 0x80028818: nop

    // 0x8002881C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80028820: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80028824: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80028828: add.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x8002882C: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80028830: add.s       $f24, $f10, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f18.fl;
L_80028834:
    // 0x80028834: beql        $a3, $zero, L_800288B8
    if (ctx->r7 == 0) {
        // 0x80028838: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_3;
    // 0x80028838: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_3:
    // 0x8002883C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80028840: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80028844: c.eq.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d == ctx->f4.d;
    // 0x80028848: nop

    // 0x8002884C: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x80028850: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_4;
    // 0x80028850: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_4:
    // 0x80028854: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80028858: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002885C: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80028860: nop

    // 0x80028864: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x80028868: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_5;
    // 0x80028868: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_5:
    // 0x8002886C: c.eq.s      $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f10.fl == ctx->f26.fl;
    // 0x80028870: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028874: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x80028878: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_6;
    // 0x80028878: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_6:
    // 0x8002887C: c.eq.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl == ctx->f14.fl;
    // 0x80028880: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028884: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x80028888: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_7;
    // 0x80028888: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_7:
    // 0x8002888C: c.eq.s      $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f6.fl == ctx->f28.fl;
    // 0x80028890: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80028894: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x80028898: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_8;
    // 0x80028898: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_8:
    // 0x8002889C: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x800288A0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800288A4: bc1fl       L_800288B8
    if (!c1cs) {
        // 0x800288A8: cvt.d.s     $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
            goto L_800288B8;
    }
    goto skip_9;
    // 0x800288A8: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    skip_9:
    // 0x800288AC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800288B0: nop

L_800288B4:
    // 0x800288B4: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
L_800288B8:
    // 0x800288B8: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x800288BC: nop

    // 0x800288C0: bc1fl       L_800288F8
    if (!c1cs) {
        // 0x800288C4: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_800288F8;
    }
    goto skip_10;
    // 0x800288C4: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_10:
    // 0x800288C8: c.le.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl <= ctx->f30.fl;
    // 0x800288CC: nop

    // 0x800288D0: bc1fl       L_800288F8
    if (!c1cs) {
        // 0x800288D4: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_800288F8;
    }
    goto skip_11;
    // 0x800288D4: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_11:
    // 0x800288D8: mov.s       $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    ctx->f30.fl = ctx->f2.fl;
    // 0x800288DC: swc1        $f26, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f26.u32l;
    // 0x800288E0: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x800288E4: swc1        $f28, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f28.u32l;
    // 0x800288E8: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x800288EC: swc1        $f24, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f24.u32l;
    // 0x800288F0: andi        $t1, $s7, 0xFF
    ctx->r9 = ctx->r23 & 0XFF;
    // 0x800288F4: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
L_800288F8:
    // 0x800288F8: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x800288FC: nop

    // 0x80028900: bc1fl       L_80028A0C
    if (!c1cs) {
        // 0x80028904: lh          $s6, 0x4($v1)
        ctx->r22 = MEM_H(ctx->r3, 0X4);
            goto L_80028A0C;
    }
    goto skip_12;
    // 0x80028904: lh          $s6, 0x4($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X4);
    skip_12:
    // 0x80028908: lh          $s6, 0x2($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X2);
    // 0x8002890C: lwc1        $f14, 0xDC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80028910: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028914: bne         $s6, $zero, L_80028A00
    if (ctx->r22 != 0) {
        // 0x80028918: nop
    
            goto L_80028A00;
    }
    // 0x80028918: nop

    // 0x8002891C: mul.s       $f0, $f14, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x80028920: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80028924: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x80028928: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x8002892C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80028930: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x80028934: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80028938: nop

    // 0x8002893C: bc1fl       L_80028954
    if (!c1cs) {
        // 0x80028940: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80028954;
    }
    goto skip_13;
    // 0x80028940: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_13:
    // 0x80028944: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80028948: b           L_80028958
    // 0x8002894C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_80028958;
    // 0x8002894C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x80028950: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80028954:
    // 0x80028954: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80028958:
    // 0x80028958: ldc1        $f10, -0x3E60($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3E60);
    // 0x8002895C: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80028960: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80028964: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80028968: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002896C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80028970: bc1fl       L_800289B8
    if (!c1cs) {
        // 0x80028974: add.s       $f10, $f2, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
            goto L_800289B8;
    }
    goto skip_14;
    // 0x80028974: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    skip_14:
    // 0x80028978: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8002897C: c.eq.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d == ctx->f4.d;
    // 0x80028980: nop

    // 0x80028984: bc1tl       L_800289B8
    if (c1cs) {
        // 0x80028988: add.s       $f10, $f2, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
            goto L_800289B8;
    }
    goto skip_15;
    // 0x80028988: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    skip_15:
    // 0x8002898C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80028990: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028994: c.le.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d <= ctx->f6.d;
    // 0x80028998: nop

    // 0x8002899C: bc1f        L_800289B0
    if (!c1cs) {
        // 0x800289A0: nop
    
            goto L_800289B0;
    }
    // 0x800289A0: nop

    // 0x800289A4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800289A8: b           L_800289B4
    // 0x800289AC: lwc1        $f2, -0x3E58($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3E58);
        goto L_800289B4;
    // 0x800289AC: lwc1        $f2, -0x3E58($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3E58);
L_800289B0:
    // 0x800289B0: lwc1        $f2, -0x3E54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3E54);
L_800289B4:
    // 0x800289B4: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
L_800289B8:
    // 0x800289B8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800289BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800289C0: bne         $t6, $zero, L_800289D4
    if (ctx->r14 != 0) {
        // 0x800289C4: swc1        $f10, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
            goto L_800289D4;
    }
    // 0x800289C4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x800289C8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800289CC: b           L_80028AE4
    // 0x800289D0: sh          $t7, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r15;
        goto L_80028AE4;
    // 0x800289D0: sh          $t7, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r15;
L_800289D4:
    // 0x800289D4: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x800289D8: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800289DC: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800289E0: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x800289E4: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800289E8: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800289EC: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x800289F0: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x800289F4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x800289F8: b           L_8002870C
    // 0x800289FC: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
        goto L_8002870C;
    // 0x800289FC: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
L_80028A00:
    // 0x80028A00: b           L_8002870C
    // 0x80028A04: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
        goto L_8002870C;
    // 0x80028A04: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
    // 0x80028A08: lh          $s6, 0x4($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X4);
L_80028A0C:
    // 0x80028A0C: bne         $s6, $zero, L_80028ADC
    if (ctx->r22 != 0) {
        // 0x80028A10: nop
    
            goto L_80028ADC;
    }
    // 0x80028A10: nop

    // 0x80028A14: bne         $a3, $s5, L_80028AC8
    if (ctx->r7 != ctx->r21) {
        // 0x80028A18: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80028AC8;
    }
    // 0x80028A18: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80028A1C: bne         $t3, $zero, L_80028A44
    if (ctx->r11 != 0) {
        // 0x80028A20: lwc1        $f6, 0x98($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
            goto L_80028A44;
    }
    // 0x80028A20: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80028A24: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80028A28: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80028A2C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028A30: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x80028A34: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x80028A38: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x80028A3C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x80028A40: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
L_80028A44:
    // 0x80028A44: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80028A48: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80028A4C: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80028A50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028A54: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80028A58: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80028A5C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80028A60: nop

    // 0x80028A64: bc1tl       L_80028A88
    if (c1cs) {
        // 0x80028A68: swc1        $f2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
            goto L_80028A88;
    }
    goto skip_16;
    // 0x80028A68: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    skip_16:
    // 0x80028A6C: ldc1        $f10, -0x3E50($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3E50);
    // 0x80028A70: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80028A74: c.eq.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d == ctx->f4.d;
    // 0x80028A78: nop

    // 0x80028A7C: bc1f        L_80028AC8
    if (!c1cs) {
        // 0x80028A80: nop
    
            goto L_80028AC8;
    }
    // 0x80028A80: nop

    // 0x80028A84: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
L_80028A88:
    // 0x80028A88: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80028A8C: swc1        $f2, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f2.u32l;
    // 0x80028A90: sh          $s5, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r21;
    // 0x80028A94: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x80028A98: swc1        $f12, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f12.u32l;
    // 0x80028A9C: swc1        $f12, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f12.u32l;
    // 0x80028AA0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80028AA4: swc1        $f6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f6.u32l;
    // 0x80028AA8: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028AAC: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
    // 0x80028AB0: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028AB4: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x80028AB8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80028ABC: sb          $t3, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r11;
    // 0x80028AC0: sh          $s4, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r20;
    // 0x80028AC4: swc1        $f4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f4.u32l;
L_80028AC8:
    // 0x80028AC8: beq         $t5, $a2, L_80028AE4
    if (ctx->r13 == ctx->r6) {
        // 0x80028ACC: lwc1        $f14, 0xD4($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_80028AE4;
    }
    // 0x80028ACC: lwc1        $f14, 0xD4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80028AD0: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x80028AD4: b           L_800284B0
    // 0x80028AD8: lwc1        $f12, 0xD0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD0);
        goto L_800284B0;
    // 0x80028AD8: lwc1        $f12, 0xD0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD0);
L_80028ADC:
    // 0x80028ADC: b           L_8002870C
    // 0x80028AE0: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
        goto L_8002870C;
    // 0x80028AE0: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
L_80028AE4:
    // 0x80028AE4: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x80028AE8: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x80028AEC: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x80028AF0: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x80028AF4: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x80028AF8: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x80028AFC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80028B00: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80028B04: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80028B08: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80028B0C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80028B10: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80028B14: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x80028B18: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80028B1C: lw          $fp, 0x54($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X54);
    // 0x80028B20: jr          $ra
    // 0x80028B24: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x80028B24: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80038408_39008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038408: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003840C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80038410: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x80038414: addiu       $s1, $s1, 0x1FB8
    ctx->r17 = ADD32(ctx->r17, 0X1FB8);
    // 0x80038418: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003841C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80038420: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80038424: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80038428: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x8003842C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80038430: beql        $s0, $zero, L_8003848C
    if (ctx->r16 == 0) {
        // 0x80038434: lw          $s0, 0x8($s1)
        ctx->r16 = MEM_W(ctx->r17, 0X8);
            goto L_8003848C;
    }
    goto skip_0;
    // 0x80038434: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    skip_0:
    // 0x80038438: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_8003843C:
    // 0x8003843C: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x80038440: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80038444: bne         $at, $zero, L_80038488
    if (ctx->r1 != 0) {
        // 0x80038448: addiu       $v1, $v0, 0xC00
        ctx->r3 = ADD32(ctx->r2, 0XC00);
            goto L_80038488;
    }
    // 0x80038448: addiu       $v1, $v0, 0xC00
    ctx->r3 = ADD32(ctx->r2, 0XC00);
    // 0x8003844C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80038450: bne         $at, $zero, L_8003847C
    if (ctx->r1 != 0) {
        // 0x80038454: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_8003847C;
    }
    // 0x80038454: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80038458: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8003845C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80038460: lw          $t7, -0x1DD0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1DD0);
    // 0x80038464: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80038468: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x8003846C: jal         0x80047710
    // 0x80038470: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80038470: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    after_0:
    // 0x80038474: b           L_80038578
    // 0x80038478: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80038578;
    // 0x80038478: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003847C:
    // 0x8003847C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80038480: bnel        $s0, $zero, L_8003843C
    if (ctx->r16 != 0) {
        // 0x80038484: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_8003843C;
    }
    goto skip_1;
    // 0x80038484: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80038488:
    // 0x80038488: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
L_8003848C:
    // 0x8003848C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80038490: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x80038494: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80038498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003849C: jal         0x800475F0
    // 0x800384A0: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x800384A0: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    after_1:
    // 0x800384A4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800384A8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800384AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800384B0: beq         $a2, $zero, L_800384C8
    if (ctx->r6 == 0) {
        // 0x800384B4: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_800384C8;
    }
    // 0x800384B4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800384B8: jal         0x80047620
    // 0x800384BC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    alLink(rdram, ctx);
        goto after_2;
    // 0x800384BC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_2:
    // 0x800384C0: b           L_800384F4
    // 0x800384C4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
        goto L_800384F4;
    // 0x800384C4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
L_800384C8:
    // 0x800384C8: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x800384CC: beql        $v0, $zero, L_800384EC
    if (ctx->r2 == 0) {
        // 0x800384D0: sw          $s0, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r16;
            goto L_800384EC;
    }
    goto skip_2;
    // 0x800384D0: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    skip_2:
    // 0x800384D4: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x800384D8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800384DC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800384E0: b           L_800384F4
    // 0x800384E4: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
        goto L_800384F4;
    // 0x800384E4: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x800384E8: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
L_800384EC:
    // 0x800384EC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800384F0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_800384F4:
    // 0x800384F4: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x800384F8: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x800384FC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80038500: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80038504: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x80038508: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003850C: lw          $t2, -0x1DD0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1DD0);
    // 0x80038510: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80038514: addiu       $t0, $t0, -0x1DCC
    ctx->r8 = ADD32(ctx->r8, -0X1DCC);
    // 0x80038518: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x8003851C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80038520: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80038524: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80038528: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8003852C: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x80038530: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80038534: addiu       $t6, $t6, 0x2858
    ctx->r14 = ADD32(ctx->r14, 0X2858);
    // 0x80038538: addiu       $t4, $t4, 0x2258
    ctx->r12 = ADD32(ctx->r12, 0X2258);
    // 0x8003853C: addiu       $t5, $zero, 0xC00
    ctx->r13 = ADD32(0, 0XC00);
    // 0x80038540: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80038544: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80038548: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8003854C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x80038550: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80038554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003855C: jal         0x800407D0
    // 0x80038560: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x80038560: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_3:
    // 0x80038564: jal         0x80047710
    // 0x80038568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80038568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8003856C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80038570: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80038574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80038578:
    // 0x80038578: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8003857C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80038580: jr          $ra
    // 0x80038584: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80038584: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8000EB08_F708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EB08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EB0C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000EB10: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EB14: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EB18: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EB1C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000EB20: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000EB24: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000EB28: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EB2C: sub.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8000EB30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EB34: jal         0x800040A8
    // 0x8000EB38: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000EB38: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    after_0:
    // 0x8000EB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EB40: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x8000EB44: andi        $v0, $t6, 0x3FF
    ctx->r2 = ctx->r14 & 0X3FF;
    // 0x8000EB48: jr          $ra
    // 0x8000EB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000EB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003522C_35E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003522C: jr          $ra
    // 0x80035230: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80035230: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80006430_7030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006430: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80006434: jr          $ra
    // 0x80006438: swc1        $f12, -0x4DCC($at)
    MEM_W(-0X4DCC, ctx->r1) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80006438: swc1        $f12, -0x4DCC($at)
    MEM_W(-0X4DCC, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800103DC_10FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800103DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800103E0: lh          $t6, 0x7EF8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7EF8);
    // 0x800103E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800103E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800103EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800103F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800103F4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800103F8: beq         $t6, $zero, L_80010434
    if (ctx->r14 == 0) {
        // 0x800103FC: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80010434;
    }
    // 0x800103FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80010400: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80010404: addiu       $v0, $v0, 0x7EF8
    ctx->r2 = ADD32(ctx->r2, 0X7EF8);
    // 0x80010408: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8001040C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_80010410:
    // 0x80010410: sltiu       $at, $a3, 0x10
    ctx->r1 = ctx->r7 < 0X10 ? 1 : 0;
    // 0x80010414: beq         $at, $zero, L_80010434
    if (ctx->r1 == 0) {
        // 0x80010418: nop
    
            goto L_80010434;
    }
    // 0x80010418: nop

    // 0x8001041C: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010420: mflo        $t7
    ctx->r15 = lo;
    // 0x80010424: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80010428: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8001042C: bnel        $t9, $zero, L_80010410
    if (ctx->r25 != 0) {
        // 0x80010430: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_80010410;
    }
    goto skip_0;
    // 0x80010430: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
L_80010434:
    // 0x80010434: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80010438: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8001043C: addiu       $v0, $v0, 0x7EF8
    ctx->r2 = ADD32(ctx->r2, 0X7EF8);
    // 0x80010440: bne         $a3, $at, L_80010450
    if (ctx->r7 != ctx->r1) {
        // 0x80010444: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_80010450;
    }
    // 0x80010444: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80010448: b           L_8001059C
    // 0x8001044C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001059C;
    // 0x8001044C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80010450:
    // 0x80010450: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010454: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80010458: mflo        $t1
    ctx->r9 = lo;
    // 0x8001045C: addu        $t0, $v0, $t1
    ctx->r8 = ADD32(ctx->r2, ctx->r9);
    // 0x80010460: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x80010464: beq         $t2, $zero, L_80010474
    if (ctx->r10 == 0) {
        // 0x80010468: nop
    
            goto L_80010474;
    }
    // 0x80010468: nop

    // 0x8001046C: b           L_8001059C
    // 0x80010470: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001059C;
    // 0x80010470: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80010474:
    // 0x80010474: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010478: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001047C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80010480: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80010484: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80010488: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8001048C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80010490: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80010494: mflo        $a1
    ctx->r5 = lo;
    // 0x80010498: jal         0x800148F0
    // 0x8001049C: nop

    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x8001049C: nop

    after_0:
    // 0x800104A0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800104A4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800104A8: bne         $v0, $zero, L_800104B8
    if (ctx->r2 != 0) {
        // 0x800104AC: sw          $v0, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r2;
            goto L_800104B8;
    }
    // 0x800104AC: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x800104B0: b           L_8001059C
    // 0x800104B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001059C;
    // 0x800104B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800104B8:
    // 0x800104B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800104BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800104C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800104C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800104C8: jal         0x80035EEC
    // 0x800104CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x800104CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x800104D0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800104D4: bne         $v0, $zero, L_800104F4
    if (ctx->r2 != 0) {
        // 0x800104D8: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_800104F4;
    }
    // 0x800104D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800104DC: jal         0x80010374
    // 0x800104E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80010374_10F74(rdram, ctx);
        goto after_2;
    // 0x800104E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x800104E4: jal         0x80035044
    // 0x800104E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80035044_35C44(rdram, ctx);
        goto after_3;
    // 0x800104E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x800104EC: b           L_8001059C
    // 0x800104F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001059C;
    // 0x800104F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800104F4:
    // 0x800104F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800104F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800104FC: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    // 0x80010500: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80010504: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80010508: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8001050C: jal         0x80010358
    // 0x80010510: sh          $t5, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r13;
    func_80010358_10F58(rdram, ctx);
        goto after_4;
    // 0x80010510: sh          $t5, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r13;
    after_4:
    // 0x80010514: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80010518: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001051C: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x80010520: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    // 0x80010524: jal         0x800086D8
    // 0x80010528: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800086D8_92D8(rdram, ctx);
        goto after_5;
    // 0x80010528: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_5:
    // 0x8001052C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80010530: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80010534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80010538: lbu         $t8, 0x8($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X8);
    // 0x8001053C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80010540: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80010544: andi        $t1, $t8, 0xFFFB
    ctx->r9 = ctx->r24 & 0XFFFB;
    // 0x80010548: andi        $t2, $t1, 0x1F
    ctx->r10 = ctx->r9 & 0X1F;
    // 0x8001054C: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x80010550: sb          $t1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r9;
    // 0x80010554: sb          $t3, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r11;
    // 0x80010558: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8001055C: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x80010560: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x80010564: srl         $t5, $v1, 15
    ctx->r13 = S32(U32(ctx->r3) >> 15);
    // 0x80010568: sll         $t6, $t5, 28
    ctx->r14 = S32(ctx->r13 << 28);
    // 0x8001056C: srl         $t7, $t6, 13
    ctx->r15 = S32(U32(ctx->r14) >> 13);
    // 0x80010570: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x80010574: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80010578: xor         $t8, $t7, $v1
    ctx->r24 = ctx->r15 ^ ctx->r3;
    // 0x8001057C: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80010580: lbu         $t9, 0xA($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA);
    // 0x80010584: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80010588: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x8001058C: andi        $t1, $t9, 0xFF87
    ctx->r9 = ctx->r25 & 0XFF87;
    // 0x80010590: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x80010594: sb          $t1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r9;
    // 0x80010598: sb          $t4, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r12;
L_8001059C:
    // 0x8001059C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800105A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800105A4: jr          $ra
    // 0x800105A8: nop

    TRACE_RETURN()
    return;
    // 0x800105A8: nop

;}
RECOMP_FUNC void alSavePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800508A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800508A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800508AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800508B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x800508B4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800508B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800508BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800508C0: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x800508C4: jalr        $t9
    // 0x800508C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800508C8: nop

    after_0:
    // 0x800508CC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800508D0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800508D4: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x800508D8: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x800508DC: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x800508E0: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x800508E4: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x800508E8: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x800508EC: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x800508F0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x800508F4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800508F8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x800508FC: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x80050900: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80050904: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80050908: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8005090C: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x80050910: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80050914: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80050918: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8005091C: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x80050920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80050924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80050928: jr          $ra
    // 0x8005092C: nop

    TRACE_RETURN()
    return;
    // 0x8005092C: nop

;}
RECOMP_FUNC void func_8003B89C_3C49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B89C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003B8A0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003B8A4: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003B8A8: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003B8AC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8003B8B0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8003B8B4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003B8B8: sb          $t7, 0x47($t8)
    MEM_B(0X47, ctx->r24) = ctx->r15;
    // 0x8003B8BC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8003B8C0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8003B8C4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003B8C8: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8003B8CC: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003B8D0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x8003B8D4: sb          $t2, 0x46($t3)
    MEM_B(0X46, ctx->r11) = ctx->r10;
    // 0x8003B8D8: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8003B8DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003B8E0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003B8E4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8003B8E8: lbu         $t6, 0x46($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X46);
    // 0x8003B8EC: lhu         $t9, 0x3A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X3A);
    // 0x8003B8F0: lbu         $t0, 0x47($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X47);
    // 0x8003B8F4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8003B8F8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8003B8FC: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x8003B900: div         $zero, $v1, $t0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r8)));
    // 0x8003B904: mflo        $t1
    ctx->r9 = lo;
    // 0x8003B908: sh          $t1, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r9;
    // 0x8003B90C: bne         $t0, $zero, L_8003B918
    if (ctx->r8 != 0) {
        // 0x8003B910: nop
    
            goto L_8003B918;
    }
    // 0x8003B910: nop

    // 0x8003B914: break       7
    do_break(2147727636);
L_8003B918:
    // 0x8003B918: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003B91C: bne         $t0, $at, L_8003B930
    if (ctx->r8 != ctx->r1) {
        // 0x8003B920: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003B930;
    }
    // 0x8003B920: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003B924: bne         $v1, $at, L_8003B930
    if (ctx->r3 != ctx->r1) {
        // 0x8003B928: nop
    
            goto L_8003B930;
    }
    // 0x8003B928: nop

    // 0x8003B92C: break       6
    do_break(2147727660);
L_8003B930:
    // 0x8003B930: jr          $ra
    // 0x8003B934: nop

    TRACE_RETURN()
    return;
    // 0x8003B934: nop

;}
RECOMP_FUNC void alSynSetFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004864C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80048650: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80048654: beql        $t6, $zero, L_800486C8
    if (ctx->r14 == 0) {
        // 0x80048658: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800486C8;
    }
    goto skip_0;
    // 0x80048658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8004865C: jal         0x80047960
    // 0x80048660: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80048660: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80048664: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80048668: beq         $v0, $zero, L_800486C4
    if (ctx->r2 == 0) {
        // 0x8004866C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800486C4;
    }
    // 0x8004866C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80048670: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80048674: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80048678: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8004867C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80048680: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80048684: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80048688: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8004868C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80048690: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x80048694: bgez        $v1, L_800486A4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80048698: negu        $t3, $v1
        ctx->r11 = SUB32(0, ctx->r3);
            goto L_800486A4;
    }
    // 0x80048698: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x8004869C: b           L_800486A8
    // 0x800486A0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
        goto L_800486A8;
    // 0x800486A0: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
L_800486A4:
    // 0x800486A4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_800486A8:
    // 0x800486A8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800486AC: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x800486B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800486B4: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x800486B8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800486BC: jalr        $t9
    // 0x800486C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800486C0: nop

    after_1:
L_800486C4:
    // 0x800486C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800486C8:
    // 0x800486C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800486CC: jr          $ra
    // 0x800486D0: nop

    TRACE_RETURN()
    return;
    // 0x800486D0: nop

;}
RECOMP_FUNC void func_800184B4_190B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800184B4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800184B8: addiu       $a2, $a2, -0x7B08
    ctx->r6 = ADD32(ctx->r6, -0X7B08);
    // 0x800184BC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x800184C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800184C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800184C8: bgez        $t6, L_8001856C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800184CC: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8001856C;
    }
    // 0x800184CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800184D0: lbu         $t7, 0x3($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3);
    // 0x800184D4: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800184D8: addiu       $v1, $v1, -0x7B58
    ctx->r3 = ADD32(ctx->r3, -0X7B58);
    // 0x800184DC: bne         $t7, $zero, L_8001852C
    if (ctx->r15 != 0) {
        // 0x800184E0: lui         $t4, 0x8007
        ctx->r12 = S32(0X8007 << 16);
            goto L_8001852C;
    }
    // 0x800184E0: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x800184E4: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800184E8: addiu       $v1, $v1, -0x7B58
    ctx->r3 = ADD32(ctx->r3, -0X7B58);
    // 0x800184EC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800184F0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800184F4: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x800184F8: addiu       $t9, $t1, 0x78
    ctx->r25 = ADD32(ctx->r9, 0X78);
L_800184FC:
    // 0x800184FC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80018500: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80018504: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80018508: sw          $at, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = ctx->r1;
    // 0x8001850C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80018510: sw          $at, 0x70($t1)
    MEM_W(0X70, ctx->r9) = ctx->r1;
    // 0x80018514: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80018518: bne         $t0, $t9, L_800184FC
    if (ctx->r8 != ctx->r25) {
        // 0x8001851C: sw          $at, 0x74($t1)
        MEM_W(0X74, ctx->r9) = ctx->r1;
            goto L_800184FC;
    }
    // 0x8001851C: sw          $at, 0x74($t1)
    MEM_W(0X74, ctx->r9) = ctx->r1;
    // 0x80018520: lw          $t2, -0x7B04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X7B04);
    // 0x80018524: b           L_80018560
    // 0x80018528: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
        goto L_80018560;
    // 0x80018528: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_8001852C:
    // 0x8001852C: addiu       $t4, $t4, -0x4958
    ctx->r12 = ADD32(ctx->r12, -0X4958);
    // 0x80018530: addiu       $t6, $t4, 0x78
    ctx->r14 = ADD32(ctx->r12, 0X78);
    // 0x80018534: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_80018538:
    // 0x80018538: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x8001853C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80018540: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80018544: sw          $at, 0x6C($t3)
    MEM_W(0X6C, ctx->r11) = ctx->r1;
    // 0x80018548: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x8001854C: sw          $at, 0x70($t3)
    MEM_W(0X70, ctx->r11) = ctx->r1;
    // 0x80018550: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x80018554: bne         $t4, $t6, L_80018538
    if (ctx->r12 != ctx->r14) {
        // 0x80018558: sw          $at, 0x74($t3)
        MEM_W(0X74, ctx->r11) = ctx->r1;
            goto L_80018538;
    }
    // 0x80018558: sw          $at, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->r1;
    // 0x8001855C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_80018560:
    // 0x80018560: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80018564: addiu       $t8, $t7, 0x78
    ctx->r24 = ADD32(ctx->r15, 0X78);
    // 0x80018568: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_8001856C:
    // 0x8001856C: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80018570: addiu       $v1, $v1, -0x7B58
    ctx->r3 = ADD32(ctx->r3, -0X7B58);
    // 0x80018574: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80018578: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8001857C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80018580: sb          $v0, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r2;
    // 0x80018584: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80018588: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x8001858C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80018590: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x80018594: sb          $v0, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r2;
    // 0x80018598: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8001859C: sb          $v0, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r2;
    // 0x800185A0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x800185A4: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x800185A8: sb          $v0, 0x6($t5)
    MEM_B(0X6, ctx->r13) = ctx->r2;
    // 0x800185AC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800185B0: jal         0x800196F0
    // 0x800185B4: sb          $v0, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r2;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_0;
    // 0x800185B4: sb          $v0, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r2;
    after_0:
    // 0x800185B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800185BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800185C0: jr          $ra
    // 0x800185C4: nop

    TRACE_RETURN()
    return;
    // 0x800185C4: nop

;}
RECOMP_FUNC void func_80013AC4_146C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013AC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013AC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013ACC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80013AD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80013AD4: lhu         $s0, 0x0($a0)
    ctx->r16 = MEM_HU(ctx->r4, 0X0);
    // 0x80013AD8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80013ADC: beq         $s0, $zero, L_80013AFC
    if (ctx->r16 == 0) {
        // 0x80013AE0: andi        $a0, $s0, 0xFFFF
        ctx->r4 = ctx->r16 & 0XFFFF;
            goto L_80013AFC;
    }
    // 0x80013AE0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
L_80013AE4:
    // 0x80013AE4: jal         0x80013B14
    // 0x80013AE8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    func_80013B14_14714(rdram, ctx);
        goto after_0;
    // 0x80013AE8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    after_0:
    // 0x80013AEC: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x80013AF0: bnel        $s0, $zero, L_80013AE4
    if (ctx->r16 != 0) {
        // 0x80013AF4: andi        $a0, $s0, 0xFFFF
        ctx->r4 = ctx->r16 & 0XFFFF;
            goto L_80013AE4;
    }
    goto skip_0;
    // 0x80013AF4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    skip_0:
    // 0x80013AF8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80013AFC:
    // 0x80013AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80013B00: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80013B04: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80013B08: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80013B0C: jr          $ra
    // 0x80013B10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80013B10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001E444_1F044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E444: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8001E448: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E44C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E450: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8001E454: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001E458: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001E45C: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x8001E460: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x8001E464: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x8001E468: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x8001E46C: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x8001E470: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x8001E474: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x8001E478: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x8001E47C: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x8001E480: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x8001E484: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x8001E488: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x8001E48C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8001E490: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    // 0x8001E494: swc1        $f14, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f14.u32l;
    // 0x8001E498: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8001E49C: jr          $ra
    // 0x8001E4A0: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8001E4A0: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800207AC_213AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800207AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800207B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800207B4: jal         0x80041770
    // 0x800207B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x800207B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800207BC: jal         0x80004240
    // 0x800207C0: nop

    func_80004240_4E40(rdram, ctx);
        goto after_1;
    // 0x800207C0: nop

    after_1:
    // 0x800207C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800207C8: lw          $t6, -0x3A24($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A24);
    // 0x800207CC: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800207D0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800207D4: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x800207D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800207DC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x800207E0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x800207E4: jal         0x800042AC
    // 0x800207E8: sw          $t6, -0x3048($at)
    MEM_W(-0X3048, ctx->r1) = ctx->r14;
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x800207E8: sw          $t6, -0x3048($at)
    MEM_W(-0X3048, ctx->r1) = ctx->r14;
    after_2:
    // 0x800207EC: jal         0x80003678
    // 0x800207F0: nop

    func_80003678_4278(rdram, ctx);
        goto after_3;
    // 0x800207F0: nop

    after_3:
    // 0x800207F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800207F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800207FC: jr          $ra
    // 0x80020800: nop

    TRACE_RETURN()
    return;
    // 0x80020800: nop

;}
RECOMP_FUNC void func_80003EA0_4AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003EA0: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x80003EA4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80003EA8: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80003EAC: slti        $at, $t0, 0x200
    ctx->r1 = SIGNED(ctx->r8) < 0X200 ? 1 : 0;
    // 0x80003EB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80003EB4: beq         $at, $zero, L_80003ED0
    if (ctx->r1 == 0) {
        // 0x80003EB8: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80003ED0;
    }
    // 0x80003EB8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80003EBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80003EC0: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003EC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80003EC8: jr          $ra
    // 0x80003ECC: lwc1        $f0, -0x76AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X76AC);
    TRACE_RETURN()
    return;
    // 0x80003ECC: lwc1        $f0, -0x76AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X76AC);
L_80003ED0:
    // 0x80003ED0: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80003ED4: beq         $at, $zero, L_80003EF4
    if (ctx->r1 == 0) {
        // 0x80003ED8: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_80003EF4;
    }
    // 0x80003ED8: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80003EDC: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x80003EE0: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003EE4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80003EE8: lwc1        $f0, -0x66AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66AC);
    // 0x80003EEC: jr          $ra
    // 0x80003EF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80003EF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80003EF4:
    // 0x80003EF4: slti        $at, $v0, 0x600
    ctx->r1 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80003EF8: beq         $at, $zero, L_80003F18
    if (ctx->r1 == 0) {
        // 0x80003EFC: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_80003F18;
    }
    // 0x80003EFC: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80003F00: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80003F04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003F08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80003F0C: lwc1        $f0, 0x7954($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7954);
    // 0x80003F10: jr          $ra
    // 0x80003F14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80003F14: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80003F18:
    // 0x80003F18: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x80003F1C: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003F20: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80003F24: lwc1        $f0, -0x56AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X56AC);
    // 0x80003F28: jr          $ra
    // 0x80003F2C: nop

    TRACE_RETURN()
    return;
    // 0x80003F2C: nop

;}
RECOMP_FUNC void func_800101AC_10DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800101AC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800101B0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800101B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800101B8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800101BC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x800101C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800101C4: addiu       $t6, $t6, 0x7C78
    ctx->r14 = ADD32(ctx->r14, 0X7C78);
    // 0x800101C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800101CC: jal         0x80007E5C
    // 0x800101D0: sw          $t6, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r14;
    func_80007E5C_8A5C(rdram, ctx);
        goto after_0;
    // 0x800101D0: sw          $t6, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r14;
    after_0:
    // 0x800101D4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800101D8: addiu       $v0, $v0, 0x7C78
    ctx->r2 = ADD32(ctx->r2, 0X7C78);
    // 0x800101DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800101E0:
    // 0x800101E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800101E4: sltiu       $at, $v1, 0xA0
    ctx->r1 = ctx->r3 < 0XA0 ? 1 : 0;
    // 0x800101E8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800101EC: bne         $at, $zero, L_800101E0
    if (ctx->r1 != 0) {
        // 0x800101F0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800101E0;
    }
    // 0x800101F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800101F4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800101F8: addiu       $v0, $v0, 0x7EF8
    ctx->r2 = ADD32(ctx->r2, 0X7EF8);
    // 0x800101FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80010200: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
L_80010204:
    // 0x80010204: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80010208: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8001020C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80010210: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80010214: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80010218: bne         $v1, $a0, L_80010204
    if (ctx->r3 != ctx->r4) {
        // 0x8001021C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80010204;
    }
    // 0x8001021C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80010220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80010228: jr          $ra
    // 0x8001022C: nop

    TRACE_RETURN()
    return;
    // 0x8001022C: nop

;}
RECOMP_FUNC void func_80034F20_35B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034F2C: jal         0x80034F44
    // 0x80034F30: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80034F44_35B44(rdram, ctx);
        goto after_0;
    // 0x80034F30: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80034F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034F3C: jr          $ra
    // 0x80034F40: nop

    TRACE_RETURN()
    return;
    // 0x80034F40: nop

;}
RECOMP_FUNC void func_80037B54_38754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037B54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80037B60: jal         0x80037C20
    // 0x80037B64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_0;
    // 0x80037B64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80037B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037B70: jr          $ra
    // 0x80037B74: nop

    TRACE_RETURN()
    return;
    // 0x80037B74: nop

;}
RECOMP_FUNC void func_80008330_8F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80008334: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x80008338: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000833C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80008340: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x80008344: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80008348: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8000834C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80008350: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80008354: sra         $t9, $t2, 4
    ctx->r25 = S32(SIGNED(ctx->r10) >> 4);
    // 0x80008358: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8000835C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80008360: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80008364: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x80008368: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000836C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80008370: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80008374: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80008378: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000837C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80008380: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80008384: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x80008388: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x8000838C: beq         $t7, $at, L_800083A8
    if (ctx->r15 == ctx->r1) {
        // 0x80008390: or          $t0, $t7, $zero
        ctx->r8 = ctx->r15 | 0;
            goto L_800083A8;
    }
    // 0x80008390: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80008394: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80008398: beq         $t7, $at, L_800084D4
    if (ctx->r15 == ctx->r1) {
        // 0x8000839C: lui         $v1, 0x3
        ctx->r3 = S32(0X3 << 16);
            goto L_800084D4;
    }
    // 0x8000839C: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x800083A0: b           L_8000841C
    // 0x800083A4: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
        goto L_8000841C;
    // 0x800083A4: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
L_800083A8:
    // 0x800083A8: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x800083AC: andi        $t5, $t2, 0xFF
    ctx->r13 = ctx->r10 & 0XFF;
    // 0x800083B0: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800083B4: bne         $at, $zero, L_800084D4
    if (ctx->r1 != 0) {
        // 0x800083B8: andi        $s0, $t4, 0xFF
        ctx->r16 = ctx->r12 & 0XFF;
            goto L_800084D4;
    }
    // 0x800083B8: andi        $s0, $t4, 0xFF
    ctx->r16 = ctx->r12 & 0XFF;
    // 0x800083BC: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x800083C0: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800083C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800083C8: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x800083CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800083D0: sll         $t8, $a3, 5
    ctx->r24 = S32(ctx->r7 << 5);
    // 0x800083D4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x800083D8: addiu       $t4, $t4, -0x3340
    ctx->r12 = ADD32(ctx->r12, -0X3340);
    // 0x800083DC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800083E0: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x800083E4: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x800083E8: addu        $v0, $t9, $t4
    ctx->r2 = ADD32(ctx->r25, ctx->r12);
    // 0x800083EC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_800083F0:
    // 0x800083F0: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x800083F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800083F8: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x800083FC: addu        $t7, $v0, $t5
    ctx->r15 = ADD32(ctx->r2, ctx->r13);
    // 0x80008400: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80008404: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x80008408: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8000840C: beq         $at, $zero, L_800083F0
    if (ctx->r1 == 0) {
        // 0x80008410: sh          $zero, 0x36B8($t6)
        MEM_H(0X36B8, ctx->r14) = 0;
            goto L_800083F0;
    }
    // 0x80008410: sh          $zero, 0x36B8($t6)
    MEM_H(0X36B8, ctx->r14) = 0;
    // 0x80008414: b           L_800084D8
    // 0x80008418: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800084D8;
    // 0x80008418: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8000841C:
    // 0x8000841C: sll         $t9, $s3, 3
    ctx->r25 = S32(ctx->r19 << 3);
    // 0x80008420: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x80008424: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80008428: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x8000842C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80008430: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80008434: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80008438: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8000843C: addiu       $t4, $t4, -0x3340
    ctx->r12 = ADD32(ctx->r12, -0X3340);
    // 0x80008440: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80008444: andi        $t6, $t0, 0xF0
    ctx->r14 = ctx->r8 & 0XF0;
    // 0x80008448: lw          $t7, -0x4950($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4950);
    // 0x8000844C: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80008450: addu        $a0, $t9, $t4
    ctx->r4 = ADD32(ctx->r25, ctx->r12);
    // 0x80008454: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80008458: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8000845C: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x80008460: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x80008464: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80008468: andi        $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 & 0XFF;
    // 0x8000846C: sll         $t4, $t7, 1
    ctx->r12 = S32(ctx->r15 << 1);
    // 0x80008470: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x80008474: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x80008478: addu        $s2, $a0, $v1
    ctx->r18 = ADD32(ctx->r4, ctx->r3);
    // 0x8000847C: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80008480: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80008484: sw          $t5, 0x3690($s2)
    MEM_W(0X3690, ctx->r18) = ctx->r13;
    // 0x80008488: bne         $at, $zero, L_800084D4
    if (ctx->r1 != 0) {
        // 0x8000848C: andi        $s0, $t8, 0xFF
        ctx->r16 = ctx->r24 & 0XFF;
            goto L_800084D4;
    }
    // 0x8000848C: andi        $s0, $t8, 0xFF
    ctx->r16 = ctx->r24 & 0XFF;
    // 0x80008490: sll         $t6, $a3, 5
    ctx->r14 = S32(ctx->r7 << 5);
    // 0x80008494: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x80008498: ori         $s4, $s4, 0xB6B8
    ctx->r20 = ctx->r20 | 0XB6B8;
    // 0x8000849C: addu        $s3, $a0, $t6
    ctx->r19 = ADD32(ctx->r4, ctx->r14);
    // 0x800084A0: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_800084A4:
    // 0x800084A4: lw          $t4, 0x3690($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X3690);
    // 0x800084A8: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x800084AC: addu        $t5, $s3, $v0
    ctx->r13 = ADD32(ctx->r19, ctx->r2);
    // 0x800084B0: addu        $a1, $t5, $s4
    ctx->r5 = ADD32(ctx->r13, ctx->r20);
    // 0x800084B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800084B8: jal         0x80007970
    // 0x800084BC: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    func_80007970_8570(rdram, ctx);
        goto after_0;
    // 0x800084BC: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    after_0:
    // 0x800084C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800084C4: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x800084C8: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800084CC: beq         $at, $zero, L_800084A4
    if (ctx->r1 == 0) {
        // 0x800084D0: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_800084A4;
    }
    // 0x800084D0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800084D4:
    // 0x800084D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800084D8:
    // 0x800084D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800084DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800084E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800084E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800084E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800084EC: jr          $ra
    // 0x800084F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800084F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void guMtxF2L(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043AA0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80043AA4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80043AA8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80043AAC: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x80043AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80043AB4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80043AB8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80043ABC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80043AC0: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_80043AC4:
    // 0x80043AC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043AC8: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x80043ACC: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80043AD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80043AD4: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80043AD8: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80043ADC: beq         $a0, $t3, L_80043B44
    if (ctx->r4 == ctx->r11) {
        // 0x80043AE0: nop
    
            goto L_80043B44;
    }
    // 0x80043AE0: nop

L_80043AE4:
    // 0x80043AE4: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80043AE8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80043AEC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80043AF0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80043AF4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80043AF8: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80043AFC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80043B00: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x80043B04: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80043B08: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80043B0C: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x80043B10: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x80043B14: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80043B18: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80043B1C: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x80043B20: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x80043B24: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x80043B28: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80043B2C: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x80043B30: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80043B34: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80043B38: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80043B3C: bne         $a0, $t3, L_80043AE4
    if (ctx->r4 != ctx->r11) {
        // 0x80043B40: nop
    
            goto L_80043AE4;
    }
    // 0x80043B40: nop

L_80043B44:
    // 0x80043B44: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80043B48: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80043B4C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80043B50: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80043B54: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80043B58: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80043B5C: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x80043B60: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80043B64: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80043B68: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x80043B6C: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x80043B70: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80043B74: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80043B78: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x80043B7C: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x80043B80: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x80043B84: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x80043B88: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x80043B8C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80043B90: bne         $a2, $t4, L_80043AC4
    if (ctx->r6 != ctx->r12) {
        // 0x80043B94: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80043AC4;
    }
    // 0x80043B94: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80043B98: jr          $ra
    // 0x80043B9C: nop

    TRACE_RETURN()
    return;
    // 0x80043B9C: nop

;}
RECOMP_FUNC void func_80024888_25488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002488C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024890: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80024894: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80024898: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    // 0x8002489C: sw          $zero, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = 0;
    // 0x800248A0: sw          $t7, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r15;
    // 0x800248A4: jal         0x8003522C
    // 0x800248A8: addiu       $a1, $a1, 0x4848
    ctx->r5 = ADD32(ctx->r5, 0X4848);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x800248A8: addiu       $a1, $a1, 0x4848
    ctx->r5 = ADD32(ctx->r5, 0X4848);
    after_0:
    // 0x800248AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800248B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800248B4: jr          $ra
    // 0x800248B8: nop

    TRACE_RETURN()
    return;
    // 0x800248B8: nop

;}
RECOMP_FUNC void alFxNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E680: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8004E684: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8004E688: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8004E68C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8004E690: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8004E694: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8004E698: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E69C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8004E6A0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8004E6A4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8004E6A8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8004E6AC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004E6B0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8004E6B4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8004E6B8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8004E6BC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8004E6C0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8004E6C4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8004E6C8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8004E6CC: addiu       $a2, $a2, 0x21D4
    ctx->r6 = ADD32(ctx->r6, 0X21D4);
    // 0x8004E6D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E6D4: jal         0x800518C0
    // 0x8004E6D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E6D8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8004E6DC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8004E6E0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8004E6E4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8004E6E8: addiu       $t6, $t6, 0x21EC
    ctx->r14 = ADD32(ctx->r14, 0X21EC);
    // 0x8004E6EC: addiu       $t7, $t7, 0x1F78
    ctx->r15 = ADD32(ctx->r15, 0X1F78);
    // 0x8004E6F0: sw          $t6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r14;
    // 0x8004E6F4: sw          $t7, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r15;
    // 0x8004E6F8: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x8004E6FC: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E700: addiu       $s3, $s3, -0x5B38
    ctx->r19 = ADD32(ctx->r19, -0X5B38);
    // 0x8004E704: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8004E708: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x8004E70C: beq         $at, $zero, L_8004E76C
    if (ctx->r1 == 0) {
        // 0x8004E710: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8004E76C;
    }
    // 0x8004E710: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004E714: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004E718: addu        $at, $at, $t9
    gpr jr_addend_8004E720 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8004E71C: lw          $t9, -0x2B90($at)
    ctx->r25 = ADD32(ctx->r1, -0X2B90);
    // 0x8004E720: jr          $t9
    // 0x8004E724: nop

    switch (jr_addend_8004E720 >> 2) {
        case 0: goto L_8004E728; break;
        case 1: goto L_8004E734; break;
        case 2: goto L_8004E74C; break;
        case 3: goto L_8004E758; break;
        case 4: goto L_8004E740; break;
        case 5: goto L_8004E764; break;
        default: switch_error(__func__, 0x8004E720, 0x8007D470);
    }
    // 0x8004E724: nop

L_8004E728:
    // 0x8004E728: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E72C: b           L_8004E76C
    // 0x8004E730: addiu       $s3, $s3, -0x5CA0
    ctx->r19 = ADD32(ctx->r19, -0X5CA0);
        goto L_8004E76C;
    // 0x8004E730: addiu       $s3, $s3, -0x5CA0
    ctx->r19 = ADD32(ctx->r19, -0X5CA0);
L_8004E734:
    // 0x8004E734: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E738: b           L_8004E76C
    // 0x8004E73C: addiu       $s3, $s3, -0x5C38
    ctx->r19 = ADD32(ctx->r19, -0X5C38);
        goto L_8004E76C;
    // 0x8004E73C: addiu       $s3, $s3, -0x5C38
    ctx->r19 = ADD32(ctx->r19, -0X5C38);
L_8004E740:
    // 0x8004E740: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E744: b           L_8004E76C
    // 0x8004E748: addiu       $s3, $s3, -0x5BB0
    ctx->r19 = ADD32(ctx->r19, -0X5BB0);
        goto L_8004E76C;
    // 0x8004E748: addiu       $s3, $s3, -0x5BB0
    ctx->r19 = ADD32(ctx->r19, -0X5BB0);
L_8004E74C:
    // 0x8004E74C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E750: b           L_8004E76C
    // 0x8004E754: addiu       $s3, $s3, -0x5B88
    ctx->r19 = ADD32(ctx->r19, -0X5B88);
        goto L_8004E76C;
    // 0x8004E754: addiu       $s3, $s3, -0x5B88
    ctx->r19 = ADD32(ctx->r19, -0X5B88);
L_8004E758:
    // 0x8004E758: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004E75C: b           L_8004E76C
    // 0x8004E760: addiu       $s3, $s3, -0x5B60
    ctx->r19 = ADD32(ctx->r19, -0X5B60);
        goto L_8004E76C;
    // 0x8004E760: addiu       $s3, $s3, -0x5B60
    ctx->r19 = ADD32(ctx->r19, -0X5B60);
L_8004E764:
    // 0x8004E764: b           L_8004E76C
    // 0x8004E768: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
        goto L_8004E76C;
    // 0x8004E768: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
L_8004E76C:
    // 0x8004E76C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x8004E770: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x8004E774: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8004E778: sb          $t0, 0x24($s5)
    MEM_B(0X24, ctx->r21) = ctx->r8;
    // 0x8004E77C: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x8004E780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E788: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x8004E78C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8004E790: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8004E794: jal         0x800476B0
    // 0x8004E798: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8004E798: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
    // 0x8004E79C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    // 0x8004E7A0: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x8004E7A4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8004E7A8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8004E7AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E7B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E7B4: jal         0x800476B0
    // 0x8004E7B8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8004E7B8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x8004E7BC: lw          $t4, 0x1C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X1C);
    // 0x8004E7C0: sw          $v0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r2;
    // 0x8004E7C4: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x8004E7C8: beq         $t4, $zero, L_8004E7FC
    if (ctx->r12 == 0) {
        // 0x8004E7CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8004E7FC;
    }
    // 0x8004E7CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004E7D0: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
L_8004E7D4:
    // 0x8004E7D4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8004E7D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004E7DC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8004E7E0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x8004E7E4: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x8004E7E8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8004E7EC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8004E7F0: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8004E7F4: bnel        $at, $zero, L_8004E7D4
    if (ctx->r1 != 0) {
        // 0x8004E7F8: lw          $t5, 0x14($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X14);
            goto L_8004E7D4;
    }
    goto skip_0;
    // 0x8004E7F8: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    skip_0:
L_8004E7FC:
    // 0x8004E7FC: lbu         $t0, 0x24($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X24);
    // 0x8004E800: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8004E804: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004E808: blez        $t0, L_8004EA7C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8004E80C: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_8004EA7C;
    }
    // 0x8004E80C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8004E810: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8004E814: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8004E818: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8004E81C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8004E820: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x8004E824: ldc1        $f20, -0x2B78($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X2B78);
    // 0x8004E828: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
L_8004E82C:
    // 0x8004E82C: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E830: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x8004E834: lw          $t1, 0x20($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X20);
    // 0x8004E838: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8004E83C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8004E840: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004E844: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x8004E848: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004E84C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x8004E850: addiu       $s1, $t6, 0x1
    ctx->r17 = ADD32(ctx->r14, 0X1);
    // 0x8004E854: mflo        $t2
    ctx->r10 = lo;
    // 0x8004E858: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8004E85C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8004E860: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004E864: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8004E868: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8004E86C: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8004E870: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8004E874: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8004E878: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8004E87C: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8004E880: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8004E884: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x8004E888: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x8004E88C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004E890: addiu       $s1, $t4, 0x1
    ctx->r17 = ADD32(ctx->r12, 0X1);
    // 0x8004E894: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8004E898: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8004E89C: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8004E8A0: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x8004E8A4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8004E8A8: addiu       $s1, $t8, 0x1
    ctx->r17 = ADD32(ctx->r24, 0X1);
    // 0x8004E8AC: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x8004E8B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8004E8B4: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8004E8B8: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x8004E8BC: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8004E8C0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8004E8C4: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x8004E8C8: beq         $v0, $zero, L_8004E9CC
    if (ctx->r2 == 0) {
        // 0x8004E8CC: addiu       $s1, $t0, 0x2
        ctx->r17 = ADD32(ctx->r8, 0X2);
            goto L_8004E9CC;
    }
    // 0x8004E8CC: addiu       $s1, $t0, 0x2
    ctx->r17 = ADD32(ctx->r8, 0X2);
    // 0x8004E8D0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8004E8D4: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8004E8D8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004E8DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004E8E0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x8004E8E4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004E8E8: addiu       $s1, $t2, 0x1
    ctx->r17 = ADD32(ctx->r10, 0X1);
    // 0x8004E8EC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8004E8F0: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x8004E8F4: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8004E8F8: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8004E8FC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8004E900: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x8004E904: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8004E908: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8004E90C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8004E910: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x8004E914: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8004E918: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x8004E91C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x8004E920: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8004E924: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8004E928: bgez        $t0, L_8004E940
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8004E92C: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_8004E940;
    }
    // 0x8004E92C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8004E930: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004E934: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004E938: nop

    // 0x8004E93C: add.d       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f16.d + ctx->f10.d;
L_8004E940:
    // 0x8004E940: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8004E944: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004E948: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8004E94C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8004E950: swc1        $f24, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f24.u32l;
    // 0x8004E954: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8004E958: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004E95C: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x8004E960: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x8004E964: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E96C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8004E970: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004E974: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8004E978: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x8004E97C: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8004E980: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8004E984: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x8004E988: jal         0x800476B0
    // 0x8004E98C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8004E98C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x8004E990: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8004E994: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8004E998: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004E99C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E9A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E9A4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8004E9A8: jal         0x800476B0
    // 0x8004E9AC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8004E9AC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x8004E9B0: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8004E9B4: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x8004E9B8: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8004E9BC: swc1        $f26, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f26.u32l;
    // 0x8004E9C0: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x8004E9C4: b           L_8004E9D8
    // 0x8004E9C8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
        goto L_8004E9D8;
    // 0x8004E9C8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
L_8004E9CC:
    // 0x8004E9CC: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x8004E9D0: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x8004E9D4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_8004E9D8:
    // 0x8004E9D8: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8004E9DC: addu        $s2, $s3, $t2
    ctx->r18 = ADD32(ctx->r19, ctx->r10);
    // 0x8004E9E0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8004E9E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004E9E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E9EC: beq         $t3, $zero, L_8004EA54
    if (ctx->r11 == 0) {
        // 0x8004E9F0: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_8004EA54;
    }
    // 0x8004E9F0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8004E9F4: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x8004E9F8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8004E9FC: jal         0x800476B0
    // 0x8004EA00: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x8004EA00: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_5:
    // 0x8004EA04: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8004EA08: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8004EA0C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8004EA10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004EA14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004EA18: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8004EA1C: jal         0x800476B0
    // 0x8004EA20: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x8004EA20: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_6:
    // 0x8004EA24: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x8004EA28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004EA2C: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x8004EA30: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x8004EA34: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x8004EA38: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8004EA3C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8004EA40: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8004EA44: jal         0x8004E5E0
    // 0x8004EA48: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_7;
    // 0x8004EA48: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x8004EA4C: b           L_8004EA68
    // 0x8004EA50: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
        goto L_8004EA68;
    // 0x8004EA50: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_8004EA54:
    // 0x8004EA54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004EA58: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8004EA5C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x8004EA60: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8004EA64: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_8004EA68:
    // 0x8004EA68: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8004EA6C: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x8004EA70: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8004EA74: bne         $at, $zero, L_8004E82C
    if (ctx->r1 != 0) {
        // 0x8004EA78: or          $s4, $t1, $zero
        ctx->r20 = ctx->r9 | 0;
            goto L_8004E82C;
    }
    // 0x8004EA78: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
L_8004EA7C:
    // 0x8004EA7C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8004EA80: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8004EA84: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8004EA88: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8004EA8C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8004EA90: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8004EA94: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8004EA98: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8004EA9C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004EAA0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8004EAA4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8004EAA8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8004EAAC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8004EAB0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8004EAB4: jr          $ra
    // 0x8004EAB8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8004EAB8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80035398_35F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035398: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8003539C: jr          $ra
    // 0x800353A0: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x800353A0: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80015FDC_16BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80015FDC: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80015FE0: addiu       $v1, $v1, -0x7E78
    ctx->r3 = ADD32(ctx->r3, -0X7E78);
    // 0x80015FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80015FE8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
L_80015FEC:
    // 0x80015FEC: addiu       $a1, $v0, 0x2
    ctx->r5 = ADD32(ctx->r2, 0X2);
    // 0x80015FF0: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    // 0x80015FF4: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80015FF8: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x80015FFC: addiu       $t7, $v0, 0x3
    ctx->r15 = ADD32(ctx->r2, 0X3);
    // 0x80016000: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80016004: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80016008: sh          $t7, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r15;
    // 0x8001600C: sh          $a0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r4;
    // 0x80016010: sh          $a2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r6;
    // 0x80016014: sh          $a1, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r5;
    // 0x80016018: sh          $a1, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r5;
    // 0x8001601C: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x80016020: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x80016024: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x80016028: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x8001602C: sh          $zero, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = 0;
    // 0x80016030: sh          $a0, -0x14($v1)
    MEM_H(-0X14, ctx->r3) = ctx->r4;
    // 0x80016034: bne         $a2, $a3, L_80015FEC
    if (ctx->r6 != ctx->r7) {
        // 0x80016038: sh          $t6, -0x16($v1)
        MEM_H(-0X16, ctx->r3) = ctx->r14;
            goto L_80015FEC;
    }
    // 0x80016038: sh          $t6, -0x16($v1)
    MEM_H(-0X16, ctx->r3) = ctx->r14;
    // 0x8001603C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80016040: addiu       $v0, $v0, -0x7E78
    ctx->r2 = ADD32(ctx->r2, -0X7E78);
    // 0x80016044: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80016048: sh          $zero, 0x2FE($v0)
    MEM_H(0X2FE, ctx->r2) = 0;
    // 0x8001604C: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x80016050: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016054: jr          $ra
    // 0x80016058: sw          $zero, -0x7B78($at)
    MEM_W(-0X7B78, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80016058: sw          $zero, -0x7B78($at)
    MEM_W(-0X7B78, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80036260_36E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80036268: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003626C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80036270: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80036274: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80036278: bne         $v0, $zero, L_80036288
    if (ctx->r2 != 0) {
        // 0x8003627C: nop
    
            goto L_80036288;
    }
    // 0x8003627C: nop

    // 0x80036280: b           L_800362C8
    // 0x80036284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800362C8;
    // 0x80036284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80036288:
    // 0x80036288: beq         $v0, $zero, L_800362C8
    if (ctx->r2 == 0) {
        // 0x8003628C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800362C8;
    }
    // 0x8003628C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80036290:
    // 0x80036290: jal         0x80035FDC
    // 0x80036294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035FDC_36BDC(rdram, ctx);
        goto after_0;
    // 0x80036294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80036298: bne         $v0, $zero, L_800362B4
    if (ctx->r2 != 0) {
        // 0x8003629C: sw          $v0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r2;
            goto L_800362B4;
    }
    // 0x8003629C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x800362A0: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x800362A4: jal         0x80036308
    // 0x800362A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_1;
    // 0x800362A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800362AC: b           L_800362C8
    // 0x800362B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800362C8;
    // 0x800362B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800362B4:
    // 0x800362B4: jal         0x80036308
    // 0x800362B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_2;
    // 0x800362B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800362BC: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x800362C0: bne         $s0, $zero, L_80036290
    if (ctx->r16 != 0) {
        // 0x800362C4: nop
    
            goto L_80036290;
    }
    // 0x800362C4: nop

L_800362C8:
    // 0x800362C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800362CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800362D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800362D4: jr          $ra
    // 0x800362D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800362D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80023A1C_2461C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023A1C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80023A20: beq         $a1, $zero, L_80023AD4
    if (ctx->r5 == 0) {
        // 0x80023A24: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80023AD4;
    }
    // 0x80023A24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80023A28: lui         $t0, 0x4C1
    ctx->r8 = S32(0X4C1 << 16);
    // 0x80023A2C: ori         $t0, $t0, 0x1DB7
    ctx->r8 = ctx->r8 | 0X1DB7;
    // 0x80023A30: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80023A34: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80023A38: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
L_80023A3C:
    // 0x80023A3C: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x80023A40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80023A44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023A48: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x80023A4C: xor         $v1, $v1, $t7
    ctx->r3 = ctx->r3 ^ ctx->r15;
    // 0x80023A50: and         $t8, $v1, $a3
    ctx->r24 = ctx->r3 & ctx->r7;
L_80023A54:
    // 0x80023A54: beq         $t8, $zero, L_80023A68
    if (ctx->r24 == 0) {
        // 0x80023A58: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80023A68;
    }
    // 0x80023A58: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80023A5C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80023A60: b           L_80023A70
    // 0x80023A64: xor         $v1, $t9, $t0
    ctx->r3 = ctx->r25 ^ ctx->r8;
        goto L_80023A70;
    // 0x80023A64: xor         $v1, $t9, $t0
    ctx->r3 = ctx->r25 ^ ctx->r8;
L_80023A68:
    // 0x80023A68: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x80023A6C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_80023A70:
    // 0x80023A70: and         $t3, $v1, $a3
    ctx->r11 = ctx->r3 & ctx->r7;
    // 0x80023A74: beq         $t3, $zero, L_80023A88
    if (ctx->r11 == 0) {
        // 0x80023A78: sll         $t5, $v1, 1
        ctx->r13 = S32(ctx->r3 << 1);
            goto L_80023A88;
    }
    // 0x80023A78: sll         $t5, $v1, 1
    ctx->r13 = S32(ctx->r3 << 1);
    // 0x80023A7C: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x80023A80: b           L_80023A8C
    // 0x80023A84: xor         $v1, $t4, $t0
    ctx->r3 = ctx->r12 ^ ctx->r8;
        goto L_80023A8C;
    // 0x80023A84: xor         $v1, $t4, $t0
    ctx->r3 = ctx->r12 ^ ctx->r8;
L_80023A88:
    // 0x80023A88: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80023A8C:
    // 0x80023A8C: and         $t6, $v1, $a3
    ctx->r14 = ctx->r3 & ctx->r7;
    // 0x80023A90: beq         $t6, $zero, L_80023AA4
    if (ctx->r14 == 0) {
        // 0x80023A94: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_80023AA4;
    }
    // 0x80023A94: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x80023A98: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x80023A9C: b           L_80023AA8
    // 0x80023AA0: xor         $v1, $t7, $t0
    ctx->r3 = ctx->r15 ^ ctx->r8;
        goto L_80023AA8;
    // 0x80023AA0: xor         $v1, $t7, $t0
    ctx->r3 = ctx->r15 ^ ctx->r8;
L_80023AA4:
    // 0x80023AA4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80023AA8:
    // 0x80023AA8: and         $t9, $v1, $a3
    ctx->r25 = ctx->r3 & ctx->r7;
    // 0x80023AAC: beq         $t9, $zero, L_80023AC0
    if (ctx->r25 == 0) {
        // 0x80023AB0: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_80023AC0;
    }
    // 0x80023AB0: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x80023AB4: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x80023AB8: b           L_80023AC4
    // 0x80023ABC: xor         $v1, $t2, $t0
    ctx->r3 = ctx->r10 ^ ctx->r8;
        goto L_80023AC4;
    // 0x80023ABC: xor         $v1, $t2, $t0
    ctx->r3 = ctx->r10 ^ ctx->r8;
L_80023AC0:
    // 0x80023AC0: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_80023AC4:
    // 0x80023AC4: bnel        $a0, $t1, L_80023A54
    if (ctx->r4 != ctx->r9) {
        // 0x80023AC8: and         $t8, $v1, $a3
        ctx->r24 = ctx->r3 & ctx->r7;
            goto L_80023A54;
    }
    goto skip_0;
    // 0x80023AC8: and         $t8, $v1, $a3
    ctx->r24 = ctx->r3 & ctx->r7;
    skip_0:
    // 0x80023ACC: bne         $v0, $a1, L_80023A3C
    if (ctx->r2 != ctx->r5) {
        // 0x80023AD0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80023A3C;
    }
    // 0x80023AD0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80023AD4:
    // 0x80023AD4: jr          $ra
    // 0x80023AD8: nor         $v0, $v1, $zero
    ctx->r2 = ~(ctx->r3 | 0);
    TRACE_RETURN()
    return;
    // 0x80023AD8: nor         $v0, $v1, $zero
    ctx->r2 = ~(ctx->r3 | 0);
;}
RECOMP_FUNC void func_800376B0_382B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800376B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800376B4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800376B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800376BC: mul.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800376C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800376C4: mul.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x800376C8: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800376CC: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800376D0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800376D4: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800376D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800376DC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800376E0: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800376E4: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x800376E8: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x800376EC: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800376F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800376F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800376F8: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800376FC: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x80037700: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80037704: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80037708: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003770C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80037710: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80037714: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80037718: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8003771C: add.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x80037720: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80037724: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80037728: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8003772C: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80037730: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80037734: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80037738: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8003773C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80037740: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80037744: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80037748: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8003774C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80037750: mul.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80037754: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80037758: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8003775C: mul.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80037760: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80037764: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80037768: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8003776C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80037770: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x80037774: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80037778: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8003777C: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80037780: nop

    // 0x80037784: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80037788: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8003778C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80037790: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80037794: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80037798: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8003779C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800377A0: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800377A4: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800377A8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800377AC: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x800377B0: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800377B4: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x800377B8: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800377BC: nop

    // 0x800377C0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800377C4: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x800377C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800377CC: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x800377D0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800377D4: lwc1        $f10, 0x2C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x800377D8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800377DC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800377E0: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800377E4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800377E8: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x800377EC: jr          $ra
    // 0x800377F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800377F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003F544_40144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F544: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003F548: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003F54C: lw          $t7, 0x7744($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7744);
    // 0x8003F550: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x8003F554: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F558: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8003F55C: jr          $ra
    // 0x8003F560: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8003F560: sw          $t8, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_8003E81C_3F41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E81C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E824: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E828: jal         0x8003E888
    // 0x8003E82C: addiu       $a0, $a0, 0x7808
    ctx->r4 = ADD32(ctx->r4, 0X7808);
    func_8003E888_3F488(rdram, ctx);
        goto after_0;
    // 0x8003E82C: addiu       $a0, $a0, 0x7808
    ctx->r4 = ADD32(ctx->r4, 0X7808);
    after_0:
    // 0x8003E830: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003E834: bne         $v0, $at, L_8003E860
    if (ctx->r2 != ctx->r1) {
        // 0x8003E838: lui         $t6, 0x801C
        ctx->r14 = S32(0X801C << 16);
            goto L_8003E860;
    }
    // 0x8003E838: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003E83C: lw          $t6, 0x7800($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7800);
    // 0x8003E840: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003E844: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x8003E848: sw          $t7, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r15;
    // 0x8003E84C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E850: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003E854: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E858: b           L_8003E878
    // 0x8003E85C: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
        goto L_8003E878;
    // 0x8003E85C: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
L_8003E860:
    // 0x8003E860: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003E864: bne         $v0, $at, L_8003E878
    if (ctx->r2 != ctx->r1) {
        // 0x8003E868: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003E878;
    }
    // 0x8003E868: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E86C: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003E870: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E874: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
L_8003E878:
    // 0x8003E878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E880: jr          $ra
    // 0x8003E884: nop

    TRACE_RETURN()
    return;
    // 0x8003E884: nop

;}
RECOMP_FUNC void func_80037548_38148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003754C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037550: jal         0x80003728
    // 0x80037554: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x80037554: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80037558: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8003755C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80037560: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80037564: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80037568: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8003756C: lbu         $t6, 0x2DE4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2DE4);
    // 0x80037570: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80037574: bnel        $t6, $at, L_800375B0
    if (ctx->r14 != ctx->r1) {
        // 0x80037578: lhu         $t1, 0x2DF4($v0)
        ctx->r9 = MEM_HU(ctx->r2, 0X2DF4);
            goto L_800375B0;
    }
    goto skip_0;
    // 0x80037578: lhu         $t1, 0x2DF4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2DF4);
    skip_0:
    // 0x8003757C: lhu         $t7, 0x2DF4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2DF4);
    // 0x80037580: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80037584: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80037588: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003758C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80037590: sw          $a0, -0x37D0($at)
    MEM_W(-0X37D0, ctx->r1) = ctx->r4;
    // 0x80037594: lhu         $t9, 0x2DF4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2DF4);
    // 0x80037598: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003759C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800375A0: addiu       $t0, $t9, 0x221
    ctx->r8 = ADD32(ctx->r25, 0X221);
    // 0x800375A4: b           L_8003766C
    // 0x800375A8: sh          $t0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r8;
        goto L_8003766C;
    // 0x800375A8: sh          $t0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r8;
    // 0x800375AC: lhu         $t1, 0x2DF4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2DF4);
L_800375B0:
    // 0x800375B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800375B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800375B8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800375BC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800375C0: sw          $a0, -0x37C0($at)
    MEM_W(-0X37C0, ctx->r1) = ctx->r4;
    // 0x800375C4: lhu         $v1, 0x2DF4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2DF4);
    // 0x800375C8: beql        $v1, $zero, L_80037670
    if (ctx->r3 == 0) {
        // 0x800375CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80037670;
    }
    goto skip_1;
    // 0x800375CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800375D0: beq         $v1, $a0, L_800375F8
    if (ctx->r3 == ctx->r4) {
        // 0x800375D4: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_800375F8;
    }
    // 0x800375D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800375D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800375DC: beq         $v1, $at, L_80037630
    if (ctx->r3 == ctx->r1) {
        // 0x800375E0: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_80037630;
    }
    // 0x800375E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800375E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800375E8: beql        $v1, $at, L_80037670
    if (ctx->r3 == ctx->r1) {
        // 0x800375EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80037670;
    }
    goto skip_2;
    // 0x800375EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800375F0: b           L_80037670
    // 0x800375F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80037670;
    // 0x800375F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800375F8:
    // 0x800375F8: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800375FC: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80037600: addiu       $t3, $zero, 0x132
    ctx->r11 = ADD32(0, 0X132);
    // 0x80037604: addiu       $t4, $zero, 0x6C4
    ctx->r12 = ADD32(0, 0X6C4);
    // 0x80037608: addiu       $t5, $zero, 0x1B2
    ctx->r13 = ADD32(0, 0X1B2);
    // 0x8003760C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80037610: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x80037614: sh          $t3, 0x2FE1($at)
    MEM_H(0X2FE1, ctx->r1) = ctx->r11;
    // 0x80037618: sh          $zero, 0x2FE3($at)
    MEM_H(0X2FE3, ctx->r1) = 0;
    // 0x8003761C: sh          $t4, 0x2FE5($at)
    MEM_H(0X2FE5, ctx->r1) = ctx->r12;
    // 0x80037620: sh          $t5, 0x2FE7($at)
    MEM_H(0X2FE7, ctx->r1) = ctx->r13;
    // 0x80037624: sh          $t6, 0x2FE9($at)
    MEM_H(0X2FE9, ctx->r1) = ctx->r14;
    // 0x80037628: b           L_8003766C
    // 0x8003762C: sh          $t7, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r15;
        goto L_8003766C;
    // 0x8003762C: sh          $t7, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r15;
L_80037630:
    // 0x80037630: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80037634: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80037638: addiu       $t8, $zero, 0x49
    ctx->r24 = ADD32(0, 0X49);
    // 0x8003763C: addiu       $t9, $zero, 0x14D
    ctx->r25 = ADD32(0, 0X14D);
    // 0x80037640: addiu       $t0, $zero, 0xE1
    ctx->r8 = ADD32(0, 0XE1);
    // 0x80037644: addiu       $t1, $zero, 0x202
    ctx->r9 = ADD32(0, 0X202);
    // 0x80037648: addiu       $t2, $zero, -0x1F3
    ctx->r10 = ADD32(0, -0X1F3);
    // 0x8003764C: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x80037650: sw          $t8, 0x2E05($at)
    MEM_W(0X2E05, ctx->r1) = ctx->r24;
    // 0x80037654: sh          $t9, 0x2FE1($at)
    MEM_H(0X2FE1, ctx->r1) = ctx->r25;
    // 0x80037658: sh          $zero, 0x2FE3($at)
    MEM_H(0X2FE3, ctx->r1) = 0;
    // 0x8003765C: sh          $t0, 0x2FE5($at)
    MEM_H(0X2FE5, ctx->r1) = ctx->r8;
    // 0x80037660: sh          $t1, 0x2FE7($at)
    MEM_H(0X2FE7, ctx->r1) = ctx->r9;
    // 0x80037664: sh          $t2, 0x2FE9($at)
    MEM_H(0X2FE9, ctx->r1) = ctx->r10;
    // 0x80037668: sh          $t3, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r11;
L_8003766C:
    // 0x8003766C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037670:
    // 0x80037670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037674: jr          $ra
    // 0x80037678: nop

    TRACE_RETURN()
    return;
    // 0x80037678: nop

;}
RECOMP_FUNC void func_80013400_14000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013400: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80013404: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80013408: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001340C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80013410: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80013414: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80013418: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001341C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80013420: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80013424: bgez        $t6, L_8001343C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80013428: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001343C;
    }
    // 0x80013428: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001342C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013430: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80013434: nop

    // 0x80013438: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8001343C:
    // 0x8001343C: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80013440: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x80013444: bgez        $a2, L_8001345C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80013448: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8001345C;
    }
    // 0x80013448: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001344C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013450: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80013454: nop

    // 0x80013458: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8001345C:
    // 0x8001345C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x80013460: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x80013464: bgez        $a3, L_8001347C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80013468: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001347C;
    }
    // 0x80013468: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001346C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80013470: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80013474: nop

    // 0x80013478: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8001347C:
    // 0x8001347C: jr          $ra
    // 0x80013480: swc1        $f8, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80013480: swc1        $f8, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80038D64_39964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038D64: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x80038D68: lw          $t6, 0xA20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XA20);
    // 0x80038D6C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80038D70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80038D74: bne         $t6, $at, L_80038D84
    if (ctx->r14 != ctx->r1) {
        // 0x80038D78: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_80038D84;
    }
    // 0x80038D78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80038D7C: jr          $ra
    // 0x80038D80: sb          $t7, 0x2972($at)
    MEM_B(0X2972, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80038D80: sb          $t7, 0x2972($at)
    MEM_B(0X2972, ctx->r1) = ctx->r15;
L_80038D84:
    // 0x80038D84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80038D88: sb          $zero, 0x2972($at)
    MEM_B(0X2972, ctx->r1) = 0;
    // 0x80038D8C: jr          $ra
    // 0x80038D90: nop

    TRACE_RETURN()
    return;
    // 0x80038D90: nop

;}
RECOMP_FUNC void func_8003B80C_3C40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B80C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B814: jal         0x8003B83C
    // 0x8003B818: nop

    func_8003B83C_3C43C(rdram, ctx);
        goto after_0;
    // 0x8003B818: nop

    after_0:
    // 0x8003B81C: jal         0x8003B564
    // 0x8003B820: nop

    func_8003B564_3C164(rdram, ctx);
        goto after_1;
    // 0x8003B820: nop

    after_1:
    // 0x8003B824: jal         0x8003BCAC
    // 0x8003B828: nop

    func_8003BCAC_3C8AC(rdram, ctx);
        goto after_2;
    // 0x8003B828: nop

    after_2:
    // 0x8003B82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B834: jr          $ra
    // 0x8003B838: nop

    TRACE_RETURN()
    return;
    // 0x8003B838: nop

;}
RECOMP_FUNC void func_8000AB74_B774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AB74: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8000AB78: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8000AB7C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000AB80: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8000AB84: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000AB88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000AB8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000AB90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000AB94: addiu       $t6, $t6, -0x3340
    ctx->r14 = ADD32(ctx->r14, -0X3340);
    // 0x8000AB98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000AB9C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000ABA0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000ABA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000ABA8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8000ABAC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8000ABB0: lui         $s3, 0x7000
    ctx->r19 = S32(0X7000 << 16);
    // 0x8000ABB4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8000ABB8: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8000ABBC: lui         $s7, 0x1000
    ctx->r23 = S32(0X1000 << 16);
    // 0x8000ABC0: lui         $fp, 0x2000
    ctx->r30 = S32(0X2000 << 16);
    // 0x8000ABC4: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_8000ABC8:
    // 0x8000ABC8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8000ABCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000ABD0: lbu         $v0, 0x3704($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X3704);
    // 0x8000ABD4: beql        $v0, $zero, L_8000ACB8
    if (ctx->r2 == 0) {
        // 0x8000ABD8: lw          $t4, 0x64($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X64);
            goto L_8000ACB8;
    }
    goto skip_0;
    // 0x8000ABD8: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x8000ABDC: blez        $v0, L_8000ACB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8000ABE0: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8000ACB4;
    }
    // 0x8000ABE0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8000ABE4: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8000ABE8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000ABEC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8000ABF0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8000ABF4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000ABF8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8000ABFC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000AC00: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000AC04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8000AC08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000AC0C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8000AC10: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x8000AC14: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
L_8000AC18:
    // 0x8000AC18: lw          $a0, 0x3394($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3394);
    // 0x8000AC1C: lbu         $t2, 0x4($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X4);
    // 0x8000AC20: bnel        $s6, $t2, L_8000ACAC
    if (ctx->r22 != ctx->r10) {
        // 0x8000AC24: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8000ACAC;
    }
    goto skip_1;
    // 0x8000AC24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8000AC28: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8000AC2C: and         $v0, $v1, $s3
    ctx->r2 = ctx->r3 & ctx->r19;
    // 0x8000AC30: beq         $v0, $zero, L_8000AC98
    if (ctx->r2 == 0) {
        // 0x8000AC34: nop
    
            goto L_8000AC98;
    }
    // 0x8000AC34: nop

    // 0x8000AC38: beq         $v0, $s7, L_8000AC98
    if (ctx->r2 == ctx->r23) {
        // 0x8000AC3C: nop
    
            goto L_8000AC98;
    }
    // 0x8000AC3C: nop

    // 0x8000AC40: beq         $v0, $fp, L_8000AC78
    if (ctx->r2 == ctx->r30) {
        // 0x8000AC44: lui         $at, 0x3000
        ctx->r1 = S32(0X3000 << 16);
            goto L_8000AC78;
    }
    // 0x8000AC44: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8000AC48: beq         $v0, $at, L_8000ACA8
    if (ctx->r2 == ctx->r1) {
        // 0x8000AC4C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8000ACA8;
    }
    // 0x8000AC4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000AC50: beq         $v0, $at, L_8000AC98
    if (ctx->r2 == ctx->r1) {
        // 0x8000AC54: lui         $at, 0x5000
        ctx->r1 = S32(0X5000 << 16);
            goto L_8000AC98;
    }
    // 0x8000AC54: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x8000AC58: beq         $v0, $at, L_8000ACA8
    if (ctx->r2 == ctx->r1) {
        // 0x8000AC5C: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_8000ACA8;
    }
    // 0x8000AC5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8000AC60: beq         $v0, $at, L_8000AC98
    if (ctx->r2 == ctx->r1) {
        // 0x8000AC64: nop
    
            goto L_8000AC98;
    }
    // 0x8000AC64: nop

    // 0x8000AC68: beq         $v0, $s3, L_8000AC98
    if (ctx->r2 == ctx->r19) {
        // 0x8000AC6C: nop
    
            goto L_8000AC98;
    }
    // 0x8000AC6C: nop

    // 0x8000AC70: b           L_8000ACAC
    // 0x8000AC74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8000ACAC;
    // 0x8000AC74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8000AC78:
    // 0x8000AC78: lbu         $t3, 0x64($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X64);
    // 0x8000AC7C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8000AC80: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8000AC84: bnel        $t3, $zero, L_8000ACAC
    if (ctx->r11 != 0) {
        // 0x8000AC88: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8000ACAC;
    }
    goto skip_2;
    // 0x8000AC88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x8000AC8C: and         $s4, $v1, $at
    ctx->r20 = ctx->r3 & ctx->r1;
    // 0x8000AC90: b           L_8000ACA8
    // 0x8000AC94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8000ACA8;
    // 0x8000AC94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8000AC98:
    // 0x8000AC98: beql        $s2, $zero, L_8000ACAC
    if (ctx->r18 == 0) {
        // 0x8000AC9C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8000ACAC;
    }
    goto skip_3;
    // 0x8000AC9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x8000ACA0: jal         0x8000AD08
    // 0x8000ACA4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8000AD08_B908(rdram, ctx);
        goto after_0;
    // 0x8000ACA4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_0:
L_8000ACA8:
    // 0x8000ACA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8000ACAC:
    // 0x8000ACAC: bne         $s1, $s5, L_8000AC18
    if (ctx->r17 != ctx->r21) {
        // 0x8000ACB0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8000AC18;
    }
    // 0x8000ACB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8000ACB4:
    // 0x8000ACB4: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
L_8000ACB8:
    // 0x8000ACB8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8000ACBC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8000ACC0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000ACC4: addiu       $t7, $t6, 0x374
    ctx->r15 = ADD32(ctx->r14, 0X374);
    // 0x8000ACC8: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8000ACCC: bne         $t5, $at, L_8000ABC8
    if (ctx->r13 != ctx->r1) {
        // 0x8000ACD0: sw          $t5, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r13;
            goto L_8000ABC8;
    }
    // 0x8000ACD0: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x8000ACD4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000ACD8: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x8000ACDC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000ACE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000ACE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000ACE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000ACEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000ACF0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000ACF4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000ACF8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000ACFC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8000AD00: jr          $ra
    // 0x8000AD04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8000AD04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80036058_36C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003605C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036060: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80036064: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80036068: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003606C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80036070: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80036074: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80036078: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003607C: bne         $v0, $zero, L_8003608C
    if (ctx->r2 != 0) {
        // 0x80036080: nop
    
            goto L_8003608C;
    }
    // 0x80036080: nop

    // 0x80036084: b           L_8003613C
    // 0x80036088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003613C;
    // 0x80036088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003608C:
    // 0x8003608C: bne         $v0, $zero, L_8003609C
    if (ctx->r2 != 0) {
        // 0x80036090: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8003609C;
    }
    // 0x80036090: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80036094: b           L_8003613C
    // 0x80036098: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003613C;
    // 0x80036098: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003609C:
    // 0x8003609C: jal         0x80035FDC
    // 0x800360A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80035FDC_36BDC(rdram, ctx);
        goto after_0;
    // 0x800360A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_0:
    // 0x800360A4: bne         $v0, $zero, L_800360D8
    if (ctx->r2 != 0) {
        // 0x800360A8: sw          $v0, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r2;
            goto L_800360D8;
    }
    // 0x800360A8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x800360AC: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x800360B0: jal         0x80036308
    // 0x800360B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_1;
    // 0x800360B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x800360B8: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x800360BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800360C0: beq         $t6, $at, L_800360D0
    if (ctx->r14 == ctx->r1) {
        // 0x800360C4: nop
    
            goto L_800360D0;
    }
    // 0x800360C4: nop

    // 0x800360C8: b           L_8003613C
    // 0x800360CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003613C;
    // 0x800360CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800360D0:
    // 0x800360D0: b           L_8003613C
    // 0x800360D4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003613C;
    // 0x800360D4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800360D8:
    // 0x800360D8: jal         0x80036308
    // 0x800360DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_2;
    // 0x800360DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800360E0: lbu         $s3, 0x2F($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X2F);
    // 0x800360E4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800360E8: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x800360EC: bnel        $at, $zero, L_8003613C
    if (ctx->r1 != 0) {
        // 0x800360F0: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_8003613C;
    }
    goto skip_0;
    // 0x800360F0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_0:
L_800360F4:
    // 0x800360F4: lw          $s1, 0x18($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X18);
    // 0x800360F8: jal         0x80035FDC
    // 0x800360FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80035FDC_36BDC(rdram, ctx);
        goto after_3;
    // 0x800360FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80036100: bne         $v0, $zero, L_8003611C
    if (ctx->r2 != 0) {
        // 0x80036104: sw          $v0, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r2;
            goto L_8003611C;
    }
    // 0x80036104: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80036108: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x8003610C: jal         0x80036308
    // 0x80036110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_4;
    // 0x80036110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80036114: b           L_8003613C
    // 0x80036118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003613C;
    // 0x80036118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003611C:
    // 0x8003611C: jal         0x80036308
    // 0x80036120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80036308_36F08(rdram, ctx);
        goto after_5;
    // 0x80036120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80036124: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036128: andi        $t7, $s0, 0xFFFF
    ctx->r15 = ctx->r16 & 0XFFFF;
    // 0x8003612C: slt         $at, $t7, $s3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80036130: bne         $at, $zero, L_800360F4
    if (ctx->r1 != 0) {
        // 0x80036134: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_800360F4;
    }
    // 0x80036134: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80036138: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003613C:
    // 0x8003613C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80036140: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80036144: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80036148: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003614C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80036150: jr          $ra
    // 0x80036154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80036154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alCopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80052530: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80052534: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80052538: blez        $a2, L_8005259C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8005253C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8005259C;
    }
    // 0x8005253C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80052540: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80052544: beq         $a1, $zero, L_8005256C
    if (ctx->r5 == 0) {
        // 0x80052548: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8005256C;
    }
    // 0x80052548: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8005254C:
    // 0x8005254C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80052550: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80052554: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052558: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005255C: bne         $a0, $a3, L_8005254C
    if (ctx->r4 != ctx->r7) {
        // 0x80052560: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8005254C;
    }
    // 0x80052560: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x80052564: beq         $a3, $a2, L_8005259C
    if (ctx->r7 == ctx->r6) {
        // 0x80052568: nop
    
            goto L_8005259C;
    }
    // 0x80052568: nop

L_8005256C:
    // 0x8005256C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80052570: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80052574: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80052578: sb          $t7, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r15;
    // 0x8005257C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x80052580: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80052584: sb          $t8, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r24;
    // 0x80052588: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x8005258C: sb          $t9, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r25;
    // 0x80052590: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x80052594: bne         $a3, $a2, L_8005256C
    if (ctx->r7 != ctx->r6) {
        // 0x80052598: sb          $t0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r8;
            goto L_8005256C;
    }
    // 0x80052598: sb          $t0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r8;
L_8005259C:
    // 0x8005259C: jr          $ra
    // 0x800525A0: nop

    TRACE_RETURN()
    return;
    // 0x800525A0: nop

;}
RECOMP_FUNC void func_8001C3E0_1CFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C3E0: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001C3E4: addiu       $v0, $v0, -0x7B60
    ctx->r2 = ADD32(ctx->r2, -0X7B60);
    // 0x8001C3E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001C3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C3F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8001C3F4: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8001C3F8: beq         $a0, $zero, L_8001C40C
    if (ctx->r4 == 0) {
        // 0x8001C3FC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8001C40C;
    }
    // 0x8001C3FC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001C400: bnel        $a1, $zero, L_8001C410
    if (ctx->r5 != 0) {
        // 0x8001C404: lui         $at, 0x7000
        ctx->r1 = S32(0X7000 << 16);
            goto L_8001C410;
    }
    goto skip_0;
    // 0x8001C404: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    skip_0:
    // 0x8001C408: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
L_8001C40C:
    // 0x8001C40C: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
L_8001C410:
    // 0x8001C410: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x8001C414: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8001C418: beq         $t6, $at, L_8001C428
    if (ctx->r14 == ctx->r1) {
        // 0x8001C41C: lui         $t2, 0x8017
        ctx->r10 = S32(0X8017 << 16);
            goto L_8001C428;
    }
    // 0x8001C41C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001C420: b           L_8001C430
    // 0x8001C424: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
        goto L_8001C430;
    // 0x8001C424: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8001C428:
    // 0x8001C428: lw          $t7, 0x78($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X78);
    // 0x8001C42C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_8001C430:
    // 0x8001C430: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001C434: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8001C438: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x8001C43C: addiu       $t2, $t2, -0x7B10
    ctx->r10 = ADD32(ctx->r10, -0X7B10);
    // 0x8001C440: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8001C444: beq         $t8, $zero, L_8001C4BC
    if (ctx->r24 == 0) {
        // 0x8001C448: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8001C4BC;
    }
    // 0x8001C448: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8001C44C: sll         $t9, $t8, 0
    ctx->r25 = S32(ctx->r24 << 0);
    // 0x8001C450: bgez        $t9, L_8001C468
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001C454: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_8001C468;
    }
    // 0x8001C454: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001C458: lui         $t3, 0x80FF
    ctx->r11 = S32(0X80FF << 16);
    // 0x8001C45C: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8001C460: b           L_8001C4C8
    // 0x8001C464: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
        goto L_8001C4C8;
    // 0x8001C464: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_8001C468:
    // 0x8001C468: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001C46C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x8001C470: bne         $at, $zero, L_8001C4A0
    if (ctx->r1 != 0) {
        // 0x8001C474: lui         $t3, 0x80FF
        ctx->r11 = S32(0X80FF << 16);
            goto L_8001C4A0;
    }
    // 0x8001C474: lui         $t3, 0x80FF
    ctx->r11 = S32(0X80FF << 16);
    // 0x8001C478: srl         $t4, $v0, 24
    ctx->r12 = S32(U32(ctx->r2) >> 24);
    // 0x8001C47C: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8001C480: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001C484: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x8001C488: lui         $t3, 0x80FF
    ctx->r11 = S32(0X80FF << 16);
    // 0x8001C48C: lw          $t8, -0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X8);
    // 0x8001C490: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8001C494: and         $t9, $v0, $t3
    ctx->r25 = ctx->r2 & ctx->r11;
    // 0x8001C498: b           L_8001C4B0
    // 0x8001C49C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
        goto L_8001C4B0;
    // 0x8001C49C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_8001C4A0:
    // 0x8001C4A0: lw          $t4, 0x38($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X38);
    // 0x8001C4A4: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8001C4A8: and         $t5, $v0, $t3
    ctx->r13 = ctx->r2 & ctx->r11;
    // 0x8001C4AC: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
L_8001C4B0:
    // 0x8001C4B0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8001C4B4: b           L_8001C4C8
    // 0x8001C4B8: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
        goto L_8001C4C8;
    // 0x8001C4B8: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_8001C4BC:
    // 0x8001C4BC: lui         $t3, 0x80FF
    ctx->r11 = S32(0X80FF << 16);
    // 0x8001C4C0: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8001C4C4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8001C4C8:
    // 0x8001C4C8: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x8001C4CC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001C4D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001C4D4: bne         $a1, $zero, L_8001C4E4
    if (ctx->r5 != 0) {
        // 0x8001C4D8: srl         $t1, $a1, 8
        ctx->r9 = S32(U32(ctx->r5) >> 8);
            goto L_8001C4E4;
    }
    // 0x8001C4D8: srl         $t1, $a1, 8
    ctx->r9 = S32(U32(ctx->r5) >> 8);
    // 0x8001C4DC: b           L_8001C678
    // 0x8001C4E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C678;
    // 0x8001C4E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C4E4:
    // 0x8001C4E4: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x8001C4E8: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8001C4EC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8001C4F0: mflo        $t6
    ctx->r14 = lo;
    // 0x8001C4F4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8001C4F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C4FC: andi        $t8, $t1, 0x7FFF
    ctx->r24 = ctx->r9 & 0X7FFF;
    // 0x8001C500: sw          $t7, -0x7AE4($at)
    MEM_W(-0X7AE4, ctx->r1) = ctx->r15;
    // 0x8001C504: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8001C508: bgez        $t9, L_8001C520
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001C50C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001C520;
    }
    // 0x8001C50C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001C510: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001C514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001C518: nop

    // 0x8001C51C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8001C520:
    // 0x8001C520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C524: swc1        $f6, -0x7AE8($at)
    MEM_W(-0X7AE8, ctx->r1) = ctx->f6.u32l;
    // 0x8001C528: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x8001C52C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C530: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8001C534: beq         $t4, $zero, L_8001C598
    if (ctx->r12 == 0) {
        // 0x8001C538: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_8001C598;
    }
    // 0x8001C538: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8001C53C: sll         $t5, $t4, 0
    ctx->r13 = S32(ctx->r12 << 0);
    // 0x8001C540: bgez        $t5, L_8001C550
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8001C544: lui         $at, 0x800
        ctx->r1 = S32(0X800 << 16);
            goto L_8001C550;
    }
    // 0x8001C544: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001C548: b           L_8001C58C
    // 0x8001C54C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_8001C58C;
    // 0x8001C54C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_8001C550:
    // 0x8001C550: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001C554: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x8001C558: bne         $at, $zero, L_8001C57C
    if (ctx->r1 != 0) {
        // 0x8001C55C: srl         $t6, $v0, 24
        ctx->r14 = S32(U32(ctx->r2) >> 24);
            goto L_8001C57C;
    }
    // 0x8001C55C: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x8001C560: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8001C564: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001C568: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x8001C56C: lw          $t4, -0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, -0X8);
    // 0x8001C570: and         $t5, $v0, $t3
    ctx->r13 = ctx->r2 & ctx->r11;
    // 0x8001C574: b           L_8001C588
    // 0x8001C578: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
        goto L_8001C588;
    // 0x8001C578: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
L_8001C57C:
    // 0x8001C57C: lw          $t6, 0x38($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X38);
    // 0x8001C580: and         $t7, $v0, $t3
    ctx->r15 = ctx->r2 & ctx->r11;
    // 0x8001C584: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
L_8001C588:
    // 0x8001C588: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8001C58C:
    // 0x8001C58C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C590: b           L_8001C59C
    // 0x8001C594: sw          $v1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r3;
        goto L_8001C59C;
    // 0x8001C594: sw          $v1, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = ctx->r3;
L_8001C598:
    // 0x8001C598: sw          $zero, -0x7AE0($at)
    MEM_W(-0X7AE0, ctx->r1) = 0;
L_8001C59C:
    // 0x8001C59C: srl         $t8, $a1, 28
    ctx->r24 = S32(U32(ctx->r5) >> 28);
    // 0x8001C5A0: srl         $t4, $a1, 24
    ctx->r12 = S32(U32(ctx->r5) >> 24);
    // 0x8001C5A4: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8001C5A8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8001C5AC: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x8001C5B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001C5B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001C5B8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
L_8001C5BC:
    // 0x8001C5BC: sltiu       $v1, $t1, 0x1
    ctx->r3 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x8001C5C0: bne         $v1, $zero, L_8001C674
    if (ctx->r3 != 0) {
        // 0x8001C5C4: addiu       $t1, $t1, -0x1
        ctx->r9 = ADD32(ctx->r9, -0X1);
            goto L_8001C674;
    }
    // 0x8001C5C4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8001C5C8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x8001C5CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001C5D0: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8001C5D4: beq         $t4, $zero, L_8001C63C
    if (ctx->r12 == 0) {
        // 0x8001C5D8: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_8001C63C;
    }
    // 0x8001C5D8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8001C5DC: sll         $t9, $t4, 0
    ctx->r25 = S32(ctx->r12 << 0);
    // 0x8001C5E0: bgez        $t9, L_8001C5F0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001C5E4: lui         $a3, 0x8017
        ctx->r7 = S32(0X8017 << 16);
            goto L_8001C5F0;
    }
    // 0x8001C5E4: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8001C5E8: b           L_8001C63C
    // 0x8001C5EC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
        goto L_8001C63C;
    // 0x8001C5EC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_8001C5F0:
    // 0x8001C5F0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8001C5F4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x8001C5F8: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x8001C5FC: bne         $at, $zero, L_8001C624
    if (ctx->r1 != 0) {
        // 0x8001C600: lw          $a3, -0x7B60($a3)
        ctx->r7 = MEM_W(ctx->r7, -0X7B60);
            goto L_8001C624;
    }
    // 0x8001C600: lw          $a3, -0x7B60($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X7B60);
    // 0x8001C604: srl         $t5, $v0, 24
    ctx->r13 = S32(U32(ctx->r2) >> 24);
    // 0x8001C608: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x8001C60C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001C610: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x8001C614: lw          $t4, -0x8($t8)
    ctx->r12 = MEM_W(ctx->r24, -0X8);
    // 0x8001C618: and         $t9, $v0, $t3
    ctx->r25 = ctx->r2 & ctx->r11;
    // 0x8001C61C: b           L_8001C630
    // 0x8001C620: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
        goto L_8001C630;
    // 0x8001C620: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
L_8001C624:
    // 0x8001C624: lw          $t5, 0x38($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X38);
    // 0x8001C628: and         $t6, $v0, $t3
    ctx->r14 = ctx->r2 & ctx->r11;
    // 0x8001C62C: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
L_8001C630:
    // 0x8001C630: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8001C634: b           L_8001C63C
    // 0x8001C638: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_8001C63C;
    // 0x8001C638: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8001C63C:
    // 0x8001C63C: beq         $a0, $zero, L_8001C5BC
    if (ctx->r4 == 0) {
        // 0x8001C640: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_8001C5BC;
    }
    // 0x8001C640: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8001C644: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8001C648: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8001C64C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8001C650: jal         0x8001C688
    // 0x8001C654: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8001C688_1D288(rdram, ctx);
        goto after_0;
    // 0x8001C654: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x8001C658: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001C65C: lui         $t3, 0x80FF
    ctx->r11 = S32(0X80FF << 16);
    // 0x8001C660: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8001C664: addiu       $t2, $t2, -0x7B10
    ctx->r10 = ADD32(ctx->r10, -0X7B10);
    // 0x8001C668: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8001C66C: b           L_8001C5BC
    // 0x8001C670: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
        goto L_8001C5BC;
    // 0x8001C670: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_8001C674:
    // 0x8001C674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C678:
    // 0x8001C678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C67C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001C680: jr          $ra
    // 0x8001C684: nop

    TRACE_RETURN()
    return;
    // 0x8001C684: nop

;}
RECOMP_FUNC void func_80037070_37C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037070: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80037074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80037078: jr          $ra
    // 0x8003707C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003707C: sb          $t6, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void _Litob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A540: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8004A544: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004A548: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8004A54C: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x8004A550: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004A554: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A558: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004A55C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004A560: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004A564: bne         $v1, $v0, L_8004A578
    if (ctx->r3 != ctx->r2) {
        // 0x8004A568: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_8004A578;
    }
    // 0x8004A568: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8004A56C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004A570: b           L_8004A580
    // 0x8004A574: addiu       $s3, $s3, -0x5CCC
    ctx->r19 = ADD32(ctx->r19, -0X5CCC);
        goto L_8004A580;
    // 0x8004A574: addiu       $s3, $s3, -0x5CCC
    ctx->r19 = ADD32(ctx->r19, -0X5CCC);
L_8004A578:
    // 0x8004A578: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8004A57C: addiu       $s3, $s3, -0x5CE0
    ctx->r19 = ADD32(ctx->r19, -0X5CE0);
L_8004A580:
    // 0x8004A580: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x8004A584: bne         $v0, $at, L_8004A594
    if (ctx->r2 != ctx->r1) {
        // 0x8004A588: addiu       $s0, $zero, 0x18
        ctx->r16 = ADD32(0, 0X18);
            goto L_8004A594;
    }
    // 0x8004A588: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x8004A58C: b           L_8004A5B4
    // 0x8004A590: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
        goto L_8004A5B4;
    // 0x8004A590: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_8004A594:
    // 0x8004A594: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8004A598: beq         $v0, $at, L_8004A5B0
    if (ctx->r2 == ctx->r1) {
        // 0x8004A59C: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_8004A5B0;
    }
    // 0x8004A59C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8004A5A0: beq         $v1, $v0, L_8004A5B0
    if (ctx->r3 == ctx->r2) {
        // 0x8004A5A4: nop
    
            goto L_8004A5B0;
    }
    // 0x8004A5A4: nop

    // 0x8004A5A8: b           L_8004A5B0
    // 0x8004A5AC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_8004A5B0;
    // 0x8004A5AC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_8004A5B0:
    // 0x8004A5B0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_8004A5B4:
    // 0x8004A5B4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8004A5B8: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8004A5BC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8004A5C0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x8004A5C4: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8004A5C8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8004A5CC: beq         $v0, $at, L_8004A5E0
    if (ctx->r2 == ctx->r1) {
        // 0x8004A5D0: sw          $t9, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r25;
            goto L_8004A5E0;
    }
    // 0x8004A5D0: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x8004A5D4: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x8004A5D8: bnel        $v0, $at, L_8004A61C
    if (ctx->r2 != ctx->r1) {
        // 0x8004A5DC: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8004A61C;
    }
    goto skip_0;
    // 0x8004A5DC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_0:
L_8004A5E0:
    // 0x8004A5E0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8004A5E4: bgtzl       $t4, L_8004A61C
    if (SIGNED(ctx->r12) > 0) {
        // 0x8004A5E8: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8004A61C;
    }
    goto skip_1;
    // 0x8004A5E8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x8004A5EC: bltz        $t4, L_8004A5FC
    if (SIGNED(ctx->r12) < 0) {
        // 0x8004A5F0: lw          $t6, 0x60($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X60);
            goto L_8004A5FC;
    }
    // 0x8004A5F0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8004A5F4: b           L_8004A61C
    // 0x8004A5F8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
        goto L_8004A61C;
    // 0x8004A5F8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8004A5FC:
    // 0x8004A5FC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8004A600: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x8004A604: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x8004A608: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x8004A60C: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x8004A610: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x8004A614: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x8004A618: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8004A61C:
    // 0x8004A61C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8004A620: addiu       $t0, $zero, 0x17
    ctx->r8 = ADD32(0, 0X17);
    // 0x8004A624: bne         $t2, $zero, L_8004A640
    if (ctx->r10 != 0) {
        // 0x8004A628: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_8004A640;
    }
    // 0x8004A628: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8004A62C: bnel        $t3, $zero, L_8004A644
    if (ctx->r11 != 0) {
        // 0x8004A630: addiu       $s0, $zero, 0x17
        ctx->r16 = ADD32(0, 0X17);
            goto L_8004A644;
    }
    goto skip_2;
    // 0x8004A630: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
    skip_2:
    // 0x8004A634: lw          $t4, 0x24($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X24);
    // 0x8004A638: beql        $t4, $zero, L_8004A67C
    if (ctx->r12 == 0) {
        // 0x8004A63C: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_8004A67C;
    }
    goto skip_3;
    // 0x8004A63C: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    skip_3:
L_8004A640:
    // 0x8004A640: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
L_8004A644:
    // 0x8004A644: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x8004A648: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004A64C: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8004A650: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8004A654: jal         0x80042D8C
    // 0x8004A658: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_rem_recomp(rdram, ctx);
        goto after_0;
    // 0x8004A658: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_0:
    // 0x8004A65C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8004A660: addu        $t6, $v1, $s3
    ctx->r14 = ADD32(ctx->r3, ctx->r19);
    // 0x8004A664: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8004A668: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x8004A66C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8004A670: addu        $t8, $s2, $t0
    ctx->r24 = ADD32(ctx->r18, ctx->r8);
    // 0x8004A674: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x8004A678: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
L_8004A67C:
    // 0x8004A67C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8004A680: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x8004A684: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004A688: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8004A68C: jal         0x80042DC8
    // 0x8004A690: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_div_recomp(rdram, ctx);
        goto after_1;
    // 0x8004A690: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_1:
    // 0x8004A694: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8004A698: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x8004A69C: bltz        $v0, L_8004A74C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004A6A0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_8004A74C;
    }
    // 0x8004A6A0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8004A6A4: bgtz        $v0, L_8004A6B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A6A8: nop
    
            goto L_8004A6B4;
    }
    // 0x8004A6A8: nop

    // 0x8004A6AC: beql        $v1, $zero, L_8004A750
    if (ctx->r3 == 0) {
        // 0x8004A6B0: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_8004A750;
    }
    goto skip_4;
    // 0x8004A6B0: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_4:
L_8004A6B4:
    // 0x8004A6B4: blez        $s0, L_8004A74C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004A6B8: sra         $t4, $t1, 31
        ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
            goto L_8004A74C;
    }
    // 0x8004A6B8: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8004A6BC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8004A6C0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x8004A6C4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8004A6C8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8004A6CC: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8004A6D0: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x8004A6D4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_8004A6D8:
    // 0x8004A6D8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8004A6DC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8004A6E0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8004A6E4: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8004A6E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004A6EC: jal         0x80051720
    // 0x8004A6F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    lldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x8004A6F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x8004A6F4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8004A6F8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8004A6FC: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x8004A700: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8004A704: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x8004A708: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8004A70C: addu        $t7, $s2, $a0
    ctx->r15 = ADD32(ctx->r18, ctx->r4);
    // 0x8004A710: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004A714: addu        $t5, $t3, $s3
    ctx->r13 = ADD32(ctx->r11, ctx->r19);
    // 0x8004A718: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8004A71C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8004A720: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8004A724: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8004A728: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8004A72C: bltz        $t8, L_8004A74C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8004A730: sw          $t9, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r25;
            goto L_8004A74C;
    }
    // 0x8004A730: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8004A734: bgtz        $t8, L_8004A744
    if (SIGNED(ctx->r24) > 0) {
        // 0x8004A738: nop
    
            goto L_8004A744;
    }
    // 0x8004A738: nop

    // 0x8004A73C: beql        $t9, $zero, L_8004A750
    if (ctx->r25 == 0) {
        // 0x8004A740: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_8004A750;
    }
    goto skip_5;
    // 0x8004A740: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_5:
L_8004A744:
    // 0x8004A744: bgtzl       $s0, L_8004A6D8
    if (SIGNED(ctx->r16) > 0) {
        // 0x8004A748: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_8004A6D8;
    }
    goto skip_6;
    // 0x8004A748: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_6:
L_8004A74C:
    // 0x8004A74C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
L_8004A750:
    // 0x8004A750: subu        $a2, $t4, $s0
    ctx->r6 = SUB32(ctx->r12, ctx->r16);
    // 0x8004A754: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    // 0x8004A758: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8004A75C: jal         0x8004A4A0
    // 0x8004A760: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8004A760: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    after_3:
    // 0x8004A764: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x8004A768: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8004A76C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004A770: beq         $at, $zero, L_8004A77C
    if (ctx->r1 == 0) {
        // 0x8004A774: subu        $t5, $a0, $a1
        ctx->r13 = SUB32(ctx->r4, ctx->r5);
            goto L_8004A77C;
    }
    // 0x8004A774: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x8004A778: sw          $t5, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r13;
L_8004A77C:
    // 0x8004A77C: bgezl       $a0, L_8004A7C0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8004A780: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8004A7C0;
    }
    goto skip_7;
    // 0x8004A780: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x8004A784: lw          $t6, 0x30($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X30);
    // 0x8004A788: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8004A78C: andi        $t7, $t6, 0x14
    ctx->r15 = ctx->r14 & 0X14;
    // 0x8004A790: bnel        $t7, $at, L_8004A7C0
    if (ctx->r15 != ctx->r1) {
        // 0x8004A794: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8004A7C0;
    }
    goto skip_8;
    // 0x8004A794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x8004A798: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x8004A79C: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x8004A7A0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8004A7A4: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x8004A7A8: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x8004A7AC: subu        $s0, $t3, $a1
    ctx->r16 = SUB32(ctx->r11, ctx->r5);
    // 0x8004A7B0: blez        $s0, L_8004A7BC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004A7B4: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_8004A7BC;
    }
    // 0x8004A7B4: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
    // 0x8004A7B8: sw          $t4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r12;
L_8004A7BC:
    // 0x8004A7BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8004A7C0:
    // 0x8004A7C0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A7C4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004A7C8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004A7CC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004A7D0: jr          $ra
    // 0x8004A7D4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8004A7D4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8001A8E4_1B4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001A8E4: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x8001A8E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001A8EC: andi        $t8, $t7, 0xBFFF
    ctx->r24 = ctx->r15 & 0XBFFF;
    // 0x8001A8F0: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001A8F4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001A8F8: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001A8FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001A900: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001A904: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001A908: bne         $at, $zero, L_8001A928
    if (ctx->r1 != 0) {
        // 0x8001A90C: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8001A928;
    }
    // 0x8001A90C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8001A910: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001A914: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001A918: addu        $v0, $t8, $at
    ctx->r2 = ADD32(ctx->r24, ctx->r1);
    // 0x8001A91C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8001A920: b           L_8001AAA8
    // 0x8001A924: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8001AAA8;
    // 0x8001A924: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8001A928:
    // 0x8001A928: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x8001A92C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A930: beq         $t0, $zero, L_8001A950
    if (ctx->r8 == 0) {
        // 0x8001A934: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001A950;
    }
    // 0x8001A934: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A938: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001A93C: andi        $t1, $a0, 0x7FFF
    ctx->r9 = ctx->r4 & 0X7FFF;
    // 0x8001A940: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001A944: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001A948: b           L_8001A970
    // 0x8001A94C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001A970;
    // 0x8001A94C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001A950:
    // 0x8001A950: lwc1        $f0, -0x7AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7AF0);
    // 0x8001A954: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001A958: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x8001A95C: nop

    // 0x8001A960: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8001A964: nop

    // 0x8001A968: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001A96C: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_8001A970:
    // 0x8001A970: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8001A974: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001A978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001A97C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A980: bc1fl       L_8001A99C
    if (!c1cs) {
        // 0x8001A984: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_8001A99C;
    }
    goto skip_0;
    // 0x8001A984: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x8001A988: jal         0x8001B2C8
    // 0x8001A98C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_0;
    // 0x8001A98C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x8001A990: b           L_8001AAAC
    // 0x8001A994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8001AAAC;
    // 0x8001A994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A998: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_8001A99C:
    // 0x8001A99C: lwc1        $f4, -0x7AE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001A9A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A9A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A9A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001A9AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001A9B0: addiu       $a2, $sp, 0x2E
    ctx->r6 = ADD32(ctx->r29, 0X2E);
    // 0x8001A9B4: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001A9B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001A9BC: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x8001A9C0: nop

    // 0x8001A9C4: bc1f        L_8001A9EC
    if (!c1cs) {
        // 0x8001A9C8: nop
    
            goto L_8001A9EC;
    }
    // 0x8001A9C8: nop

    // 0x8001A9CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001A9D0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8001A9D4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001A9D8: jal         0x8001B2C8
    // 0x8001A9DC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_1;
    // 0x8001A9DC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8001A9E0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001A9E4: b           L_8001A9FC
    // 0x8001A9E8: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
        goto L_8001A9FC;
    // 0x8001A9E8: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
L_8001A9EC:
    // 0x8001A9EC: jal         0x8001B2C8
    // 0x8001A9F0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_2;
    // 0x8001A9F0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8001A9F4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001A9F8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
L_8001A9FC:
    // 0x8001A9FC: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x8001AA00: lhu         $t3, 0x2C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2C);
    // 0x8001AA04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001AA08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001AA0C: subu        $t4, $t3, $v1
    ctx->r12 = SUB32(ctx->r11, ctx->r3);
    // 0x8001AA10: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8001AA14: nop

    // 0x8001AA18: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001AA1C: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001AA20: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8001AA24: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001AA28: nop

    // 0x8001AA2C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001AA30: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001AA34: nop

    // 0x8001AA38: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001AA3C: beql        $t6, $zero, L_8001AA8C
    if (ctx->r14 == 0) {
        // 0x8001AA40: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8001AA8C;
    }
    goto skip_1;
    // 0x8001AA40: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x8001AA44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001AA48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001AA4C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001AA50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001AA54: nop

    // 0x8001AA58: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001AA5C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001AA60: nop

    // 0x8001AA64: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001AA68: bne         $t6, $zero, L_8001AA80
    if (ctx->r14 != 0) {
        // 0x8001AA6C: nop
    
            goto L_8001AA80;
    }
    // 0x8001AA6C: nop

    // 0x8001AA70: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8001AA74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001AA78: b           L_8001AA98
    // 0x8001AA7C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8001AA98;
    // 0x8001AA7C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8001AA80:
    // 0x8001AA80: b           L_8001AA98
    // 0x8001AA84: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8001AA98;
    // 0x8001AA84: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8001AA88: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8001AA8C:
    // 0x8001AA8C: nop

    // 0x8001AA90: bltz        $t6, L_8001AA80
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001AA94: nop
    
            goto L_8001AA80;
    }
    // 0x8001AA94: nop

L_8001AA98:
    // 0x8001AA98: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x8001AA9C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8001AAA0: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001AAA4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8001AAA8:
    // 0x8001AAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001AAAC:
    // 0x8001AAAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001AAB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001AAB4: jr          $ra
    // 0x8001AAB8: nop

    TRACE_RETURN()
    return;
    // 0x8001AAB8: nop

;}
RECOMP_FUNC void func_8001FA3C_2063C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001FA3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001FA40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001FA44: jal         0x80004240
    // 0x8001FA48: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x8001FA48: nop

    after_0:
    // 0x8001FA4C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001FA50: jal         0x80034EF8
    // 0x8001FA54: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x8001FA54: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_1:
    // 0x8001FA58: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8001FA5C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8001FA60: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8001FA64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001FA68: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001FA6C: sb          $t6, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = ctx->r14;
    // 0x8001FA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FA78: jr          $ra
    // 0x8001FA7C: nop

    TRACE_RETURN()
    return;
    // 0x8001FA7C: nop

;}
