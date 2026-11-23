#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801EB0FC_5A700C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB0FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB104: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB108: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB10C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB110: jal         0x801EB180
    // 0x801EB114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801EB118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB120: jr          $ra
    // 0x801EB124: nop

    TRACE_RETURN()
    return;
    // 0x801EB124: nop

;}
RECOMP_FUNC void func_801CD084_588F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD084: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CD088: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CD08C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CD090: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x801CD094: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801CD098: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CD09C: lbu         $t6, 0x61($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X61);
    // 0x801CD0A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CD0A4: addiu       $v1, $v1, -0x3540
    ctx->r3 = ADD32(ctx->r3, -0X3540);
    // 0x801CD0A8: beq         $t6, $zero, L_801CD0B8
    if (ctx->r14 == 0) {
        // 0x801CD0AC: lw          $t1, 0x0($t0)
        ctx->r9 = MEM_W(ctx->r8, 0X0);
            goto L_801CD0B8;
    }
    // 0x801CD0AC: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x801CD0B0: b           L_801CD2FC
    // 0x801CD0B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CD2FC;
    // 0x801CD0B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CD0B8:
    // 0x801CD0B8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801CD0BC: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CD0C0: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CD0C4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CD0C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CD0CC: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801CD0D0: addiu       $a0, $a0, -0x3530
    ctx->r4 = ADD32(ctx->r4, -0X3530);
    // 0x801CD0D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801CD0D8: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x801CD0DC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CD0E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CD0E4: addiu       $a1, $a1, -0x35E0
    ctx->r5 = ADD32(ctx->r5, -0X35E0);
    // 0x801CD0E8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD0EC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CD0F0: addiu       $a2, $a2, -0x35D8
    ctx->r6 = ADD32(ctx->r6, -0X35D8);
    // 0x801CD0F4: swc1        $f18, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f18.u32l;
    // 0x801CD0F8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CD0FC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CD100: addiu       $v1, $v1, -0x35DC
    ctx->r3 = ADD32(ctx->r3, -0X35DC);
    // 0x801CD104: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CD108: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x801CD10C: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801CD110: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801CD114: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801CD118: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD11C: lwc1        $f10, 0x10($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801CD120: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x801CD124: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801CD128: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CD12C: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
    // 0x801CD130: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801CD134: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD138: swc1        $f18, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f18.u32l;
    // 0x801CD13C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801CD140: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801CD144: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CD148: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CD14C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CD150: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x801CD154: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CD158: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801CD15C: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x801CD160: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD164: lbu         $t8, 0x59($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X59);
    // 0x801CD168: beql        $t8, $zero, L_801CD194
    if (ctx->r24 == 0) {
        // 0x801CD16C: lwc1        $f6, 0xC($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801CD194;
    }
    goto skip_0;
    // 0x801CD16C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x801CD170: lbu         $t9, 0x61($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X61);
    // 0x801CD174: bnel        $t9, $zero, L_801CD194
    if (ctx->r25 != 0) {
        // 0x801CD178: lwc1        $f6, 0xC($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801CD194;
    }
    goto skip_1;
    // 0x801CD178: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x801CD17C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CD180: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CD184: addiu       $v1, $v1, -0x35DC
    ctx->r3 = ADD32(ctx->r3, -0X35DC);
    // 0x801CD188: b           L_801CD1A0
    // 0x801CD18C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
        goto L_801CD1A0;
    // 0x801CD18C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801CD190: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
L_801CD194:
    // 0x801CD194: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CD198: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801CD19C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_801CD1A0:
    // 0x801CD1A0: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801CD1A4: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CD1A8: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CD1AC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801CD1B0: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801CD1B4: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x801CD1B8: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CD1BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CD1C0: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801CD1C4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CD1C8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CD1CC: swc1        $f0, 0x88($t2)
    MEM_W(0X88, ctx->r10) = ctx->f0.u32l;
    // 0x801CD1D0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD1D4: lbu         $t3, 0x2F($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2F);
    // 0x801CD1D8: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x801CD1DC: beq         $at, $zero, L_801CD2B4
    if (ctx->r1 == 0) {
        // 0x801CD1E0: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_801CD2B4;
    }
    // 0x801CD1E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801CD1E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD1E8: addu        $at, $at, $t3
    gpr jr_addend_801CD1F0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801CD1EC: lw          $t3, -0x57B8($at)
    ctx->r11 = ADD32(ctx->r1, -0X57B8);
    // 0x801CD1F0: jr          $t3
    // 0x801CD1F4: nop

    switch (jr_addend_801CD1F0 >> 2) {
        case 0: goto L_801CD1F8; break;
        case 1: goto L_801CD224; break;
        case 2: goto L_801CD25C; break;
        case 3: goto L_801CD290; break;
        case 4: goto L_801CD2B4; break;
        default: switch_error(__func__, 0x801CD1F0, 0x8020A848);
    }
    // 0x801CD1F4: nop

L_801CD1F8:
    // 0x801CD1F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD1FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CD200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CD204: swc1        $f0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f0.u32l;
    // 0x801CD208: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD20C: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x801CD210: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x801CD214: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD218: swc1        $f10, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f10.u32l;
    // 0x801CD21C: b           L_801CD2B4
    // 0x801CD220: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
        goto L_801CD2B4;
    // 0x801CD220: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801CD224:
    // 0x801CD224: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD228: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801CD22C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CD230: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CD234: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CD238: addiu       $a0, $v0, 0x3C
    ctx->r4 = ADD32(ctx->r2, 0X3C);
    // 0x801CD23C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801CD240: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801CD244: jal         0x8001D230
    // 0x801CD248: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_8001D230_1DE30(rdram, ctx);
        goto after_0;
    // 0x801CD248: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x801CD24C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD250: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801CD254: b           L_801CD2B4
    // 0x801CD258: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
        goto L_801CD2B4;
    // 0x801CD258: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801CD25C:
    // 0x801CD25C: lw          $a1, 0x84($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X84);
    // 0x801CD260: lw          $a2, 0x88($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X88);
    // 0x801CD264: lw          $a3, 0x8C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8C);
    // 0x801CD268: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD26C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CD270: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801CD274: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801CD278: jal         0x8001D230
    // 0x801CD27C: addiu       $a0, $v0, 0x3C
    ctx->r4 = ADD32(ctx->r2, 0X3C);
    func_8001D230_1DE30(rdram, ctx);
        goto after_1;
    // 0x801CD27C: addiu       $a0, $v0, 0x3C
    ctx->r4 = ADD32(ctx->r2, 0X3C);
    after_1:
    // 0x801CD280: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD284: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801CD288: b           L_801CD2B4
    // 0x801CD28C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
        goto L_801CD2B4;
    // 0x801CD28C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801CD290:
    // 0x801CD290: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801CD294: swc1        $f16, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f16.u32l;
    // 0x801CD298: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD29C: lwc1        $f18, 0x88($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801CD2A0: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x801CD2A4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD2A8: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801CD2AC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x801CD2B0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
L_801CD2B4:
    // 0x801CD2B4: lhu         $a3, 0x94($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X94);
    // 0x801CD2B8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801CD2BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CD2C0: addiu       $a0, $t1, 0x14
    ctx->r4 = ADD32(ctx->r9, 0X14);
    // 0x801CD2C4: addiu       $a1, $v0, 0x3C
    ctx->r5 = ADD32(ctx->r2, 0X3C);
    // 0x801CD2C8: jal         0x8001DB04
    // 0x801CD2CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801CD2CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801CD2D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD2D4: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x801CD2D8: lhu         $a3, 0x94($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X94);
    // 0x801CD2DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CD2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD2E4: addiu       $a0, $t0, 0x14
    ctx->r4 = ADD32(ctx->r8, 0X14);
    // 0x801CD2E8: jal         0x8001DB04
    // 0x801CD2EC: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801CD2EC: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_3:
    // 0x801CD2F0: jal         0x801CF3A0
    // 0x801CD2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CF3A0_58B2B0(rdram, ctx);
        goto after_4;
    // 0x801CD2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801CD2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801CD2FC:
    // 0x801CD2FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CD300: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CD304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CD308: jr          $ra
    // 0x801CD30C: nop

    TRACE_RETURN()
    return;
    // 0x801CD30C: nop

;}
RECOMP_FUNC void func_801FB018_5B6F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB018: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FB01C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FB020: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801FB024: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FB028: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801FB02C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801FB030: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FB034: lwc1        $f20, 0x0($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801FB038: c.eq.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl == ctx->f20.fl;
    // 0x801FB03C: nop

    // 0x801FB040: bc1fl       L_801FB068
    if (!c1cs) {
        // 0x801FB044: lwc1        $f14, 0x8($a1)
        ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
            goto L_801FB068;
    }
    goto skip_0;
    // 0x801FB044: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x801FB048: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801FB04C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x801FB050: nop

    // 0x801FB054: bc1fl       L_801FB068
    if (!c1cs) {
        // 0x801FB058: lwc1        $f14, 0x8($a1)
        ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
            goto L_801FB068;
    }
    goto skip_1;
    // 0x801FB058: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    skip_1:
    // 0x801FB05C: b           L_801FB08C
    // 0x801FB060: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_801FB08C;
    // 0x801FB060: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801FB064: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
L_801FB068:
    // 0x801FB068: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FB06C: jal         0x800040A8
    // 0x801FB070: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x801FB070: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x801FB074: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801FB078: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801FB07C: andi        $t6, $v1, 0x3FF
    ctx->r14 = ctx->r3 & 0X3FF;
    // 0x801FB080: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801FB084: lwc1        $f20, 0x0($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801FB088: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
L_801FB08C:
    // 0x801FB08C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801FB090: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x801FB094: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FB098: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801FB09C: jal         0x800417E0
    // 0x801FB0A0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x801FB0A0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x801FB0A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801FB0A8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x801FB0AC: jal         0x800040A8
    // 0x801FB0B0: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x801FB0B0: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    after_2:
    // 0x801FB0B4: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x801FB0B8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801FB0BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB0C0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801FB0C4: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801FB0C8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801FB0CC: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801FB0D0: bgez        $v1, L_801FB0E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801FB0D4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801FB0E8;
    }
    // 0x801FB0D4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801FB0D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FB0DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB0E0: nop

    // 0x801FB0E4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801FB0E8:
    // 0x801FB0E8: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801FB0EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801FB0F0: andi        $t7, $a0, 0x3FF
    ctx->r15 = ctx->r4 & 0X3FF;
    // 0x801FB0F4: slti        $at, $t7, 0x101
    ctx->r1 = SIGNED(ctx->r15) < 0X101 ? 1 : 0;
    // 0x801FB0F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801FB0FC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801FB100: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801FB104: beq         $at, $zero, L_801FB164
    if (ctx->r1 == 0) {
        // 0x801FB108: swc1        $f18, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
            goto L_801FB164;
    }
    // 0x801FB108: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x801FB10C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FB110: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB114: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FB118: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801FB11C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB120: div.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x801FB124: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x801FB128: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FB12C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801FB130: bgez        $t7, L_801FB144
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801FB134: div.s       $f4, $f0, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
            goto L_801FB144;
    }
    // 0x801FB134: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801FB138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB13C: nop

    // 0x801FB140: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_801FB144:
    // 0x801FB144: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FB148: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB14C: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801FB150: div.s       $f18, $f2, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x801FB154: sub.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801FB158: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801FB15C: b           L_801FB1AC
    // 0x801FB160: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
        goto L_801FB1AC;
    // 0x801FB160: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
L_801FB164:
    // 0x801FB164: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FB168: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB16C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FB170: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FB174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB178: div.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801FB17C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801FB180: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB184: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x801FB188: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x801FB18C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801FB190: div.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801FB194: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801FB198: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801FB19C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801FB1A0: add.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801FB1A4: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801FB1A8: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
L_801FB1AC:
    // 0x801FB1AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FB1B0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801FB1B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FB1B8: jr          $ra
    // 0x801FB1BC: nop

    TRACE_RETURN()
    return;
    // 0x801FB1BC: nop

;}
RECOMP_FUNC void func_801E759C_5A34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E759C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E75A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E75A4: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E75A8: sb          $zero, 0x2F($t6)
    MEM_B(0X2F, ctx->r14) = 0;
    // 0x801E75AC: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E75B0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801E75B4: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E75B8: ori         $a0, $zero, 0x826D
    ctx->r4 = 0 | 0X826D;
    // 0x801E75BC: jal         0x80038B98
    // 0x801E75C0: sb          $zero, 0x18($t8)
    MEM_B(0X18, ctx->r24) = 0;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801E75C0: sb          $zero, 0x18($t8)
    MEM_B(0X18, ctx->r24) = 0;
    after_0:
    // 0x801E75C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E75C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E75CC: jr          $ra
    // 0x801E75D0: nop

    TRACE_RETURN()
    return;
    // 0x801E75D0: nop

;}
RECOMP_FUNC void func_801F309C_5AEFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F309C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F30A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F30A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F30A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F30AC: jal         0x801E8C44
    // 0x801F30B0: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F30B0: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x801F30B4: bne         $v0, $zero, L_801F3108
    if (ctx->r2 != 0) {
        // 0x801F30B8: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801F3108;
    }
    // 0x801F30B8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F30BC: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801F30C0: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x801F30C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F30C8: bne         $t6, $zero, L_801F3108
    if (ctx->r14 != 0) {
        // 0x801F30CC: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_801F3108;
    }
    // 0x801F30CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F30D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F30D4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801F30D8: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F30DC: jal         0x80034E08
    // 0x801F30E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F30E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F30E4: beq         $v0, $zero, L_801F3108
    if (ctx->r2 == 0) {
        // 0x801F30E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F3108;
    }
    // 0x801F30E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F30EC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F30F0: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801F30F4: jal         0x801EE4AC
    // 0x801F30F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F30F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F30FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3100: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
    // 0x801F3104: sw          $zero, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = 0;
L_801F3108:
    // 0x801F3108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F310C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3110: jr          $ra
    // 0x801F3114: nop

    TRACE_RETURN()
    return;
    // 0x801F3114: nop

;}
RECOMP_FUNC void func_801E2D74_59EC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2D7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E2D80: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E2D84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E2D88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801E2D8C: jal         0x801E3834
    // 0x801E2D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E2D94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2D98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E2D9C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2DA0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2DA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2DA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E2DAC: sb          $zero, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = 0;
    // 0x801E2DB0: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2DB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2DB8: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x801E2DBC: lwc1        $f12, 0x68($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X68);
    // 0x801E2DC0: lwc1        $f14, 0x6C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801E2DC4: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E2DC8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E2DCC: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2DD0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E2DD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E2DD8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E2DDC: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E2DE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2DE4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801E2DE8: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801E2DEC: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x801E2DF0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2DF4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E2DF8: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801E2DFC: swc1        $f16, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f16.u32l;
    // 0x801E2E00: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x801E2E04: swc1        $f10, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f10.u32l;
    // 0x801E2E08: swc1        $f6, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f6.u32l;
    // 0x801E2E0C: lhu         $t1, 0x8($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X8);
    // 0x801E2E10: ori         $t2, $t1, 0x400
    ctx->r10 = ctx->r9 | 0X400;
    // 0x801E2E14: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x801E2E18: jal         0x801E8964
    // 0x801E2E1C: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801E2E1C: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x801E2E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2E28: jr          $ra
    // 0x801E2E2C: nop

    TRACE_RETURN()
    return;
    // 0x801E2E2C: nop

