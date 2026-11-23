#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021A22C_5D56FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A22C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A230: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021A234: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8021A238: beq         $v1, $zero, L_8021A264
    if (ctx->r3 == 0) {
        // 0x8021A23C: nop
    
            goto L_8021A264;
    }
    // 0x8021A23C: nop

    // 0x8021A240: lbu         $t6, 0x7C($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7C);
L_8021A244:
    // 0x8021A244: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8021A248: beql        $t7, $zero, L_8021A25C
    if (ctx->r15 == 0) {
        // 0x8021A24C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8021A25C;
    }
    goto skip_0;
    // 0x8021A24C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8021A250: jr          $ra
    // 0x8021A254: sb          $t8, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8021A254: sb          $t8, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r24;
    // 0x8021A258: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8021A25C:
    // 0x8021A25C: bnel        $v1, $zero, L_8021A244
    if (ctx->r3 != 0) {
        // 0x8021A260: lbu         $t6, 0x7C($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X7C);
            goto L_8021A244;
    }
    goto skip_1;
    // 0x8021A260: lbu         $t6, 0x7C($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7C);
    skip_1:
L_8021A264:
    // 0x8021A264: jr          $ra
    // 0x8021A268: nop

    TRACE_RETURN()
    return;
    // 0x8021A268: nop

;}
RECOMP_FUNC void func_80226580_5E1A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226580: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022658C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80226590: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80226594: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80226598: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x8022659C: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x802265A0: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x802265A4: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x802265A8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802265AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802265B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802265B4: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x802265B8: beq         $t2, $zero, L_802265D0
    if (ctx->r10 == 0) {
        // 0x802265BC: sw          $t9, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r25;
            goto L_802265D0;
    }
    // 0x802265BC: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x802265C0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802265C4: and         $t4, $t9, $at
    ctx->r12 = ctx->r25 & ctx->r1;
    // 0x802265C8: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
    // 0x802265CC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_802265D0:
    // 0x802265D0: andi        $t5, $a2, 0x8
    ctx->r13 = ctx->r6 & 0X8;
    // 0x802265D4: beq         $t5, $zero, L_80226618
    if (ctx->r13 == 0) {
        // 0x802265D8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80226618;
    }
    // 0x802265D8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x802265DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802265E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802265E4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802265E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802265EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802265F0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802265F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x802265F8: jal         0x8021664C
    // 0x802265FC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_0;
    // 0x802265FC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x80226600: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80226604: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80226608: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8022660C: ori         $t6, $v1, 0x1
    ctx->r14 = ctx->r3 | 0X1;
    // 0x80226610: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80226614: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80226618:
    // 0x80226618: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x8022661C: beq         $t7, $zero, L_80226654
    if (ctx->r15 == 0) {
        // 0x80226620: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80226654;
    }
    // 0x80226620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80226624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226628: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8022662C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80226630: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80226634: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80226638: jal         0x8021664C
    // 0x8022663C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_1;
    // 0x8022663C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_1:
    // 0x80226640: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80226644: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80226648: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8022664C: ori         $t8, $v1, 0x1
    ctx->r24 = ctx->r3 | 0X1;
    // 0x80226650: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80226654:
    // 0x80226654: andi        $t9, $t0, 0x8000
    ctx->r25 = ctx->r8 & 0X8000;
    // 0x80226658: beql        $t9, $zero, L_8022669C
    if (ctx->r25 == 0) {
        // 0x8022665C: andi        $t5, $t0, 0x4000
        ctx->r13 = ctx->r8 & 0X4000;
            goto L_8022669C;
    }
    goto skip_0;
    // 0x8022665C: andi        $t5, $t0, 0x4000
    ctx->r13 = ctx->r8 & 0X4000;
    skip_0:
    // 0x80226660: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x80226664: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80226668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022666C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80226670: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x80226674: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80226678: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8022667C: jal         0x802196E4
    // 0x80226680: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_2;
    // 0x80226680: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80226684: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80226688: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8022668C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80226690: ori         $t4, $v1, 0x2
    ctx->r12 = ctx->r3 | 0X2;
    // 0x80226694: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x80226698: andi        $t5, $t0, 0x4000
    ctx->r13 = ctx->r8 & 0X4000;
L_8022669C:
    // 0x8022669C: beq         $t5, $zero, L_802266B8
    if (ctx->r13 == 0) {
        // 0x802266A0: andi        $t7, $t0, 0x10
        ctx->r15 = ctx->r8 & 0X10;
            goto L_802266B8;
    }
    // 0x802266A0: andi        $t7, $t0, 0x10
    ctx->r15 = ctx->r8 & 0X10;
    // 0x802266A4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802266A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802266AC: ori         $t6, $v1, 0x10
    ctx->r14 = ctx->r3 | 0X10;
    // 0x802266B0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802266B4: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
L_802266B8:
    // 0x802266B8: beq         $t7, $zero, L_802266D4
    if (ctx->r15 == 0) {
        // 0x802266BC: andi        $t3, $t0, 0x20
        ctx->r11 = ctx->r8 & 0X20;
            goto L_802266D4;
    }
    // 0x802266BC: andi        $t3, $t0, 0x20
    ctx->r11 = ctx->r8 & 0X20;
    // 0x802266C0: lhu         $t8, 0x16($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X16);
    // 0x802266C4: ori         $t2, $v1, 0x4
    ctx->r10 = ctx->r3 | 0X4;
    // 0x802266C8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x802266CC: addiu       $t9, $t8, -0xA
    ctx->r25 = ADD32(ctx->r24, -0XA);
    // 0x802266D0: sh          $t9, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r25;
L_802266D4:
    // 0x802266D4: beql        $t3, $zero, L_802266F4
    if (ctx->r11 == 0) {
        // 0x802266D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802266F4;
    }
    goto skip_1;
    // 0x802266D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802266DC: lhu         $t4, 0x16($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0X16);
    // 0x802266E0: ori         $t6, $v1, 0x4
    ctx->r14 = ctx->r3 | 0X4;
    // 0x802266E4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802266E8: addiu       $t5, $t4, 0xA
    ctx->r13 = ADD32(ctx->r12, 0XA);
    // 0x802266EC: sh          $t5, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r13;
    // 0x802266F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802266F4:
    // 0x802266F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802266F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802266FC: jr          $ra
    // 0x80226700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80226700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80219F20_5D53F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219F20: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80219F24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80219F28: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80219F2C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80219F30: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80219F34: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80219F38: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80219F3C: bgezl       $t7, L_8021A21C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80219F40: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8021A21C;
    }
    goto skip_0;
    // 0x80219F40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80219F44: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x80219F48: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80219F4C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80219F50: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80219F54: beq         $t9, $zero, L_8021A034
    if (ctx->r25 == 0) {
        // 0x80219F58: lw          $s0, 0x0($v0)
        ctx->r16 = MEM_W(ctx->r2, 0X0);
            goto L_8021A034;
    }
    // 0x80219F58: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x80219F5C: lbu         $t0, 0x7C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X7C);
    // 0x80219F60: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80219F64: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x80219F68: beql        $t1, $zero, L_8021A21C
    if (ctx->r9 == 0) {
        // 0x80219F6C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8021A21C;
    }
    goto skip_1;
    // 0x80219F6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80219F70: lw          $t2, -0x3384($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3384);
    // 0x80219F74: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80219F78: beq         $t2, $zero, L_8021A02C
    if (ctx->r10 == 0) {
        // 0x80219F7C: nop
    
            goto L_8021A02C;
    }
    // 0x80219F7C: nop

    // 0x80219F80: lbu         $t3, 0x6E($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X6E);
    // 0x80219F84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80219F88: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80219F8C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80219F90: bgez        $t3, L_80219FA4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80219F94: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80219FA4;
    }
    // 0x80219F94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80219F98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219F9C: nop

    // 0x80219FA0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80219FA4:
    // 0x80219FA4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80219FA8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80219FAC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80219FB0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80219FB4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80219FB8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80219FBC: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x80219FC0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80219FC4: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x80219FC8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80219FCC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80219FD0: lbu         $t4, 0x6F($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X6F);
    // 0x80219FD4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80219FD8: bgez        $t4, L_80219FEC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80219FDC: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80219FEC;
    }
    // 0x80219FDC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80219FE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80219FE4: nop

    // 0x80219FE8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80219FEC:
    // 0x80219FEC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219FF0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80219FF4: addiu       $a1, $a1, -0x3380
    ctx->r5 = ADD32(ctx->r5, -0X3380);
    // 0x80219FF8: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80219FFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8021A000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021A004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A008: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021A00C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A010: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8021A014: jal         0x8001DB04
    // 0x8021A018: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_0;
    // 0x8021A018: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8021A01C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8021A020: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021A024: b           L_8021A218
    // 0x8021A028: sw          $zero, -0x3384($at)
    MEM_W(-0X3384, ctx->r1) = 0;
        goto L_8021A218;
    // 0x8021A028: sw          $zero, -0x3384($at)
    MEM_W(-0X3384, ctx->r1) = 0;
L_8021A02C:
    // 0x8021A02C: b           L_8021A218
    // 0x8021A030: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
        goto L_8021A218;
    // 0x8021A030: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
L_8021A034:
    // 0x8021A034: beql        $s0, $zero, L_8021A21C
    if (ctx->r16 == 0) {
        // 0x8021A038: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8021A21C;
    }
    goto skip_2;
    // 0x8021A038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8021A03C: lbu         $t6, 0x7C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7C);