;}
RECOMP_FUNC void func_801D8034_593F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8034: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D8038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D803C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801D8040: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801D8044: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801D8048: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801D804C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D8050: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D8054: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801D8058: jal         0x801D7DD0
    // 0x801D805C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_801D7DD0_593CE0(rdram, ctx);
        goto after_0;
    // 0x801D805C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D8060: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x801D8064: jal         0x80003D88
    // 0x801D8068: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80003D88_4988(rdram, ctx);
        goto after_1;
    // 0x801D8068: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x801D806C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8070: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D8074: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D8078: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D807C: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D8080: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D8084: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D8088: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D808C: lwc1        $f16, -0x2E30($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D8090: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D8094: addiu       $t8, $zero, 0x3F00
    ctx->r24 = ADD32(0, 0X3F00);
    // 0x801D8098: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D809C: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x801D80A0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801D80A4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801D80A8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D80AC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x801D80B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D80B4: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801D80B8: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D80BC: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x801D80C0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D80C4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801D80C8: mul.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x801D80CC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801D80D0: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D80D4: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D80D8: jal         0x801D56D0
    // 0x801D80DC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_2;
    // 0x801D80DC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801D80E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D80E4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x801D80E8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801D80EC: jr          $ra
    // 0x801D80F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D80F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801D23C8_58E2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D23C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D23CC: jr          $ra
    // 0x801D23D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D23D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E3DE0_59FCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801E3DE4: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E3DE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E3DEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E3DF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E3DF4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E3DF8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801E3DFC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E3E00: lwc1        $f0, 0x7DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801E3E04: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E3E08: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E3E0C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801E3E10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3E14: bc1fl       L_801E3E28
    if (!c1cs) {
        // 0x801E3E18: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E3E28;
    }
    goto skip_0;
    // 0x801E3E18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E3E1C: b           L_801E3E28
    // 0x801E3E20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E3E28;
    // 0x801E3E20: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E3E24: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E3E28:
    // 0x801E3E28: ldc1        $f6, -0x4C90($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4C90);
    // 0x801E3E2C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801E3E30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3E34: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801E3E38: nop

    // 0x801E3E3C: bc1tl       L_801E3EB4
    if (c1cs) {
        // 0x801E3E40: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E3EB4;
    }
    goto skip_1;
    // 0x801E3E40: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_1:
    // 0x801E3E44: lwc1        $f8, -0x4C88($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4C88);
    // 0x801E3E48: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x801E3E4C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E3E50: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E3E54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E3E58: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E3E5C: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801E3E60: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801E3E64: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x801E3E68: nop

    // 0x801E3E6C: bc1fl       L_801E3E80
    if (!c1cs) {
        // 0x801E3E70: div.s       $f6, $f4, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
            goto L_801E3E80;
    }
    goto skip_2;
    // 0x801E3E70: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    skip_2:
    // 0x801E3E74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E3E78: nop

    // 0x801E3E7C: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
L_801E3E80:
    // 0x801E3E80: add.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x801E3E84: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801E3E88: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E3E8C: bc1fl       L_801E3E9C
    if (!c1cs) {
        // 0x801E3E90: lwc1        $f8, 0xE4($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
            goto L_801E3E9C;
    }
    goto skip_3;
    // 0x801E3E90: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    skip_3:
    // 0x801E3E94: swc1        $f12, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f12.u32l;
    // 0x801E3E98: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
L_801E3E9C:
    // 0x801E3E9C: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801E3EA0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801E3EA4: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E3EA8: jr          $ra
    // 0x801E3EAC: swc1        $f18, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3EAC: swc1        $f18, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f18.u32l;
    // 0x801E3EB0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E3EB4:
    // 0x801E3EB4: jr          $ra
    // 0x801E3EB8: nop

    TRACE_RETURN()
    return;
    // 0x801E3EB8: nop

;}
RECOMP_FUNC void func_801ED948_5A9858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED94C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED950: jal         0x801ED968
    // 0x801ED954: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801ED968_5A9878(rdram, ctx);
        goto after_0;
    // 0x801ED954: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801ED958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED960: jr          $ra
    // 0x801ED964: nop

    TRACE_RETURN()
    return;
    // 0x801ED964: nop

;}
RECOMP_FUNC void func_801F9EE4_5B5DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9EE4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F9EE8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801F9EEC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9EF0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9EF4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F9EF8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801F9EFC: lbu         $t6, 0x2DF6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2DF6);
    // 0x801F9F00: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x801F9F04: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F9F08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F9F0C: lhu         $t9, 0x2DF8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2DF8);
    // 0x801F9F10: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x801F9F14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F9F18: lw          $t8, -0x66AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66AC);
    // 0x801F9F1C: addiu       $t3, $a3, 0x7FFF
    ctx->r11 = ADD32(ctx->r7, 0X7FFF);
    // 0x801F9F20: lhu         $t3, 0x2DE7($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X2DE7);
    // 0x801F9F24: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x801F9F28: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x801F9F2C: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x801F9F30: bne         $t3, $zero, L_801F9F58
    if (ctx->r11 != 0) {
        // 0x801F9F34: lhu         $v1, 0x0($t2)
        ctx->r3 = MEM_HU(ctx->r10, 0X0);
            goto L_801F9F58;
    }
    // 0x801F9F34: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x801F9F38: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x801F9F3C: bne         $v1, $at, L_801F9F58
    if (ctx->r3 != ctx->r1) {
        // 0x801F9F40: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_801F9F58;
    }
    // 0x801F9F40: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801F9F44: addiu       $t0, $t0, -0x39F8
    ctx->r8 = ADD32(ctx->r8, -0X39F8);
    // 0x801F9F48: lw          $t4, 0xB4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0XB4);
    // 0x801F9F4C: beql        $t4, $zero, L_801F9F5C
    if (ctx->r12 == 0) {
        // 0x801F9F50: addiu       $a0, $a3, 0x7FFF
        ctx->r4 = ADD32(ctx->r7, 0X7FFF);
            goto L_801F9F5C;
    }
    goto skip_0;
    // 0x801F9F50: addiu       $a0, $a3, 0x7FFF
    ctx->r4 = ADD32(ctx->r7, 0X7FFF);
    skip_0:
    // 0x801F9F54: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
L_801F9F58:
    // 0x801F9F58: addiu       $a0, $a3, 0x7FFF
    ctx->r4 = ADD32(ctx->r7, 0X7FFF);
L_801F9F5C:
    // 0x801F9F5C: lhu         $a0, 0x2DF3($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2DF3);
    // 0x801F9F60: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801F9F64: addiu       $at, $zero, 0x1D1
    ctx->r1 = ADD32(0, 0X1D1);
    // 0x801F9F68: bne         $a0, $at, L_801F9F84
    if (ctx->r4 != ctx->r1) {
        // 0x801F9F6C: addiu       $t0, $t0, -0x39F8
        ctx->r8 = ADD32(ctx->r8, -0X39F8);
            goto L_801F9F84;
    }
    // 0x801F9F6C: addiu       $t0, $t0, -0x39F8
    ctx->r8 = ADD32(ctx->r8, -0X39F8);
    // 0x801F9F70: addiu       $t5, $a3, 0x7FFF
    ctx->r13 = ADD32(ctx->r7, 0X7FFF);
    // 0x801F9F74: lhu         $t5, 0x2DFF($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X2DFF);
    // 0x801F9F78: bnel        $t5, $zero, L_801F9F88
    if (ctx->r13 != 0) {
        // 0x801F9F7C: addiu       $a1, $a3, 0x7FFF
        ctx->r5 = ADD32(ctx->r7, 0X7FFF);
            goto L_801F9F88;
    }
    goto skip_1;
    // 0x801F9F7C: addiu       $a1, $a3, 0x7FFF
    ctx->r5 = ADD32(ctx->r7, 0X7FFF);
    skip_1:
    // 0x801F9F80: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
L_801F9F84:
    // 0x801F9F84: addiu       $a1, $a3, 0x7FFF
    ctx->r5 = ADD32(ctx->r7, 0X7FFF);
L_801F9F88:
    // 0x801F9F88: lhu         $a1, 0x2DFD($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X2DFD);
    // 0x801F9F8C: addiu       $at, $zero, 0x1D2
    ctx->r1 = ADD32(0, 0X1D2);
    // 0x801F9F90: bnel        $a1, $at, L_801F9FAC
    if (ctx->r5 != ctx->r1) {
        // 0x801F9F94: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_801F9FAC;
    }
    goto skip_2;
    // 0x801F9F94: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    skip_2:
    // 0x801F9F98: lw          $t6, 0xB4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0XB4);
    // 0x801F9F9C: beql        $t6, $zero, L_801F9FAC
    if (ctx->r14 == 0) {
        // 0x801F9FA0: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_801F9FAC;
    }
    goto skip_3;
    // 0x801F9FA0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    skip_3:
    // 0x801F9FA4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x801F9FA8: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
L_801F9FAC:
    // 0x801F9FAC: bne         $a2, $at, L_801F9FC8
    if (ctx->r6 != ctx->r1) {
        // 0x801F9FB0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801F9FC8;
    }
    // 0x801F9FB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801F9FB4: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801F9FB8: bnel        $v0, $at, L_801F9FCC
    if (ctx->r2 != ctx->r1) {
        // 0x801F9FBC: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_801F9FCC;
    }
    goto skip_4;
    // 0x801F9FBC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_4:
    // 0x801F9FC0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x801F9FC4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_801F9FC8:
    // 0x801F9FC8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_801F9FCC:
    // 0x801F9FCC: bnel        $v0, $at, L_801F9FE8
    if (ctx->r2 != ctx->r1) {
        // 0x801F9FD0: addiu       $at, $zero, 0x167
        ctx->r1 = ADD32(0, 0X167);
            goto L_801F9FE8;
    }
    goto skip_5;
    // 0x801F9FD0: addiu       $at, $zero, 0x167
    ctx->r1 = ADD32(0, 0X167);
    skip_5:
    // 0x801F9FD4: lw          $t7, 0x218($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X218);
    // 0x801F9FD8: beql        $t7, $zero, L_801F9FE8
    if (ctx->r15 == 0) {
        // 0x801F9FDC: addiu       $at, $zero, 0x167
        ctx->r1 = ADD32(0, 0X167);
            goto L_801F9FE8;
    }
    goto skip_6;
    // 0x801F9FDC: addiu       $at, $zero, 0x167
    ctx->r1 = ADD32(0, 0X167);
    skip_6:
    // 0x801F9FE0: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x801F9FE4: addiu       $at, $zero, 0x167
    ctx->r1 = ADD32(0, 0X167);
L_801F9FE8:
    // 0x801F9FE8: bnel        $a0, $at, L_801FA004
    if (ctx->r4 != ctx->r1) {
        // 0x801F9FEC: addiu       $at, $zero, 0x14E
        ctx->r1 = ADD32(0, 0X14E);
            goto L_801FA004;
    }
    goto skip_7;
    // 0x801F9FEC: addiu       $at, $zero, 0x14E
    ctx->r1 = ADD32(0, 0X14E);
    skip_7:
    // 0x801F9FF0: lw          $t9, 0xA0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XA0);
    // 0x801F9FF4: beql        $t9, $zero, L_801FA004
    if (ctx->r25 == 0) {
        // 0x801F9FF8: addiu       $at, $zero, 0x14E
        ctx->r1 = ADD32(0, 0X14E);
            goto L_801FA004;
    }
    goto skip_8;
    // 0x801F9FF8: addiu       $at, $zero, 0x14E
    ctx->r1 = ADD32(0, 0X14E);
    skip_8:
    // 0x801F9FFC: addiu       $v1, $zero, 0x6B
    ctx->r3 = ADD32(0, 0X6B);
    // 0x801FA000: addiu       $at, $zero, 0x14E
    ctx->r1 = ADD32(0, 0X14E);
L_801FA004:
    // 0x801FA004: bnel        $a1, $at, L_801FA014
    if (ctx->r5 != ctx->r1) {
        // 0x801FA008: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_801FA014;
    }
    goto skip_9;
    // 0x801FA008: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    skip_9:
    // 0x801FA00C: addiu       $v1, $zero, 0x53
    ctx->r3 = ADD32(0, 0X53);
    // 0x801FA010: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
L_801FA014:
    // 0x801FA014: beq         $a0, $at, L_801FA024
    if (ctx->r4 == ctx->r1) {
        // 0x801FA018: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_801FA024;
    }
    // 0x801FA018: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801FA01C: bne         $a0, $at, L_801FA034
    if (ctx->r4 != ctx->r1) {
        // 0x801FA020: nop
    
            goto L_801FA034;
    }
    // 0x801FA020: nop

L_801FA024:
    // 0x801FA024: lw          $t8, 0x254($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X254);
    // 0x801FA028: beq         $t8, $zero, L_801FA034
    if (ctx->r24 == 0) {
        // 0x801FA02C: nop
    
            goto L_801FA034;
    }
    // 0x801FA02C: nop

    // 0x801FA030: addiu       $v1, $zero, 0x1B
    ctx->r3 = ADD32(0, 0X1B);
L_801FA034:
    // 0x801FA034: jr          $ra
    // 0x801FA038: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801FA038: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801D27A4_58E6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D27A4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D27A8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D27AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D27B0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801D27B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801D27B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D27BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D27C0: addiu       $t7, $t7, -0x36F8
    ctx->r15 = ADD32(ctx->r15, -0X36F8);
    // 0x801D27C4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D27C8: addiu       $t6, $sp, 0x64
    ctx->r14 = ADD32(ctx->r29, 0X64);
    // 0x801D27CC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801D27D0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801D27D4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801D27D8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801D27DC: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801D27E0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801D27E4: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801D27E8: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801D27EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D27F0: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801D27F4: lw          $s2, 0x2C($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X2C);
    // 0x801D27F8: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D27FC: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D2800: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D2804: lbu         $a2, 0x98($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X98);
    // 0x801D2808: lbu         $v1, 0xBC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XBC);
    // 0x801D280C: lbu         $a3, 0xD3($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XD3);
    // 0x801D2810: and         $t1, $s2, $at
    ctx->r9 = ctx->r18 & ctx->r1;
    // 0x801D2814: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801D2818: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x801D281C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801D2820: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x801D2824: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_801D2828:
    // 0x801D2828: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D282C: slti        $at, $s1, 0x25
    ctx->r1 = SIGNED(ctx->r17) < 0X25 ? 1 : 0;
    // 0x801D2830: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x801D2834: bne         $at, $zero, L_801D2828
    if (ctx->r1 != 0) {
        // 0x801D2838: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_801D2828;
    }
    // 0x801D2838: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801D283C: sb          $v1, 0xBC($s0)
    MEM_B(0XBC, ctx->r16) = ctx->r3;
    // 0x801D2840: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D2844: sb          $a3, 0xD3($s0)
    MEM_B(0XD3, ctx->r16) = ctx->r7;
    // 0x801D2848: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801D284C: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    // 0x801D2850: lw          $t2, -0x39D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39D8);
    // 0x801D2854: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x801D2858: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x801D285C: sb          $zero, 0x5($t2)
    MEM_B(0X5, ctx->r10) = 0;
    // 0x801D2860: addiu       $t5, $zero, 0x1C
    ctx->r13 = ADD32(0, 0X1C);
    // 0x801D2864: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x801D2868: addiu       $t8, $zero, 0xFA0
    ctx->r24 = ADD32(0, 0XFA0);
    // 0x801D286C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801D2870: sb          $t3, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r11;
    // 0x801D2874: sb          $t4, 0x92($s0)
    MEM_B(0X92, ctx->r16) = ctx->r12;
    // 0x801D2878: sb          $t5, 0x93($s0)
    MEM_B(0X93, ctx->r16) = ctx->r13;
    // 0x801D287C: sh          $t9, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r25;
    // 0x801D2880: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x801D2884: sb          $t6, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r14;
    // 0x801D2888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D288C: jal         0x801D4828
    // 0x801D2890: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_801D4828_590738(rdram, ctx);
        goto after_0;
    // 0x801D2890: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x801D2894: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x801D2898: lbu         $t1, 0x70($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X70);
    // 0x801D289C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801D28A0: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x801D28A4: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x801D28A8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801D28AC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x801D28B0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801D28B4: addiu       $t4, $t4, -0x36E4
    ctx->r12 = ADD32(ctx->r12, -0X36E4);
    // 0x801D28B8: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x801D28BC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D28C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801D28C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D28C8: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801D28CC: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D28D0: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x801D28D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D28D8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D28DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D28E0: lhu         $t5, 0xC($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XC);
    // 0x801D28E4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801D28E8: sh          $t5, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r13;
    // 0x801D28EC: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801D28F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801D28F4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801D28F8: nop

    // 0x801D28FC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D2900: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801D2904: nop

    // 0x801D2908: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801D290C: beq         $v1, $zero, L_801D2958
    if (ctx->r3 == 0) {
        // 0x801D2910: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_801D2958;
    }
    // 0x801D2910: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D2914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2918: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D291C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D2920: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801D2924: nop

    // 0x801D2928: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801D292C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801D2930: nop

    // 0x801D2934: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801D2938: bne         $v1, $zero, L_801D2950
    if (ctx->r3 != 0) {
        // 0x801D293C: nop
    
            goto L_801D2950;
    }
    // 0x801D293C: nop

    // 0x801D2940: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801D2944: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D2948: b           L_801D2968
    // 0x801D294C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_801D2968;
    // 0x801D294C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_801D2950:
    // 0x801D2950: b           L_801D2968
    // 0x801D2954: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_801D2968;
    // 0x801D2954: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_801D2958:
    // 0x801D2958: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801D295C: nop

    // 0x801D2960: bltz        $v1, L_801D2950
    if (SIGNED(ctx->r3) < 0) {
        // 0x801D2964: nop
    
            goto L_801D2950;
    }
    // 0x801D2964: nop