L_8021A040:
    // 0x8021A040: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8021A044: beql        $t7, $zero, L_8021A210
    if (ctx->r15 == 0) {
        // 0x8021A048: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8021A210;
    }
    goto skip_3;
    // 0x8021A048: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x8021A04C: lbu         $t8, 0x6F($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X6F);
    // 0x8021A050: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A054: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8021A058: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8021A05C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8021A060: add.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x8021A064: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8021A068: bgez        $t8, L_8021A080
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021A06C: cvt.s.w     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.fl = CVT_S_W(ctx->f12.u32l);
            goto L_8021A080;
    }
    // 0x8021A06C: cvt.s.w     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8021A070: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021A074: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021A078: nop

    // 0x8021A07C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8021A080:
    // 0x8021A080: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021A084: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x8021A088: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x8021A08C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8021A090: jal         0x8002A718
    // 0x8021A094: nop

    func_8002A718_2B318(rdram, ctx);
        goto after_1;
    // 0x8021A094: nop

    after_1:
    // 0x8021A098: lh          $t9, 0x68($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X68);
    // 0x8021A09C: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x8021A0A0: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A0A4: beq         $t9, $zero, L_8021A204
    if (ctx->r25 == 0) {
        // 0x8021A0A8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8021A204;
    }
    // 0x8021A0A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021A0AC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8021A0B0: nop

    // 0x8021A0B4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8021A0B8: nop

    // 0x8021A0BC: bc1fl       L_8021A0D0
    if (!c1cs) {
        // 0x8021A0C0: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_8021A0D0;
    }
    goto skip_4;
    // 0x8021A0C0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_4:
    // 0x8021A0C4: b           L_8021A0D0
    // 0x8021A0C8: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8021A0D0;
    // 0x8021A0C8: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x8021A0CC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8021A0D0:
    // 0x8021A0D0: lbu         $t0, 0x6E($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X6E);
    // 0x8021A0D4: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x8021A0D8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8021A0DC: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8021A0E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8021A0E4: bgez        $t0, L_8021A0FC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8021A0E8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8021A0FC;
    }
    // 0x8021A0E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021A0EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021A0F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021A0F4: nop

    // 0x8021A0F8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8021A0FC:
    // 0x8021A0FC: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8021A100: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8021A104: add.d       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f18.d + ctx->f2.d;
    // 0x8021A108: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8021A10C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021A110: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8021A114: div.d       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f6.d);
    // 0x8021A118: div.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f16.d);
    // 0x8021A11C: mul.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x8021A120: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x8021A124: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x8021A128: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8021A12C: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x8021A130: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A134: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A138: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8021A13C: nop

    // 0x8021A140: bc1f        L_8021A150
    if (!c1cs) {
        // 0x8021A144: nop
    
            goto L_8021A150;
    }
    // 0x8021A144: nop

    // 0x8021A148: b           L_8021A150
    // 0x8021A14C: neg.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = -ctx->f6.fl;
        goto L_8021A150;
    // 0x8021A14C: neg.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = -ctx->f6.fl;
L_8021A150:
    // 0x8021A150: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8021A154: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021A158: add.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f10.d + ctx->f2.d;
    // 0x8021A15C: ldc1        $f4, -0x5A40($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5A40);
    // 0x8021A160: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021A164: addiu       $t9, $t9, -0x23EC
    ctx->r25 = ADD32(ctx->r25, -0X23EC);
    // 0x8021A168: div.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8021A16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021A170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021A174: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A178: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A17C: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x8021A180: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x8021A184: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8021A188: jalr        $t9
    // 0x8021A18C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8021A18C: nop

    after_2:
    // 0x8021A190: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x8021A194: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8021A198: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021A19C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A1A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021A1A4: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x8021A1A8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021A1AC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A1B0: lbu         $t2, 0x6F($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X6F);
    // 0x8021A1B4: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021A1B8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021A1BC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021A1C0: bgez        $t2, L_8021A1D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021A1C4: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021A1D4;
    }
    // 0x8021A1C4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021A1C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021A1CC: nop

    // 0x8021A1D0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8021A1D4:
    // 0x8021A1D4: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021A1D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8021A1DC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x8021A1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021A1E4: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x8021A1E8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A1EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021A1F0: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x8021A1F4: jal         0x8001DB04
    // 0x8021A1F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x8021A1F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8021A1FC: b           L_8021A218
    // 0x8021A200: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_8021A218;
    // 0x8021A200: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8021A204:
    // 0x8021A204: b           L_8021A218
    // 0x8021A208: sb          $t3, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r11;
        goto L_8021A218;
    // 0x8021A208: sb          $t3, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r11;
    // 0x8021A20C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8021A210:
    // 0x8021A210: bnel        $s0, $zero, L_8021A040
    if (ctx->r16 != 0) {
        // 0x8021A214: lbu         $t6, 0x7C($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X7C);
            goto L_8021A040;
    }
    goto skip_5;
    // 0x8021A214: lbu         $t6, 0x7C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7C);
    skip_5:
L_8021A218:
    // 0x8021A218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021A21C:
    // 0x8021A21C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8021A220: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8021A224: jr          $ra
    // 0x8021A228: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8021A228: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_802267C0_5E1C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802267C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802267C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802267CC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802267D0: jal         0x80225000
    // 0x802267D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80225000_5E04D0(rdram, ctx);
        goto after_0;
    // 0x802267D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802267D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802267DC: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x802267E0: jal         0x8022634C
    // 0x802267E4: lhu         $a1, 0xEA($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEA);
    func_8022634C_5E181C(rdram, ctx);
        goto after_1;
    // 0x802267E4: lhu         $a1, 0xEA($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEA);
    after_1:
    // 0x802267E8: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x802267EC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802267F0: bne         $t6, $zero, L_80226828
    if (ctx->r14 != 0) {
        // 0x802267F4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80226828;
    }
    // 0x802267F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802267F8: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x802267FC: bne         $t7, $zero, L_80226828
    if (ctx->r15 != 0) {
        // 0x80226800: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_80226828;
    }
    // 0x80226800: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x80226804: bne         $t8, $zero, L_8022681C
    if (ctx->r24 != 0) {
        // 0x80226808: nop
    
            goto L_8022681C;
    }
    // 0x80226808: nop

    // 0x8022680C: jal         0x802261A4
    // 0x80226810: nop

    func_802261A4_5E1674(rdram, ctx);
        goto after_2;
    // 0x80226810: nop

    after_2:
    // 0x80226814: b           L_80226828
    // 0x80226818: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80226828;
    // 0x80226818: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8022681C:
    // 0x8022681C: jal         0x80225E60
    // 0x80226820: nop

    func_80225E60_5E1330(rdram, ctx);
        goto after_3;
    // 0x80226820: nop

    after_3:
    // 0x80226824: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80226828:
    // 0x80226828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226830: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80226834: jr          $ra
    // 0x80226838: nop

    TRACE_RETURN()
    return;
    // 0x80226838: nop

;}
RECOMP_FUNC void func_8020F5E0_5CAAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F5E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F5EC: jal         0x80013AC4
    // 0x8020F5F0: addiu       $a0, $a0, -0x2E4C
    ctx->r4 = ADD32(ctx->r4, -0X2E4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F5F0: addiu       $a0, $a0, -0x2E4C
    ctx->r4 = ADD32(ctx->r4, -0X2E4C);
    after_0:
    // 0x8020F5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F5F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F5FC: jr          $ra
    // 0x8020F600: nop

    TRACE_RETURN()
    return;
    // 0x8020F600: nop

;}
RECOMP_FUNC void func_8020FD78_5CB248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FD7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FD80: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FD84: jal         0x80013AC4
    // 0x8020FD88: addiu       $a0, $a0, -0x2758
    ctx->r4 = ADD32(ctx->r4, -0X2758);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FD88: addiu       $a0, $a0, -0x2758
    ctx->r4 = ADD32(ctx->r4, -0X2758);
    after_0:
    // 0x8020FD8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FD90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FD94: jr          $ra
    // 0x8020FD98: nop

    TRACE_RETURN()
    return;
    // 0x8020FD98: nop

;}
RECOMP_FUNC void func_80210E7C_5CC34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210E84: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210E88: jal         0x80013AC4
    // 0x80210E8C: addiu       $a0, $a0, -0x1864
    ctx->r4 = ADD32(ctx->r4, -0X1864);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210E8C: addiu       $a0, $a0, -0x1864
    ctx->r4 = ADD32(ctx->r4, -0X1864);
    after_0:
    // 0x80210E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210E98: jr          $ra
    // 0x80210E9C: nop

    TRACE_RETURN()
    return;
    // 0x80210E9C: nop

;}
RECOMP_FUNC void func_8020EA10_5C9EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EA14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EA18: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EA1C: jal         0x80013AC4
    // 0x8020EA20: addiu       $a0, $a0, -0x366C
    ctx->r4 = ADD32(ctx->r4, -0X366C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EA20: addiu       $a0, $a0, -0x366C
    ctx->r4 = ADD32(ctx->r4, -0X366C);
    after_0:
    // 0x8020EA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EA2C: jr          $ra
    // 0x8020EA30: nop

    TRACE_RETURN()
    return;
    // 0x8020EA30: nop

;}
RECOMP_FUNC void func_80221860_5DCD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8022186C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221870: jal         0x8003D310
    // 0x80221874: lhu         $a0, 0xA4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA4);
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x80221874: lhu         $a0, 0xA4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA4);
    after_0:
    // 0x80221878: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022187C: jal         0x8003521C
    // 0x80221880: addiu       $a0, $a0, 0x182C
    ctx->r4 = ADD32(ctx->r4, 0X182C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221880: addiu       $a0, $a0, 0x182C
    ctx->r4 = ADD32(ctx->r4, 0X182C);
    after_1:
    // 0x80221884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022188C: jr          $ra
    // 0x80221890: nop

    TRACE_RETURN()
    return;
    // 0x80221890: nop

;}
RECOMP_FUNC void func_80222C78_5DE148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222C78: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80222C7C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80222C80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80222C84: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80222C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222C8C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80222C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222C94: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x80222C98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80222C9C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80222CA0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80222CA4: nop

    // 0x80222CA8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80222CAC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80222CB0: nop

    // 0x80222CB4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80222CB8: beql        $t7, $zero, L_80222D08
    if (ctx->r15 == 0) {
        // 0x80222CBC: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_80222D08;
    }
    goto skip_0;
    // 0x80222CBC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x80222CC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80222CC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80222CC8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80222CCC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80222CD0: nop

    // 0x80222CD4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80222CD8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80222CDC: nop

    // 0x80222CE0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80222CE4: bne         $t7, $zero, L_80222CFC
    if (ctx->r15 != 0) {
        // 0x80222CE8: nop
    
            goto L_80222CFC;
    }
    // 0x80222CE8: nop

    // 0x80222CEC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80222CF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222CF4: b           L_80222D14
    // 0x80222CF8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80222D14;
    // 0x80222CF8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80222CFC:
    // 0x80222CFC: b           L_80222D14
    // 0x80222D00: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80222D14;
    // 0x80222D00: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80222D04: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_80222D08:
    // 0x80222D08: nop

    // 0x80222D0C: bltz        $t7, L_80222CFC
    if (SIGNED(ctx->r15) < 0) {
        // 0x80222D10: nop
    
            goto L_80222CFC;
    }
    // 0x80222D10: nop

L_80222D14:
    // 0x80222D14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80222D18: beq         $a3, $zero, L_80222D30
    if (ctx->r7 == 0) {
        // 0x80222D1C: sh          $t7, 0x7E($a2)
        MEM_H(0X7E, ctx->r6) = ctx->r15;
            goto L_80222D30;
    }
    // 0x80222D1C: sh          $t7, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r15;
    // 0x80222D20: lbu         $t8, 0x7C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X7C);
    // 0x80222D24: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x80222D28: b           L_80222D34
    // 0x80222D2C: sb          $t9, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r25;
        goto L_80222D34;
    // 0x80222D2C: sb          $t9, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r25;