L_801D2968:
    // 0x801D2968: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
    // 0x801D296C: sh          $v1, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r3;
    // 0x801D2970: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x801D2974: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801D2978: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x801D297C: lhu         $a0, 0x94($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X94);
    // 0x801D2980: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x801D2984: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D2988: jal         0x80003F30
    // 0x801D298C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x801D298C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x801D2990: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D2994: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D2998: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D299C: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
    // 0x801D29A0: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x801D29A4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x801D29A8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x801D29AC: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801D29B0: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x801D29B4: jal         0x8001D718
    // 0x801D29B8: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_2;
    // 0x801D29B8: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_2:
    // 0x801D29BC: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D29C0: jal         0x80003A94
    // 0x801D29C4: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D29C4: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    after_3:
    // 0x801D29C8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D29CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D29D0: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D29D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D29D8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801D29DC: addiu       $v1, $v1, -0x2E34
    ctx->r3 = ADD32(ctx->r3, -0X2E34);
    // 0x801D29E0: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x801D29E4: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x801D29E8: bc1tl       L_801D2A0C
    if (c1cs) {
        // 0x801D29EC: lbu         $t3, 0xBC($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XBC);
            goto L_801D2A0C;
    }
    goto skip_0;
    // 0x801D29EC: lbu         $t3, 0xBC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XBC);
    skip_0:
    // 0x801D29F0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x801D29F4: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801D29F8: addiu       $t1, $t1, 0x628C
    ctx->r9 = ADD32(ctx->r9, 0X628C);
    // 0x801D29FC: bnel        $t1, $t0, L_801D2A0C
    if (ctx->r9 != ctx->r8) {
        // 0x801D2A00: lbu         $t3, 0xBC($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XBC);
            goto L_801D2A0C;
    }
    goto skip_1;
    // 0x801D2A00: lbu         $t3, 0xBC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XBC);
    skip_1:
    // 0x801D2A04: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x801D2A08: lbu         $t3, 0xBC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XBC);
L_801D2A0C:
    // 0x801D2A0C: lhu         $t5, 0x66($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X66);
    // 0x801D2A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2A14: sll         $t4, $t3, 13
    ctx->r12 = S32(ctx->r11 << 13);
    // 0x801D2A18: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x801D2A1C: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
    // 0x801D2A20: swc1        $f2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f2.u32l;
    // 0x801D2A24: swc1        $f2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f2.u32l;
    // 0x801D2A28: swc1        $f2, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f2.u32l;
    // 0x801D2A2C: lbu         $t8, 0xBC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XBC);
    // 0x801D2A30: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801D2A34: sra         $t6, $t8, 3
    ctx->r14 = S32(SIGNED(ctx->r24) >> 3);
    // 0x801D2A38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D2A3C: addu        $t9, $sp, $t7
    ctx->r25 = ADD32(ctx->r29, ctx->r15);
    // 0x801D2A40: lw          $t9, 0x64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X64);
    // 0x801D2A44: jalr        $t9
    // 0x801D2A48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801D2A48: nop

    after_4:
    // 0x801D2A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2A50: jal         0x801D2F64
    // 0x801D2A54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_801D2F64_58EE74(rdram, ctx);
        goto after_5;
    // 0x801D2A54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x801D2A58: addiu       $t1, $zero, 0x88
    ctx->r9 = ADD32(0, 0X88);
    // 0x801D2A5C: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x801D2A60: addiu       $t2, $zero, 0x25
    ctx->r10 = ADD32(0, 0X25);
    // 0x801D2A64: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x801D2A68: addiu       $t4, $zero, 0x1388
    ctx->r12 = ADD32(0, 0X1388);
    // 0x801D2A6C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x801D2A70: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D2A74: sb          $t1, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r9;
    // 0x801D2A78: sb          $t0, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r8;
    // 0x801D2A7C: sb          $t2, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = ctx->r10;
    // 0x801D2A80: sh          $t3, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r11;
    // 0x801D2A84: sh          $t4, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r12;
    // 0x801D2A88: sh          $t5, 0xB6($s0)
    MEM_H(0XB6, ctx->r16) = ctx->r13;
    // 0x801D2A8C: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x801D2A90: sb          $zero, 0x61($s0)
    MEM_B(0X61, ctx->r16) = 0;
    // 0x801D2A94: addiu       $a1, $a1, 0x48E0
    ctx->r5 = ADD32(ctx->r5, 0X48E0);
    // 0x801D2A98: jal         0x80035214
    // 0x801D2A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035214_35E14(rdram, ctx);
        goto after_6;
    // 0x801D2A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D2AA0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801D2AA4: addiu       $a1, $a1, -0x7A50
    ctx->r5 = ADD32(ctx->r5, -0X7A50);
    // 0x801D2AA8: jal         0x80035244
    // 0x801D2AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_7;
    // 0x801D2AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801D2AB0: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801D2AB4: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801D2AB8: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801D2ABC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D2AC0: lw          $t6, 0x5C($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X5C);
    // 0x801D2AC4: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
    // 0x801D2AC8: lui         $s2, 0x80
    ctx->r18 = S32(0X80 << 16);
    // 0x801D2ACC: sb          $zero, 0x78($t6)
    MEM_B(0X78, ctx->r14) = 0;
    // 0x801D2AD0: sh          $t9, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r25;
    // 0x801D2AD4: sh          $t9, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r25;
    // 0x801D2AD8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_801D2ADC:
    // 0x801D2ADC: sb          $zero, 0x62($s0)
    MEM_B(0X62, ctx->r16) = 0;
    // 0x801D2AE0: beq         $v0, $zero, L_801D2AF8
    if (ctx->r2 == 0) {
        // 0x801D2AE4: and         $t1, $v0, $s2
        ctx->r9 = ctx->r2 & ctx->r18;
            goto L_801D2AF8;
    }
    // 0x801D2AE4: and         $t1, $v0, $s2
    ctx->r9 = ctx->r2 & ctx->r18;
    // 0x801D2AE8: bne         $t1, $zero, L_801D2AF8
    if (ctx->r9 != 0) {
        // 0x801D2AEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D2AF8;
    }
    // 0x801D2AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2AF0: jalr        $v0
    // 0x801D2AF4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x801D2AF4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_8:
L_801D2AF8:
    // 0x801D2AF8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x801D2AFC: beq         $v0, $zero, L_801D2B14
    if (ctx->r2 == 0) {
        // 0x801D2B00: and         $t0, $v0, $s2
        ctx->r8 = ctx->r2 & ctx->r18;
            goto L_801D2B14;
    }
    // 0x801D2B00: and         $t0, $v0, $s2
    ctx->r8 = ctx->r2 & ctx->r18;
    // 0x801D2B04: bne         $t0, $zero, L_801D2B14
    if (ctx->r8 != 0) {
        // 0x801D2B08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D2B14;
    }
    // 0x801D2B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2B0C: jalr        $v0
    // 0x801D2B10: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x801D2B10: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_9:
L_801D2B14:
    // 0x801D2B14: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x801D2B18: beq         $v0, $zero, L_801D2B30
    if (ctx->r2 == 0) {
        // 0x801D2B1C: and         $t2, $v0, $s2
        ctx->r10 = ctx->r2 & ctx->r18;
            goto L_801D2B30;
    }
    // 0x801D2B1C: and         $t2, $v0, $s2
    ctx->r10 = ctx->r2 & ctx->r18;
    // 0x801D2B20: bne         $t2, $zero, L_801D2B30
    if (ctx->r10 != 0) {
        // 0x801D2B24: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D2B30;
    }
    // 0x801D2B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2B28: jalr        $v0
    // 0x801D2B2C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x801D2B2C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_10:
L_801D2B30:
    // 0x801D2B30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D2B34: bnel        $s1, $s3, L_801D2ADC
    if (ctx->r17 != ctx->r19) {
        // 0x801D2B38: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_801D2ADC;
    }
    goto skip_2;
    // 0x801D2B38: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x801D2B3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D2B40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D2B44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D2B48: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2B4C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801D2B50: jr          $ra
    // 0x801D2B54: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801D2B54: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801E5208_5A1118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5208: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E520C: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801E5210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5218: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E521C: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801E5220: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5224: lhu         $t8, 0x30($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X30);
    // 0x801E5228: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801E522C: sh          $t9, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r25;
    // 0x801E5230: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5234: lhu         $t1, 0x30($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X30);
    // 0x801E5238: slti        $at, $t1, 0x3C
    ctx->r1 = SIGNED(ctx->r9) < 0X3C ? 1 : 0;
    // 0x801E523C: bnel        $at, $zero, L_801E5268
    if (ctx->r1 != 0) {
        // 0x801E5240: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5268;
    }
    goto skip_0;
    // 0x801E5240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E5244: jal         0x801E5090
    // 0x801E5248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E5090_5A0FA0(rdram, ctx);
        goto after_0;
    // 0x801E5248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E524C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E5250: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E5254: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801E5258: sb          $t2, -0x3AB3($at)
    MEM_B(-0X3AB3, ctx->r1) = ctx->r10;
    // 0x801E525C: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5260: sh          $zero, 0x86($t3)
    MEM_H(0X86, ctx->r11) = 0;
    // 0x801E5264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5268:
    // 0x801E5268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E526C: jr          $ra
    // 0x801E5270: nop

    TRACE_RETURN()
    return;
    // 0x801E5270: nop

;}
RECOMP_FUNC void func_801EEDB0_5AACC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEDB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EEDB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEDB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EEDBC: jal         0x801EEDF8
    // 0x801EEDC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801EEDC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801EEDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEDC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EEDCC: jr          $ra
    // 0x801EEDD0: nop

    TRACE_RETURN()
    return;
    // 0x801EEDD0: nop

;}
RECOMP_FUNC void func_801DE374_59A284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DE378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE37C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DE380: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE388: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x801DE38C: bne         $t6, $at, L_801DE3BC
    if (ctx->r14 != ctx->r1) {
        // 0x801DE390: addiu       $a2, $zero, 0x69
        ctx->r6 = ADD32(0, 0X69);
            goto L_801DE3BC;
    }
    // 0x801DE390: addiu       $a2, $zero, 0x69
    ctx->r6 = ADD32(0, 0X69);
    // 0x801DE394: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801DE398: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x801DE39C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801DE3A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DE3A4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x801DE3A8: addiu       $a2, $zero, 0x69
    ctx->r6 = ADD32(0, 0X69);
    // 0x801DE3AC: jal         0x801F5B04
    // 0x801DE3B0: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801DE3B0: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    after_0:
    // 0x801DE3B4: b           L_801DE3C8
    // 0x801DE3B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE3C8;
    // 0x801DE3B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE3BC:
    // 0x801DE3BC: jal         0x801E4078
    // 0x801DE3C0: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    func_801E4078_59FF88(rdram, ctx);
        goto after_1;
    // 0x801DE3C0: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    after_1:
    // 0x801DE3C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE3C8:
    // 0x801DE3C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE3CC: jr          $ra
    // 0x801DE3D0: nop

    TRACE_RETURN()
    return;
    // 0x801DE3D0: nop

;}
RECOMP_FUNC void func_801F1BD0_5ADAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1BD0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F1BD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1BD8: lwc1        $f0, -0x412C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X412C);
    // 0x801F1BDC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F1BE0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F1BE4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F1BE8: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801F1BEC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801F1BF0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F1BF4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F1BF8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F1BFC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F1C00: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801F1C04: addiu       $a1, $a1, 0x74C
    ctx->r5 = ADD32(ctx->r5, 0X74C);
    // 0x801F1C08: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801F1C0C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F1C10: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801F1C14: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F1C18: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801F1C1C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F1C20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1C24: addiu       $a2, $t6, 0xA4
    ctx->r6 = ADD32(ctx->r14, 0XA4);
    // 0x801F1C28: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801F1C2C: lhu         $t0, 0x14($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14);
    // 0x801F1C30: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x801F1C34: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1C38: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801F1C3C: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x801F1C40: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x801F1C44: addiu       $t4, $zero, 0x152
    ctx->r12 = ADD32(0, 0X152);
    // 0x801F1C48: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801F1C4C: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x801F1C50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F1C54: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x801F1C58: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x801F1C5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F1C60: or          $a2, $t8, $at
    ctx->r6 = ctx->r24 | ctx->r1;
    // 0x801F1C64: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801F1C68: jal         0x80034680
    // 0x801F1C6C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801F1C6C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_0:
    // 0x801F1C70: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F1C74: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1C78: addiu       $a2, $a2, 0x4AB0
    ctx->r6 = ADD32(ctx->r6, 0X4AB0);
    // 0x801F1C7C: jal         0x801E8820
    // 0x801F1C80: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801F1C80: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x801F1C84: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801F1C88: addiu       $t5, $zero, 0x120
    ctx->r13 = ADD32(0, 0X120);
    // 0x801F1C8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801F1C90: sh          $t5, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r13;
    // 0x801F1C94: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x801F1C98: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801F1C9C: lbu         $t6, 0x90($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X90);
    // 0x801F1CA0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801F1CA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801F1CA8: lw          $t9, -0x2DE0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2DE0);
    // 0x801F1CAC: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x801F1CB0: sw          $t9, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r25;
    // 0x801F1CB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F1CB8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F1CBC: jr          $ra
    // 0x801F1CC0: nop

    TRACE_RETURN()
    return;
    // 0x801F1CC0: nop

;}
RECOMP_FUNC void func_801F63B8_5B22C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F63B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F63BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F63C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F63C4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x801F63C8: jal         0x801F6424
    // 0x801F63CC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_801F6424_5B2334(rdram, ctx);
        goto after_0;
    // 0x801F63CC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_0:
    // 0x801F63D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F63D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F63D8: jr          $ra
    // 0x801F63DC: nop

    TRACE_RETURN()
    return;
    // 0x801F63DC: nop

;}
RECOMP_FUNC void func_801F3C10_5AFB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3C10: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x801F3C14: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801F3C18: lw          $v1, -0x39FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39FC);
    // 0x801F3C1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F3C20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801F3C24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801F3C28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F3C2C: lw          $t6, 0x5C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X5C);
    // 0x801F3C30: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F3C34: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801F3C38: lw          $v0, 0xB4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XB4);
    // 0x801F3C3C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x801F3C40: beql        $v0, $zero, L_801F3C60
    if (ctx->r2 == 0) {
        // 0x801F3C44: lhu         $v0, 0x62($s2)
        ctx->r2 = MEM_HU(ctx->r18, 0X62);
            goto L_801F3C60;
    }
    goto skip_0;
    // 0x801F3C44: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    skip_0:
    // 0x801F3C48: beq         $a0, $v0, L_801F3C5C
    if (ctx->r4 == ctx->r2) {
        // 0x801F3C4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801F3C5C;
    }
    // 0x801F3C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F3C50: sb          $v0, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r2;
    // 0x801F3C54: b           L_801F3F94
    // 0x801F3C58: sb          $v0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r2;
        goto L_801F3F94;
    // 0x801F3C58: sb          $v0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r2;
L_801F3C5C:
    // 0x801F3C5C: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