L_80222D30:
    // 0x80222D30: sb          $zero, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = 0;
L_80222D34:
    // 0x80222D34: lhu         $t0, 0x5E($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X5E);
    // 0x80222D38: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80222D3C: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x80222D40: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80222D44: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x80222D48: lw          $t3, -0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, -0X4);
    // 0x80222D4C: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80222D50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80222D54: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80222D58: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80222D5C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80222D60: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x80222D64: sw          $t7, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r15;
    // 0x80222D68: lhu         $t8, 0x5E($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X5E);
    // 0x80222D6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80222D70: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80222D74: lw          $t1, -0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X4);
    // 0x80222D78: addiu       $t0, $zero, 0x152
    ctx->r8 = ADD32(0, 0X152);
    // 0x80222D7C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80222D80: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80222D84: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x80222D88: sh          $t3, 0x34($a2)
    MEM_H(0X34, ctx->r6) = ctx->r11;
    // 0x80222D8C: lhu         $t4, 0x5E($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X5E);
    // 0x80222D90: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
    // 0x80222D94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80222D98: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80222D9C: lw          $t7, -0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4);
    // 0x80222DA0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80222DA4: lhu         $t9, 0x2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2);
    // 0x80222DA8: sh          $t0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r8;
    // 0x80222DAC: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x80222DB0: beq         $v1, $t1, L_80222DC0
    if (ctx->r3 == ctx->r9) {
        // 0x80222DB4: sh          $t9, 0x3C($a2)
        MEM_H(0X3C, ctx->r6) = ctx->r25;
            goto L_80222DC0;
    }
    // 0x80222DB4: sh          $t9, 0x3C($a2)
    MEM_H(0X3C, ctx->r6) = ctx->r25;
    // 0x80222DB8: bne         $v1, $t2, L_80222DC4
    if (ctx->r3 != ctx->r10) {
        // 0x80222DBC: nop
    
            goto L_80222DC4;
    }
    // 0x80222DBC: nop

L_80222DC0:
    // 0x80222DC0: sh          $zero, 0x34($a2)
    MEM_H(0X34, ctx->r6) = 0;
L_80222DC4:
    // 0x80222DC4: jal         0x80014218
    // 0x80222DC8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x80222DC8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80222DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222DD4: jr          $ra
    // 0x80222DD8: nop

    TRACE_RETURN()
    return;
    // 0x80222DD8: nop

;}
RECOMP_FUNC void func_8020FBC8_5CB098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FBC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FBCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FBD0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FBD4: jal         0x80013AC4
    // 0x8020FBD8: addiu       $a0, $a0, -0x2918
    ctx->r4 = ADD32(ctx->r4, -0X2918);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FBD8: addiu       $a0, $a0, -0x2918
    ctx->r4 = ADD32(ctx->r4, -0X2918);
    after_0:
    // 0x8020FBDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FBE4: jr          $ra
    // 0x8020FBE8: nop

    TRACE_RETURN()
    return;
    // 0x8020FBE8: nop

;}
RECOMP_FUNC void func_8020F8F8_5CADC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F8F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F8FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F900: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F904: jal         0x80013AC4
    // 0x8020F908: addiu       $a0, $a0, -0x2B48
    ctx->r4 = ADD32(ctx->r4, -0X2B48);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F908: addiu       $a0, $a0, -0x2B48
    ctx->r4 = ADD32(ctx->r4, -0X2B48);
    after_0:
    // 0x8020F90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F914: jr          $ra
    // 0x8020F918: nop

    TRACE_RETURN()
    return;
    // 0x8020F918: nop

;}
RECOMP_FUNC void func_80216228_5D16F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021622C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216230: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80216234: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80216238: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021623C: bne         $t6, $zero, L_80216270
    if (ctx->r14 != 0) {
        // 0x80216240: addiu       $v1, $v1, -0x3340
        ctx->r3 = ADD32(ctx->r3, -0X3340);
            goto L_80216270;
    }
    // 0x80216240: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80216244: lbu         $v0, 0x10($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X10);
    // 0x80216248: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x8021624C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80216250: slti        $at, $v0, 0xA1
    ctx->r1 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x80216254: beq         $at, $zero, L_80216264
    if (ctx->r1 == 0) {
        // 0x80216258: addiu       $t7, $v0, 0x20
        ctx->r15 = ADD32(ctx->r2, 0X20);
            goto L_80216264;
    }
    // 0x80216258: addiu       $t7, $v0, 0x20
    ctx->r15 = ADD32(ctx->r2, 0X20);
    // 0x8021625C: b           L_80216290
    // 0x80216260: sb          $t7, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r15;
        goto L_80216290;
    // 0x80216260: sb          $t7, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r15;
L_80216264:
    // 0x80216264: sb          $t8, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r24;
    // 0x80216268: b           L_80216290
    // 0x8021626C: sw          $t9, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r25;
        goto L_80216290;
    // 0x8021626C: sw          $t9, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = ctx->r25;
L_80216270:
    // 0x80216270: lbu         $v0, 0x10($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X10);
    // 0x80216274: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80216278: bne         $at, $zero, L_80216288
    if (ctx->r1 != 0) {
        // 0x8021627C: addiu       $t0, $v0, -0x20
        ctx->r8 = ADD32(ctx->r2, -0X20);
            goto L_80216288;
    }
    // 0x8021627C: addiu       $t0, $v0, -0x20
    ctx->r8 = ADD32(ctx->r2, -0X20);
    // 0x80216280: b           L_80216290
    // 0x80216284: sb          $t0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r8;
        goto L_80216290;
    // 0x80216284: sb          $t0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r8;
L_80216288:
    // 0x80216288: sb          $zero, 0x10($a1)
    MEM_B(0X10, ctx->r5) = 0;
    // 0x8021628C: sw          $zero, 0xD8($a2)
    MEM_W(0XD8, ctx->r6) = 0;
L_80216290:
    // 0x80216290: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x80216294: lw          $t1, 0x3009($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3009);
    // 0x80216298: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x8021629C: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x802162A0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802162A4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802162A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802162AC: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x802162B0: bgez        $t1, L_802162CC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802162B4: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_802162CC;
    }
    // 0x802162B4: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x802162B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802162BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802162C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802162C4: nop

    // 0x802162C8: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_802162CC:
    // 0x802162CC: div.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x802162D0: addiu       $v0, $a3, 0x7FFF
    ctx->r2 = ADD32(ctx->r7, 0X7FFF);
    // 0x802162D4: lhu         $v0, 0x788F($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X788F);
    // 0x802162D8: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x802162DC: beq         $v0, $zero, L_80216304
    if (ctx->r2 == 0) {
        // 0x802162E0: cvt.s.d     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
            goto L_80216304;
    }
    // 0x802162E0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x802162E4: beq         $v0, $at, L_8021632C
    if (ctx->r2 == ctx->r1) {
        // 0x802162E8: addiu       $at, $zero, 0x200
        ctx->r1 = ADD32(0, 0X200);
            goto L_8021632C;
    }
    // 0x802162E8: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x802162EC: beq         $v0, $at, L_80216350
    if (ctx->r2 == ctx->r1) {
        // 0x802162F0: addiu       $at, $zero, 0x300
        ctx->r1 = ADD32(0, 0X300);
            goto L_80216350;
    }
    // 0x802162F0: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x802162F4: beq         $v0, $at, L_80216374
    if (ctx->r2 == ctx->r1) {
        // 0x802162F8: nop
    
            goto L_80216374;
    }
    // 0x802162F8: nop

    // 0x802162FC: b           L_80216374
    // 0x80216300: nop

        goto L_80216374;
    // 0x80216300: nop

L_80216304:
    // 0x80216304: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80216308: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x8021630C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80216310: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80216314: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80216318: nop

    // 0x8021631C: mul.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80216320: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80216324: b           L_80216394
    // 0x80216328: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80216394;
    // 0x80216328: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_8021632C:
    // 0x8021632C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80216330: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x80216334: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80216338: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021633C: mul.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80216340: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80216344: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80216348: b           L_80216398
    // 0x8021634C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
        goto L_80216398;
    // 0x8021634C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_80216350:
    // 0x80216350: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80216354: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x80216358: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021635C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80216360: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80216364: nop

    // 0x80216368: mul.s       $f2, $f16, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8021636C: b           L_80216394
    // 0x80216370: nop

        goto L_80216394;
    // 0x80216370: nop

L_80216374:
    // 0x80216374: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80216378: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x8021637C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80216380: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80216384: mul.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80216388: nop

    // 0x8021638C: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80216390: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80216394:
    // 0x80216394: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_80216398:
    // 0x80216398: addiu       $t2, $v1, 0x7FFF
    ctx->r10 = ADD32(ctx->r3, 0X7FFF);
    // 0x8021639C: lw          $t2, 0x3001($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3001);
    // 0x802163A0: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x802163A4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802163A8: addiu       $t7, $v1, 0x7FFF
    ctx->r15 = ADD32(ctx->r3, 0X7FFF);
    // 0x802163AC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x802163B0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x802163B4: addiu       $t6, $t5, 0xD
    ctx->r14 = ADD32(ctx->r13, 0XD);
    // 0x802163B8: sh          $t6, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r14;
    // 0x802163BC: lw          $t7, 0x3005($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3005);
    // 0x802163C0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x802163C4: lh          $v0, 0x1C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X1C);
    // 0x802163C8: addiu       $t2, $zero, 0x90
    ctx->r10 = ADD32(0, 0X90);
    // 0x802163CC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x802163D0: addiu       $t1, $t0, 0xD
    ctx->r9 = ADD32(ctx->r8, 0XD);
    // 0x802163D4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x802163D8: beq         $at, $zero, L_802163E8
    if (ctx->r1 == 0) {
        // 0x802163DC: sh          $t1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r9;
            goto L_802163E8;
    }
    // 0x802163DC: sh          $t1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r9;
    // 0x802163E0: sh          $t3, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r11;
    // 0x802163E4: lh          $v0, 0x1C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X1C);
L_802163E8:
    // 0x802163E8: slti        $at, $v0, 0x91
    ctx->r1 = SIGNED(ctx->r2) < 0X91 ? 1 : 0;
    // 0x802163EC: bne         $at, $zero, L_802163F8
    if (ctx->r1 != 0) {
        // 0x802163F0: addiu       $t4, $zero, 0x8
        ctx->r12 = ADD32(0, 0X8);
            goto L_802163F8;
    }
    // 0x802163F0: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x802163F4: sh          $t2, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r10;
L_802163F8:
    // 0x802163F8: lh          $a0, 0x20($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X20);
    // 0x802163FC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80216400: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x80216404: beql        $at, $zero, L_80216418
    if (ctx->r1 == 0) {
        // 0x80216408: lw          $t5, 0xE4($a2)
        ctx->r13 = MEM_W(ctx->r6, 0XE4);
            goto L_80216418;
    }
    goto skip_0;
    // 0x80216408: lw          $t5, 0xE4($a2)
    ctx->r13 = MEM_W(ctx->r6, 0XE4);
    skip_0:
    // 0x8021640C: sh          $t4, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r12;
    // 0x80216410: lh          $a0, 0x20($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X20);
    // 0x80216414: lw          $t5, 0xE4($a2)
    ctx->r13 = MEM_W(ctx->r6, 0XE4);
L_80216418:
    // 0x80216418: beq         $t5, $zero, L_80216428
    if (ctx->r13 == 0) {
        // 0x8021641C: nop
    
            goto L_80216428;
    }
    // 0x8021641C: nop

    // 0x80216420: b           L_80216428
    // 0x80216424: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
        goto L_80216428;
    // 0x80216424: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
L_80216428:
    // 0x80216428: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021642C: beq         $at, $zero, L_80216438
    if (ctx->r1 == 0) {
        // 0x80216430: nop
    
            goto L_80216438;
    }
    // 0x80216430: nop

    // 0x80216434: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_80216438:
    // 0x80216438: jal         0x801E7EE0
    // 0x8021643C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7EE0_5A3DF0(rdram, ctx);
        goto after_0;
    // 0x8021643C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80216440: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x80216444: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x80216448: bne         $v0, $zero, L_80216474
    if (ctx->r2 != 0) {
        // 0x8021644C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80216474;
    }
    // 0x8021644C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80216450: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80216454: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x80216458: addiu       $t6, $a3, 0x7FFF
    ctx->r14 = ADD32(ctx->r7, 0X7FFF);
    // 0x8021645C: lhu         $t6, 0x788F($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X788F);
    // 0x80216460: lhu         $t7, 0x94($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X94);
    // 0x80216464: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x80216468: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x8021646C: b           L_80216498
    // 0x80216470: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80216498;
    // 0x80216470: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80216474:
    // 0x80216474: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80216478: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x8021647C: addiu       $t0, $a3, 0x7FFF
    ctx->r8 = ADD32(ctx->r7, 0X7FFF);
    // 0x80216480: lhu         $t0, 0x788F($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X788F);
    // 0x80216484: lhu         $t3, 0x94($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X94);
    // 0x80216488: subu        $v0, $t0, $t3
    ctx->r2 = SUB32(ctx->r8, ctx->r11);
    // 0x8021648C: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x80216490: andi        $t2, $v0, 0x3FF
    ctx->r10 = ctx->r2 & 0X3FF;
    // 0x80216494: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80216498:
    // 0x80216498: sltiu       $at, $v0, 0x20
    ctx->r1 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x8021649C: beq         $at, $zero, L_802164B0
    if (ctx->r1 == 0) {
        // 0x802164A0: lui         $t4, 0x8021
        ctx->r12 = S32(0X8021 << 16);
            goto L_802164B0;
    }
    // 0x802164A0: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x802164A4: addiu       $t4, $t4, -0x6420
    ctx->r12 = ADD32(ctx->r12, -0X6420);
    // 0x802164A8: b           L_80216624
    // 0x802164AC: sw          $t4, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r12;
        goto L_80216624;
    // 0x802164AC: sw          $t4, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r12;
L_802164B0:
    // 0x802164B0: sltiu       $at, $v0, 0x60
    ctx->r1 = ctx->r2 < 0X60 ? 1 : 0;
    // 0x802164B4: beq         $at, $zero, L_802164C8
    if (ctx->r1 == 0) {
        // 0x802164B8: lui         $t5, 0x8021
        ctx->r13 = S32(0X8021 << 16);
            goto L_802164C8;
    }
    // 0x802164B8: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x802164BC: addiu       $t5, $t5, -0x6414
    ctx->r13 = ADD32(ctx->r13, -0X6414);
    // 0x802164C0: b           L_80216624
    // 0x802164C4: sw          $t5, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r13;
        goto L_80216624;
    // 0x802164C4: sw          $t5, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r13;
L_802164C8:
    // 0x802164C8: sltiu       $at, $v0, 0xA0
    ctx->r1 = ctx->r2 < 0XA0 ? 1 : 0;
    // 0x802164CC: beq         $at, $zero, L_802164E0
    if (ctx->r1 == 0) {
        // 0x802164D0: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_802164E0;
    }
    // 0x802164D0: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802164D4: addiu       $t8, $t8, -0x6408
    ctx->r24 = ADD32(ctx->r24, -0X6408);
    // 0x802164D8: b           L_80216624
    // 0x802164DC: sw          $t8, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r24;
        goto L_80216624;
    // 0x802164DC: sw          $t8, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r24;
L_802164E0:
    // 0x802164E0: sltiu       $at, $v0, 0xE0
    ctx->r1 = ctx->r2 < 0XE0 ? 1 : 0;
    // 0x802164E4: beq         $at, $zero, L_802164F8
    if (ctx->r1 == 0) {
        // 0x802164E8: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_802164F8;
    }
    // 0x802164E8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802164EC: addiu       $t6, $t6, -0x63FC
    ctx->r14 = ADD32(ctx->r14, -0X63FC);
    // 0x802164F0: b           L_80216624
    // 0x802164F4: sw          $t6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r14;
        goto L_80216624;
    // 0x802164F4: sw          $t6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r14;
L_802164F8:
    // 0x802164F8: sltiu       $at, $v0, 0x120
    ctx->r1 = ctx->r2 < 0X120 ? 1 : 0;
    // 0x802164FC: beq         $at, $zero, L_80216510
    if (ctx->r1 == 0) {
        // 0x80216500: lui         $t7, 0x8021
        ctx->r15 = S32(0X8021 << 16);
            goto L_80216510;
    }
    // 0x80216500: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80216504: addiu       $t7, $t7, -0x63F0
    ctx->r15 = ADD32(ctx->r15, -0X63F0);
    // 0x80216508: b           L_80216624
    // 0x8021650C: sw          $t7, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r15;
        goto L_80216624;
    // 0x8021650C: sw          $t7, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r15;
L_80216510:
    // 0x80216510: sltiu       $at, $v0, 0x160
    ctx->r1 = ctx->r2 < 0X160 ? 1 : 0;
    // 0x80216514: beq         $at, $zero, L_80216528
    if (ctx->r1 == 0) {
        // 0x80216518: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_80216528;
    }
    // 0x80216518: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021651C: addiu       $t9, $t9, -0x63E4
    ctx->r25 = ADD32(ctx->r25, -0X63E4);
    // 0x80216520: b           L_80216624
    // 0x80216524: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
        goto L_80216624;
    // 0x80216524: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
L_80216528:
    // 0x80216528: sltiu       $at, $v0, 0x1A0
    ctx->r1 = ctx->r2 < 0X1A0 ? 1 : 0;
    // 0x8021652C: beq         $at, $zero, L_80216540
    if (ctx->r1 == 0) {
        // 0x80216530: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_80216540;
    }
    // 0x80216530: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80216534: addiu       $t1, $t1, -0x63D8
    ctx->r9 = ADD32(ctx->r9, -0X63D8);
    // 0x80216538: b           L_80216624
    // 0x8021653C: sw          $t1, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r9;
        goto L_80216624;
    // 0x8021653C: sw          $t1, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r9;
L_80216540:
    // 0x80216540: sltiu       $at, $v0, 0x1E0
    ctx->r1 = ctx->r2 < 0X1E0 ? 1 : 0;
    // 0x80216544: beq         $at, $zero, L_80216558
    if (ctx->r1 == 0) {
        // 0x80216548: lui         $t0, 0x8021
        ctx->r8 = S32(0X8021 << 16);
            goto L_80216558;
    }
    // 0x80216548: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8021654C: addiu       $t0, $t0, -0x63CC
    ctx->r8 = ADD32(ctx->r8, -0X63CC);
    // 0x80216550: b           L_80216624
    // 0x80216554: sw          $t0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r8;
        goto L_80216624;
    // 0x80216554: sw          $t0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r8;
L_80216558:
    // 0x80216558: sltiu       $at, $v0, 0x220
    ctx->r1 = ctx->r2 < 0X220 ? 1 : 0;
    // 0x8021655C: beq         $at, $zero, L_80216570
    if (ctx->r1 == 0) {
        // 0x80216560: lui         $t3, 0x8021
        ctx->r11 = S32(0X8021 << 16);
            goto L_80216570;
    }
    // 0x80216560: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80216564: addiu       $t3, $t3, -0x63C0
    ctx->r11 = ADD32(ctx->r11, -0X63C0);
    // 0x80216568: b           L_80216624
    // 0x8021656C: sw          $t3, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r11;
        goto L_80216624;
    // 0x8021656C: sw          $t3, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r11;
L_80216570:
    // 0x80216570: sltiu       $at, $v0, 0x260
    ctx->r1 = ctx->r2 < 0X260 ? 1 : 0;
    // 0x80216574: beq         $at, $zero, L_80216588
    if (ctx->r1 == 0) {
        // 0x80216578: lui         $t2, 0x8021
        ctx->r10 = S32(0X8021 << 16);
            goto L_80216588;
    }
    // 0x80216578: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8021657C: addiu       $t2, $t2, -0x63B4
    ctx->r10 = ADD32(ctx->r10, -0X63B4);
    // 0x80216580: b           L_80216624
    // 0x80216584: sw          $t2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r10;
        goto L_80216624;
    // 0x80216584: sw          $t2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r10;
L_80216588:
    // 0x80216588: sltiu       $at, $v0, 0x2A0
    ctx->r1 = ctx->r2 < 0X2A0 ? 1 : 0;
    // 0x8021658C: beq         $at, $zero, L_802165A0
    if (ctx->r1 == 0) {
        // 0x80216590: lui         $t4, 0x8021
        ctx->r12 = S32(0X8021 << 16);
            goto L_802165A0;
    }
    // 0x80216590: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80216594: addiu       $t4, $t4, -0x63A8
    ctx->r12 = ADD32(ctx->r12, -0X63A8);
    // 0x80216598: b           L_80216624
    // 0x8021659C: sw          $t4, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r12;
        goto L_80216624;
    // 0x8021659C: sw          $t4, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r12;