L_801F3C60:
    // 0x801F3C60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F3C64: lui         $a2, 0xFFF
    ctx->r6 = S32(0XFFF << 16);
    // 0x801F3C68: beq         $v0, $zero, L_801F3C98
    if (ctx->r2 == 0) {
        // 0x801F3C6C: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_801F3C98;
    }
    // 0x801F3C6C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x801F3C70: slti        $v1, $v0, 0x4
    ctx->r3 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801F3C74: bne         $v1, $zero, L_801F3C8C
    if (ctx->r3 != 0) {
        // 0x801F3C78: sh          $t7, 0x62($s2)
        MEM_H(0X62, ctx->r18) = ctx->r15;
            goto L_801F3C8C;
    }
    // 0x801F3C78: sh          $t7, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r15;
    // 0x801F3C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F3C80: sb          $v0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r2;
    // 0x801F3C84: b           L_801F3F94
    // 0x801F3C88: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
        goto L_801F3F94;
    // 0x801F3C88: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
L_801F3C8C:
    // 0x801F3C8C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F3C90: b           L_801F3CB4
    // 0x801F3C94: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
        goto L_801F3CB4;
    // 0x801F3C94: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
L_801F3C98:
    // 0x801F3C98: lhu         $t8, 0x94($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X94);
    // 0x801F3C9C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F3CA0: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x801F3CA4: sh          $t8, 0xA0($s2)
    MEM_H(0XA0, ctx->r18) = ctx->r24;
    // 0x801F3CA8: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x801F3CAC: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x801F3CB0: swc1        $f4, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f4.u32l;
L_801F3CB4:
    // 0x801F3CB4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x801F3CB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3CBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F3CC0: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x801F3CC4: ori         $a2, $a2, 0xFF40
    ctx->r6 = ctx->r6 | 0XFF40;
    // 0x801F3CC8: sw          $t2, 0xA8($s2)
    MEM_W(0XA8, ctx->r18) = ctx->r10;
L_801F3CCC:
    // 0x801F3CCC: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x801F3CD0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x801F3CD4: addu        $t3, $s1, $v1
    ctx->r11 = ADD32(ctx->r17, ctx->r3);
    // 0x801F3CD8: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x801F3CDC: lw          $at, 0x34($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X34);
    // 0x801F3CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801F3CE4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801F3CE8: sw          $at, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->r1;
    // 0x801F3CEC: lw          $t7, 0x38($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X38);
    // 0x801F3CF0: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x801F3CF4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801F3CF8: bne         $at, $zero, L_801F3CCC
    if (ctx->r1 != 0) {
        // 0x801F3CFC: sw          $t7, 0x38($t3)
        MEM_W(0X38, ctx->r11) = ctx->r15;
            goto L_801F3CCC;
    }
    // 0x801F3CFC: sw          $t7, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r15;
    // 0x801F3D00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F3D04: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F3D08: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x801F3D0C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x801F3D10: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x801F3D14: sh          $zero, 0x88($sp)
    MEM_H(0X88, ctx->r29) = 0;
    // 0x801F3D18: sh          $zero, 0x86($sp)
    MEM_H(0X86, ctx->r29) = 0;
    // 0x801F3D1C: sh          $zero, 0x84($sp)
    MEM_H(0X84, ctx->r29) = 0;
    // 0x801F3D20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F3D24: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x801F3D28: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x801F3D2C: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x801F3D30: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
L_801F3D34:
    // 0x801F3D34: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x801F3D38: addu        $t1, $a0, $v1
    ctx->r9 = ADD32(ctx->r4, ctx->r3);
    // 0x801F3D3C: lw          $at, 0x34($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X34);
    // 0x801F3D40: addu        $t9, $s0, $v1
    ctx->r25 = ADD32(ctx->r16, ctx->r3);
    // 0x801F3D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801F3D48: sw          $at, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r1;
    // 0x801F3D4C: lw          $t6, 0x38($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X38);
    // 0x801F3D50: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x801F3D54: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x801F3D58: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x801F3D5C: bne         $at, $zero, L_801F3D34
    if (ctx->r1 != 0) {
        // 0x801F3D60: sw          $t6, 0x38($t9)
        MEM_W(0X38, ctx->r25) = ctx->r14;
            goto L_801F3D34;
    }
    // 0x801F3D60: sw          $t6, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r14;
    // 0x801F3D64: lw          $t5, 0xA8($s2)
    ctx->r13 = MEM_W(ctx->r18, 0XA8);
    // 0x801F3D68: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801F3D6C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801F3D70: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x801F3D74: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801F3D78: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801F3D7C: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x801F3D80: lwc1        $f6, 0x28($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801F3D84: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x801F3D88: lhu         $t4, 0x62($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X62);
    // 0x801F3D8C: bnel        $t4, $zero, L_801F3EF0
    if (ctx->r12 != 0) {
        // 0x801F3D90: lbu         $t7, 0xA6($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0XA6);
            goto L_801F3EF0;
    }
    goto skip_1;
    // 0x801F3D90: lbu         $t7, 0xA6($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XA6);
    skip_1:
    // 0x801F3D94: jal         0x8001B918
    // 0x801F3D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801F3D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x801F3D9C: bne         $v0, $zero, L_801F3E30
    if (ctx->r2 != 0) {
        // 0x801F3DA0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801F3E30;
    }
    // 0x801F3DA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F3DA4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F3DA8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801F3DAC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801F3DB0: addiu       $a2, $a2, 0x5108
    ctx->r6 = ADD32(ctx->r6, 0X5108);
    // 0x801F3DB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F3DB8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F3DBC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801F3DC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801F3DC4: jal         0x801F3FAC
    // 0x801F3DC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801F3FAC_5AFEBC(rdram, ctx);
        goto after_1;
    // 0x801F3DC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x801F3DCC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F3DD0: beq         $v0, $zero, L_801F3DF8
    if (ctx->r2 == 0) {
        // 0x801F3DD4: addiu       $t0, $t0, -0x39F4
        ctx->r8 = ADD32(ctx->r8, -0X39F4);
            goto L_801F3DF8;
    }
    // 0x801F3DD4: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x801F3DD8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801F3DDC: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x801F3DE0: lw          $t1, 0x5C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X5C);
    // 0x801F3DE4: sw          $zero, 0xB4($t1)
    MEM_W(0XB4, ctx->r9) = 0;
    // 0x801F3DE8: lhu         $t6, 0x62($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X62);
    // 0x801F3DEC: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x801F3DF0: b           L_801F3E18
    // 0x801F3DF4: sh          $t3, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r11;
        goto L_801F3E18;
    // 0x801F3DF4: sh          $t3, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r11;
L_801F3DF8:
    // 0x801F3DF8: lbu         $t5, 0xA6($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XA6);
    // 0x801F3DFC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801F3E00: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x801F3E04: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801F3E08: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x801F3E0C: bne         $at, $zero, L_801F3E18
    if (ctx->r1 != 0) {
        // 0x801F3E10: sb          $t7, 0xA6($s2)
        MEM_B(0XA6, ctx->r18) = ctx->r15;
            goto L_801F3E18;
    }
    // 0x801F3E10: sb          $t7, 0xA6($s2)
    MEM_B(0XA6, ctx->r18) = ctx->r15;
    // 0x801F3E14: sb          $t4, 0xA6($s2)
    MEM_B(0XA6, ctx->r18) = ctx->r12;
L_801F3E18:
    // 0x801F3E18: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x801F3E1C: addiu       $t2, $t2, -0x1E90
    ctx->r10 = ADD32(ctx->r10, -0X1E90);
    // 0x801F3E20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F3E24: addu        $t9, $t2, $at
    ctx->r25 = ADD32(ctx->r10, ctx->r1);
    // 0x801F3E28: b           L_801F3EEC
    // 0x801F3E2C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
        goto L_801F3EEC;
    // 0x801F3E2C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
L_801F3E30:
    // 0x801F3E30: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F3E34: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801F3E38: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801F3E3C: addiu       $a2, $a2, 0x5108
    ctx->r6 = ADD32(ctx->r6, 0X5108);
    // 0x801F3E40: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F3E44: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801F3E48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801F3E4C: jal         0x801F3FAC
    // 0x801F3E50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801F3FAC_5AFEBC(rdram, ctx);
        goto after_2;
    // 0x801F3E50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x801F3E54: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F3E58: bne         $v0, $zero, L_801F3E98
    if (ctx->r2 != 0) {
        // 0x801F3E5C: addiu       $t0, $t0, -0x39F4
        ctx->r8 = ADD32(ctx->r8, -0X39F4);
            goto L_801F3E98;
    }
    // 0x801F3E5C: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
    // 0x801F3E60: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F3E64: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801F3E68: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x801F3E6C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F3E70: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801F3E74: addiu       $a2, $a2, 0x51C8
    ctx->r6 = ADD32(ctx->r6, 0X51C8);
    // 0x801F3E78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801F3E7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F3E80: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801F3E84: jal         0x801F3FAC
    // 0x801F3E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_801F3FAC_5AFEBC(rdram, ctx);
        goto after_3;
    // 0x801F3E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801F3E8C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F3E90: beq         $v0, $zero, L_801F3EB8
    if (ctx->r2 == 0) {
        // 0x801F3E94: addiu       $t0, $t0, -0x39F4
        ctx->r8 = ADD32(ctx->r8, -0X39F4);
            goto L_801F3EB8;
    }
    // 0x801F3E94: addiu       $t0, $t0, -0x39F4
    ctx->r8 = ADD32(ctx->r8, -0X39F4);
L_801F3E98:
    // 0x801F3E98: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F3E9C: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x801F3EA0: lw          $t7, 0x5C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X5C);
    // 0x801F3EA4: sw          $zero, 0xB4($t7)
    MEM_W(0XB4, ctx->r15) = 0;
    // 0x801F3EA8: lhu         $t8, 0x62($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X62);
    // 0x801F3EAC: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x801F3EB0: b           L_801F3ED8
    // 0x801F3EB4: sh          $t4, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r12;
        goto L_801F3ED8;
    // 0x801F3EB4: sh          $t4, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r12;
L_801F3EB8:
    // 0x801F3EB8: lbu         $t2, 0xA6($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0XA6);
    // 0x801F3EBC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801F3EC0: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x801F3EC4: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x801F3EC8: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x801F3ECC: bne         $at, $zero, L_801F3ED8
    if (ctx->r1 != 0) {
        // 0x801F3ED0: sb          $t9, 0xA6($s2)
        MEM_B(0XA6, ctx->r18) = ctx->r25;
            goto L_801F3ED8;
    }
    // 0x801F3ED0: sb          $t9, 0xA6($s2)
    MEM_B(0XA6, ctx->r18) = ctx->r25;
    // 0x801F3ED4: sb          $t6, 0xA6($s2)
    MEM_B(0XA6, ctx->r18) = ctx->r14;
L_801F3ED8:
    // 0x801F3ED8: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x801F3EDC: addiu       $t3, $t3, -0x1E38
    ctx->r11 = ADD32(ctx->r11, -0X1E38);
    // 0x801F3EE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F3EE4: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x801F3EE8: sw          $t5, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r13;
L_801F3EEC:
    // 0x801F3EEC: lbu         $t7, 0xA6($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XA6);
L_801F3EF0:
    // 0x801F3EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F3EF4: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x801F3EF8: bne         $t7, $zero, L_801F3F0C
    if (ctx->r15 != 0) {
        // 0x801F3EFC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801F3F0C;
    }
    // 0x801F3EFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F3F00: sb          $v0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r2;
    // 0x801F3F04: b           L_801F3F94
    // 0x801F3F08: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
        goto L_801F3F94;
    // 0x801F3F08: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
L_801F3F0C:
    // 0x801F3F0C: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x801F3F10: jal         0x8001C970
    // 0x801F3F14: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    func_8001C970_1D570(rdram, ctx);
        goto after_4;
    // 0x801F3F14: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x801F3F18: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F3F1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3F20: ldc1        $f0, -0x3E18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X3E18);
    // 0x801F3F24: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F3F28: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801F3F2C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801F3F30: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801F3F34: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F3F38: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801F3F3C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801F3F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F3F44: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F3F48: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801F3F4C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F3F50: swc1        $f18, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f18.u32l;
    // 0x801F3F54: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F3F58: swc1        $f10, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f10.u32l;
    // 0x801F3F5C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801F3F60: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F3F64: swc1        $f6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f6.u32l;
    // 0x801F3F68: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x801F3F6C: lhu         $a3, 0xA0($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0XA0);
    // 0x801F3F70: lw          $a1, 0x5C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X5C);
    // 0x801F3F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F3F78: jal         0x8001DB04
    // 0x801F3F7C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    func_8001DB04_1E704(rdram, ctx);
        goto after_5;
    // 0x801F3F7C: addiu       $a1, $a1, 0x3C
    ctx->r5 = ADD32(ctx->r5, 0X3C);
    after_5:
    // 0x801F3F80: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801F3F84: addiu       $t2, $t2, 0x5100
    ctx->r10 = ADD32(ctx->r10, 0X5100);
    // 0x801F3F88: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F3F8C: or          $t9, $t2, $at
    ctx->r25 = ctx->r10 | ctx->r1;
    // 0x801F3F90: sw          $t9, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r25;
L_801F3F94:
    // 0x801F3F94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F3F98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F3F9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801F3FA0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801F3FA4: jr          $ra
    // 0x801F3FA8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    TRACE_RETURN()
    return;
    // 0x801F3FA8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_801D54C0_5913D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D54C0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801D54C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D54C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D54CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D54D0: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x801D54D4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x801D54D8: addiu       $t9, $a1, 0x60
    ctx->r25 = ADD32(ctx->r5, 0X60);
L_801D54DC:
    // 0x801D54DC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801D54E0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801D54E4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D54E8: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801D54EC: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801D54F0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801D54F4: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801D54F8: bne         $t0, $t9, L_801D54DC
    if (ctx->r8 != ctx->r25) {
        // 0x801D54FC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801D54DC;
    }
    // 0x801D54FC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801D5500: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D5504: jal         0x801D55E0
    // 0x801D5508: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    func_801D55E0_5914F0(rdram, ctx);
        goto after_0;
    // 0x801D5508: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D550C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5510: lwc1        $f4, -0x33F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X33F4);
    // 0x801D5514: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D5518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D551C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801D5520: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5524: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D5528: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D552C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5530: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x801D5534: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D5538: jal         0x801D72D4
    // 0x801D553C: swc1        $f16, -0x2E18($at)
    MEM_W(-0X2E18, ctx->r1) = ctx->f16.u32l;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_1;
    // 0x801D553C: swc1        $f16, -0x2E18($at)
    MEM_W(-0X2E18, ctx->r1) = ctx->f16.u32l;
    after_1:
    // 0x801D5540: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x801D5544: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801D5548: addiu       $t1, $t1, 0x65FC
    ctx->r9 = ADD32(ctx->r9, 0X65FC);
    // 0x801D554C: beq         $t1, $v0, L_801D555C
    if (ctx->r9 == ctx->r2) {
        // 0x801D5550: lui         $t2, 0x801D
        ctx->r10 = S32(0X801D << 16);
            goto L_801D555C;
    }
    // 0x801D5550: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801D5554: addiu       $t2, $t2, 0x650C
    ctx->r10 = ADD32(ctx->r10, 0X650C);
    // 0x801D5558: bne         $t2, $v0, L_801D5568
    if (ctx->r10 != ctx->r2) {
        // 0x801D555C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D5568;
    }
L_801D555C:
    // 0x801D555C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5560: jal         0x801D7720
    // 0x801D5564: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_801D7720_593630(rdram, ctx);
        goto after_2;
    // 0x801D5564: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
L_801D5568:
    // 0x801D5568: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D556C: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D5570: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5574: ldc1        $f18, -0x5380($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5380);
    // 0x801D5578: lwc1        $f0, 0x70($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801D557C: lwc1        $f2, 0x68($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X68);
    // 0x801D5580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5584: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D5588: nop

    // 0x801D558C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D5590: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5594: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D5598: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x801D559C: nop

    // 0x801D55A0: bc1f        L_801D55AC
    if (!c1cs) {
        // 0x801D55A4: nop
    
            goto L_801D55AC;
    }
    // 0x801D55A4: nop

    // 0x801D55A8: sb          $zero, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = 0;