L_802165A0:
    // 0x802165A0: sltiu       $at, $v0, 0x2E0
    ctx->r1 = ctx->r2 < 0X2E0 ? 1 : 0;
    // 0x802165A4: beq         $at, $zero, L_802165B8
    if (ctx->r1 == 0) {
        // 0x802165A8: lui         $t5, 0x8021
        ctx->r13 = S32(0X8021 << 16);
            goto L_802165B8;
    }
    // 0x802165A8: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x802165AC: addiu       $t5, $t5, -0x639C
    ctx->r13 = ADD32(ctx->r13, -0X639C);
    // 0x802165B0: b           L_80216624
    // 0x802165B4: sw          $t5, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r13;
        goto L_80216624;
    // 0x802165B4: sw          $t5, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r13;
L_802165B8:
    // 0x802165B8: sltiu       $at, $v0, 0x320
    ctx->r1 = ctx->r2 < 0X320 ? 1 : 0;
    // 0x802165BC: beq         $at, $zero, L_802165D0
    if (ctx->r1 == 0) {
        // 0x802165C0: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_802165D0;
    }
    // 0x802165C0: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802165C4: addiu       $t8, $t8, -0x6390
    ctx->r24 = ADD32(ctx->r24, -0X6390);
    // 0x802165C8: b           L_80216624
    // 0x802165CC: sw          $t8, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r24;
        goto L_80216624;
    // 0x802165CC: sw          $t8, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r24;
L_802165D0:
    // 0x802165D0: sltiu       $at, $v0, 0x360
    ctx->r1 = ctx->r2 < 0X360 ? 1 : 0;
    // 0x802165D4: beq         $at, $zero, L_802165E8
    if (ctx->r1 == 0) {
        // 0x802165D8: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_802165E8;
    }
    // 0x802165D8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802165DC: addiu       $t6, $t6, -0x6384
    ctx->r14 = ADD32(ctx->r14, -0X6384);
    // 0x802165E0: b           L_80216624
    // 0x802165E4: sw          $t6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r14;
        goto L_80216624;
    // 0x802165E4: sw          $t6, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r14;
L_802165E8:
    // 0x802165E8: sltiu       $at, $v0, 0x3A0
    ctx->r1 = ctx->r2 < 0X3A0 ? 1 : 0;
    // 0x802165EC: beq         $at, $zero, L_80216600
    if (ctx->r1 == 0) {
        // 0x802165F0: lui         $t7, 0x8021
        ctx->r15 = S32(0X8021 << 16);
            goto L_80216600;
    }
    // 0x802165F0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802165F4: addiu       $t7, $t7, -0x6378
    ctx->r15 = ADD32(ctx->r15, -0X6378);
    // 0x802165F8: b           L_80216624
    // 0x802165FC: sw          $t7, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r15;
        goto L_80216624;
    // 0x802165FC: sw          $t7, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r15;
L_80216600:
    // 0x80216600: sltiu       $at, $v0, 0x3E0
    ctx->r1 = ctx->r2 < 0X3E0 ? 1 : 0;
    // 0x80216604: beq         $at, $zero, L_8021661C
    if (ctx->r1 == 0) {
        // 0x80216608: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_8021661C;
    }
    // 0x80216608: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x8021660C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80216610: addiu       $t9, $t9, -0x636C
    ctx->r25 = ADD32(ctx->r25, -0X636C);
    // 0x80216614: b           L_80216624
    // 0x80216618: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
        goto L_80216624;
    // 0x80216618: sw          $t9, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r25;
L_8021661C:
    // 0x8021661C: addiu       $t1, $t1, -0x6420
    ctx->r9 = ADD32(ctx->r9, -0X6420);
    // 0x80216620: sw          $t1, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r9;
L_80216624:
    // 0x80216624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021662C: jr          $ra
    // 0x80216630: nop

    TRACE_RETURN()
    return;
    // 0x80216630: nop

;}
RECOMP_FUNC void func_80221028_5DC4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022102C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221030: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80221034: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x80221038: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8022103C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80221040: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x80221044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80221048: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x8022104C: bne         $t6, $at, L_8022109C
    if (ctx->r14 != ctx->r1) {
        // 0x80221050: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8022109C;
    }
    // 0x80221050: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80221054: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x80221058: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022105C: jal         0x80221C0C
    // 0x80221060: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_0;
    // 0x80221060: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80221064: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80221068: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022106C: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x80221070: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80221074: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80221078: bne         $v0, $t8, L_80221088
    if (ctx->r2 != ctx->r24) {
        // 0x8022107C: nop
    
            goto L_80221088;
    }
    // 0x8022107C: nop

    // 0x80221080: b           L_80221088
    // 0x80221084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80221088;
    // 0x80221084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80221088:
    // 0x80221088: jal         0x8003D388
    // 0x8022108C: lhu         $a0, 0xA4($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0XA4);
    func_8003D388_3DF88(rdram, ctx);
        goto after_1;
    // 0x8022108C: lhu         $a0, 0xA4($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0XA4);
    after_1:
    // 0x80221090: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221094: jal         0x8003521C
    // 0x80221098: addiu       $a0, $a0, 0x10AC
    ctx->r4 = ADD32(ctx->r4, 0X10AC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80221098: addiu       $a0, $a0, 0x10AC
    ctx->r4 = ADD32(ctx->r4, 0X10AC);
    after_2:
L_8022109C:
    // 0x8022109C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802210A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802210A4: jr          $ra
    // 0x802210A8: nop

    TRACE_RETURN()
    return;
    // 0x802210A8: nop

;}
RECOMP_FUNC void func_80224560_5DFA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224560: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80224564: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80224568: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022456C: bne         $a3, $at, L_80224584
    if (ctx->r7 != ctx->r1) {
        // 0x80224570: lhu         $v0, 0x5E($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X5E);
            goto L_80224584;
    }
    // 0x80224570: lhu         $v0, 0x5E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5E);
    // 0x80224574: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80224578: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x8022457C: b           L_80224594
    // 0x80224580: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
        goto L_80224594;
    // 0x80224580: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_80224584:
    // 0x80224584: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80224588: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8022458C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80224590: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_80224594:
    // 0x80224594: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80224598: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8022459C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802245A0: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x802245A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802245A8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x802245AC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802245B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802245B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802245B8: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x802245BC: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x802245C0: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x802245C4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x802245C8: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802245CC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802245D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802245D4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802245D8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802245DC: nop

    // 0x802245E0: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x802245E4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802245E8: nop

    // 0x802245EC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802245F0: beql        $t3, $zero, L_80224644
    if (ctx->r11 == 0) {
        // 0x802245F4: mfc1        $t3, $f16
        ctx->r11 = (int32_t)ctx->f16.u32l;
            goto L_80224644;
    }
    goto skip_0;
    // 0x802245F4: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x802245F8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802245FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80224600: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80224604: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x80224608: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8022460C: nop

    // 0x80224610: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80224614: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80224618: nop

    // 0x8022461C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80224620: bne         $t3, $zero, L_80224638
    if (ctx->r11 != 0) {
        // 0x80224624: nop
    
            goto L_80224638;
    }
    // 0x80224624: nop

    // 0x80224628: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8022462C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80224630: b           L_80224650
    // 0x80224634: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80224650;
    // 0x80224634: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80224638:
    // 0x80224638: b           L_80224650
    // 0x8022463C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80224650;
    // 0x8022463C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80224640: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
L_80224644:
    // 0x80224644: nop

    // 0x80224648: bltz        $t3, L_80224638
    if (SIGNED(ctx->r11) < 0) {
        // 0x8022464C: nop
    
            goto L_80224638;
    }
    // 0x8022464C: nop

L_80224650:
    // 0x80224650: sb          $t3, 0xAB($a0)
    MEM_B(0XAB, ctx->r4) = ctx->r11;
    // 0x80224654: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80224658: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x8022465C: lw          $t5, 0x6984($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6984);
    // 0x80224660: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80224664: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80224668: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8022466C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80224670: lbu         $t5, 0xAB($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XAB);
    // 0x80224674: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80224678: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x8022467C: andi        $t3, $zero, 0xFF
    ctx->r11 = 0 & 0XFF;
    // 0x80224680: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80224684: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80224688: addu        $a3, $t2, $t4
    ctx->r7 = ADD32(ctx->r10, ctx->r12);
    // 0x8022468C: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x80224690: lbu         $t0, 0x4($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X4);
    // 0x80224694: bgez        $t5, L_802246AC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80224698: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_802246AC;
    }
    // 0x80224698: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8022469C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802246A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802246A4: nop

    // 0x802246A8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_802246AC:
    // 0x802246AC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802246B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802246B4: bgez        $t0, L_802246C8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802246B8: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802246C8;
    }
    // 0x802246B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802246BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802246C0: nop

    // 0x802246C4: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802246C8:
    // 0x802246C8: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802246CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802246D0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802246D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802246D8: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x802246DC: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x802246E0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802246E4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802246E8: nop

    // 0x802246EC: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x802246F0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802246F4: nop

    // 0x802246F8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802246FC: beql        $t6, $zero, L_80224750
    if (ctx->r14 == 0) {
        // 0x80224700: mfc1        $t6, $f16
        ctx->r14 = (int32_t)ctx->f16.u32l;
            goto L_80224750;
    }
    goto skip_1;
    // 0x80224700: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x80224704: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80224708: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8022470C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224710: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x80224714: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80224718: nop

    // 0x8022471C: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80224720: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80224724: nop

    // 0x80224728: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022472C: bne         $t6, $zero, L_80224744
    if (ctx->r14 != 0) {
        // 0x80224730: nop
    
            goto L_80224744;
    }
    // 0x80224730: nop

    // 0x80224734: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80224738: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022473C: b           L_8022475C
    // 0x80224740: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022475C;
    // 0x80224740: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80224744:
    // 0x80224744: b           L_8022475C
    // 0x80224748: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022475C;
    // 0x80224748: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022474C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
L_80224750:
    // 0x80224750: nop

    // 0x80224754: bltz        $t6, L_80224744
    if (SIGNED(ctx->r14) < 0) {
        // 0x80224758: nop
    
            goto L_80224744;
    }
    // 0x80224758: nop

L_8022475C:
    // 0x8022475C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80224760: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x80224764: bne         $t8, $zero, L_80224770
    if (ctx->r24 != 0) {
        // 0x80224768: sb          $t6, 0x0($t1)
        MEM_B(0X0, ctx->r9) = ctx->r14;
            goto L_80224770;
    }
    // 0x80224768: sb          $t6, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r14;
    // 0x8022476C: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
L_80224770:
    // 0x80224770: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80224774: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80224778: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8022477C: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80224780: sb          $t2, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r10;
    // 0x80224784: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80224788: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8022478C: andi        $t5, $v0, 0x18
    ctx->r13 = ctx->r2 & 0X18;
    // 0x80224790: bne         $t5, $at, L_802247B8
    if (ctx->r13 != ctx->r1) {
        // 0x80224794: andi        $t4, $v0, 0x8
        ctx->r12 = ctx->r2 & 0X8;
            goto L_802247B8;
    }
    // 0x80224794: andi        $t4, $v0, 0x8
    ctx->r12 = ctx->r2 & 0X8;
    // 0x80224798: lw          $t7, 0x48($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X48);
    // 0x8022479C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x802247A0: sll         $t3, $t9, 3
    ctx->r11 = S32(ctx->r25 << 3);
    // 0x802247A4: addu        $t6, $t7, $a2
    ctx->r14 = ADD32(ctx->r15, ctx->r6);
    // 0x802247A8: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x802247AC: addu        $t2, $v1, $t3
    ctx->r10 = ADD32(ctx->r3, ctx->r11);
    // 0x802247B0: jr          $ra
    // 0x802247B4: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x802247B4: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
L_802247B8:
    // 0x802247B8: beq         $t4, $zero, L_802247E4
    if (ctx->r12 == 0) {
        // 0x802247BC: andi        $t2, $v0, 0x10
        ctx->r10 = ctx->r2 & 0X10;
            goto L_802247E4;
    }
    // 0x802247BC: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    // 0x802247C0: lw          $t5, 0x48($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X48);
    // 0x802247C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x802247C8: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x802247CC: addu        $t7, $t5, $a2
    ctx->r15 = ADD32(ctx->r13, ctx->r6);
    // 0x802247D0: sll         $t3, $t9, 3
    ctx->r11 = S32(ctx->r25 << 3);
    // 0x802247D4: addu        $t8, $v1, $t3
    ctx->r24 = ADD32(ctx->r3, ctx->r11);
    // 0x802247D8: addu        $t6, $t7, $at
    ctx->r14 = ADD32(ctx->r15, ctx->r1);
    // 0x802247DC: jr          $ra
    // 0x802247E0: sw          $t6, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802247E0: sw          $t6, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r14;
L_802247E4:
    // 0x802247E4: beq         $t2, $zero, L_80224810
    if (ctx->r10 == 0) {
        // 0x802247E8: lw          $t5, 0x1C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X1C);
            goto L_80224810;
    }
    // 0x802247E8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x802247EC: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x802247F0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x802247F4: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x802247F8: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x802247FC: sll         $t3, $t9, 3
    ctx->r11 = S32(ctx->r25 << 3);
    // 0x80224800: addu        $t6, $v1, $t3
    ctx->r14 = ADD32(ctx->r3, ctx->r11);
    // 0x80224804: addu        $t7, $t5, $at
    ctx->r15 = ADD32(ctx->r13, ctx->r1);
    // 0x80224808: jr          $ra
    // 0x8022480C: sw          $t7, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x8022480C: sw          $t7, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r15;
L_80224810:
    // 0x80224810: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x80224814: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80224818: sll         $t9, $t5, 3
    ctx->r25 = S32(ctx->r13 << 3);
    // 0x8022481C: addu        $t2, $t8, $a2
    ctx->r10 = ADD32(ctx->r24, ctx->r6);
    // 0x80224820: addu        $t4, $t2, $at
    ctx->r12 = ADD32(ctx->r10, ctx->r1);
    // 0x80224824: addu        $t3, $v1, $t9
    ctx->r11 = ADD32(ctx->r3, ctx->r25);
    // 0x80224828: sw          $t4, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r12;
    // 0x8022482C: jr          $ra
    // 0x80224830: nop

    TRACE_RETURN()
    return;
    // 0x80224830: nop

;}
RECOMP_FUNC void func_8020FEE0_5CB3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FEE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FEE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FEE8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FEEC: jal         0x80013AC4
    // 0x8020FEF0: addiu       $a0, $a0, -0x25B4
    ctx->r4 = ADD32(ctx->r4, -0X25B4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FEF0: addiu       $a0, $a0, -0x25B4
    ctx->r4 = ADD32(ctx->r4, -0X25B4);
    after_0:
    // 0x8020FEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FEF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FEFC: jr          $ra
    // 0x8020FF00: nop

    TRACE_RETURN()
    return;
    // 0x8020FF00: nop

;}
RECOMP_FUNC void func_8020EAC4_5C9F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EAC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EACC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EAD0: jal         0x80013AC4
    // 0x8020EAD4: addiu       $a0, $a0, -0x3608
    ctx->r4 = ADD32(ctx->r4, -0X3608);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EAD4: addiu       $a0, $a0, -0x3608
    ctx->r4 = ADD32(ctx->r4, -0X3608);
    after_0:
    // 0x8020EAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EAE0: jr          $ra
    // 0x8020EAE4: nop

    TRACE_RETURN()
    return;
    // 0x8020EAE4: nop

;}
RECOMP_FUNC void func_80220360_5DB830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220360: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80220364: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80220368: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8022036C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80220370: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80220374: lhu         $v1, 0x3092($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3092);
    // 0x80220378: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x8022037C: beql        $t6, $zero, L_802203AC
    if (ctx->r14 == 0) {
        // 0x80220380: andi        $t9, $v1, 0x2
        ctx->r25 = ctx->r3 & 0X2;
            goto L_802203AC;
    }
    goto skip_0;
    // 0x80220380: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    skip_0:
    // 0x80220384: lhu         $t7, 0x1A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X1A);
    // 0x80220388: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8022038C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80220390: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80220394: sh          $t8, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r24;
    // 0x80220398: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8022039C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802203A0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x802203A4: lhu         $v1, 0x3092($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3092);
    // 0x802203A8: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
L_802203AC:
    // 0x802203AC: beq         $t9, $zero, L_802203C0
    if (ctx->r25 == 0) {
        // 0x802203B0: nop
    
            goto L_802203C0;
    }
    // 0x802203B0: nop

    // 0x802203B4: lhu         $t0, 0x1A($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X1A);
    // 0x802203B8: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x802203BC: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
L_802203C0:
    // 0x802203C0: jr          $ra
    // 0x802203C4: nop

    TRACE_RETURN()
    return;
    // 0x802203C4: nop

;}
RECOMP_FUNC void func_8020E0A4_5C9574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E0A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E0AC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E0B0: jal         0x80013AC4
    // 0x8020E0B4: addiu       $a0, $a0, -0x3BAC
    ctx->r4 = ADD32(ctx->r4, -0X3BAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E0B4: addiu       $a0, $a0, -0x3BAC
    ctx->r4 = ADD32(ctx->r4, -0X3BAC);
    after_0:
    // 0x8020E0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E0C0: jr          $ra
    // 0x8020E0C4: nop

    TRACE_RETURN()
    return;
    // 0x8020E0C4: nop

;}
RECOMP_FUNC void func_80215050_5D0520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215050: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215054: jr          $ra
    // 0x80215058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215058: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020F49C_5CA96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F49C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F4A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F4A8: jal         0x80013AC4
    // 0x8020F4AC: addiu       $a0, $a0, -0x2E94
    ctx->r4 = ADD32(ctx->r4, -0X2E94);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F4AC: addiu       $a0, $a0, -0x2E94
    ctx->r4 = ADD32(ctx->r4, -0X2E94);
    after_0:
    // 0x8020F4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F4B8: jr          $ra
    // 0x8020F4BC: nop

    TRACE_RETURN()
    return;
    // 0x8020F4BC: nop

;}
RECOMP_FUNC void func_802212F0_5DC7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802212F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802212F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802212F8: jal         0x80221B7C
    // 0x802212FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x802212FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80221300: bne         $v0, $zero, L_80221310
    if (ctx->r2 != 0) {
        // 0x80221304: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_80221310;
    }
    // 0x80221304: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80221308: b           L_80221328
    // 0x8022130C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80221328;
    // 0x8022130C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80221310:
    // 0x80221310: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x80221314: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221318: addiu       $a0, $a0, 0x1338
    ctx->r4 = ADD32(ctx->r4, 0X1338);
    // 0x8022131C: jal         0x8003521C
    // 0x80221320: sw          $t6, 0xB4($a1)
    MEM_W(0XB4, ctx->r5) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221320: sw          $t6, 0xB4($a1)
    MEM_W(0XB4, ctx->r5) = ctx->r14;
    after_1:
    // 0x80221324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80221328:
    // 0x80221328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022132C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221330: jr          $ra
    // 0x80221334: nop

    TRACE_RETURN()
    return;
    // 0x80221334: nop

;}
RECOMP_FUNC void func_80212394_5CD864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80212398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021239C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802123A0: lwc1        $f0, 0xD4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802123A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802123A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802123AC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802123B0: nop

    // 0x802123B4: bc1fl       L_802123D8
    if (!c1cs) {
        // 0x802123B8: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802123D8;
    }
    goto skip_0;
    // 0x802123B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_0:
    // 0x802123BC: ldc1        $f8, -0x60E8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X60E8);
    // 0x802123C0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802123C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802123C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802123CC: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    // 0x802123D0: lwc1        $f0, 0xD4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x802123D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802123D8:
    // 0x802123D8: jal         0x80219E08
    // 0x802123DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_0;
    // 0x802123DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802123E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802123E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802123E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802123EC: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x802123F0: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x802123F4: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x802123F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802123FC: jal         0x8021A26C
    // 0x80212400: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_1;
    // 0x80212400: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_1:
    // 0x80212404: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80212408: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x8021240C: bnel        $t8, $zero, L_80212420
    if (ctx->r24 != 0) {
        // 0x80212410: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80212420;
    }
    goto skip_1;
    // 0x80212410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80212414: jal         0x80034ED4
    // 0x80212418: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x80212418: nop

    after_2:
    // 0x8021241C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80212420:
    // 0x80212420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80212424: jr          $ra
    // 0x80212428: nop

    TRACE_RETURN()
    return;
    // 0x80212428: nop