L_801D55AC:
    // 0x801D55AC: jal         0x801D7900
    // 0x801D55B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_801D7900_593810(rdram, ctx);
        goto after_3;
    // 0x801D55B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x801D55B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D55B8: sh          $v0, -0x2E12($at)
    MEM_H(-0X2E12, ctx->r1) = ctx->r2;
    // 0x801D55BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D55C0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801D55C4: jal         0x801D80F4
    // 0x801D55C8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_801D80F4_594004(rdram, ctx);
        goto after_4;
    // 0x801D55C8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x801D55CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D55D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D55D4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x801D55D8: jr          $ra
    // 0x801D55DC: nop

    TRACE_RETURN()
    return;
    // 0x801D55DC: nop

;}
RECOMP_FUNC void func_801FB2A4_5B71B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB2A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801FB2A8: addiu       $v0, $v0, 0x4CC0
    ctx->r2 = ADD32(ctx->r2, 0X4CC0);
    // 0x801FB2AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FB2B0: sh          $zero, 0x30F2($v0)
    MEM_H(0X30F2, ctx->r2) = 0;
    // 0x801FB2B4: sh          $zero, 0x30F4($v0)
    MEM_H(0X30F4, ctx->r2) = 0;
    // 0x801FB2B8: sh          $zero, 0x30F6($v0)
    MEM_H(0X30F6, ctx->r2) = 0;
    // 0x801FB2BC: sh          $zero, 0x30F8($v0)
    MEM_H(0X30F8, ctx->r2) = 0;
    // 0x801FB2C0: swc1        $f0, 0x30FC($v0)
    MEM_W(0X30FC, ctx->r2) = ctx->f0.u32l;
    // 0x801FB2C4: swc1        $f0, 0x3100($v0)
    MEM_W(0X3100, ctx->r2) = ctx->f0.u32l;
    // 0x801FB2C8: jr          $ra
    // 0x801FB2CC: swc1        $f0, 0x3104($v0)
    MEM_W(0X3104, ctx->r2) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801FB2CC: swc1        $f0, 0x3104($v0)
    MEM_W(0X3104, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801F68B4_5B27C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F68B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F68B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F68BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F68C0: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F68C4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F68C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F68CC: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F68D0: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F68D4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F68D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F68DC: jalr        $t9
    // 0x801F68E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F68E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801F68E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F68E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F68EC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F68F0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F68F4: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801F68F8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F68FC: nop

    // 0x801F6900: bc1fl       L_801F6920
    if (!c1cs) {
        // 0x801F6904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6920;
    }
    goto skip_0;
    // 0x801F6904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6908: jal         0x801F6FE8
    // 0x801F690C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F6FE8_5B2EF8(rdram, ctx);
        goto after_1;
    // 0x801F690C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F6910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6914: jal         0x801DACDC
    // 0x801F6918: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6918: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_2:
    // 0x801F691C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6920:
    // 0x801F6920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6924: jr          $ra
    // 0x801F6928: nop

    TRACE_RETURN()
    return;
    // 0x801F6928: nop

;}
RECOMP_FUNC void func_801DD5C0_5994D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD5C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801DD5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD5D0: sb          $a2, 0x60($a0)
    MEM_B(0X60, ctx->r4) = ctx->r6;
    // 0x801DD5D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801DD5D8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801DD5DC: sw          $t6, -0x3A24($at)
    MEM_W(-0X3A24, ctx->r1) = ctx->r14;
    // 0x801DD5E0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DD5E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD5EC: sb          $v0, 0x69($t7)
    MEM_B(0X69, ctx->r15) = ctx->r2;
    // 0x801DD5F0: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD5F4: addiu       $t3, $zero, 0xBA
    ctx->r11 = ADD32(0, 0XBA);
    // 0x801DD5F8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DD5FC: sh          $zero, 0x86($t8)
    MEM_H(0X86, ctx->r24) = 0;
    // 0x801DD600: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD604: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
    // 0x801DD608: addiu       $a1, $a1, 0x944
    ctx->r5 = ADD32(ctx->r5, 0X944);
    // 0x801DD60C: sh          $zero, 0x30($t9)
    MEM_H(0X30, ctx->r25) = 0;
    // 0x801DD610: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD614: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801DD618: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801DD61C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801DD620: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801DD624: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x801DD628: lbu         $t1, 0x30($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X30);
    // 0x801DD62C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801DD630: sb          $v0, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r2;
    // 0x801DD634: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x801DD638: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x801DD63C: jal         0x8003522C
    // 0x801DD640: sb          $t3, 0xCC($a0)
    MEM_B(0XCC, ctx->r4) = ctx->r11;
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801DD640: sb          $t3, 0xCC($a0)
    MEM_B(0XCC, ctx->r4) = ctx->r11;
    after_0:
    // 0x801DD644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD64C: jr          $ra
    // 0x801DD650: nop

    TRACE_RETURN()
    return;
    // 0x801DD650: nop

;}
RECOMP_FUNC void func_801F56B8_5B15C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F56B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F56BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F56C0: lui         $a1, 0x3A99
    ctx->r5 = S32(0X3A99 << 16);
    // 0x801F56C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F56C8: lui         $a3, 0x3CCC
    ctx->r7 = S32(0X3CCC << 16);
    // 0x801F56CC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F56D0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F56D4: jal         0x801F5734
    // 0x801F56D8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_801F5734_5B1644(rdram, ctx);
        goto after_0;
    // 0x801F56D8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_0:
    // 0x801F56DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F56E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F56E4: jr          $ra
    // 0x801F56E8: nop

    TRACE_RETURN()
    return;
    // 0x801F56E8: nop

;}
RECOMP_FUNC void func_801E7EE0_5A3DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7EE0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E7EE4: lw          $v1, -0x39FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39FC);
    // 0x801E7EE8: lbu         $a0, 0xCC($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XCC);
    // 0x801E7EEC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x801E7EF0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801E7EF4: beq         $v0, $zero, L_801E7F00
    if (ctx->r2 == 0) {
        // 0x801E7EF8: nop
    
            goto L_801E7F00;
    }
    // 0x801E7EF8: nop

    // 0x801E7EFC: slti        $v0, $a0, 0xC
    ctx->r2 = SIGNED(ctx->r4) < 0XC ? 1 : 0;
L_801E7F00:
    // 0x801E7F00: jr          $ra
    // 0x801E7F04: nop

    TRACE_RETURN()
    return;
    // 0x801E7F04: nop

;}
RECOMP_FUNC void func_801FA128_5B6038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA128: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801FA12C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801FA130: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801FA134: sh          $zero, 0x2DCF($at)
    MEM_H(0X2DCF, ctx->r1) = 0;
    // 0x801FA138: sh          $zero, 0x2DD3($at)
    MEM_H(0X2DD3, ctx->r1) = 0;
    // 0x801FA13C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801FA140: sw          $zero, -0x7608($at)
    MEM_W(-0X7608, ctx->r1) = 0;
    // 0x801FA144: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801FA148: jr          $ra
    // 0x801FA14C: sw          $zero, -0x3388($at)
    MEM_W(-0X3388, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x801FA14C: sw          $zero, -0x3388($at)
    MEM_W(-0X3388, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801F8FD0_5B4EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8FD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F8FD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F8FD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F8FDC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8FE0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801F8FE4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801F8FE8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F8FEC: jal         0x801D23C0
    // 0x801F8FF0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_801D23C0_58E2D0(rdram, ctx);
        goto after_0;
    // 0x801F8FF0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801F8FF4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801F8FF8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x801F8FFC: addiu       $t2, $t2, -0x3340
    ctx->r10 = ADD32(ctx->r10, -0X3340);
    // 0x801F9000: lw          $t1, 0x2C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X2C);
    // 0x801F9004: addiu       $t0, $t2, 0x7FFF
    ctx->r8 = ADD32(ctx->r10, 0X7FFF);
    // 0x801F9008: lw          $t0, 0x2E2D($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2E2D);
    // 0x801F900C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801F9010: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801F9014: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F9018: and         $t6, $t1, $at
    ctx->r14 = ctx->r9 & ctx->r1;
    // 0x801F901C: beq         $t0, $zero, L_801F9078
    if (ctx->r8 == 0) {
        // 0x801F9020: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_801F9078;
    }
    // 0x801F9020: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x801F9024: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801F9028: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F902C: bgez        $t0, L_801F9044
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801F9030: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801F9044;
    }
    // 0x801F9030: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F9034: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F9038: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F903C: nop

    // 0x801F9040: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801F9044:
    // 0x801F9044: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x801F9048: addiu       $a1, $t2, 0x7FFF
    ctx->r5 = ADD32(ctx->r10, 0X7FFF);
    // 0x801F904C: lhu         $a1, 0x2E31($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X2E31);
    // 0x801F9050: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x801F9054: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x801F9058: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801F905C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801F9060: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x801F9064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F9068: jal         0x80033898
    // 0x801F906C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801F906C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x801F9070: b           L_801F912C
    // 0x801F9074: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
        goto L_801F912C;
    // 0x801F9074: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
L_801F9078:
    // 0x801F9078: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F907C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F9080: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F9084: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F9088: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F908C: lbu         $t9, 0x2DFA($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2DFA);
    // 0x801F9090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F9094: bne         $t9, $at, L_801F90B8
    if (ctx->r25 != ctx->r1) {
        // 0x801F9098: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_801F90B8;
    }
    // 0x801F9098: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F909C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F90A0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801F90A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F90A8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F90AC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801F90B0: b           L_801F912C
    // 0x801F90B4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_801F912C;
    // 0x801F90B4: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_801F90B8:
    // 0x801F90B8: lbu         $v0, 0x2DE4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2DE4);
    // 0x801F90BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F90C0: beql        $v0, $zero, L_801F911C
    if (ctx->r2 == 0) {
        // 0x801F90C4: lui         $at, 0xC220
        ctx->r1 = S32(0XC220 << 16);
            goto L_801F911C;
    }
    goto skip_0;
    // 0x801F90C4: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    skip_0:
    // 0x801F90C8: beq         $v0, $at, L_801F90E0
    if (ctx->r2 == ctx->r1) {
        // 0x801F90CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F90E0;
    }
    // 0x801F90CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F90D0: beql        $v0, $at, L_801F9104
    if (ctx->r2 == ctx->r1) {
        // 0x801F90D4: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_801F9104;
    }
    goto skip_1;
    // 0x801F90D4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    skip_1:
    // 0x801F90D8: b           L_801F911C
    // 0x801F90DC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
        goto L_801F911C;
    // 0x801F90DC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
L_801F90E0:
    // 0x801F90E0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F90E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F90E8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801F90EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F90F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F90F4: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801F90F8: b           L_801F912C
    // 0x801F90FC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_801F912C;
    // 0x801F90FC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801F9100: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_801F9104:
    // 0x801F9104: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F9108: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F910C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801F9110: b           L_801F912C
    // 0x801F9114: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
        goto L_801F912C;
    // 0x801F9114: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801F9118: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
L_801F911C:
    // 0x801F911C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F9120: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801F9124: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F9128: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_801F912C:
    // 0x801F912C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F9130: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x801F9134: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801F9138: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F913C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9140: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x801F9144: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x801F9148: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F914C: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x801F9150: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801F9154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F9158: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x801F915C: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x801F9160: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x801F9164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F9168: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801F916C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F9170: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x801F9174: swc1        $f10, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f10.u32l;
    // 0x801F9178: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801F917C: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x801F9180: swc1        $f16, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f16.u32l;
    // 0x801F9184: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801F9188: lwc1        $f18, 0xC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0XC);
    // 0x801F918C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F9190: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
    // 0x801F9194: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801F9198: lhu         $a1, 0x94($t7)
    ctx->r5 = MEM_HU(ctx->r15, 0X94);
    // 0x801F919C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x801F91A0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801F91A4: jal         0x80033898
    // 0x801F91A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801F91A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x801F91AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F91B0: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x801F91B4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801F91B8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801F91BC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801F91C0: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x801F91C4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801F91C8: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x801F91CC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801F91D0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801F91D4: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x801F91D8: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F91DC: swc1        $f8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f8.u32l;
    // 0x801F91E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F91E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F91E8: jr          $ra
    // 0x801F91EC: nop

    TRACE_RETURN()
    return;
    // 0x801F91EC: nop

;}
RECOMP_FUNC void func_801EBCBC_5A7BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBCBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBCC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBCC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBCC8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EBCCC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EBCD0: jal         0x801EBCE8
    // 0x801EBCD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EBCE8_5A7BF8(rdram, ctx);
        goto after_0;
    // 0x801EBCD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EBCD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBCDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBCE0: jr          $ra
    // 0x801EBCE4: nop

    TRACE_RETURN()
    return;
    // 0x801EBCE4: nop

;}
RECOMP_FUNC void func_801ED124_5A9034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED124: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801ED128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801ED12C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801ED130: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801ED134: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801ED138: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801ED13C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801ED140: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x801ED144: lui         $a1, 0x901
    ctx->r5 = S32(0X901 << 16);
    // 0x801ED148: addiu       $a1, $a1, -0x4A18
    ctx->r5 = ADD32(ctx->r5, -0X4A18);
    // 0x801ED14C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED150: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801ED154: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED158: addiu       $a2, $a2, 0xBC
    ctx->r6 = ADD32(ctx->r6, 0XBC);
    // 0x801ED15C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801ED160: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801ED164: addiu       $t7, $zero, 0x120
    ctx->r15 = ADD32(0, 0X120);
    // 0x801ED168: addiu       $t8, $zero, 0x152
    ctx->r24 = ADD32(0, 0X152);
    // 0x801ED16C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801ED170: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x801ED174: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x801ED178: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801ED17C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801ED180: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801ED184: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x801ED188: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801ED18C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801ED190: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801ED194: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801ED198: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801ED19C: jal         0x80034680
    // 0x801ED1A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801ED1A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801ED1A4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x801ED1A8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801ED1AC: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x801ED1B0: lbu         $t0, 0x90($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X90);
    // 0x801ED1B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801ED1B8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x801ED1BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801ED1C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801ED1C4: lw          $t2, -0x2DE0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2DE0);
    // 0x801ED1C8: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x801ED1CC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801ED1D0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801ED1D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801ED1D8: sw          $t2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r10;
    // 0x801ED1DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801ED1E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801ED1E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801ED1E8: jr          $ra
    // 0x801ED1EC: nop

    TRACE_RETURN()
    return;
    // 0x801ED1EC: nop

;}
RECOMP_FUNC void func_801EC780_5A8690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC780: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EC784: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EC788: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EC78C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801EC790: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801EC794: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x801EC798: addiu       $t8, $t8, 0x4CF0
    ctx->r24 = ADD32(ctx->r24, 0X4CF0);
    // 0x801EC79C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EC7A0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801EC7A4: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801EC7A8: addiu       $v1, $sp, 0x4C
    ctx->r3 = ADD32(ctx->r29, 0X4C);
    // 0x801EC7AC: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x801EC7B0: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x801EC7B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EC7B8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801EC7BC: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801EC7C0: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801EC7C4: addiu       $t1, $zero, 0x152
    ctx->r9 = ADD32(0, 0X152);
    // 0x801EC7C8: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x801EC7CC: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x801EC7D0: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801EC7D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC7D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801EC7DC: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x801EC7E0: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x801EC7E4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EC7E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EC7EC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EC7F0: addiu       $a2, $a2, 0xC8
    ctx->r6 = ADD32(ctx->r6, 0XC8);
    // 0x801EC7F4: or          $t5, $a2, $at
    ctx->r13 = ctx->r6 | ctx->r1;
    // 0x801EC7F8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801EC7FC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EC800: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC804: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EC808: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801EC80C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EC810: or          $a2, $t5, $at
    ctx->r6 = ctx->r13 | ctx->r1;
    // 0x801EC814: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801EC818: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801EC81C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801EC820: lhu         $t0, 0x16($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X16);
    // 0x801EC824: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801EC828: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801EC82C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801EC830: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801EC834: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EC838: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    // 0x801EC83C: jal         0x80034680
    // 0x801EC840: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EC840: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    after_0:
    // 0x801EC844: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801EC848: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x801EC84C: sb          $t2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r10;
    // 0x801EC850: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EC854: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801EC858: jr          $ra
    // 0x801EC85C: nop

    TRACE_RETURN()
    return;
    // 0x801EC85C: nop

;}
RECOMP_FUNC void func_801F5D9C_5B1CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5DA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5DA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F5DAC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801F5DB0: jal         0x801F5DF4
    // 0x801F5DB4: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_801F5DF4_5B1D04(rdram, ctx);
        goto after_0;
    // 0x801F5DB4: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_0:
    // 0x801F5DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5DC0: jr          $ra
    // 0x801F5DC4: nop

    TRACE_RETURN()
    return;
    // 0x801F5DC4: nop

;}
RECOMP_FUNC void func_801E2E60_59ED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E2E6C: jal         0x801E3834
    // 0x801E2E70: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2E70: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x801E2E74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2E78: jal         0x801E8964
    // 0x801E2E7C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801E2E7C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x801E2E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2E88: jr          $ra
    // 0x801E2E8C: nop

    TRACE_RETURN()
    return;
    // 0x801E2E8C: nop

;}
RECOMP_FUNC void func_801E1150_59D060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E1154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1158: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E115C: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801E1160: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E1164: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E1168: jalr        $t9
    // 0x801E116C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E116C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E1174: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E1178: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E117C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E1180: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801E1184: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E1188: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E118C: nop

    // 0x801E1190: bc1fl       L_801E11A4
    if (!c1cs) {
        // 0x801E1194: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E11A4;
    }
    goto skip_0;
    // 0x801E1194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E1198: jal         0x801DACDC
    // 0x801E119C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E119C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E11A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E11A4:
    // 0x801E11A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E11A8: jr          $ra
    // 0x801E11AC: nop

    TRACE_RETURN()
    return;
    // 0x801E11AC: nop

;}
RECOMP_FUNC void func_801E0F00_59CE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0F08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E0F10: jal         0x801E7B24
    // 0x801E0F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E0F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801E0F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0F20: jr          $ra
    // 0x801E0F24: nop

    TRACE_RETURN()
    return;
    // 0x801E0F24: nop

;}
RECOMP_FUNC void func_801F2CD0_5AEBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2CD0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801F2CD4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801F2CD8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801F2CDC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801F2CE0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2CE4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801F2CE8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801F2CEC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801F2CF0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x801F2CF4: addiu       $a1, $a1, 0x2ED0
    ctx->r5 = ADD32(ctx->r5, 0X2ED0);
    // 0x801F2CF8: jal         0x80034E08
    // 0x801F2CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801F2CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F2D00: bne         $v0, $zero, L_801F2D10
    if (ctx->r2 != 0) {
        // 0x801F2D04: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F2D10;
    }
    // 0x801F2D04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F2D08: b           L_801F2EBC
    // 0x801F2D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F2EBC;
    // 0x801F2D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F2D10:
    // 0x801F2D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2D14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F2D18: jal         0x80035EEC
    // 0x801F2D1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801F2D1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x801F2D20: bne         $v0, $zero, L_801F2D38
    if (ctx->r2 != 0) {
        // 0x801F2D24: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F2D38;
    }
    // 0x801F2D24: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F2D28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F2D2C: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    // 0x801F2D30: b           L_801F2EBC
    // 0x801F2D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F2EBC;
    // 0x801F2D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F2D38:
    // 0x801F2D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2D3C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801F2D40: jal         0x801EE4AC
    // 0x801F2D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F2D44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801F2D48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F2D4C: sh          $t7, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r15;
    // 0x801F2D50: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801F2D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2D58: jal         0x801EE4AC
    // 0x801F2D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_3;
    // 0x801F2D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801F2D60: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F2D64: lui         $t1, 0x900
    ctx->r9 = S32(0X900 << 16);
    // 0x801F2D68: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x801F2D6C: swc1        $f2, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f2.u32l;
    // 0x801F2D70: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x801F2D74: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801F2D78: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x801F2D7C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801F2D80: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x801F2D84: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801F2D88: addiu       $t1, $t1, 0x26B0
    ctx->r9 = ADD32(ctx->r9, 0X26B0);
    // 0x801F2D8C: addiu       $t0, $t0, 0x640
    ctx->r8 = ADD32(ctx->r8, 0X640);
    // 0x801F2D90: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F2D94: addu        $a1, $v1, $t1
    ctx->r5 = ADD32(ctx->r3, ctx->r9);
    // 0x801F2D98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F2D9C: addiu       $v0, $s1, 0x80
    ctx->r2 = ADD32(ctx->r17, 0X80);
    // 0x801F2DA0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F2DA4: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801F2DA8: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801F2DAC: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801F2DB0: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801F2DB4: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x801F2DB8: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801F2DBC: addiu       $t7, $zero, 0x152
    ctx->r15 = ADD32(0, 0X152);
    // 0x801F2DC0: swc1        $f8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f8.u32l;
    // 0x801F2DC4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801F2DC8: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801F2DCC: lbu         $t9, 0x6F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6F);
    // 0x801F2DD0: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801F2DD4: bne         $t9, $zero, L_801F2DE8
    if (ctx->r25 != 0) {
        // 0x801F2DD8: nop
    
            goto L_801F2DE8;
    }
    // 0x801F2DD8: nop

    // 0x801F2DDC: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x801F2DE0: b           L_801F2DE8
    // 0x801F2DE4: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
        goto L_801F2DE8;
    // 0x801F2DE4: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
L_801F2DE8:
    // 0x801F2DE8: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801F2DEC: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801F2DF0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801F2DF4: or          $a2, $v0, $v1
    ctx->r6 = ctx->r2 | ctx->r3;
    // 0x801F2DF8: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x801F2DFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F2E00: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x801F2E04: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F2E08: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F2E0C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x801F2E10: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x801F2E14: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x801F2E18: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F2E1C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801F2E20: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801F2E24: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801F2E28: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F2E2C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x801F2E30: jal         0x80034680
    // 0x801F2E34: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_4;
    // 0x801F2E34: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801F2E38: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801F2E3C: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x801F2E40: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x801F2E44: addiu       $t0, $zero, 0xD0
    ctx->r8 = ADD32(0, 0XD0);
    // 0x801F2E48: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x801F2E4C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801F2E50: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801F2E54: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801F2E58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801F2E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F2E60: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801F2E64: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F2E68: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801F2E6C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801F2E70: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801F2E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F2E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F2E7C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x801F2E80: jal         0x801DC554
    // 0x801F2E84: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801F2E84: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_5:
    // 0x801F2E88: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F2E8C: addiu       $a2, $a2, 0x4AD0
    ctx->r6 = ADD32(ctx->r6, 0X4AD0);
    // 0x801F2E90: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801F2E94: sw          $a2, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r6;
    // 0x801F2E98: sb          $zero, 0x98($s0)
    MEM_B(0X98, ctx->r16) = 0;
    // 0x801F2E9C: sh          $t4, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r12;
    // 0x801F2EA0: addiu       $t5, $s0, 0x9A
    ctx->r13 = ADD32(ctx->r16, 0X9A);
    // 0x801F2EA4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801F2EA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F2EAC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801F2EB0: jal         0x801E8890
    // 0x801F2EB4: addiu       $a3, $s0, 0x98
    ctx->r7 = ADD32(ctx->r16, 0X98);
    func_801E8890_5A47A0(rdram, ctx);
        goto after_6;
    // 0x801F2EB4: addiu       $a3, $s0, 0x98
    ctx->r7 = ADD32(ctx->r16, 0X98);
    after_6:
    // 0x801F2EB8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801F2EBC:
    // 0x801F2EBC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801F2EC0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801F2EC4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801F2EC8: jr          $ra
    // 0x801F2ECC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801F2ECC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801F845C_5B436C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F845C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F8460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8464: jal         0x801F95D8
    // 0x801F8468: nop

    func_801F95D8_5B54E8(rdram, ctx);
        goto after_0;
    // 0x801F8468: nop

    after_0:
    // 0x801F846C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8470: jal         0x8003521C
    // 0x801F8474: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F8474: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    after_1:
    // 0x801F8478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F847C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8480: jr          $ra
    // 0x801F8484: nop

    TRACE_RETURN()
    return;
    // 0x801F8484: nop

;}
RECOMP_FUNC void func_801E92A4_5A51B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E92A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E92A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E92AC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E92B0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E92B4: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801E92B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E92BC: lwc1        $f0, -0x47F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X47F4);
    // 0x801E92C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E92C4: lui         $t7, 0x901
    ctx->r15 = S32(0X901 << 16);
    // 0x801E92C8: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x801E92CC: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801E92D0: addiu       $t8, $t8, -0x26E0
    ctx->r24 = ADD32(ctx->r24, -0X26E0);
    // 0x801E92D4: addiu       $t7, $t7, -0x6B68
    ctx->r15 = ADD32(ctx->r15, -0X6B68);
    // 0x801E92D8: addiu       $t9, $zero, 0x120
    ctx->r25 = ADD32(0, 0X120);
    // 0x801E92DC: addiu       $t0, $zero, 0x152
    ctx->r8 = ADD32(0, 0X152);
    // 0x801E92E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E92E4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801E92E8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E92EC: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x801E92F0: or          $a2, $t8, $v0
    ctx->r6 = ctx->r24 | ctx->r2;
    // 0x801E92F4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801E92F8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x801E92FC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801E9300: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801E9304: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x801E9308: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801E930C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E9310: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801E9314: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801E9318: jal         0x80034680
    // 0x801E931C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801E931C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801E9320: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E9324: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801E9328: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801E932C: lbu         $t2, 0x90($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X90);
    // 0x801E9330: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E9334: addiu       $a2, $a2, 0x4858
    ctx->r6 = ADD32(ctx->r6, 0X4858);
    // 0x801E9338: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801E933C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801E9340: lw          $t4, -0x2DE0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2DE0);
    // 0x801E9344: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801E9348: jal         0x801E8820
    // 0x801E934C: sw          $t4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r12;
    func_801E8820_5A4730(rdram, ctx);
        goto after_1;
    // 0x801E934C: sw          $t4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r12;
    after_1:
    // 0x801E9350: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801E9354: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801E9358: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x801E935C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E9360: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E9364: jr          $ra
    // 0x801E9368: nop

    TRACE_RETURN()
    return;
    // 0x801E9368: nop

;}
RECOMP_FUNC void func_801DDAE8_5999F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDAE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDAF0: jal         0x801E15D0
    // 0x801DDAF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E15D0_59D4E0(rdram, ctx);
        goto after_0;
    // 0x801DDAF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDAF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDB00: jr          $ra
    // 0x801DDB04: nop

    TRACE_RETURN()
    return;
    // 0x801DDB04: nop

;}
RECOMP_FUNC void func_801D1E2C_58DD3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D1E30: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801D1E34: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801D1E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1E3C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x801D1E40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D1E44: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801D1E48: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x801D1E4C: lbu         $t6, 0x2E21($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E21);
    // 0x801D1E50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1E54: beql        $t6, $zero, L_801D1E68
    if (ctx->r14 == 0) {
        // 0x801D1E58: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_801D1E68;
    }
    goto skip_0;
    // 0x801D1E58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x801D1E5C: b           L_801D1EB8
    // 0x801D1E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D1EB8;
    // 0x801D1E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D1E64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_801D1E68:
    // 0x801D1E68: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x801D1E6C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x801D1E70: nop

    // 0x801D1E74: bc1f        L_801D1EAC
    if (!c1cs) {
        // 0x801D1E78: nop
    
            goto L_801D1EAC;
    }
    // 0x801D1E78: nop

    // 0x801D1E7C: lbu         $v0, 0x2DE5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE5);
    // 0x801D1E80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D1E84: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D1E88: beq         $v0, $at, L_801D1E9C
    if (ctx->r2 == ctx->r1) {
        // 0x801D1E8C: lwc1        $f14, 0x20($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
            goto L_801D1E9C;
    }
    // 0x801D1E8C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801D1E90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D1E94: bnel        $v0, $at, L_801D1EB8
    if (ctx->r2 != ctx->r1) {
        // 0x801D1E98: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D1EB8;
    }
    goto skip_1;
    // 0x801D1E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_801D1E9C:
    // 0x801D1E9C: jal         0x8021A67C
    // 0x801D1EA0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_8021A67C_5D5B4C(rdram, ctx);
        goto after_0;
    // 0x801D1EA0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x801D1EA4: beql        $v0, $zero, L_801D1EB8
    if (ctx->r2 == 0) {
        // 0x801D1EA8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D1EB8;
    }
    goto skip_2;
    // 0x801D1EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_801D1EAC:
    // 0x801D1EAC: b           L_801D1EB8
    // 0x801D1EB0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_801D1EB8;
    // 0x801D1EB0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x801D1EB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D1EB8:
    // 0x801D1EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1EC0: jr          $ra
    // 0x801D1EC4: nop

    TRACE_RETURN()
    return;
    // 0x801D1EC4: nop

;}
RECOMP_FUNC void func_801D313C_58F04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D313C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801D3140: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D3144: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801D3148: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801D314C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801D3150: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801D3154: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801D3158: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801D315C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D3160: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801D3164: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x801D3168: lbu         $t6, 0xBC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XBC);
    // 0x801D316C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x801D3170: addiu       $s3, $s3, -0x3830
    ctx->r19 = ADD32(ctx->r19, -0X3830);
    // 0x801D3174: andi        $t7, $t6, 0xF8
    ctx->r15 = ctx->r14 & 0XF8;
    // 0x801D3178: sb          $t7, 0xBC($a0)
    MEM_B(0XBC, ctx->r4) = ctx->r15;
    // 0x801D317C: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x801D3180: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801D3184: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x801D3188: addiu       $s0, $s0, -0x31E0
    ctx->r16 = ADD32(ctx->r16, -0X31E0);
    // 0x801D318C: blez        $v1, L_801D32CC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D3190: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801D32CC;
    }
    // 0x801D3190: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801D3194: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x801D3198: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x801D319C: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801D31A0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D31A4: addiu       $s2, $s2, -0x3350
    ctx->r18 = ADD32(ctx->r18, -0X3350);
    // 0x801D31A8: addiu       $s4, $s4, -0x3260
    ctx->r20 = ADD32(ctx->r20, -0X3260);
    // 0x801D31AC: addiu       $s5, $s5, -0x31E8
    ctx->r21 = ADD32(ctx->r21, -0X31E8);
    // 0x801D31B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801D31B4:
    // 0x801D31B4: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x801D31B8: bne         $v1, $t8, L_801D31D8
    if (ctx->r3 != ctx->r24) {
        // 0x801D31BC: sll         $t9, $v1, 3
        ctx->r25 = S32(ctx->r3 << 3);
            goto L_801D31D8;
    }
    // 0x801D31BC: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x801D31C0: addu        $t3, $s2, $t9
    ctx->r11 = ADD32(ctx->r18, ctx->r25);
    // 0x801D31C4: lbu         $t4, -0x8($t3)
    ctx->r12 = MEM_BU(ctx->r11, -0X8);
    // 0x801D31C8: beq         $t4, $zero, L_801D32CC
    if (ctx->r12 == 0) {
        // 0x801D31CC: nop
    
            goto L_801D32CC;
    }
    // 0x801D31CC: nop

    // 0x801D31D0: b           L_801D31E4
    // 0x801D31D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_801D31E4;
    // 0x801D31D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801D31D8:
    // 0x801D31D8: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    // 0x801D31DC: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x801D31E0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
L_801D31E4:
    // 0x801D31E4: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x801D31E8: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x801D31EC: addu        $v1, $s2, $t7
    ctx->r3 = ADD32(ctx->r18, ctx->r15);
    // 0x801D31F0: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x801D31F4: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x801D31F8: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x801D31FC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x801D3200: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801D3204: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x801D3208: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x801D320C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3210: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3214: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D3218: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x801D321C: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
    // 0x801D3220: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    // 0x801D3224: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D3228: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x801D322C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801D3230: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D3234: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3238: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D323C: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x801D3240: lh          $t6, 0x6($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X6);
    // 0x801D3244: lh          $t5, 0x6($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X6);
    // 0x801D3248: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D324C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801D3250: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801D3254: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3258: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D325C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D3260: nop

    // 0x801D3264: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D3268: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D326C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801D3270: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D3274: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D3278: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D327C: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D3280: beq         $s1, $zero, L_801D3290
    if (ctx->r17 == 0) {
        // 0x801D3284: sqrt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
            goto L_801D3290;
    }
    // 0x801D3284: sqrt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
    // 0x801D3288: b           L_801D3294
    // 0x801D328C: lwc1        $f2, -0x4($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, -0X4);
        goto L_801D3294;
    // 0x801D328C: lwc1        $f2, -0x4($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, -0X4);