;}
RECOMP_FUNC void func_8020E95C_5C9E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E95C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E964: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E968: jal         0x80013AC4
    // 0x8020E96C: addiu       $a0, $a0, -0x369C
    ctx->r4 = ADD32(ctx->r4, -0X369C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E96C: addiu       $a0, $a0, -0x369C
    ctx->r4 = ADD32(ctx->r4, -0X369C);
    after_0:
    // 0x8020E970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E978: jr          $ra
    // 0x8020E97C: nop

    TRACE_RETURN()
    return;
    // 0x8020E97C: nop

;}
RECOMP_FUNC void func_8021B064_5D6534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B064: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021B068: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B06C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B070: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021B074: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8021B078: nop

    // 0x8021B07C: sh          $t8, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = ctx->r24;
    // 0x8021B080: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B084: sw          $a1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r5;
    // 0x8021B088: sb          $a2, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r6;
    // 0x8021B08C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021B090: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8021B094: jr          $ra
    // 0x8021B098: sh          $t0, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x8021B098: sh          $t0, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_80218990_5D3E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218990: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80218994: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80218998: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8021899C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x802189A0: bgez        $t7, L_80218A4C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802189A4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80218A4C;
    }
    // 0x802189A4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802189A8: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x802189AC: lbu         $t8, 0x99($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X99);
    // 0x802189B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802189B4: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802189B8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x802189BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802189C0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802189C4: bgez        $t8, L_802189D8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802189C8: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802189D8;
    }
    // 0x802189C8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802189CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802189D0: nop

    // 0x802189D4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802189D8:
    // 0x802189D8: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x802189DC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802189E0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802189E4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802189E8: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802189EC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802189F0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802189F4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x802189F8: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x802189FC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80218A00: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80218A04: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80218A08: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80218A0C: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80218A10: nop

    // 0x80218A14: bc1f        L_80218A4C
    if (!c1cs) {
        // 0x80218A18: nop
    
            goto L_80218A4C;
    }
    // 0x80218A18: nop

    // 0x80218A1C: lwc1        $f10, 0x74($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X74);
    // 0x80218A20: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80218A24: lwc1        $f18, 0x78($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X78);
    // 0x80218A28: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80218A2C: lwc1        $f16, 0x7C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X7C);
    // 0x80218A30: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x80218A34: lwc1        $f4, 0x80($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X80);
    // 0x80218A38: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x80218A3C: lwc1        $f8, 0x84($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X84);
    // 0x80218A40: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
    // 0x80218A44: lwc1        $f6, 0x88($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X88);
    // 0x80218A48: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
L_80218A4C:
    // 0x80218A4C: jr          $ra
    // 0x80218A50: nop

    TRACE_RETURN()
    return;
    // 0x80218A50: nop

;}
RECOMP_FUNC void func_8022182C_5DCCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022182C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221838: jal         0x8003F1D8
    // 0x8022183C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x8022183C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80221840: bne         $v0, $zero, L_80221850
    if (ctx->r2 != 0) {
        // 0x80221844: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_80221850;
    }
    // 0x80221844: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80221848: jal         0x8003521C
    // 0x8022184C: lw          $a0, 0xBC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XBC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8022184C: lw          $a0, 0xBC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XBC);
    after_1:
L_80221850:
    // 0x80221850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221858: jr          $ra
    // 0x8022185C: nop

    TRACE_RETURN()
    return;
    // 0x8022185C: nop

;}
RECOMP_FUNC void func_8020E7D0_5C9CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E7D8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E7DC: jal         0x80013AC4
    // 0x8020E7E0: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E7E0: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    after_0:
    // 0x8020E7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E7EC: jr          $ra
    // 0x8020E7F0: nop

    TRACE_RETURN()
    return;
    // 0x8020E7F0: nop

;}
RECOMP_FUNC void func_8020DE88_5C9358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DE88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DE90: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DE94: jal         0x80013AC4
    // 0x8020DE98: addiu       $a0, $a0, -0x3D84
    ctx->r4 = ADD32(ctx->r4, -0X3D84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DE98: addiu       $a0, $a0, -0x3D84
    ctx->r4 = ADD32(ctx->r4, -0X3D84);
    after_0:
    // 0x8020DE9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DEA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DEA4: jr          $ra
    // 0x8020DEA8: nop

    TRACE_RETURN()
    return;
    // 0x8020DEA8: nop

;}
RECOMP_FUNC void func_8021B5C0_5D6A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B5C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021B5C4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021B5C8: lui         $t6, 0x280
    ctx->r14 = S32(0X280 << 16);
    // 0x8021B5CC: ori         $t6, $t6, 0xB21
    ctx->r14 = ctx->r14 | 0XB21;
    // 0x8021B5D0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x8021B5D4: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
    // 0x8021B5D8: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    // 0x8021B5DC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x8021B5E0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021B5E4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021B5E8: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x8021B5EC: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x8021B5F0: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x8021B5F4: jr          $ra
    // 0x8021B5F8: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8021B5F8: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8020E6F8_5C9BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E6F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E700: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E704: jal         0x80013AC4
    // 0x8020E708: addiu       $a0, $a0, -0x3830
    ctx->r4 = ADD32(ctx->r4, -0X3830);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E708: addiu       $a0, $a0, -0x3830
    ctx->r4 = ADD32(ctx->r4, -0X3830);
    after_0:
    // 0x8020E70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E714: jr          $ra
    // 0x8020E718: nop

    TRACE_RETURN()
    return;
    // 0x8020E718: nop

;}
RECOMP_FUNC void func_8021617C_5D164C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021617C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80216180: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80216184: lbu         $t0, 0x8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X8);
    // 0x80216188: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8021618C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80216190: ori         $t2, $t0, 0x4
    ctx->r10 = ctx->r8 | 0X4;
    // 0x80216194: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x80216198: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8021619C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802161A0: sb          $t2, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r10;
    // 0x802161A4: ori         $t4, $t3, 0x40
    ctx->r12 = ctx->r11 | 0X40;
    // 0x802161A8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802161AC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802161B0: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    // 0x802161B4: sb          $t4, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r12;
    // 0x802161B8: bgez        $t6, L_802161D0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802161BC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802161D0;
    }
    // 0x802161BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802161C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802161C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802161C8: nop

    // 0x802161CC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802161D0:
    // 0x802161D0: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x802161D4: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x802161D8: bgez        $a2, L_802161F0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802161DC: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802161F0;
    }
    // 0x802161DC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802161E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802161E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802161E8: nop

    // 0x802161EC: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802161F0:
    // 0x802161F0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x802161F4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802161F8: swc1        $f16, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f16.u32l;
    // 0x802161FC: srl         $t6, $v0, 15
    ctx->r14 = S32(U32(ctx->r2) >> 15);
    // 0x80216200: xori        $t7, $t6, 0x6
    ctx->r15 = ctx->r14 ^ 0X6;
    // 0x80216204: sll         $t8, $t7, 28
    ctx->r24 = S32(ctx->r15 << 28);
    // 0x80216208: srl         $t9, $t8, 13
    ctx->r25 = S32(U32(ctx->r24) >> 13);
    // 0x8021620C: xor         $t0, $t9, $v0
    ctx->r8 = ctx->r25 ^ ctx->r2;
    // 0x80216210: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x80216214: sh          $v1, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r3;
    // 0x80216218: sh          $v1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r3;
    // 0x8021621C: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x80216220: jr          $ra
    // 0x80216224: sb          $zero, 0x10($a0)
    MEM_B(0X10, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80216224: sb          $zero, 0x10($a0)
    MEM_B(0X10, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80215020_5D04F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215020: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215024: jr          $ra
    // 0x80215028: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215028: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802109D8_5CBEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802109D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802109DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802109E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802109E4: jal         0x80013AC4
    // 0x802109E8: addiu       $a0, $a0, -0x1B28
    ctx->r4 = ADD32(ctx->r4, -0X1B28);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802109E8: addiu       $a0, $a0, -0x1B28
    ctx->r4 = ADD32(ctx->r4, -0X1B28);
    after_0:
    // 0x802109EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802109F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802109F4: jr          $ra
    // 0x802109F8: nop

    TRACE_RETURN()
    return;
    // 0x802109F8: nop

;}
RECOMP_FUNC void func_8020FF70_5CB440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FF78: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FF7C: jal         0x80013AC4
    // 0x8020FF80: addiu       $a0, $a0, -0x24F8
    ctx->r4 = ADD32(ctx->r4, -0X24F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FF80: addiu       $a0, $a0, -0x24F8
    ctx->r4 = ADD32(ctx->r4, -0X24F8);
    after_0:
    // 0x8020FF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FF8C: jr          $ra
    // 0x8020FF90: nop

    TRACE_RETURN()
    return;
    // 0x8020FF90: nop

;}
RECOMP_FUNC void func_80214D44_5D0214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214D44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214D48: jr          $ra
    // 0x80214D4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214D4C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020E860_5C9D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E868: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E86C: jal         0x80013AC4
    // 0x8020E870: addiu       $a0, $a0, -0x370C
    ctx->r4 = ADD32(ctx->r4, -0X370C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E870: addiu       $a0, $a0, -0x370C
    ctx->r4 = ADD32(ctx->r4, -0X370C);
    after_0:
    // 0x8020E874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E87C: jr          $ra
    // 0x8020E880: nop

    TRACE_RETURN()
    return;
    // 0x8020E880: nop

;}
RECOMP_FUNC void func_8021159C_5CCA6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021159C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802115A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802115A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802115A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802115AC: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802115B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802115B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802115B8: jal         0x8021DEC4
    // 0x802115BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021DEC4_5D9394(rdram, ctx);
        goto after_0;
    // 0x802115BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802115C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802115C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802115C8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x802115CC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802115D0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802115D4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802115D8: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x802115DC: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x802115E0: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x802115E4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802115E8: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x802115EC: addiu       $a0, $a0, 0x160C
    ctx->r4 = ADD32(ctx->r4, 0X160C);
    // 0x802115F0: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x802115F4: jal         0x8003521C
    // 0x802115F8: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802115F8: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x802115FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211604: jr          $ra
    // 0x80211608: nop

    TRACE_RETURN()
    return;
    // 0x80211608: nop

;}
RECOMP_FUNC void func_80219C94_5D5164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219C94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80219C98: jr          $ra
    // 0x80219C9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80219C9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021BB04_5D6FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BB04: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021BB08: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021BB0C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8021BB10: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021BB14: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021BB18: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8021BB1C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021BB20: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BB24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021BB28: sub.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021BB2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021BB30: sub.s       $f2, $f20, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x8021BB34: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021BB38: nop

    // 0x8021BB3C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021BB40: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021BB44: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021BB48: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8021BB4C: nop

    // 0x8021BB50: bc1f        L_8021BB64
    if (!c1cs) {
        // 0x8021BB54: nop
    
            goto L_8021BB64;
    }
    // 0x8021BB54: nop

    // 0x8021BB58: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x8021BB5C: b           L_8021BBF8
    // 0x8021BB60: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
        goto L_8021BBF8;
    // 0x8021BB60: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