L_801D3290:
    // 0x801D3290: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
L_801D3294:
    // 0x801D3294: add.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x801D3298: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x801D329C: addu        $t3, $s4, $t9
    ctx->r11 = ADD32(ctx->r20, ctx->r25);
    // 0x801D32A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D32A4: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
    // 0x801D32A8: jal         0x8001D394
    // 0x801D32AC: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801D32AC: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    after_0:
    // 0x801D32B0: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x801D32B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801D32B8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x801D32BC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D32C0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D32C4: bne         $at, $zero, L_801D31B4
    if (ctx->r1 != 0) {
        // 0x801D32C8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_801D31B4;
    }
    // 0x801D32C8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_801D32CC:
    // 0x801D32CC: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x801D32D0: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x801D32D4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801D32D8: addiu       $s5, $s5, -0x31E8
    ctx->r21 = ADD32(ctx->r21, -0X31E8);
    // 0x801D32DC: addiu       $s4, $s4, -0x3260
    ctx->r20 = ADD32(ctx->r20, -0X3260);
    // 0x801D32E0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801D32E4: jal         0x801D416C
    // 0x801D32E8: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    func_801D416C_59007C(rdram, ctx);
        goto after_1;
    // 0x801D32E8: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    after_1:
    // 0x801D32EC: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x801D32F0: addiu       $s1, $s1, -0x3078
    ctx->r17 = ADD32(ctx->r17, -0X3078);
    // 0x801D32F4: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x801D32F8: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x801D32FC: bne         $at, $zero, L_801D33E4
    if (ctx->r1 != 0) {
        // 0x801D3300: lui         $s2, 0x8020
        ctx->r18 = S32(0X8020 << 16);
            goto L_801D33E4;
    }
    // 0x801D3300: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x801D3304: addiu       $s2, $s2, -0x39FC
    ctx->r18 = ADD32(ctx->r18, -0X39FC);
    // 0x801D3308: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x801D330C: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x801D3310: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x801D3314: lhu         $a0, 0x94($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X94);
    // 0x801D3318: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x801D331C: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D3320: jal         0x80003F30
    // 0x801D3324: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x801D3324: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x801D3328: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D332C: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x801D3330: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x801D3334: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x801D3338: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801D333C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x801D3340: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x801D3344: jal         0x8001D718
    // 0x801D3348: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_3;
    // 0x801D3348: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_3:
    // 0x801D334C: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D3350: jal         0x80003A94
    // 0x801D3354: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    func_80003A94_4694(rdram, ctx);
        goto after_4;
    // 0x801D3354: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    after_4:
    // 0x801D3358: lbu         $a3, 0x0($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X0);
    // 0x801D335C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3360: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801D3364: blez        $a3, L_801D33D4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x801D3368: addiu       $t2, $zero, 0x18
        ctx->r10 = ADD32(0, 0X18);
            goto L_801D33D4;
    }
    // 0x801D3368: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x801D336C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D3370: addiu       $t1, $t1, -0x3070
    ctx->r9 = ADD32(ctx->r9, -0X3070);
L_801D3374:
    // 0x801D3374: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D3378: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801D337C: mflo        $t8
    ctx->r24 = lo;
    // 0x801D3380: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x801D3384: lhu         $t3, 0x0($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X0);
    // 0x801D3388: subu        $v1, $t0, $t3
    ctx->r3 = SUB32(ctx->r8, ctx->r11);
    // 0x801D338C: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x801D3390: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x801D3394: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x801D3398: beq         $t5, $zero, L_801D33AC
    if (ctx->r13 == 0) {
        // 0x801D339C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_801D33AC;
    }
    // 0x801D339C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x801D33A0: negu        $v1, $t4
    ctx->r3 = SUB32(0, ctx->r12);
    // 0x801D33A4: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x801D33A8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_801D33AC:
    // 0x801D33AC: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x801D33B0: beql        $at, $zero, L_801D33C4
    if (ctx->r1 == 0) {
        // 0x801D33B4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_801D33C4;
    }
    goto skip_0;
    // 0x801D33B4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x801D33B8: andi        $s0, $v1, 0xFFFF
    ctx->r16 = ctx->r3 & 0XFFFF;
    // 0x801D33BC: sb          $a1, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r5;
    // 0x801D33C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_801D33C4:
    // 0x801D33C4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x801D33C8: slt         $at, $t7, $a3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801D33CC: bne         $at, $zero, L_801D3374
    if (ctx->r1 != 0) {
        // 0x801D33D0: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_801D3374;
    }
    // 0x801D33D0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_801D33D4:
    // 0x801D33D4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D33D8: addiu       $t1, $t1, -0x3070
    ctx->r9 = ADD32(ctx->r9, -0X3070);
    // 0x801D33DC: b           L_801D33F8
    // 0x801D33E0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
        goto L_801D33F8;
    // 0x801D33E0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
L_801D33E4:
    // 0x801D33E4: lbu         $a1, 0x89($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X89);
    // 0x801D33E8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D33EC: addiu       $t1, $t1, -0x3070
    ctx->r9 = ADD32(ctx->r9, -0X3070);
    // 0x801D33F0: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x801D33F4: sb          $a1, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r5;
L_801D33F8:
    // 0x801D33F8: lbu         $t8, 0x88($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X88);
    // 0x801D33FC: multu       $t8, $t2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D3400: mflo        $t9
    ctx->r25 = lo;
    // 0x801D3404: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x801D3408: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D340C: swc1        $f4, 0xC0($s6)
    MEM_W(0XC0, ctx->r22) = ctx->f4.u32l;
    // 0x801D3410: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D3414: swc1        $f8, 0xC4($s6)
    MEM_W(0XC4, ctx->r22) = ctx->f8.u32l;
    // 0x801D3418: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D341C: swc1        $f10, 0xC8($s6)
    MEM_W(0XC8, ctx->r22) = ctx->f10.u32l;
    // 0x801D3420: lbu         $s1, 0x14($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X14);
    // 0x801D3424: beq         $s1, $zero, L_801D3438
    if (ctx->r17 == 0) {
        // 0x801D3428: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_801D3438;
    }
    // 0x801D3428: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x801D342C: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x801D3430: b           L_801D343C
    // 0x801D3434: lwc1        $f0, -0x4($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, -0X4);
        goto L_801D343C;
    // 0x801D3434: lwc1        $f0, -0x4($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, -0X4);
L_801D3438:
    // 0x801D3438: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_801D343C:
    // 0x801D343C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D3440: add.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801D3444: swc1        $f18, 0xD8($s6)
    MEM_W(0XD8, ctx->r22) = ctx->f18.u32l;
    // 0x801D3448: lwc1        $f12, 0x0($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801D344C: lwc1        $f2, 0xD8($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0XD8);
    // 0x801D3450: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x801D3454: nop

    // 0x801D3458: bc1fl       L_801D346C
    if (!c1cs) {
        // 0x801D345C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801D346C;
    }
    goto skip_1;
    // 0x801D345C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x801D3460: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x801D3464: swc1        $f4, 0xD8($s6)
    MEM_W(0XD8, ctx->r22) = ctx->f4.u32l;
    // 0x801D3468: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D346C:
    // 0x801D346C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801D3470: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D3474: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801D3478: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801D347C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x801D3480: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x801D3484: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x801D3488: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x801D348C: jr          $ra
    // 0x801D3490: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801D3490: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801EFF74_5ABE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFF74: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801EFF78: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801EFF7C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801EFF80: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801EFF84: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x801EFF88: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801EFF8C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EFF90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EFF94: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EFF98: lwc1        $f0, -0x413C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X413C);
    // 0x801EFF9C: addiu       $t7, $t7, 0x4F64
    ctx->r15 = ADD32(ctx->r15, 0X4F64);
    // 0x801EFFA0: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x801EFFA4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801EFFA8: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
    // 0x801EFFAC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801EFFB0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801EFFB4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801EFFB8: addiu       $t2, $t2, 0x4F6C
    ctx->r10 = ADD32(ctx->r10, 0X4F6C);
    // 0x801EFFBC: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801EFFC0: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801EFFC4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801EFFC8: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x801EFFCC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EFFD0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801EFFD4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x801EFFD8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x801EFFDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EFFE0: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x801EFFE4: lhu         $at, 0xC($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0XC);
    // 0x801EFFE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801EFFEC: addiu       $t2, $zero, 0x128
    ctx->r10 = ADD32(0, 0X128);
    // 0x801EFFF0: sh          $at, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r1;
    // 0x801EFFF4: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x801EFFF8: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x801EFFFC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801F0000: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801F0004: addu        $t8, $v0, $t9
    ctx->r24 = ADD32(ctx->r2, ctx->r25);
    // 0x801F0008: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x801F000C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F0010: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F0014: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F0018: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F001C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F0020: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801F0024: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F0028: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x801F002C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F0030: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801F0034: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F0038: addiu       $t5, $zero, 0x152
    ctx->r13 = ADD32(0, 0X152);
    // 0x801F003C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F0040: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801F0044: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x801F0048: or          $a2, $t7, $at
    ctx->r6 = ctx->r15 | ctx->r1;
    // 0x801F004C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801F0050: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x801F0054: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801F0058: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x801F005C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x801F0060: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x801F0064: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F0068: jal         0x80034680
    // 0x801F006C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801F006C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_0:
    // 0x801F0070: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x801F0074: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F0078: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801F007C: lbu         $t9, 0x90($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X90);
    // 0x801F0080: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801F0084: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F0088: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x801F008C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x801F0090: lw          $t7, -0x2DE0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2DE0);
    // 0x801F0094: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x801F0098: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F009C: sw          $t7, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r15;
    // 0x801F00A0: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x801F00A4: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x801F00A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F00AC: sll         $t3, $t4, 3
    ctx->r11 = S32(ctx->r12 << 3);
    // 0x801F00B0: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x801F00B4: addu        $v0, $t3, $t1
    ctx->r2 = ADD32(ctx->r11, ctx->r9);
    // 0x801F00B8: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x801F00BC: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x801F00C0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F00C4: sb          $t2, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r10;
    // 0x801F00C8: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x801F00CC: lbu         $a3, 0x1($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X1);
    // 0x801F00D0: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x801F00D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801F00D8: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x801F00DC: or          $a2, $t6, $at
    ctx->r6 = ctx->r14 | ctx->r1;
    // 0x801F00E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F00E4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F00E8: lbu         $t0, 0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4);
    // 0x801F00EC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801F00F0: lbu         $t4, 0x5($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5);
    // 0x801F00F4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801F00F8: lbu         $t3, 0x6($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6);
    // 0x801F00FC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801F0100: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x801F0104: jal         0x801DC554
    // 0x801F0108: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_1;
    // 0x801F0108: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x801F010C: lwc1        $f10, 0x6C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x801F0110: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801F0114: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801F0118: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F011C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801F0120: lwc1        $f6, 0x70($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F0124: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801F0128: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801F012C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F0130: addiu       $a1, $s1, 0x6C
    ctx->r5 = ADD32(ctx->r17, 0X6C);
    // 0x801F0134: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801F0138: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x801F013C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F0140: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F0144: lwc1        $f18, 0x74($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F0148: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F014C: swc1        $f4, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->f4.u32l;
    // 0x801F0150: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F0154: swc1        $f16, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f16.u32l;
    // 0x801F0158: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801F015C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F0160: swc1        $f8, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f8.u32l;
    // 0x801F0164: jal         0x8001DB04
    // 0x801F0168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801F0168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x801F016C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801F0170: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801F0174: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801F0178: jr          $ra
    // 0x801F017C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801F017C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801E3C34_59FB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3C34: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801E3C38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E3C3C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801E3C40: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x801E3C44: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801E3C48: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E3C4C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E3C50: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x801E3C54: beq         $t0, $t6, L_801E3C74
    if (ctx->r8 == ctx->r14) {
        // 0x801E3C58: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_801E3C74;
    }
    // 0x801E3C58: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801E3C5C: beq         $t0, $t6, L_801E3C74
    if (ctx->r8 == ctx->r14) {
        // 0x801E3C60: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_801E3C74;
    }
    // 0x801E3C60: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801E3C64: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801E3C68: andi        $t9, $a3, 0x7FFF
    ctx->r25 = ctx->r7 & 0X7FFF;
    // 0x801E3C6C: bne         $t0, $t9, L_801E3C7C
    if (ctx->r8 != ctx->r25) {
        // 0x801E3C70: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_801E3C7C;
    }
    // 0x801E3C70: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_801E3C74:
    // 0x801E3C74: jr          $ra
    // 0x801E3C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801E3C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E3C7C:
    // 0x801E3C7C: andi        $t1, $v1, 0x3FF
    ctx->r9 = ctx->r3 & 0X3FF;
    // 0x801E3C80: andi        $t2, $a1, 0x3FF
    ctx->r10 = ctx->r5 & 0X3FF;
    // 0x801E3C84: subu        $a0, $t1, $t2
    ctx->r4 = SUB32(ctx->r9, ctx->r10);
    // 0x801E3C88: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x801E3C8C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801E3C90: bgez        $t4, L_801E3CA8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801E3C94: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_801E3CA8;
    }
    // 0x801E3C94: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x801E3C98: negu        $v1, $t4
    ctx->r3 = SUB32(0, ctx->r12);
    // 0x801E3C9C: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x801E3CA0: b           L_801E3CB4
    // 0x801E3CA4: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
        goto L_801E3CB4;
    // 0x801E3CA4: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
L_801E3CA8:
    // 0x801E3CA8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x801E3CAC: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801E3CB0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_801E3CB4:
    // 0x801E3CB4: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801E3CB8: bne         $at, $zero, L_801E3CCC
    if (ctx->r1 != 0) {
        // 0x801E3CBC: andi        $t1, $v0, 0x8000
        ctx->r9 = ctx->r2 & 0X8000;
            goto L_801E3CCC;
    }
    // 0x801E3CBC: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x801E3CC0: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x801E3CC4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x801E3CC8: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_801E3CCC:
    // 0x801E3CCC: beq         $t1, $zero, L_801E3CE8
    if (ctx->r9 == 0) {
        // 0x801E3CD0: slt         $at, $v1, $a3
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_801E3CE8;
    }
    // 0x801E3CD0: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801E3CD4: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801E3CD8: beql        $at, $zero, L_801E3CFC
    if (ctx->r1 == 0) {
        // 0x801E3CDC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E3CFC;
    }
    goto skip_0;
    // 0x801E3CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E3CE0: jr          $ra
    // 0x801E3CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801E3CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E3CE8:
    // 0x801E3CE8: bnel        $at, $zero, L_801E3CFC
    if (ctx->r1 != 0) {
        // 0x801E3CEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E3CFC;
    }
    goto skip_1;
    // 0x801E3CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E3CF0: jr          $ra
    // 0x801E3CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801E3CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E3CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E3CFC:
    // 0x801E3CFC: jr          $ra
    // 0x801E3D00: nop

    TRACE_RETURN()
    return;
    // 0x801E3D00: nop

;}
RECOMP_FUNC void func_801DECE0_59ABF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DECE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DECE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DECE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DECEC: lhu         $t6, 0x98($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X98);
    // 0x801DECF0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801DECF4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DECF8: bnel        $t6, $zero, L_801DED28
    if (ctx->r14 != 0) {
        // 0x801DECFC: lbu         $t7, 0x90($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X90);
            goto L_801DED28;
    }
    goto skip_0;
    // 0x801DECFC: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    skip_0:
    // 0x801DED00: jal         0x801E3324
    // 0x801DED04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3324_59F234(rdram, ctx);
        goto after_0;
    // 0x801DED04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DED08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DED0C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DED10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DED14: jal         0x801DAC7C
    // 0x801DED18: lbu         $a3, 0xDB($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_1;
    // 0x801DED18: lbu         $a3, 0xDB($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XDB);
    after_1:
    // 0x801DED1C: b           L_801DEDFC
    // 0x801DED20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DEDFC;
    // 0x801DED20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DED24: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
L_801DED28:
    // 0x801DED28: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x801DED2C: addiu       $t0, $t0, -0x3340
    ctx->r8 = ADD32(ctx->r8, -0X3340);
    // 0x801DED30: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DED34: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DED38: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DED3C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801DED40: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801DED44: lhu         $t1, 0x30F2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X30F2);
    // 0x801DED48: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x801DED4C: bnel        $t2, $zero, L_801DED74
    if (ctx->r10 != 0) {
        // 0x801DED50: lhu         $t3, 0x30F4($v0)
        ctx->r11 = MEM_HU(ctx->r2, 0X30F4);
            goto L_801DED74;
    }
    goto skip_1;
    // 0x801DED50: lhu         $t3, 0x30F4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30F4);
    skip_1:
    // 0x801DED54: jal         0x801E3178
    // 0x801DED58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3178_59F088(rdram, ctx);
        goto after_2;
    // 0x801DED58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x801DED5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DED60: jal         0x801DACDC
    // 0x801DED64: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DED64: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_3:
    // 0x801DED68: b           L_801DEDFC
    // 0x801DED6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DEDFC;
    // 0x801DED6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DED70: lhu         $t3, 0x30F4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30F4);
L_801DED74:
    // 0x801DED74: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x801DED78: bne         $t4, $zero, L_801DED94
    if (ctx->r12 != 0) {
        // 0x801DED7C: nop
    
            goto L_801DED94;
    }
    // 0x801DED7C: nop

    // 0x801DED80: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801DED84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DED88: lbu         $t6, 0x68($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X68);
    // 0x801DED8C: bnel        $t6, $at, L_801DEDA8
    if (ctx->r14 != ctx->r1) {
        // 0x801DED90: lwc1        $f0, 0x30FC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
            goto L_801DEDA8;
    }
    goto skip_2;
    // 0x801DED90: lwc1        $f0, 0x30FC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
    skip_2:
L_801DED94:
    // 0x801DED94: jal         0x801E4624
    // 0x801DED98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E4624_5A0534(rdram, ctx);
        goto after_4;
    // 0x801DED98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x801DED9C: b           L_801DEDFC
    // 0x801DEDA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DEDFC;
    // 0x801DEDA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEDA4: lwc1        $f0, 0x30FC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30FC);
L_801DEDA8:
    // 0x801DEDA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DEDAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DEDB0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801DEDB4: nop

    // 0x801DEDB8: bc1fl       L_801DEDCC
    if (!c1cs) {
        // 0x801DEDBC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801DEDCC;
    }
    goto skip_3;
    // 0x801DEDBC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x801DEDC0: b           L_801DEDCC
    // 0x801DEDC4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801DEDCC;
    // 0x801DEDC4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801DEDC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801DEDCC:
    // 0x801DEDCC: ldc1        $f8, -0x4E68($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4E68);
    // 0x801DEDD0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801DEDD4: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801DEDD8: nop

    // 0x801DEDDC: bc1tl       L_801DEDFC
    if (c1cs) {
        // 0x801DEDE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DEDFC;
    }
    goto skip_4;
    // 0x801DEDE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x801DEDE4: jal         0x801E31A8
    // 0x801DEDE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E31A8_59F0B8(rdram, ctx);
        goto after_5;
    // 0x801DEDE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x801DEDEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DEDF0: jal         0x801DACDC
    // 0x801DEDF4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801DEDF4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_6:
    // 0x801DEDF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DEDFC:
    // 0x801DEDFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEE00: jr          $ra
    // 0x801DEE04: nop

    TRACE_RETURN()
    return;
    // 0x801DEE04: nop

;}
RECOMP_FUNC void func_801E1530_59D440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1530: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1534: jr          $ra
    // 0x801E1538: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1538: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DCCF0_598C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCCF0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DCCF4: addiu       $v1, $v1, -0x3A28
    ctx->r3 = ADD32(ctx->r3, -0X3A28);
    // 0x801DCCF8: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x801DCCFC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x801DCD00: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801DCD04: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x801DCD08: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x801DCD0C: lh          $v0, 0x12($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X12);
    // 0x801DCD10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801DCD14: bgez        $v0, L_801DCD28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801DCD18: slti        $at, $v0, 0x2710
        ctx->r1 = SIGNED(ctx->r2) < 0X2710 ? 1 : 0;
            goto L_801DCD28;
    }
    // 0x801DCD18: slti        $at, $v0, 0x2710
    ctx->r1 = SIGNED(ctx->r2) < 0X2710 ? 1 : 0;
    // 0x801DCD1C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x801DCD20: jr          $ra
    // 0x801DCD24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DCD24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DCD28:
    // 0x801DCD28: bne         $at, $zero, L_801DCD3C
    if (ctx->r1 != 0) {
        // 0x801DCD2C: addiu       $t0, $zero, 0x270F
        ctx->r8 = ADD32(0, 0X270F);
            goto L_801DCD3C;
    }
    // 0x801DCD2C: addiu       $t0, $zero, 0x270F
    ctx->r8 = ADD32(0, 0X270F);
    // 0x801DCD30: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x801DCD34: jr          $ra
    // 0x801DCD38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DCD38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DCD3C:
    // 0x801DCD3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DCD40: jr          $ra
    // 0x801DCD44: nop

    TRACE_RETURN()
    return;
    // 0x801DCD44: nop

;}
RECOMP_FUNC void func_801DFCD8_59BBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFCD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DFCDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DFCE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DFCE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DFCE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DFCEC: jal         0x801DD720
    // 0x801DFCF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801DFCF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801DFCF4: lhu         $t6, 0x98($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X98);
    // 0x801DFCF8: bnel        $t6, $zero, L_801DFD44
    if (ctx->r14 != 0) {
        // 0x801DFCFC: lbu         $t7, 0x90($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X90);
            goto L_801DFD44;
    }
    goto skip_0;
    // 0x801DFCFC: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
    skip_0:
    // 0x801DFD00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DFD04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFD08: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x801DFD0C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801DFD10: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801DFD14: jal         0x801E55D4
    // 0x801DFD18: nop

    func_801E55D4_5A14E4(rdram, ctx);
        goto after_1;
    // 0x801DFD18: nop

    after_1:
    // 0x801DFD1C: jal         0x801E3324
    // 0x801DFD20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_2;
    // 0x801DFD20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DFD24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFD28: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DFD2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DFD30: jal         0x801DAC7C
    // 0x801DFD34: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_3;
    // 0x801DFD34: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_3:
    // 0x801DFD38: b           L_801DFE34
    // 0x801DFD3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFE34;
    // 0x801DFD3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DFD40: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
L_801DFD44:
    // 0x801DFD44: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801DFD48: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DFD4C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DFD50: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DFD54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DFD58: lhu         $t9, 0x7DB4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB4);
    // 0x801DFD5C: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x801DFD60: beq         $t0, $zero, L_801DFDB8
    if (ctx->r8 == 0) {
        // 0x801DFD64: nop
    
            goto L_801DFDB8;
    }
    // 0x801DFD64: nop

    // 0x801DFD68: jal         0x801E307C
    // 0x801DFD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_4;
    // 0x801DFD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DFD70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DFD74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFD78: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801DFD7C: jal         0x801DACDC
    // 0x801DFD80: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801DFD80: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x801DFD84: lbu         $v1, 0x60($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X60);
    // 0x801DFD88: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFD8C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFD90: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x801DFD94: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x801DFD98: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x801DFD9C: lw          $a2, 0x4370($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4370);
    // 0x801DFDA0: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFDA4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x801DFDA8: jal         0x801E54E0
    // 0x801DFDAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_6;
    // 0x801DFDAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DFDB0: b           L_801DFE34
    // 0x801DFDB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFE34;
    // 0x801DFDB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFDB8:
    // 0x801DFDB8: jal         0x801E1ED0
    // 0x801DFDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1ED0_59DDE0(rdram, ctx);
        goto after_7;
    // 0x801DFDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801DFDC0: bne         $v0, $zero, L_801DFE08
    if (ctx->r2 != 0) {
        // 0x801DFDC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DFE08;
    }
    // 0x801DFDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFDC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFDCC: jal         0x801DACDC
    // 0x801DFDD0: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801DFDD0: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_8:
    // 0x801DFDD4: lbu         $v1, 0x60($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X60);
    // 0x801DFDD8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFDDC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFDE0: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x801DFDE4: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x801DFDE8: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x801DFDEC: lw          $a2, 0x4360($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4360);
    // 0x801DFDF0: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFDF4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801DFDF8: jal         0x801E54E0
    // 0x801DFDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_9;
    // 0x801DFDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801DFE00: b           L_801DFE34
    // 0x801DFE04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DFE34;
    // 0x801DFE04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFE08:
    // 0x801DFE08: lbu         $v1, 0x60($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X60);
    // 0x801DFE0C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801DFE10: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DFE14: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x801DFE18: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x801DFE1C: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x801DFE20: lw          $a2, 0x4380($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4380);
    // 0x801DFE24: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801DFE28: jal         0x801E54E0
    // 0x801DFE2C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_10;
    // 0x801DFE2C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    after_10:
    // 0x801DFE30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DFE34:
    // 0x801DFE34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DFE38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DFE3C: jr          $ra
    // 0x801DFE40: nop

    TRACE_RETURN()
    return;
    // 0x801DFE40: nop

;}
RECOMP_FUNC void func_801E2F14_59EE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2F14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2F18: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2F1C: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F20: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F24: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F28: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F2C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E2F30: jr          $ra
    // 0x801E2F34: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x801E2F34: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
;}
RECOMP_FUNC void func_801FA19C_5B60AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA19C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801FA1A0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801FA1A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801FA1A8: lui         $t7, 0xD
    ctx->r15 = S32(0XD << 16);
    // 0x801FA1AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FA1B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801FA1B4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801FA1B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801FA1BC: lbu         $t7, -0x774($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X774);
    // 0x801FA1C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801FA1C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA1C8: bnel        $t7, $at, L_801FA36C
    if (ctx->r15 != ctx->r1) {
        // 0x801FA1CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FA36C;
    }
    goto skip_0;
    // 0x801FA1CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FA1D0: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801FA1D4: beql        $a0, $zero, L_801FA36C
    if (ctx->r4 == 0) {
        // 0x801FA1D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FA36C;
    }
    goto skip_1;
    // 0x801FA1D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801FA1DC: jal         0x801D23C0
    // 0x801FA1E0: nop

    func_801D23C0_58E2D0(rdram, ctx);
        goto after_0;
    // 0x801FA1E0: nop

    after_0:
    // 0x801FA1E4: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801FA1E8: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801FA1EC: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801FA1F0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x801FA1F4: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x801FA1F8: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x801FA1FC: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x801FA200: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801FA204: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801FA208: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FA20C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x801FA210: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801FA214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FA218: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801FA21C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801FA220: lwc1        $f4, 0x10($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X10);
    // 0x801FA224: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x801FA228: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801FA22C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x801FA230: lwc1        $f10, 0x14($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X14);
    // 0x801FA234: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801FA238: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801FA23C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801FA240: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801FA244: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801FA248: jal         0x80033898
    // 0x801FA24C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801FA24C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801FA250: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FA254: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801FA258: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FA25C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801FA260: nop

    // 0x801FA264: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801FA268: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801FA26C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801FA270: jal         0x800417E0
    // 0x801FA274: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x801FA274: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_2:
    // 0x801FA278: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FA27C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FA280: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801FA284: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801FA288: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FA28C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801FA290: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801FA294: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801FA298: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801FA29C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801FA2A0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801FA2A4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801FA2A8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801FA2AC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801FA2B0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801FA2B4: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801FA2B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FA2BC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801FA2C0: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801FA2C4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801FA2C8: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801FA2CC: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801FA2D0: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x801FA2D4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801FA2D8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801FA2DC: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x801FA2E0: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801FA2E4: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801FA2E8: nop

    // 0x801FA2EC: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801FA2F0: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x801FA2F4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801FA2F8: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x801FA2FC: jal         0x800417E0
    // 0x801FA300: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x801FA300: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x801FA304: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FA308: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801FA30C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FA310: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x801FA314: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FA318: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FA31C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FA320: addiu       $v0, $v0, -0x6614
    ctx->r2 = ADD32(ctx->r2, -0X6614);
    // 0x801FA324: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801FA328: mul.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801FA32C: div.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801FA330: mul.s       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801FA334: trunc.w.s   $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    ctx->f8.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x801FA338: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801FA33C: nop

    // 0x801FA340: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x801FA344: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801FA348: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801FA34C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x801FA350: nop

    // 0x801FA354: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x801FA358: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801FA35C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x801FA360: nop

    // 0x801FA364: sb          $t6, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r14;
    // 0x801FA368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FA36C:
    // 0x801FA36C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801FA370: jr          $ra
    // 0x801FA374: nop

    TRACE_RETURN()
    return;
    // 0x801FA374: nop

;}
RECOMP_FUNC void func_801E5090_5A0FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5090: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E5094: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5098: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E509C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E50A0: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E50A4: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E50A8: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E50AC: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801E50B0: lbu         $t8, 0x30($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X30);
    // 0x801E50B4: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x801E50B8: jr          $ra
    // 0x801E50BC: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801E50BC: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_801F555C_5B146C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F555C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5564: jal         0x801E3AC0
    // 0x801F5568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F556C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5574: jr          $ra
    // 0x801F5578: nop

    TRACE_RETURN()
    return;
    // 0x801F5578: nop

;}
RECOMP_FUNC void func_801E6D30_5A2C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6D30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E6D34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E6D38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E6D3C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E6D40: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6D44: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E6D48: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E6D4C: sw          $a1, 0x94($t7)
    MEM_W(0X94, ctx->r15) = ctx->r5;
    // 0x801E6D50: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6D54: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801E6D58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6D5C: lw          $v1, 0x94($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X94);
    // 0x801E6D60: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x801E6D64: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x801E6D68: beq         $v1, $zero, L_801E6E84
    if (ctx->r3 == 0) {
        // 0x801E6D6C: addiu       $a3, $sp, 0x3C
        ctx->r7 = ADD32(ctx->r29, 0X3C);
            goto L_801E6E84;
    }
    // 0x801E6D6C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801E6D70: lw          $t1, 0x68($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X68);
    // 0x801E6D74: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x801E6D78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6D7C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801E6D80: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
    // 0x801E6D84: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x801E6D88: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x801E6D8C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801E6D90: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6D94: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E6D98: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E6D9C: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x801E6DA0: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x801E6DA4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E6DA8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E6DAC: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801E6DB0: jal         0x80033898
    // 0x801E6DB4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E6DB4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E6DB8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x801E6DBC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E6DC0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801E6DC4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6DC8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6DD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6DD4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801E6DD8: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E6DDC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E6DE0: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801E6DE4: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6DE8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801E6DEC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E6DF0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801E6DF4: jal         0x801CF51C
    // 0x801E6DF8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_1;
    // 0x801E6DF8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E6DFC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6E00: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801E6E04: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x801E6E08: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x801E6E0C: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6E10: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x801E6E14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6E18: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x801E6E1C: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6E20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801E6E24: addiu       $v1, $v1, 0x4700
    ctx->r3 = ADD32(ctx->r3, 0X4700);
    // 0x801E6E28: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x801E6E2C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E6E30: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801E6E34: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E6E38: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801E6E3C: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801E6E40: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801E6E44: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6E48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E6E4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E6E50: swc1        $f0, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f0.u32l;
    // 0x801E6E54: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E6E58: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x801E6E5C: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801E6E60: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801E6E64: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801E6E68: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E6E6C: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    // 0x801E6E70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801E6E74: sh          $zero, 0x36($t3)
    MEM_H(0X36, ctx->r11) = 0;
    // 0x801E6E78: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    // 0x801E6E7C: jal         0x801E7398
    // 0x801E6E80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_2;
    // 0x801E6E80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
L_801E6E84:
    // 0x801E6E84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E6E88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E6E8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E6E90: jr          $ra
    // 0x801E6E94: nop

    TRACE_RETURN()
    return;
    // 0x801E6E94: nop

;}