L_8021BB64:
    // 0x8021BB64: div.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8021BB68: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BB6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021BB70: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021BB74: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x8021BB78: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BB7C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BB80: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x8021BB84: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021BB88: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021BB8C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021BB90: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x8021BB94: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021BB98: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8021BB9C: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021BBA0: sub.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8021BBA4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021BBA8: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8021BBAC: nop

    // 0x8021BBB0: bc1tl       L_8021BBE4
    if (c1cs) {
        // 0x8021BBB4: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_8021BBE4;
    }
    goto skip_0;
    // 0x8021BBB4: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_0:
    // 0x8021BBB8: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021BBBC: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021BBC0: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x8021BBC4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8021BBC8: sub.s       $f18, $f20, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x8021BBCC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8021BBD0: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8021BBD4: nop

    // 0x8021BBD8: bc1fl       L_8021BBF8
    if (!c1cs) {
        // 0x8021BBDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8021BBF8;
    }
    goto skip_1;
    // 0x8021BBDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x8021BBE0: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_8021BBE4:
    // 0x8021BBE4: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
    // 0x8021BBE8: swc1        $f16, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f16.u32l;
    // 0x8021BBEC: b           L_8021BBF8
    // 0x8021BBF0: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
        goto L_8021BBF8;
    // 0x8021BBF0: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x8021BBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021BBF8:
    // 0x8021BBF8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021BBFC: jr          $ra
    // 0x8021BC00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8021BC00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8020EBC0_5CA090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EBC8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EBCC: jal         0x80013AC4
    // 0x8020EBD0: addiu       $a0, $a0, -0x3514
    ctx->r4 = ADD32(ctx->r4, -0X3514);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EBD0: addiu       $a0, $a0, -0x3514
    ctx->r4 = ADD32(ctx->r4, -0X3514);
    after_0:
    // 0x8020EBD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EBDC: jr          $ra
    // 0x8020EBE0: nop

    TRACE_RETURN()
    return;
    // 0x8020EBE0: nop

;}
RECOMP_FUNC void func_802101F8_5CB6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802101F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802101FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210200: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210204: jal         0x80013AC4
    // 0x80210208: addiu       $a0, $a0, -0x222C
    ctx->r4 = ADD32(ctx->r4, -0X222C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210208: addiu       $a0, $a0, -0x222C
    ctx->r4 = ADD32(ctx->r4, -0X222C);
    after_0:
    // 0x8021020C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210214: jr          $ra
    // 0x80210218: nop

    TRACE_RETURN()
    return;
    // 0x80210218: nop

;}
RECOMP_FUNC void func_802216B8_5DCB88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802216B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802216BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802216C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802216C4: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x802216C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802216CC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802216D0: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x802216D4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x802216D8: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x802216DC: bnel        $at, $zero, L_80221718
    if (ctx->r1 != 0) {
        // 0x802216E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80221718;
    }
    goto skip_0;
    // 0x802216E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802216E4: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x802216E8: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x802216EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802216F0: bne         $v0, $t8, L_80221700
    if (ctx->r2 != ctx->r24) {
        // 0x802216F4: nop
    
            goto L_80221700;
    }
    // 0x802216F4: nop

    // 0x802216F8: b           L_80221700
    // 0x802216FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80221700;
    // 0x802216FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80221700:
    // 0x80221700: jal         0x8003D388
    // 0x80221704: lhu         $a0, 0xC4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XC4);
    func_8003D388_3DF88(rdram, ctx);
        goto after_0;
    // 0x80221704: lhu         $a0, 0xC4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XC4);
    after_0:
    // 0x80221708: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022170C: jal         0x8003521C
    // 0x80221710: addiu       $a0, $a0, 0x14CC
    ctx->r4 = ADD32(ctx->r4, 0X14CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221710: addiu       $a0, $a0, 0x14CC
    ctx->r4 = ADD32(ctx->r4, 0X14CC);
    after_1:
    // 0x80221714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221718:
    // 0x80221718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022171C: jr          $ra
    // 0x80221720: nop

    TRACE_RETURN()
    return;
    // 0x80221720: nop

;}
RECOMP_FUNC void func_8021F10C_5DA5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F10C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F114: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F118: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F11C: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021F120: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8021F124: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8021F128: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F12C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8021F130: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x8021F134: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8021F138: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8021F13C: jal         0x8021EE50
    // 0x8021F140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021EE50_5DA320(rdram, ctx);
        goto after_0;
    // 0x8021F140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8021F144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F14C: jr          $ra
    // 0x8021F150: nop

    TRACE_RETURN()
    return;
    // 0x8021F150: nop

;}
RECOMP_FUNC void func_8020E1E8_5C96B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E1E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E1EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E1F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E1F4: jal         0x80013AC4
    // 0x8020E1F8: addiu       $a0, $a0, -0x3AE4
    ctx->r4 = ADD32(ctx->r4, -0X3AE4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E1F8: addiu       $a0, $a0, -0x3AE4
    ctx->r4 = ADD32(ctx->r4, -0X3AE4);
    after_0:
    // 0x8020E1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E204: jr          $ra
    // 0x8020E208: nop

    TRACE_RETURN()
    return;
    // 0x8020E208: nop

;}
RECOMP_FUNC void func_80210EA0_5CC370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210EA8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210EAC: jal         0x80013AC4
    // 0x80210EB0: addiu       $a0, $a0, -0x184C
    ctx->r4 = ADD32(ctx->r4, -0X184C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210EB0: addiu       $a0, $a0, -0x184C
    ctx->r4 = ADD32(ctx->r4, -0X184C);
    after_0:
    // 0x80210EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210EBC: jr          $ra
    // 0x80210EC0: nop

    TRACE_RETURN()
    return;
    // 0x80210EC0: nop

;}
RECOMP_FUNC void func_80221A40_5DCF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221A40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80221A44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80221A48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80221A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80221A50: lui         $s1, 0x8002
    ctx->r17 = S32(0X8002 << 16);
    // 0x80221A54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80221A58: addiu       $s1, $s1, 0x4088
    ctx->r17 = ADD32(ctx->r17, 0X4088);
    // 0x80221A5C: addiu       $s0, $zero, 0x9C
    ctx->r16 = ADD32(0, 0X9C);
    // 0x80221A60: addiu       $s2, $zero, 0xA1
    ctx->r18 = ADD32(0, 0XA1);
L_80221A64:
    // 0x80221A64: jalr        $s1
    // 0x80221A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x80221A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80221A6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80221A70: bne         $s0, $s2, L_80221A64
    if (ctx->r16 != ctx->r18) {
        // 0x80221A74: nop
    
            goto L_80221A64;
    }
    // 0x80221A74: nop

    // 0x80221A78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80221A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80221A80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80221A84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80221A88: jr          $ra
    // 0x80221A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80221A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80210168_5CB638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021016C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210170: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210174: jal         0x80013AC4
    // 0x80210178: addiu       $a0, $a0, -0x22E4
    ctx->r4 = ADD32(ctx->r4, -0X22E4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210178: addiu       $a0, $a0, -0x22E4
    ctx->r4 = ADD32(ctx->r4, -0X22E4);
    after_0:
    // 0x8021017C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210184: jr          $ra
    // 0x80210188: nop

    TRACE_RETURN()
    return;
    // 0x80210188: nop

;}
RECOMP_FUNC void func_80225BB8_5E1088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80225BBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225BC0: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80225BC4: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x80225BC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225BCC: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80225BD0: lhu         $s2, -0x6660($s2)
    ctx->r18 = MEM_HU(ctx->r18, -0X6660);
    // 0x80225BD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225BD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225BDC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80225BE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80225BE4: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80225BE8: jal         0x800141C4
    // 0x80225BEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80225BEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80225BF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80225BF4: bnel        $v0, $at, L_80225C10
    if (ctx->r2 != ctx->r1) {
        // 0x80225BF8: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_80225C10;
    }
    goto skip_0;
    // 0x80225BF8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80225BFC: jal         0x80038BC8
    // 0x80225C00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80225C00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80225C04: jal         0x80013B14
    // 0x80225C08: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80225C08: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_2:
    // 0x80225C0C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_80225C10:
    // 0x80225C10: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225C14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225C18: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80225C1C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80225C20: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    // 0x80225C24: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80225C28: jal         0x80014840
    // 0x80225C2C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x80225C2C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_3:
    // 0x80225C30: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80225C34: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225C38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225C3C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80225C40: lw          $a0, -0x6818($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6818);
    // 0x80225C44: jal         0x80014840
    // 0x80225C48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_4;
    // 0x80225C48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_4:
    // 0x80225C4C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80225C50: sw          $v0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->r2;
    // 0x80225C54: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80225C58: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80225C5C: sh          $t9, 0xA6($s1)
    MEM_H(0XA6, ctx->r17) = ctx->r25;
    // 0x80225C60: lh          $t0, -0x8($v1)
    ctx->r8 = MEM_H(ctx->r3, -0X8);
    // 0x80225C64: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80225C68: nop

    // 0x80225C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225C70: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80225C74: lh          $t1, -0x6($v1)
    ctx->r9 = MEM_H(ctx->r3, -0X6);
    // 0x80225C78: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80225C7C: nop

    // 0x80225C80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80225C84: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80225C88: lh          $t2, -0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, -0X4);
    // 0x80225C8C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80225C90: nop

    // 0x80225C94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80225C98: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x80225C9C: lhu         $t3, -0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, -0X2);
    // 0x80225CA0: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80225CA4: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x80225CA8: sw          $v1, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r3;
    // 0x80225CAC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80225CB0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80225CB4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80225CB8: nop

    // 0x80225CBC: sh          $t6, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = ctx->r14;
    // 0x80225CC0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80225CC4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80225CC8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80225CCC: nop

    // 0x80225CD0: sh          $t8, 0xCA($s1)
    MEM_H(0XCA, ctx->r17) = ctx->r24;
    // 0x80225CD4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80225CD8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80225CDC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x80225CE0: nop

    // 0x80225CE4: sh          $t0, 0xCC($s1)
    MEM_H(0XCC, ctx->r17) = ctx->r8;
    // 0x80225CE8: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80225CEC: sb          $zero, 0xCF($s1)
    MEM_B(0XCF, ctx->r17) = 0;
    // 0x80225CF0: sra         $t2, $t1, 2
    ctx->r10 = S32(SIGNED(ctx->r9) >> 2);
    // 0x80225CF4: sb          $t2, 0xCE($s1)
    MEM_B(0XCE, ctx->r17) = ctx->r10;
    // 0x80225CF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80225CFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80225D00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225D04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225D08: jr          $ra
    // 0x80225D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80225D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8020E05C_5C952C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E064: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E068: jal         0x80013AC4
    // 0x8020E06C: addiu       $a0, $a0, -0x3BE0
    ctx->r4 = ADD32(ctx->r4, -0X3BE0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E06C: addiu       $a0, $a0, -0x3BE0
    ctx->r4 = ADD32(ctx->r4, -0X3BE0);
    after_0:
    // 0x8020E070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E078: jr          $ra
    // 0x8020E07C: nop

    TRACE_RETURN()
    return;
    // 0x8020E07C: nop

;}
