#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08004794_6DE664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004794: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004798: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800479C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080047A0: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080047A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X4B18) << 16);
    // 0x080047A8: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X4B18));
    // 0x080047AC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080047B0: beq         $t7, $zero, L_0800483C
    if (ctx->r15 == 0) {
        // 0x080047B4: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_0800483C;
    }
    // 0x080047B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080047B8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x080047BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080047C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080047C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080047C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080047CC: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080047D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080047D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080047D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080047DC: jalr        $t9
    // 0x080047E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080047E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x080047E4: beq         $v0, $zero, L_0800480C
    if (ctx->r2 == 0) {
        // 0x080047E8: addiu       $t8, $zero, 0x24
        ctx->r24 = ADD32(0, 0X24);
            goto L_0800480C;
    }
    // 0x080047E8: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x080047EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080047F0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080047F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080047F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080047FC: jalr        $t9
    // 0x08004800: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004800: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x08004804: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004808: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_0800480C:
    // 0x0800480C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004810: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004814: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08004818: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x0800481C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004820: jalr        $t9
    // 0x08004824: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004824: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x08004828: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800482C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004830: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X484C) << 16);
    // 0x08004834: jalr        $t9
    // 0x08004838: addiu       $a0, $a0, 0x484C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X484C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004838: addiu       $a0, $a0, 0x484C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X484C));
    after_3:
L_0800483C:
    // 0x0800483C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08004844: jr          $ra
    // 0x08004848: nop

    TRACE_RETURN()
    return;
    // 0x08004848: nop

;}
RECOMP_FUNC void func_080040F8_6DDFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080040F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080040FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004100: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08004104: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08004108: lbu         $t7, 0x7C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800410C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X4B18) << 16);
    // 0x08004110: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X4B18));
    // 0x08004114: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x08004118: beq         $t8, $zero, L_080041D4
    if (ctx->r24 == 0) {
        // 0x0800411C: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_080041D4;
    }
    // 0x0800411C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08004120: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08004124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004128: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800412C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004134: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08004138: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x0800413C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08004140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08004144: jalr        $t9
    // 0x08004148: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004148: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x0800414C: beq         $v0, $zero, L_08004184
    if (ctx->r2 == 0) {
        // 0x08004150: addiu       $t0, $zero, 0x24
        ctx->r8 = ADD32(0, 0X24);
            goto L_08004184;
    }
    // 0x08004150: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x08004154: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004158: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800415C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004160: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08004164: jalr        $t9
    // 0x08004168: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004168: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x0800416C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004170: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08004174: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08004178: lhu         $t1, 0xDE($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XDE);
    // 0x0800417C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08004180: sh          $t2, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r10;
L_08004184:
    // 0x08004184: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004188: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800418C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08004190: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08004194: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004198: jalr        $t9
    // 0x0800419C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800419C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x080041A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080041A4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080041A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080041AC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080041B0: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    // 0x080041B4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080041B8: jalr        $t9
    // 0x080041BC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080041BC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
    // 0x080041C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080041C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080041C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X41E4) << 16);
    // 0x080041CC: jalr        $t9
    // 0x080041D0: addiu       $a0, $a0, 0x41E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X41E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080041D0: addiu       $a0, $a0, 0x41E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X41E4));
    after_4:
L_080041D4:
    // 0x080041D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080041D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080041DC: jr          $ra
    // 0x080041E0: nop

    TRACE_RETURN()
    return;
    // 0x080041E0: nop

;}
RECOMP_FUNC void func_080001F0_6DA0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001F0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080001F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080001F8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080001FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000200: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000204: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800020C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000210: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000214: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000218: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x0800021C: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000220: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x08000224: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08000228: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800022C: jalr        $t9
    // 0x08000230: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000230: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    after_0:
    // 0x08000234: lh          $t6, 0x60($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X60);
    // 0x08000238: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800023C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000240: beq         $t6, $zero, L_08000258
    if (ctx->r14 == 0) {
        // 0x08000244: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000258;
    }
    // 0x08000244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000248: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800024C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08000250: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000254: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
L_08000258:
    // 0x08000258: lwc1        $f4, 0xE8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XE8);
    // 0x0800025C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5208) << 16);
    // 0x08000260: ldc1        $f8, 0x5208($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5208));
    // 0x08000264: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000268: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5210) << 16);
    // 0x0800026C: sub.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f6.d - ctx->f8.d;
    // 0x08000270: ldc1        $f10, 0x5210($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5210));
    // 0x08000274: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5218) << 16);
    // 0x08000278: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x0800027C: nop

    // 0x08000280: bc1f        L_08000294
    if (!c1cs) {
        // 0x08000284: nop
    
            goto L_08000294;
    }
    // 0x08000284: nop

    // 0x08000288: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x0800028C: b           L_0800029C
    // 0x08000290: swc1        $f16, 0xE8($s1)
    MEM_W(0XE8, ctx->r17) = ctx->f16.u32l;
        goto L_0800029C;
    // 0x08000290: swc1        $f16, 0xE8($s1)
    MEM_W(0XE8, ctx->r17) = ctx->f16.u32l;
L_08000294:
    // 0x08000294: lwc1        $f18, 0x5218($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5218));
    // 0x08000298: swc1        $f18, 0xE8($s1)
    MEM_W(0XE8, ctx->r17) = ctx->f18.u32l;
L_0800029C:
    // 0x0800029C: jalr        $t9
    // 0x080002A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x080002A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002A8: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080002AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080002B0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x080002B4: jalr        $t9
    // 0x080002B8: lw          $a2, 0xE8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XE8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002B8: lw          $a2, 0xE8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XE8);
    after_2:
    // 0x080002BC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080002C0: lwc1        $f6, 0xE0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XE0);
    // 0x080002C4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080002C8: lwc1        $f10, 0xDC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XDC);
    // 0x080002CC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080002D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002D4: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080002D8: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080002DC: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080002E0: nop

    // 0x080002E4: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080002E8: jalr        $t9
    // 0x080002EC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002EC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x080002F0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x080002F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080002F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000300: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x08000304: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X32C) << 16);
    // 0x08000308: bc1fl       L_0800031C
    if (!c1cs) {
        // 0x0800030C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800031C;
    }
    goto skip_0;
    // 0x0800030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000310: jalr        $t9
    // 0x08000314: addiu       $a0, $a0, 0x32C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X32C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000314: addiu       $a0, $a0, 0x32C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X32C));
    after_4:
    // 0x08000318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800031C:
    // 0x0800031C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000320: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000324: jr          $ra
    // 0x08000328: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000328: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_0800132C_6DB1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800132C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001334: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x08001338: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x0800133C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001340: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08001344: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001348: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x0800134C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001350: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001354: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001358: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x0800135C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001368: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800136C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08001370: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001374: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x08001378: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800137C: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x08001380: lhu         $t7, -0x33D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X33D0);
    // 0x08001384: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x08001388: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x0800138C: beq         $t8, $zero, L_080013B8
    if (ctx->r24 == 0) {
        // 0x08001390: nop
    
            goto L_080013B8;
    }
    // 0x08001390: nop

    // 0x08001394: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001398: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800139C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080013A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080013A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080013A8: jalr        $t9
    // 0x080013AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080013B0: b           L_080013C4
    // 0x080013B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080013C4;
    // 0x080013B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013B8:
    // 0x080013B8: jalr        $t9
    // 0x080013BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x080013C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013C4:
    // 0x080013C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080013C8: jr          $ra
    // 0x080013CC: nop

    TRACE_RETURN()
    return;
    // 0x080013CC: nop

;}
RECOMP_FUNC void func_0800235C_6DC22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800235C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002368: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x0800236C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08002370: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x08002374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002378: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800237C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002380: nop

    // 0x08002384: bc1tl       L_0800252C
    if (c1cs) {
        // 0x08002388: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800252C;
    }
    goto skip_0;
    // 0x08002388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800238C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08002390: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x08002394: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x08002398: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x0800239C: bc1fl       L_08002490
    if (!c1cs) {
        // 0x080023A0: sh          $t8, 0x7E($a2)
        MEM_H(0X7E, ctx->r6) = ctx->r24;
            goto L_08002490;
    }
    goto skip_1;
    // 0x080023A0: sh          $t8, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r24;
    skip_1:
    // 0x080023A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080023A8: nop

    // 0x080023AC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x080023B0: nop

    // 0x080023B4: bc1fl       L_08002490
    if (!c1cs) {
        // 0x080023B8: sh          $t8, 0x7E($a2)
        MEM_H(0X7E, ctx->r6) = ctx->r24;
            goto L_08002490;
    }
    goto skip_2;
    // 0x080023B8: sh          $t8, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r24;
    skip_2:
    // 0x080023BC: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x080023C0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x080023C4: bnel        $at, $zero, L_0800252C
    if (ctx->r1 != 0) {
        // 0x080023C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800252C;
    }
    goto skip_3;
    // 0x080023C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x080023CC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080023D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x080023D4: bgez        $v0, L_080023F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080023D8: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_080023F0;
    }
    // 0x080023D8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x080023DC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080023E0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080023E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080023E8: nop

    // 0x080023EC: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_080023F0:
    // 0x080023F0: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x080023F4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080023F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080023FC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08002400: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x08002404: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08002408: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x0800240C: nop

    // 0x08002410: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x08002414: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08002418: nop

    // 0x0800241C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08002420: beql        $t7, $zero, L_08002474
    if (ctx->r15 == 0) {
        // 0x08002424: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_08002474;
    }
    goto skip_4;
    // 0x08002424: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x08002428: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800242C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002430: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002434: sub.d       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f4.d = ctx->f18.d - ctx->f4.d;
    // 0x08002438: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x0800243C: nop

    // 0x08002440: cvt.w.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_D(ctx->f4.d);
    // 0x08002444: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08002448: nop

    // 0x0800244C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08002450: bne         $t7, $zero, L_08002468
    if (ctx->r15 != 0) {
        // 0x08002454: nop
    
            goto L_08002468;
    }
    // 0x08002454: nop

    // 0x08002458: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x0800245C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002460: b           L_08002480
    // 0x08002464: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08002480;
    // 0x08002464: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08002468:
    // 0x08002468: b           L_08002480
    // 0x0800246C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08002480;
    // 0x0800246C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08002470: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_08002474:
    // 0x08002474: nop

    // 0x08002478: bltz        $t7, L_08002468
    if (SIGNED(ctx->r15) < 0) {
        // 0x0800247C: nop
    
            goto L_08002468;
    }
    // 0x0800247C: nop

L_08002480:
    // 0x08002480: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08002484: b           L_08002528
    // 0x08002488: sh          $t7, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r15;
        goto L_08002528;
    // 0x08002488: sh          $t7, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r15;
    // 0x0800248C: sh          $t8, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r24;
L_08002490:
    // 0x08002490: sb          $t9, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r25;
    // 0x08002494: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002498: lhu         $t0, 0xDA($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XDA);
    // 0x0800249C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024A0: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x080024A4: slt         $v1, $v0, $t0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x080024A8: bne         $v1, $zero, L_08002528
    if (ctx->r3 != 0) {
        // 0x080024AC: sh          $t1, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r9;
            goto L_08002528;
    }
    // 0x080024AC: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080024B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024B4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080024B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080024BC: jalr        $t9
    // 0x080024C0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024C0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x080024C4: bne         $v0, $zero, L_08002528
    if (ctx->r2 != 0) {
        // 0x080024C8: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_08002528;
    }
    // 0x080024C8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080024CC: lhu         $t3, 0x7E($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X7E);
    // 0x080024D0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x080024D4: sb          $t2, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r10;
    // 0x080024D8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x080024DC: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    // 0x080024E0: bgez        $t3, L_080024F8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x080024E4: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_080024F8;
    }
    // 0x080024E4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080024E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080024EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080024F0: nop

    // 0x080024F4: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_080024F8:
    // 0x080024F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080024FC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002500: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002504: swc1        $f10, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f10.u32l;
    // 0x08002508: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800250C: jalr        $t9
    // 0x08002510: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002510: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08002514: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002518: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800251C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X253C) << 16);
    // 0x08002520: jalr        $t9
    // 0x08002524: addiu       $a0, $a0, 0x253C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X253C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002524: addiu       $a0, $a0, 0x253C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X253C));
    after_2:
L_08002528:
    // 0x08002528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800252C:
    // 0x0800252C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002534: jr          $ra
    // 0x08002538: nop

    TRACE_RETURN()
    return;
    // 0x08002538: nop

;}
RECOMP_FUNC void func_080029C0_6DC890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080029C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080029C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080029C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080029CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029D0: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080029D4: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x080029D8: lui         $a2, 0x3EE6
    ctx->r6 = S32(0X3EE6 << 16);
    // 0x080029DC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x080029E0: jalr        $t9
    // 0x080029E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080029E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080029E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080029EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080029F0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080029F4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080029F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080029FC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08002A00: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002A04: beq         $v1, $zero, L_08002A74
    if (ctx->r3 == 0) {
        // 0x08002A08: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08002A74;
    }
    // 0x08002A08: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08002A0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002A10: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A14: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002A18: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002A1C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002A20: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002A24: jalr        $t9
    // 0x08002A28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002A28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08002A2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A30: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002A34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002A38: jalr        $t9
    // 0x08002A3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x08002A40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A44: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002A48: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002A4C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002A50: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    // 0x08002A54: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002A58: jalr        $t9
    // 0x08002A5C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A5C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
    // 0x08002A60: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A64: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A68: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2A84) << 16);
    // 0x08002A6C: jalr        $t9
    // 0x08002A70: addiu       $a0, $a0, 0x2A84
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2A84));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002A70: addiu       $a0, $a0, 0x2A84
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2A84));
    after_4:
L_08002A74:
    // 0x08002A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A7C: jr          $ra
    // 0x08002A80: nop

    TRACE_RETURN()
    return;
    // 0x08002A80: nop

;}
RECOMP_FUNC void func_080014A0_6DB370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080014A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080014B0: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080014B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080014B8: jalr        $t9
    // 0x080014BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080014C0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080014C4: bne         $v0, $zero, L_08001550
    if (ctx->r2 != 0) {
        // 0x080014C8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08001550;
    }
    // 0x080014C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080014CC: lw          $v0, 0x84($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X84);
    // 0x080014D0: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080014D4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080014D8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080014DC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080014E0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080014E4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080014E8: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080014EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080014F0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080014F4: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080014F8: nop

    // 0x080014FC: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001500: jalr        $t9
    // 0x08001504: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001504: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_1:
    // 0x08001508: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x0800150C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001510: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1560) << 16);
    // 0x08001514: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08001518: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800151C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001520: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08001524: addiu       $a0, $a0, 0x1560
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1560));
    // 0x08001528: bc1fl       L_08001554
    if (!c1cs) {
        // 0x0800152C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001554;
    }
    goto skip_0;
    // 0x0800152C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001530: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001534: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001538: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800153C: swc1        $f6, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->f6.u32l;
    // 0x08001540: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001544: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08001548: jalr        $t9
    // 0x0800154C: swc1        $f8, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800154C: swc1        $f8, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->f8.u32l;
    after_2:
L_08001550:
    // 0x08001550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001554:
    // 0x08001554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001558: jr          $ra
    // 0x0800155C: nop

    TRACE_RETURN()
    return;
    // 0x0800155C: nop

;}
RECOMP_FUNC void func_08002B74_6DCA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002B7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002B80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B84: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08002B88: lw          $a3, 0xD8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XD8);
    // 0x08002B8C: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08002B90: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x08002B94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08002B98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002B9C: jalr        $t9
    // 0x08002BA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x08002BA4: bne         $v0, $zero, L_08002C10
    if (ctx->r2 != 0) {
        // 0x08002BA8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08002C10;
    }
    // 0x08002BA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002BAC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002BB0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08002BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002BB8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002BBC: bne         $v0, $zero, L_08002C10
    if (ctx->r2 != 0) {
        // 0x08002BC0: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08002C10;
    }
    // 0x08002BC0: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08002BC4: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002BC8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002BCC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002BD0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08002BD4: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08002BD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002BDC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x08002BE0: jalr        $t9
    // 0x08002BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002BE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BEC: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002BF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002BF4: jalr        $t9
    // 0x08002BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08002BFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C00: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C04: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2C20) << 16);
    // 0x08002C08: jalr        $t9
    // 0x08002C0C: addiu       $a0, $a0, 0x2C20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2C20));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002C0C: addiu       $a0, $a0, 0x2C20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2C20));
    after_3:
L_08002C10:
    // 0x08002C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C18: jr          $ra
    // 0x08002C1C: nop

    TRACE_RETURN()
    return;
    // 0x08002C1C: nop

;}
RECOMP_FUNC void func_08003148_6DD018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800314C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08003150: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003154: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08003158: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800315C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08003160: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003164: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x08003168: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800316C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003170: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08003174: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003178: jalr        $t9
    // 0x0800317C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800317C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08003180: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003184: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08003188: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800318C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08003190: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003194: sw          $t8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r24;
    // 0x08003198: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800319C: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x080031A0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080031A4: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x080031A8: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x080031AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080031B0: jalr        $t9
    // 0x080031B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x080031B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080031BC: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080031C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080031C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080031C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080031CC: jalr        $t9
    // 0x080031D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080031D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080031D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5294) << 16);
    // 0x080031D8: lwc1        $f0, 0x5294($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5294));
    // 0x080031DC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x080031E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080031E4: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x080031E8: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x080031EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080031F4: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x080031F8: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x080031FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003200: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x08003204: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3B60) << 16);
    // 0x08003208: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x0800320C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08003210: sb          $t3, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r11;
    // 0x08003214: jalr        $t9
    // 0x08003218: addiu       $a0, $a0, 0x3B60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3B60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003218: addiu       $a0, $a0, 0x3B60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3B60));
    after_3:
    // 0x0800321C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003220: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003224: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003228: jr          $ra
    // 0x0800322C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800322C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080015D4_6DB4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080015D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080015DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080015E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080015E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015E8: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080015EC: lw          $a3, 0xE0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XE0);
    // 0x080015F0: lw          $a1, 0xDC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XDC);
    // 0x080015F4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x080015F8: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x080015FC: jalr        $t9
    // 0x08001600: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001600: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x08001604: bne         $v0, $zero, L_0800161C
    if (ctx->r2 != 0) {
        // 0x08001608: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X162C) << 16);
            goto L_0800161C;
    }
    // 0x08001608: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X162C) << 16);
    // 0x0800160C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001610: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001614: jalr        $t9
    // 0x08001618: addiu       $a0, $a0, 0x162C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X162C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001618: addiu       $a0, $a0, 0x162C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X162C));
    after_1:
L_0800161C:
    // 0x0800161C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001620: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001624: jr          $ra
    // 0x08001628: nop

    TRACE_RETURN()
    return;
    // 0x08001628: nop

;}
RECOMP_FUNC void func_08002070_6DBF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800207C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002080: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08002084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002088: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x0800208C: bnel        $t6, $zero, L_0800212C
    if (ctx->r14 != 0) {
        // 0x08002090: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800212C;
    }
    goto skip_0;
    // 0x08002090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08002094: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002098: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800209C: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x080020A0: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x080020A4: beq         $t9, $zero, L_08002128
    if (ctx->r25 == 0) {
        // 0x080020A8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08002128;
    }
    // 0x080020A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080020AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080020B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080020B4: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
    // 0x080020B8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080020BC: jalr        $t9
    // 0x080020C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080020C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020C8: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080020CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080020D0: jalr        $t9
    // 0x080020D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080020D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x080020D8: lh          $t1, 0xA0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA0);
    // 0x080020DC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080020E0: lh          $t2, 0xA2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA2);
    // 0x080020E4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x080020E8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080020EC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x080020F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080020F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1B68) << 16);
    // 0x08002100: addiu       $a0, $a0, 0x1B68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1B68));
    // 0x08002104: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08002108: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x0800210C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x08002110: swc1        $f10, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f10.u32l;
    // 0x08002114: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08002118: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x0800211C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x08002120: jalr        $t9
    // 0x08002124: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002124: swc1        $f6, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f6.u32l;
    after_2:
L_08002128:
    // 0x08002128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800212C:
    // 0x0800212C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002130: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002134: jr          $ra
    // 0x08002138: nop

    TRACE_RETURN()
    return;
    // 0x08002138: nop

;}
RECOMP_FUNC void func_0800350C_6DD3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800350C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003510: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x08003514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800351C: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x08003520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003524: jalr        $t9
    // 0x08003528: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003528: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800352C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08003530: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x08003534: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08003538: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x0800353C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003540: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003544: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x08003548: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800354C: c.eq.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d == ctx->f0.d;
    // 0x08003550: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08003554: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003558: addiu       $a0, $zero, 0x22C
    ctx->r4 = ADD32(0, 0X22C);
    // 0x0800355C: bc1f        L_08003578
    if (!c1cs) {
        // 0x08003560: lui         $a3, 0x43C8
        ctx->r7 = S32(0X43C8 << 16);
            goto L_08003578;
    }
    // 0x08003560: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08003564: jalr        $t9
    // 0x08003568: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003568: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x0800356C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08003570: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x08003574: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_08003578:
    // 0x08003578: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5298) << 16);
    // 0x0800357C: ldc1        $f10, 0x5298($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5298));
    // 0x08003580: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08003584: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08003588: c.eq.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d == ctx->f0.d;
    // 0x0800358C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08003590: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003594: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08003598: bc1f        L_080035AC
    if (!c1cs) {
        // 0x0800359C: addiu       $a0, $zero, 0x21C
        ctx->r4 = ADD32(0, 0X21C);
            goto L_080035AC;
    }
    // 0x0800359C: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    // 0x080035A0: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x080035A4: lwc1        $f16, 0x28($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X28);
    // 0x080035A8: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
L_080035AC:
    // 0x080035AC: c.eq.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d == ctx->f0.d;
    // 0x080035B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080035B4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080035B8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080035BC: bc1f        L_080035D8
    if (!c1cs) {
        // 0x080035C0: nop
    
            goto L_080035D8;
    }
    // 0x080035C0: nop

    // 0x080035C4: jalr        $t9
    // 0x080035C8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080035C8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_2:
    // 0x080035CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080035D0: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x080035D4: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
L_080035D8:
    // 0x080035D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52A0) << 16);
    // 0x080035DC: ldc1        $f6, 0x52A0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X52A0));
    // 0x080035E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035E4: c.eq.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d == ctx->f0.d;
    // 0x080035E8: nop

    // 0x080035EC: bc1fl       L_0800361C
    if (!c1cs) {
        // 0x080035F0: lbu         $t8, 0x7C($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X7C);
            goto L_0800361C;
    }
    goto skip_0;
    // 0x080035F0: lbu         $t8, 0x7C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X7C);
    skip_0:
    // 0x080035F4: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080035F8: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x080035FC: slti        $v1, $v0, 0xF
    ctx->r3 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x08003600: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08003604: beq         $v1, $zero, L_08003614
    if (ctx->r3 == 0) {
        // 0x08003608: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08003614;
    }
    // 0x08003608: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x0800360C: b           L_08003618
    // 0x08003610: sh          $zero, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = 0;
        goto L_08003618;
    // 0x08003610: sh          $zero, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = 0;
L_08003614:
    // 0x08003614: sh          $t7, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r15;
L_08003618:
    // 0x08003618: lbu         $t8, 0x7C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X7C);
L_0800361C:
    // 0x0800361C: andi        $t0, $t8, 0x4
    ctx->r8 = ctx->r24 & 0X4;
    // 0x08003620: beql        $t0, $zero, L_080036B8
    if (ctx->r8 == 0) {
        // 0x08003624: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080036B8;
    }
    goto skip_1;
    // 0x08003624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08003628: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x0800362C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X4DA8) << 16);
    // 0x08003630: addiu       $t9, $t9, 0x4DA8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X4DA8));
    // 0x08003634: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08003638: jalr        $t9
    // 0x0800363C: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800363C: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_3:
    // 0x08003640: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003644: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003648: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x0800364C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003650: jalr        $t9
    // 0x08003654: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003654: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_4:
    // 0x08003658: beq         $v0, $zero, L_08003674
    if (ctx->r2 == 0) {
        // 0x0800365C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003674;
    }
    // 0x0800365C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003660: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x08003664: slti        $at, $v0, 0x61
    ctx->r1 = SIGNED(ctx->r2) < 0X61 ? 1 : 0;
    // 0x08003668: bne         $at, $zero, L_080036B4
    if (ctx->r1 != 0) {
        // 0x0800366C: slti        $at, $v0, 0x3A0
        ctx->r1 = SIGNED(ctx->r2) < 0X3A0 ? 1 : 0;
            goto L_080036B4;
    }
    // 0x0800366C: slti        $at, $v0, 0x3A0
    ctx->r1 = SIGNED(ctx->r2) < 0X3A0 ? 1 : 0;
    // 0x08003670: beq         $at, $zero, L_080036B4
    if (ctx->r1 == 0) {
        // 0x08003674: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080036B4;
    }
L_08003674:
    // 0x08003674: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003678: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800367C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003680: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x08003684: jalr        $t9
    // 0x08003688: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003688: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x0800368C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003690: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08003694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003698: jalr        $t9
    // 0x0800369C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800369C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x080036A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3364) << 16);
    // 0x080036AC: jalr        $t9
    // 0x080036B0: addiu       $a0, $a0, 0x3364
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3364));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080036B0: addiu       $a0, $a0, 0x3364
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3364));
    after_7:
L_080036B4:
    // 0x080036B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080036B8:
    // 0x080036B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080036BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080036C0: jr          $ra
    // 0x080036C4: nop

    TRACE_RETURN()
    return;
    // 0x080036C4: nop

;}
RECOMP_FUNC void func_08004B18_6DE9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004B18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004B1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004B20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004B24: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x08004B28: lui         $t6, 0x2C0
    ctx->r14 = S32(0X2C0 << 16);
    // 0x08004B2C: sb          $t9, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r25;
    // 0x08004B30: ori         $t6, $t6, 0x7E0
    ctx->r14 = ctx->r14 | 0X7E0;
    // 0x08004B34: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x08004B38: addiu       $t8, $zero, 0xF2
    ctx->r24 = ADD32(0, 0XF2);
    // 0x08004B3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004B40: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08004B44: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08004B48: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08004B4C: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08004B50: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004B54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004B58: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08004B5C: jalr        $t9
    // 0x08004B60: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B60: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x08004B64: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52C4) << 16);
    // 0x08004B68: lwc1        $f0, 0x52C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X52C4));
    // 0x08004B6C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08004B70: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08004B74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004B78: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004B7C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08004B80: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08004B84: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08004B88: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08004B8C: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x08004B90: jalr        $t9
    // 0x08004B94: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B94: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    after_1:
    // 0x08004B98: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08004B9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08004BA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08004BA4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08004BA8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08004BAC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08004BB0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004BB4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08004BB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08004BBC: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x08004BC0: jalr        $t9
    // 0x08004BC4: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004BC4: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    after_2:
    // 0x08004BC8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08004BCC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08004BD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004BD4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08004BD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BDC: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x08004BE0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004BE8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08004BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004BF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004BF4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08004BF8: jalr        $t9
    // 0x08004BFC: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004BFC: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x08004C00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C04: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08004C08: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08004C0C: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08004C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004C14: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08004C18: jalr        $t9
    // 0x08004C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08004C20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004C24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004C28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4C48) << 16);
    // 0x08004C2C: jalr        $t9
    // 0x08004C30: addiu       $a0, $a0, 0x4C48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4C48));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004C30: addiu       $a0, $a0, 0x4C48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4C48));
    after_5:
    // 0x08004C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004C38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004C40: jr          $ra
    // 0x08004C44: nop

    TRACE_RETURN()
    return;
    // 0x08004C44: nop

;}
RECOMP_FUNC void func_080018D0_6DB7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080018D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080018D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080018DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080018E0: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x080018E4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080018E8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080018EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080018F0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080018F4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080018F8: c.eq.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d == ctx->f6.d;
    // 0x080018FC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001900: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001904: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001908: bc1f        L_08001928
    if (!c1cs) {
        // 0x0800190C: addiu       $a0, $zero, 0x25D
        ctx->r4 = ADD32(0, 0X25D);
            goto L_08001928;
    }
    // 0x0800190C: addiu       $a0, $zero, 0x25D
    ctx->r4 = ADD32(0, 0X25D);
    // 0x08001910: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001914: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001918: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x0800191C: jalr        $t9
    // 0x08001920: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001920: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08001924: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
L_08001928:
    // 0x08001928: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x0800192C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001930: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001934: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001938: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x0800193C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001940: bc1fl       L_0800195C
    if (!c1cs) {
        // 0x08001944: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_0800195C;
    }
    goto skip_0;
    // 0x08001944: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_0:
    // 0x08001948: jalr        $t9
    // 0x0800194C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800194C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x08001950: b           L_08001AD0
    // 0x08001954: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
        goto L_08001AD0;
    // 0x08001954: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
    // 0x08001958: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_0800195C:
    // 0x0800195C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001960: bc1fl       L_080019B8
    if (!c1cs) {
        // 0x08001964: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_080019B8;
    }
    goto skip_1;
    // 0x08001964: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_1:
    // 0x08001968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800196C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001970: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001974: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08001978: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800197C: bc1fl       L_080019B8
    if (!c1cs) {
        // 0x08001980: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_080019B8;
    }
    goto skip_2;
    // 0x08001980: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_2:
    // 0x08001984: jalr        $t9
    // 0x08001988: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001988: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x0800198C: lhu         $v0, 0x7E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7E);
    // 0x08001990: slti        $at, $v0, 0x11
    ctx->r1 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x08001994: bnel        $at, $zero, L_08001AD0
    if (ctx->r1 != 0) {
        // 0x08001998: lbu         $t5, 0x7C($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X7C);
            goto L_08001AD0;
    }
    goto skip_3;
    // 0x08001998: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
    skip_3:
    // 0x0800199C: bgez        $v0, L_080019AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080019A0: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_080019AC;
    }
    // 0x080019A0: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x080019A4: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x080019A8: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_080019AC:
    // 0x080019AC: b           L_08001ACC
    // 0x080019B0: sh          $t6, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r14;
        goto L_08001ACC;
    // 0x080019B0: sh          $t6, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r14;
    // 0x080019B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_080019B8:
    // 0x080019B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080019BC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x080019C0: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x080019C4: nop

    // 0x080019C8: bc1fl       L_08001A18
    if (!c1cs) {
        // 0x080019CC: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_08001A18;
    }
    goto skip_4;
    // 0x080019CC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    skip_4:
    // 0x080019D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080019D4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x080019D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080019DC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x080019E0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x080019E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019E8: bc1fl       L_08001A18
    if (!c1cs) {
        // 0x080019EC: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_08001A18;
    }
    goto skip_5;
    // 0x080019EC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    skip_5:
    // 0x080019F0: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x080019F4: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080019F8: sh          $t7, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r15;
    // 0x080019FC: addiu       $t0, $t8, 0x2
    ctx->r8 = ADD32(ctx->r24, 0X2);
    // 0x08001A00: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x08001A04: jalr        $t9
    // 0x08001A08: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A08: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    after_3:
    // 0x08001A0C: b           L_08001AD0
    // 0x08001A10: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
        goto L_08001AD0;
    // 0x08001A10: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
    // 0x08001A14: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
L_08001A18:
    // 0x08001A18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001A1C: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x08001A20: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x08001A24: nop

    // 0x08001A28: bc1fl       L_08001A7C
    if (!c1cs) {
        // 0x08001A2C: lui         $at, 0x41D8
        ctx->r1 = S32(0X41D8 << 16);
            goto L_08001A7C;
    }
    goto skip_6;
    // 0x08001A2C: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    skip_6:
    // 0x08001A30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A34: nop

    // 0x08001A38: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08001A3C: nop

    // 0x08001A40: bc1fl       L_08001A7C
    if (!c1cs) {
        // 0x08001A44: lui         $at, 0x41D8
        ctx->r1 = S32(0X41D8 << 16);
            goto L_08001A7C;
    }
    goto skip_7;
    // 0x08001A44: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    skip_7:
    // 0x08001A48: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x08001A4C: lhu         $v0, 0x7E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7E);
    // 0x08001A50: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x08001A54: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x08001A58: bne         $at, $zero, L_08001ACC
    if (ctx->r1 != 0) {
        // 0x08001A5C: sh          $t2, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r10;
            goto L_08001ACC;
    }
    // 0x08001A5C: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x08001A60: bgez        $v0, L_08001A70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001A64: sra         $t3, $v0, 1
        ctx->r11 = S32(SIGNED(ctx->r2) >> 1);
            goto L_08001A70;
    }
    // 0x08001A64: sra         $t3, $v0, 1
    ctx->r11 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08001A68: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x08001A6C: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_08001A70:
    // 0x08001A70: b           L_08001ACC
    // 0x08001A74: sh          $t3, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r11;
        goto L_08001ACC;
    // 0x08001A74: sh          $t3, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r11;
    // 0x08001A78: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
L_08001A7C:
    // 0x08001A7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001A80: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001A84: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x08001A88: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x08001A8C: nop

    // 0x08001A90: bc1fl       L_08001AD0
    if (!c1cs) {
        // 0x08001A94: lbu         $t5, 0x7C($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X7C);
            goto L_08001AD0;
    }
    goto skip_8;
    // 0x08001A94: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
    skip_8:
    // 0x08001A98: sh          $t4, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r12;
    // 0x08001A9C: lwc1        $f8, 0x78($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
    // 0x08001AA0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001AA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001AA8: lwc1        $f4, 0x80($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X80);
    // 0x08001AAC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001AB0: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08001AB4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001AB8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08001ABC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001AC0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001AC4: swc1        $f18, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f18.u32l;
    // 0x08001AC8: swc1        $f10, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f10.u32l;
L_08001ACC:
    // 0x08001ACC: lbu         $t5, 0x7C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7C);
L_08001AD0:
    // 0x08001AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001AD8: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x08001ADC: beq         $t6, $zero, L_08001B54
    if (ctx->r14 == 0) {
        // 0x08001AE0: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08001B54;
    }
    // 0x08001AE0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001AE4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001AE8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001AEC: jalr        $t9
    // 0x08001AF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001AF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08001AF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AF8: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001B00: jalr        $t9
    // 0x08001B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x08001B08: lh          $t7, 0xA0($s1)
    ctx->r15 = MEM_H(ctx->r17, 0XA0);
    // 0x08001B0C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001B10: lh          $t8, 0xA2($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XA2);
    // 0x08001B14: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x08001B18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B1C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x08001B20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001B24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1B68) << 16);
    // 0x08001B2C: addiu       $a0, $a0, 0x1B68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1B68));
    // 0x08001B30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001B34: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x08001B38: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x08001B3C: swc1        $f6, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->f6.u32l;
    // 0x08001B40: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001B44: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x08001B48: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x08001B4C: jalr        $t9
    // 0x08001B50: swc1        $f18, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001B50: swc1        $f18, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->f18.u32l;
    after_6:
L_08001B54:
    // 0x08001B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001B5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001B60: jr          $ra
    // 0x08001B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080013CC_6E056C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DB0) << 16);
    // 0x080013D0: lwc1        $f0, 0x4DB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DB0));
    // 0x080013D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080013D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080013DC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x080013E0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x080013E4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x080013E8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080013EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013F4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080013F8: bne         $v0, $zero, L_0800140C
    if (ctx->r2 != 0) {
        // 0x080013FC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800140C;
    }
    // 0x080013FC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001400: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X141C) << 16);
    // 0x08001404: jalr        $t9
    // 0x08001408: addiu       $a0, $a0, 0x141C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X141C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001408: addiu       $a0, $a0, 0x141C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X141C));
    after_0:
L_0800140C:
    // 0x0800140C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001414: jr          $ra
    // 0x08001418: nop

    TRACE_RETURN()
    return;
    // 0x08001418: nop

;}
RECOMP_FUNC void func_080014B4_6E0654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080014B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014BC: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x080014C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DC8) << 16);
    // 0x080014C4: ldc1        $f8, 0x4DC8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DC8));
    // 0x080014C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080014CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014D0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080014D4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080014D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080014DC: swc1        $f16, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f16.u32l;
    // 0x080014E0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080014E4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080014E8: bne         $v0, $zero, L_080014F8
    if (ctx->r2 != 0) {
        // 0x080014EC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080014F8;
    }
    // 0x080014EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080014F0: jalr        $t9
    // 0x080014F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014F4: nop

    after_0:
L_080014F8:
    // 0x080014F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080014FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001500: jr          $ra
    // 0x08001504: nop

    TRACE_RETURN()
    return;
    // 0x08001504: nop

;}
RECOMP_FUNC void func_080030EC_6E228C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080030F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080030F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080030FC: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003104: jalr        $t9
    // 0x08003108: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003108: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_0:
    // 0x0800310C: beq         $v0, $zero, L_0800315C
    if (ctx->r2 == 0) {
        // 0x08003110: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_0800315C;
    }
    // 0x08003110: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08003114: lw          $t6, 0x68($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X68);
    // 0x08003118: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X317C) << 16);
    // 0x0800311C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x08003120: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x08003124: beq         $t7, $zero, L_0800315C
    if (ctx->r15 == 0) {
        // 0x08003128: addiu       $a0, $a0, 0x317C
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X317C));
            goto L_0800315C;
    }
    // 0x08003128: addiu       $a0, $a0, 0x317C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X317C));
    // 0x0800312C: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08003130: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003134: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08003138: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x0800313C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003140: bgez        $t0, L_08003154
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08003144: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08003154;
    }
    // 0x08003144: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003148: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800314C: nop

    // 0x08003150: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08003154:
    // 0x08003154: jalr        $t9
    // 0x08003158: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003158: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    after_1:
L_0800315C:
    // 0x0800315C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003160: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08003164: jalr        $t9
    // 0x08003168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x0800316C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003174: jr          $ra
    // 0x08003178: nop

    TRACE_RETURN()
    return;
    // 0x08003178: nop

;}
RECOMP_FUNC void func_080046B4_6E3854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080046B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080046B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080046BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080046C0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080046C4: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x080046C8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080046CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080046D0: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x080046D4: mfhi        $t7
    ctx->r15 = hi;
    // 0x080046D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080046DC: bnel        $t7, $zero, L_08004744
    if (ctx->r15 != 0) {
        // 0x080046E0: lhu         $t1, 0x8A($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X8A);
            goto L_08004744;
    }
    goto skip_0;
    // 0x080046E0: lhu         $t1, 0x8A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8A);
    skip_0:
    // 0x080046E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080046E8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x080046EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4904) << 16);
    // 0x080046F0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080046F4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x080046F8: lhu         $t9, 0x16($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X16);
    // 0x080046FC: addiu       $a1, $a1, 0x4904
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4904));
    // 0x08004700: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08004704: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x08004708: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800470C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08004710: jalr        $t9
    // 0x08004714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x08004718: beq         $v0, $zero, L_08004740
    if (ctx->r2 == 0) {
        // 0x0800471C: addiu       $t0, $zero, 0x25
        ctx->r8 = ADD32(0, 0X25);
            goto L_08004740;
    }
    // 0x0800471C: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x08004720: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004724: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08004728: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800472C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08004730: jalr        $t9
    // 0x08004734: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004734: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_1:
    // 0x08004738: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x0800473C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08004740:
    // 0x08004740: lhu         $t1, 0x8A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8A);
L_08004744:
    // 0x08004744: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08004748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800474C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x08004750: mfhi        $t2
    ctx->r10 = hi;
    // 0x08004754: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08004758: bne         $t2, $at, L_080047C0
    if (ctx->r10 != ctx->r1) {
        // 0x0800475C: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(28, 0X4904) << 16);
            goto L_080047C0;
    }
    // 0x0800475C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4904) << 16);
    // 0x08004760: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08004764: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800476C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x08004770: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08004774: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08004778: lhu         $t4, 0x16($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X16);
    // 0x0800477C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004780: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08004784: addiu       $a1, $a1, 0x4904
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4904));
    // 0x08004788: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800478C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08004790: jalr        $t9
    // 0x08004794: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004794: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_2:
    // 0x08004798: beq         $v0, $zero, L_080047C0
    if (ctx->r2 == 0) {
        // 0x0800479C: addiu       $t5, $zero, 0x25
        ctx->r13 = ADD32(0, 0X25);
            goto L_080047C0;
    }
    // 0x0800479C: addiu       $t5, $zero, 0x25
    ctx->r13 = ADD32(0, 0X25);
    // 0x080047A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080047A4: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x080047A8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080047AC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x080047B0: jalr        $t9
    // 0x080047B4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080047B4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_3:
    // 0x080047B8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080047BC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080047C0:
    // 0x080047C0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080047C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X47F8) << 16);
    // 0x080047C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080047CC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080047D0: bne         $v0, $zero, L_080047E4
    if (ctx->r2 != 0) {
        // 0x080047D4: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_080047E4;
    }
    // 0x080047D4: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080047D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080047DC: jalr        $t9
    // 0x080047E0: addiu       $a0, $a0, 0x47F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X47F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080047E0: addiu       $a0, $a0, 0x47F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X47F8));
    after_4:
L_080047E4:
    // 0x080047E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080047E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080047EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x080047F0: jr          $ra
    // 0x080047F4: nop

    TRACE_RETURN()
    return;
    // 0x080047F4: nop

;}
RECOMP_FUNC void func_080015D4_6E0774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080015D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080015E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080015E4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080015E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080015EC: jalr        $t9
    // 0x080015F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080015F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080015F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015F8: addiu       $t9, $t9, -0x4854
    ctx->r25 = ADD32(ctx->r25, -0X4854);
    // 0x080015FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001600: jalr        $t9
    // 0x08001604: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001604: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_1:
    // 0x08001608: beq         $v0, $zero, L_08001630
    if (ctx->r2 == 0) {
        // 0x0800160C: lui         $t6, 0x2AE
        ctx->r14 = S32(0X2AE << 16);
            goto L_08001630;
    }
    // 0x0800160C: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08001610: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001614: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001618: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x0800161C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001620: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1640) << 16);
    // 0x08001624: addiu       $a0, $a0, 0x1640
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1640));
    // 0x08001628: jalr        $t9
    // 0x0800162C: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800162C: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    after_2:
L_08001630:
    // 0x08001630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001638: jr          $ra
    // 0x0800163C: nop

    TRACE_RETURN()
    return;
    // 0x0800163C: nop

;}
RECOMP_FUNC void func_080016BC_6E085C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080016C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080016C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080016CC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080016D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080016D4: jalr        $t9
    // 0x080016D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080016D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080016DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080016E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X1AEC) << 16);
    // 0x080016E4: addiu       $a1, $a1, 0x1AEC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X1AEC));
    // 0x080016E8: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x080016EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x080016F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080016F4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080016F8: bne         $v1, $zero, L_08001784
    if (ctx->r3 != 0) {
        // 0x080016FC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001784;
    }
    // 0x080016FC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001700: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001704: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001708: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800170C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001710: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001714: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001718: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800171C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08001720: jalr        $t9
    // 0x08001724: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001724: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08001728: beq         $v0, $zero, L_08001770
    if (ctx->r2 == 0) {
        // 0x0800172C: addiu       $t7, $zero, 0x25
        ctx->r15 = ADD32(0, 0X25);
            goto L_08001770;
    }
    // 0x0800172C: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08001730: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001734: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08001738: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800173C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001740: jalr        $t9
    // 0x08001744: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001744: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x08001748: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800174C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001750: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001754: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001758: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800175C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08001760: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001764: addiu       $a0, $zero, 0x268
    ctx->r4 = ADD32(0, 0X268);
    // 0x08001768: jalr        $t9
    // 0x0800176C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800176C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
L_08001770:
    // 0x08001770: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001774: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001778: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1794) << 16);
    // 0x0800177C: jalr        $t9
    // 0x08001780: addiu       $a0, $a0, 0x1794
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1794));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001780: addiu       $a0, $a0, 0x1794
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1794));
    after_4:
L_08001784:
    // 0x08001784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001788: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800178C: jr          $ra
    // 0x08001790: nop

    TRACE_RETURN()
    return;
    // 0x08001790: nop

;}
RECOMP_FUNC void func_08000C44_6DFDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000C48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000C54: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08000C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C5C: jalr        $t9
    // 0x08000C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000C64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C68: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08000C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C70: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000C74: jalr        $t9
    // 0x08000C78: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C78: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_1:
    // 0x08000C7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C80: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000C84: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000C88: jalr        $t9
    // 0x08000C8C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C8C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08000C90: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000C94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C98: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CA0: jalr        $t9
    // 0x08000CA4: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CA4: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08000CA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CAC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000CB8: jalr        $t9
    // 0x08000CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08000CC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000CC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000CCC: jr          $ra
    // 0x08000CD0: nop

    TRACE_RETURN()
    return;
    // 0x08000CD0: nop

;}
RECOMP_FUNC void func_08000B20_6DFCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B28: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000B2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B30: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08000B34: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000B38: beq         $t7, $zero, L_08000B50
    if (ctx->r15 == 0) {
        // 0x08000B3C: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08000B50;
    }
    // 0x08000B3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B40: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08000B44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XB60) << 16);
    // 0x08000B48: jalr        $t9
    // 0x08000B4C: addiu       $a0, $a0, 0xB60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XB60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B4C: addiu       $a0, $a0, 0xB60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XB60));
    after_0:
L_08000B50:
    // 0x08000B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B58: jr          $ra
    // 0x08000B5C: nop

    TRACE_RETURN()
    return;
    // 0x08000B5C: nop

;}
RECOMP_FUNC void func_080039EC_6E2B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080039F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080039F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080039F8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080039FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A00: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003A04: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003A08: bne         $v0, $zero, L_08003A30
    if (ctx->r2 != 0) {
        // 0x08003A0C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003A30;
    }
    // 0x08003A0C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003A10: jalr        $t9
    // 0x08003A14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003A18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A1C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003A20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003A28: jalr        $t9
    // 0x08003A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08003A30:
    // 0x08003A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003A38: jr          $ra
    // 0x08003A3C: nop

    TRACE_RETURN()
    return;
    // 0x08003A3C: nop

;}
RECOMP_FUNC void func_0800317C_6E231C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800317C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003180: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800318C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003190: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003194: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800319C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080031A0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080031A4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080031A8: jalr        $t9
    // 0x080031AC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031AC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x080031B0: bne         $v0, $zero, L_080031F8
    if (ctx->r2 != 0) {
        // 0x080031B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080031F8;
    }
    // 0x080031B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080031B8: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080031BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080031C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080031C4: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080031C8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080031CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080031D0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080031D4: jalr        $t9
    // 0x080031D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080031DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031E0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x080031E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X320C) << 16);
    // 0x080031EC: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080031F0: jalr        $t9
    // 0x080031F4: addiu       $a0, $a0, 0x320C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X320C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080031F4: addiu       $a0, $a0, 0x320C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X320C));
    after_2:
L_080031F8:
    // 0x080031F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080031FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003204: jr          $ra
    // 0x08003208: nop

    TRACE_RETURN()
    return;
    // 0x08003208: nop

;}
RECOMP_FUNC void func_080006E0_6DF880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080006E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080006EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080006F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080006F4: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080006F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080006FC: jalr        $t9
    // 0x08000700: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000700: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000704: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000708: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800070C: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000710: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000714: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000718: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x0800071C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000724: jalr        $t9
    // 0x08000728: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000728: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x0800072C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D74) << 16);
    // 0x08000730: lwc1        $f0, 0x4D74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D74));
    // 0x08000734: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800073C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000740: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000744: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08000748: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x0800074C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x08000750: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000754: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000758: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800075C: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000760: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000764: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000768: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000770: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000774: jalr        $t9
    // 0x08000778: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000778: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x0800077C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000780: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000784: jalr        $t9
    // 0x08000788: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000788: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x0800078C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x08000790: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000794: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000798: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x0800079C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080007A0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x080007A4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080007A8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080007AC: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x080007B0: jalr        $t9
    // 0x080007B4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080007B4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x080007B8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x080007BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080007C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080007C4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080007C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007CC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x080007D0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007D8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080007DC: jalr        $t9
    // 0x080007E0: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080007E0: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x080007E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007E8: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x080007EC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080007F0: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080007FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000800: jalr        $t9
    // 0x08000804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000808: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800080C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000810: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000814: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800081C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000820: jalr        $t9
    // 0x08000824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000828: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800082C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000830: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X850) << 16);
    // 0x08000834: jalr        $t9
    // 0x08000838: addiu       $a0, $a0, 0x850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X850));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000838: addiu       $a0, $a0, 0x850
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X850));
    after_8:
    // 0x0800083C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000840: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000844: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000848: jr          $ra
    // 0x0800084C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800084C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08001900_6E0AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800190C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001910: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001914: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001918: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800191C: beq         $t7, $zero, L_0800192C
    if (ctx->r15 == 0) {
        // 0x08001920: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(28, 0X193C) << 16);
            goto L_0800192C;
    }
    // 0x08001920: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X193C) << 16);
    // 0x08001924: jalr        $t9
    // 0x08001928: addiu       $a0, $a0, 0x193C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X193C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001928: addiu       $a0, $a0, 0x193C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X193C));
    after_0:
L_0800192C:
    // 0x0800192C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001934: jr          $ra
    // 0x08001938: nop

    TRACE_RETURN()
    return;
    // 0x08001938: nop

;}
RECOMP_FUNC void func_080023D0_6E1570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080023D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080023D8: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x080023DC: lhu         $t9, 0x16($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X16);
    // 0x080023E0: lhu         $t1, 0x18($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X18);
    // 0x080023E4: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x080023E8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080023EC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x080023F0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080023F4: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x080023F8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x080023FC: sh          $t2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r10;
    // 0x08002400: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002404: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x08002408: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800240C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08002410: bne         $v0, $zero, L_08002434
    if (ctx->r2 != 0) {
        // 0x08002414: sh          $t3, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r11;
            goto L_08002434;
    }
    // 0x08002414: sh          $t3, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r11;
    // 0x08002418: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800241C: sh          $t4, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r12;
    // 0x08002420: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002424: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08002428: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2444) << 16);
    // 0x0800242C: jalr        $t9
    // 0x08002430: addiu       $a0, $a0, 0x2444
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2444));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002430: addiu       $a0, $a0, 0x2444
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2444));
    after_0:
L_08002434:
    // 0x08002434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800243C: jr          $ra
    // 0x08002440: nop

    TRACE_RETURN()
    return;
    // 0x08002440: nop

;}
RECOMP_FUNC void func_08001A6C_6E0C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A74: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001A78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A7C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x08001A80: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08001A84: beq         $t7, $zero, L_08001A9C
    if (ctx->r15 == 0) {
        // 0x08001A88: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08001A9C;
    }
    // 0x08001A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A8C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08001A90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1AAC) << 16);
    // 0x08001A94: jalr        $t9
    // 0x08001A98: addiu       $a0, $a0, 0x1AAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1AAC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A98: addiu       $a0, $a0, 0x1AAC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1AAC));
    after_0:
L_08001A9C:
    // 0x08001A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AA4: jr          $ra
    // 0x08001AA8: nop

    TRACE_RETURN()
    return;
    // 0x08001AA8: nop

;}
RECOMP_FUNC void func_08002518_6E16B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002518: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800251C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002520: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002524: lui         $at, 0xC254
    ctx->r1 = S32(0XC254 << 16);
    // 0x08002528: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800252C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08002530: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002534: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x08002538: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x0800253C: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x08002540: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x08002544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002548: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x0800254C: bc1f        L_08002560
    if (!c1cs) {
        // 0x08002550: sh          $t9, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r25;
            goto L_08002560;
    }
    // 0x08002550: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    // 0x08002554: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002558: nop

    // 0x0800255C: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
L_08002560:
    // 0x08002560: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002564: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002568: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    // 0x0800256C: jalr        $t9
    // 0x08002570: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002570: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002574: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08002578: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800257C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08002580: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002584: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08002588: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800258C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002590: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002594: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x08002598: jalr        $t9
    // 0x0800259C: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800259C: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    after_1:
    // 0x080025A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080025A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080025A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x080025AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080025B0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x080025B4: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080025B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080025BC: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080025C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025C4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080025C8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x080025CC: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080025D0: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080025D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x080025D8: jalr        $t9
    // 0x080025DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080025DC: nop

    after_2:
    // 0x080025E0: bne         $v0, $zero, L_080025FC
    if (ctx->r2 != 0) {
        // 0x080025E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080025FC;
    }
    // 0x080025E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080025E8: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080025EC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080025F0: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x080025F4: beq         $v1, $zero, L_08002680
    if (ctx->r3 == 0) {
        // 0x080025F8: sh          $t0, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r8;
            goto L_08002680;
    }
    // 0x080025F8: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
L_080025FC:
    // 0x080025FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002600: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002604: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002608: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800260C: jalr        $t9
    // 0x08002610: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002610: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08002614: beq         $v0, $zero, L_08002674
    if (ctx->r2 == 0) {
        // 0x08002618: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_08002674;
    }
    // 0x08002618: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x0800261C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002620: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08002624: jalr        $t9
    // 0x08002628: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002628: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x0800262C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002630: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08002634: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002638: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800263C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002640: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002644: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08002648: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800264C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002650: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002654: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002658: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x0800265C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x08002660: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08002664: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002668: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x0800266C: jalr        $t9
    // 0x08002670: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002670: nop

    after_5:
L_08002674:
    // 0x08002674: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    // 0x08002678: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x0800267C: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
L_08002680:
    // 0x08002680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002688: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800268C: jr          $ra
    // 0x08002690: nop

    TRACE_RETURN()
    return;
    // 0x08002690: nop

;}
RECOMP_FUNC void func_0800193C_6E0ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800193C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001940: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800194C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001950: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001958: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800195C: jalr        $t9
    // 0x08001960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001964: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001968: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800196C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08001970: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001974: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1994) << 16);
    // 0x08001978: addiu       $a0, $a0, 0x1994
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1994));
    // 0x0800197C: jalr        $t9
    // 0x08001980: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001980: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08001984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800198C: jr          $ra
    // 0x08001990: nop

    TRACE_RETURN()
    return;
    // 0x08001990: nop

;}
RECOMP_FUNC void func_08004584_6E3724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004584: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08004588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800458C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004590: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004594: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004598: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800459C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080045A0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080045A4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080045A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080045AC: jalr        $t9
    // 0x080045B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080045B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080045B4: bne         $v0, $zero, L_080045E4
    if (ctx->r2 != 0) {
        // 0x080045B8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080045E4;
    }
    // 0x080045B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080045BC: lw          $t6, 0x60($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X60);
    // 0x080045C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080045C4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x080045C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080045CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X45F4) << 16);
    // 0x080045D0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080045D4: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x080045D8: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    // 0x080045DC: jalr        $t9
    // 0x080045E0: addiu       $a0, $a0, 0x45F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X45F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080045E0: addiu       $a0, $a0, 0x45F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X45F4));
    after_1:
L_080045E4:
    // 0x080045E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080045E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080045EC: jr          $ra
    // 0x080045F0: nop

    TRACE_RETURN()
    return;
    // 0x080045F0: nop

;}
RECOMP_FUNC void func_080038CC_6E2A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080038D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080038D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080038D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080038DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080038E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038E4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080038E8: bne         $v0, $zero, L_080038FC
    if (ctx->r2 != 0) {
        // 0x080038EC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080038FC;
    }
    // 0x080038EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080038F0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080038F4: jalr        $t9
    // 0x080038F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080038F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_080038FC:
    // 0x080038FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003904: jr          $ra
    // 0x08003908: nop

    TRACE_RETURN()
    return;
    // 0x08003908: nop

;}
RECOMP_FUNC void func_08002BB4_6E1D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002BB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002BC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002BC4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002BC8: jalr        $t9
    // 0x08002BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x08002BD0: bne         $v0, $zero, L_08002BE8
    if (ctx->r2 != 0) {
        // 0x08002BD4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(28, 0X2BF8) << 16);
            goto L_08002BE8;
    }
    // 0x08002BD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2BF8) << 16);
    // 0x08002BD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BDC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BE0: jalr        $t9
    // 0x08002BE4: addiu       $a0, $a0, 0x2BF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2BF8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BE4: addiu       $a0, $a0, 0x2BF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2BF8));
    after_1:
L_08002BE8:
    // 0x08002BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002BF0: jr          $ra
    // 0x08002BF4: nop

    TRACE_RETURN()
    return;
    // 0x08002BF4: nop

;}
RECOMP_FUNC void func_080027BC_6E195C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080027C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080027C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080027C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080027CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080027D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027D4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080027D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080027DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080027E0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x080027E4: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x080027E8: jalr        $t9
    // 0x080027EC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027EC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x080027F0: bne         $v0, $zero, L_08002838
    if (ctx->r2 != 0) {
        // 0x080027F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002838;
    }
    // 0x080027F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027F8: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x080027FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002800: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002804: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08002808: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x0800280C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002810: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002814: jalr        $t9
    // 0x08002818: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002818: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800281C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002820: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x08002824: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002828: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X284C) << 16);
    // 0x0800282C: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08002830: jalr        $t9
    // 0x08002834: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X284C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002834: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X284C));
    after_2:
L_08002838:
    // 0x08002838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800283C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002844: jr          $ra
    // 0x08002848: nop

    TRACE_RETURN()
    return;
    // 0x08002848: nop

;}
RECOMP_FUNC void func_08003B30_6E2CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003B38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003B3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003B40: addiu       $t9, $zero, 0x82
    ctx->r25 = ADD32(0, 0X82);
    // 0x08003B44: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003B48: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08003B4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003B50: lui         $t7, 0x2A0
    ctx->r15 = S32(0X2A0 << 16);
    // 0x08003B54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B58: addiu       $t6, $zero, 0x13E
    ctx->r14 = ADD32(0, 0X13E);
    // 0x08003B5C: ori         $t7, $t7, 0x7E1
    ctx->r15 = ctx->r15 | 0X7E1;
    // 0x08003B60: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x08003B64: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x08003B68: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003B6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003B70: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003B74: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003B78: sb          $t8, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r24;
    // 0x08003B7C: sb          $t0, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r8;
    // 0x08003B80: jalr        $t9
    // 0x08003B84: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B84: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x08003B88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003B8C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003B94: jalr        $t9
    // 0x08003B98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x08003B9C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DF8) << 16);
    // 0x08003BA0: lwc1        $f0, 0x4DF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DF8));
    // 0x08003BA4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08003BA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BAC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BB4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08003BB8: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08003BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003BC0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003BC4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003BC8: jalr        $t9
    // 0x08003BCC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003BCC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x08003BD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BD4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BDC: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x08003BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003BE4: jalr        $t9
    // 0x08003BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08003BEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BF0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08003BFC: jalr        $t9
    // 0x08003C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08003C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C08: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08003C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C10: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    // 0x08003C14: jalr        $t9
    // 0x08003C18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003C18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_5:
    // 0x08003C1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C20: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08003C24: jalr        $t9
    // 0x08003C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08003C2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3C54) << 16);
    // 0x08003C38: jalr        $t9
    // 0x08003C3C: addiu       $a0, $a0, 0x3C54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3C54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003C3C: addiu       $a0, $a0, 0x3C54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3C54));
    after_7:
    // 0x08003C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003C44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003C4C: jr          $ra
    // 0x08003C50: nop

    TRACE_RETURN()
    return;
    // 0x08003C50: nop

;}
RECOMP_FUNC void func_080021AC_6E134C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080021AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080021B0: lui         $t6, 0x24
    ctx->r14 = S32(0X24 << 16);
    // 0x080021B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080021B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080021BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080021C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080021C4: ori         $t6, $t6, 0x16C1
    ctx->r14 = ctx->r14 | 0X16C1;
    // 0x080021C8: addiu       $t9, $t9, 0x6FFC
    ctx->r25 = ADD32(ctx->r25, 0X6FFC);
    // 0x080021CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080021D0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080021D4: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x080021D8: jalr        $t9
    // 0x080021DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080021E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080021E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080021E8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080021EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021F0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080021F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080021FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002200: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002204: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08002208: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x0800220C: jalr        $t9
    // 0x08002210: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002210: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08002214: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002218: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800221C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002220: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x08002224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002228: jalr        $t9
    // 0x0800222C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800222C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002230: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002234: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08002238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800223C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08002240: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08002244: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x08002248: jalr        $t9
    // 0x0800224C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800224C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08002250: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x08002254: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002258: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x0800225C: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x08002260: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08002264: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08002268: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800226C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X229C) << 16);
    // 0x08002270: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08002274: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08002278: sb          $t1, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r9;
    // 0x0800227C: sb          $t2, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r10;
    // 0x08002280: jalr        $t9
    // 0x08002284: addiu       $a0, $a0, 0x229C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X229C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002284: addiu       $a0, $a0, 0x229C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X229C));
    after_4:
    // 0x08002288: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800228C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002294: jr          $ra
    // 0x08002298: nop

    TRACE_RETURN()
    return;
    // 0x08002298: nop

;}
RECOMP_FUNC void func_0800063C_6DF7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800063C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000640: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000648: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800064C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000658: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800065C: jalr        $t9
    // 0x08000660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000664: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000668: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800066C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000670: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08000674: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000678: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X69C) << 16);
    // 0x0800067C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000680: addiu       $a0, $a0, 0x69C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X69C));
    // 0x08000684: jalr        $t9
    // 0x08000688: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000688: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    after_1:
    // 0x0800068C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000694: jr          $ra
    // 0x08000698: nop

    TRACE_RETURN()
    return;
    // 0x08000698: nop

;}
RECOMP_FUNC void func_080001CC_6DF36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080001D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080001D8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080001DC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080001E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080001EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080001F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080001F4: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x080001F8: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x080001FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000200: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000204: slti        $a1, $v1, 0x19
    ctx->r5 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x08000208: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x0800020C: beq         $a1, $zero, L_0800029C
    if (ctx->r5 == 0) {
        // 0x08000210: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800029C;
    }
    // 0x08000210: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000214: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000218: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x0800021C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000220: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X6E0) << 16);
    // 0x08000224: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000228: addiu       $a1, $a1, 0x6E0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X6E0));
    // 0x0800022C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000230: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000234: jalr        $t9
    // 0x08000238: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000238: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x0800023C: beq         $v0, $zero, L_08000288
    if (ctx->r2 == 0) {
        // 0x08000240: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_08000288;
    }
    // 0x08000240: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000244: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000248: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800024C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000250: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000254: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08000258: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800025C: jalr        $t9
    // 0x08000260: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000260: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000264: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000268: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800026C: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08000270: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000274: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x08000278: jalr        $t9
    // 0x0800027C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800027C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_3:
    // 0x08000280: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08000284: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08000288:
    // 0x08000288: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800028C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000290: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2AC) << 16);
    // 0x08000294: jalr        $t9
    // 0x08000298: addiu       $a0, $a0, 0x2AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000298: addiu       $a0, $a0, 0x2AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2AC));
    after_4:
L_0800029C:
    // 0x0800029C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080002A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080002A4: jr          $ra
    // 0x080002A8: nop

    TRACE_RETURN()
    return;
    // 0x080002A8: nop

;}
RECOMP_FUNC void func_08001508_6E06A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800150C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001514: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001518: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800151C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001520: jalr        $t9
    // 0x08001524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001524: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001528: lui         $t6, 0x2E
    ctx->r14 = S32(0X2E << 16);
    // 0x0800152C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001530: ori         $t6, $t6, 0x86E0
    ctx->r14 = ctx->r14 | 0X86E0;
    // 0x08001534: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x08001538: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x0800153C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001540: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08001544: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x08001548: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x0800154C: jalr        $t9
    // 0x08001550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08001554: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001558: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800155C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001560: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800156C: jalr        $t9
    // 0x08001570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001578: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800157C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001580: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08001584: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x08001588: jalr        $t9
    // 0x0800158C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800158C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001590: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001594: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800159C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x080015A0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x080015A4: jalr        $t9
    // 0x080015A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080015AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X15D4) << 16);
    // 0x080015B8: jalr        $t9
    // 0x080015BC: addiu       $a0, $a0, 0x15D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X15D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080015BC: addiu       $a0, $a0, 0x15D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X15D4));
    after_5:
    // 0x080015C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080015C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080015C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080015CC: jr          $ra
    // 0x080015D0: nop

    TRACE_RETURN()
    return;
    // 0x080015D0: nop

;}
RECOMP_FUNC void func_08000F20_6E00C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000F2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000F30: addiu       $t6, $zero, 0x8C
    ctx->r14 = ADD32(0, 0X8C);
    // 0x08000F34: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000F38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XF5C) << 16);
    // 0x08000F44: jalr        $t9
    // 0x08000F48: addiu       $a0, $a0, 0xF5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F48: addiu       $a0, $a0, 0xF5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF5C));
    after_0:
    // 0x08000F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F54: jr          $ra
    // 0x08000F58: nop

    TRACE_RETURN()
    return;
    // 0x08000F58: nop

;}
RECOMP_FUNC void func_08002CF8_6E1E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002CFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002D04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002D08: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002D0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002D10: jalr        $t9
    // 0x08002D14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002D18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D1C: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x08002D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D24: jalr        $t9
    // 0x08002D28: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D28: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x08002D2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D30: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002D34: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002D38: jalr        $t9
    // 0x08002D3C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D3C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08002D40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08002D44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D48: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002D58: jalr        $t9
    // 0x08002D5C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002D5C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08002D60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002D6C: jr          $ra
    // 0x08002D70: nop

    TRACE_RETURN()
    return;
    // 0x08002D70: nop

;}
RECOMP_FUNC void func_0800290C_6E1AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800290C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002910: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002914: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08002918: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800291C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08002920: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08002924: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002928: jalr        $t9
    // 0x0800292C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800292C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x08002930: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x08002934: beq         $at, $zero, L_08002950
    if (ctx->r1 == 0) {
        // 0x08002938: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(28, 0X2D74) << 16);
            goto L_08002950;
    }
    // 0x08002938: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X2D74) << 16);
    // 0x0800293C: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x08002940: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x08002944: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002948: b           L_08002960
    // 0x0800294C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
        goto L_08002960;
    // 0x0800294C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
L_08002950:
    // 0x08002950: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x08002954: addiu       $t1, $t0, -0x10
    ctx->r9 = ADD32(ctx->r8, -0X10);
    // 0x08002958: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x0800295C: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
L_08002960:
    // 0x08002960: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x08002964: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08002968: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800296C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x08002970: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x08002974: lhu         $t5, 0x8A($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002978: addiu       $a1, $a1, 0x2D74
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X2D74));
    // 0x0800297C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08002980: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x08002984: mfhi        $t9
    ctx->r25 = hi;
    // 0x08002988: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x0800298C: bnel        $t9, $zero, L_080029E0
    if (ctx->r25 != 0) {
        // 0x08002990: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_080029E0;
    }
    goto skip_0;
    // 0x08002990: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x08002994: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002998: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800299C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080029A0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080029A4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x080029A8: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x080029AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080029B0: jalr        $t9
    // 0x080029B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080029B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_1:
    // 0x080029B8: beq         $v0, $zero, L_080029DC
    if (ctx->r2 == 0) {
        // 0x080029BC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080029DC;
    }
    // 0x080029BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080029C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080029C4: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x080029C8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080029CC: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080029D0: jalr        $t9
    // 0x080029D4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080029D4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x080029D8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_080029DC:
    // 0x080029DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_080029E0:
    // 0x080029E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029E8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080029EC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x080029F0: bne         $v0, $zero, L_08002A04
    if (ctx->r2 != 0) {
        // 0x080029F4: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08002A04;
    }
    // 0x080029F4: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x080029F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2A18) << 16);
    // 0x080029FC: jalr        $t9
    // 0x08002A00: addiu       $a0, $a0, 0x2A18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2A18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A00: addiu       $a0, $a0, 0x2A18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2A18));
    after_3:
L_08002A04:
    // 0x08002A04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08002A08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08002A0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002A10: jr          $ra
    // 0x08002A14: nop

    TRACE_RETURN()
    return;
    // 0x08002A14: nop

;}
RECOMP_FUNC void func_08004878_6E3A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800487C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08004880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004884: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800488C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004890: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08004894: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08004898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X48B8) << 16);
    // 0x0800489C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080048A0: jalr        $t9
    // 0x080048A4: addiu       $a0, $a0, 0x48B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X48B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048A4: addiu       $a0, $a0, 0x48B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X48B8));
    after_0:
    // 0x080048A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080048AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080048B0: jr          $ra
    // 0x080048B4: nop

    TRACE_RETURN()
    return;
    // 0x080048B4: nop

;}
RECOMP_FUNC void func_080004B8_6DF658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080004C4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080004C8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080004CC: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x080004D0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080004D4: bne         $v0, $zero, L_08000514
    if (ctx->r2 != 0) {
        // 0x080004D8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000514;
    }
    // 0x080004D8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080004DC: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080004E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004E8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080004EC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080004F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004F4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080004F8: jalr        $t9
    // 0x080004FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000500: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000504: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000508: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X524) << 16);
    // 0x0800050C: jalr        $t9
    // 0x08000510: addiu       $a0, $a0, 0x524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X524));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000510: addiu       $a0, $a0, 0x524
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X524));
    after_1:
L_08000514:
    // 0x08000514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800051C: jr          $ra
    // 0x08000520: nop

    TRACE_RETURN()
    return;
    // 0x08000520: nop

;}
RECOMP_FUNC void func_0800372C_6E28CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800372C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003730: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800373C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003740: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003744: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003748: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x0800374C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003750: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3770) << 16);
    // 0x08003754: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003758: jalr        $t9
    // 0x0800375C: addiu       $a0, $a0, 0x3770
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3770));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800375C: addiu       $a0, $a0, 0x3770
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3770));
    after_0:
    // 0x08003760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003768: jr          $ra
    // 0x0800376C: nop

    TRACE_RETURN()
    return;
    // 0x0800376C: nop

;}
RECOMP_FUNC void func_080005BC_6DF75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080005C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080005C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080005CC: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080005D0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080005D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005D8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080005DC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080005E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005E4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080005E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080005EC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080005F0: jalr        $t9
    // 0x080005F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080005F8: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x080005FC: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000600: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000604: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000608: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800060C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X69C) << 16);
    // 0x08000610: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08000614: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000618: jalr        $t9
    // 0x0800061C: addiu       $a0, $a0, 0x69C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X69C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800061C: addiu       $a0, $a0, 0x69C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X69C));
    after_1:
    // 0x08000620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800062C: jr          $ra
    // 0x08000630: nop

    TRACE_RETURN()
    return;
    // 0x08000630: nop

    // 0x08000634: jr          $ra
    // 0x08000638: nop

    TRACE_RETURN()
    return;
    // 0x08000638: nop

;}
RECOMP_FUNC void func_08001F38_6E10D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001F3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001F44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001F48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001F4C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001F5C: jalr        $t9
    // 0x08001F60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001F60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001F64: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001F68: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08001F6C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001F70: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x08001F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001F78: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x08001F7C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x08001F80: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F84: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08001F88: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x08001F8C: addiu       $t6, $zero, 0x90
    ctx->r14 = ADD32(0, 0X90);
    // 0x08001F90: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001F94: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001F98: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x08001F9C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001FA0: addiu       $a0, $zero, 0x269
    ctx->r4 = ADD32(0, 0X269);
    // 0x08001FA4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08001FA8: jalr        $t9
    // 0x08001FAC: sh          $t6, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FAC: sh          $t6, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r14;
    after_1:
    // 0x08001FB0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FB4: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x08001FB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1FE0) << 16);
    // 0x08001FC0: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08001FC4: jalr        $t9
    // 0x08001FC8: addiu       $a0, $a0, 0x1FE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1FE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001FC8: addiu       $a0, $a0, 0x1FE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1FE0));
    after_2:
    // 0x08001FCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001FD8: jr          $ra
    // 0x08001FDC: nop

    TRACE_RETURN()
    return;
    // 0x08001FDC: nop

;}
RECOMP_FUNC void func_08001994_6E0B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001994: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001998: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800199C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080019A0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080019A4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080019A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080019AC: jalr        $t9
    // 0x080019B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080019B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080019B8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X1AEC) << 16);
    // 0x080019BC: addiu       $a1, $a1, 0x1AEC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X1AEC));
    // 0x080019C0: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x080019C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x080019C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080019CC: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080019D0: bne         $v1, $zero, L_08001A5C
    if (ctx->r3 != 0) {
        // 0x080019D4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001A5C;
    }
    // 0x080019D4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080019D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080019DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080019E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080019E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080019E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080019EC: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080019F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080019F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080019F8: jalr        $t9
    // 0x080019FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08001A00: beq         $v0, $zero, L_08001A48
    if (ctx->r2 == 0) {
        // 0x08001A04: addiu       $t7, $zero, 0x25
        ctx->r15 = ADD32(0, 0X25);
            goto L_08001A48;
    }
    // 0x08001A04: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08001A08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A0C: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08001A10: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001A14: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001A18: jalr        $t9
    // 0x08001A1C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A1C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x08001A20: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08001A24: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A28: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001A2C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001A30: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001A34: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08001A38: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001A3C: addiu       $a0, $zero, 0x268
    ctx->r4 = ADD32(0, 0X268);
    // 0x08001A40: jalr        $t9
    // 0x08001A44: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A44: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
L_08001A48:
    // 0x08001A48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001A50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1A6C) << 16);
    // 0x08001A54: jalr        $t9
    // 0x08001A58: addiu       $a0, $a0, 0x1A6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1A6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001A58: addiu       $a0, $a0, 0x1A6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1A6C));
    after_4:
L_08001A5C:
    // 0x08001A5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001A60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08001A64: jr          $ra
    // 0x08001A68: nop

    TRACE_RETURN()
    return;
    // 0x08001A68: nop

;}
RECOMP_FUNC void func_08001D10_6E0EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08001D14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001D18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001D1C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001D20: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08001D24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D28: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001D2C: addiu       $t7, $t6, 0x80
    ctx->r15 = ADD32(ctx->r14, 0X80);
    // 0x08001D30: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08001D34: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08001D38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001D3C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001D40: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08001D44: jalr        $t9
    // 0x08001D48: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D48: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    after_0:
    // 0x08001D4C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001D50: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001D54: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x08001D58: jalr        $t9
    // 0x08001D5C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D5C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x08001D60: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08001D64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001D68: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001D6C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001D70: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08001D74: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x08001D78: jalr        $t9
    // 0x08001D7C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D7C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x08001D80: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001D84: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08001D88: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08001D8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001D90: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08001D94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D98: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08001D9C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001DA0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x08001DA4: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001DAC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08001DB0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x08001DB4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08001DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001DC0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x08001DC4: jalr        $t9
    // 0x08001DC8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001DC8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x08001DCC: lw          $t0, 0x68($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X68);
    // 0x08001DD0: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08001DD4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08001DD8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x08001DDC: beq         $t1, $zero, L_08001E20
    if (ctx->r9 == 0) {
        // 0x08001DE0: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001E20;
    }
    // 0x08001DE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001DE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DE8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001DEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001DF0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001DF4: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x08001DF8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08001DFC: jalr        $t9
    // 0x08001E00: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001E00: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
    // 0x08001E04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E08: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1F38) << 16);
    // 0x08001E10: jalr        $t9
    // 0x08001E14: addiu       $a0, $a0, 0x1F38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1F38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001E14: addiu       $a0, $a0, 0x1F38
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1F38));
    after_5:
    // 0x08001E18: b           L_08001EAC
    // 0x08001E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001EAC;
    // 0x08001E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001E20:
    // 0x08001E20: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001E24: jalr        $t9
    // 0x08001E28: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001E28: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x08001E2C: beq         $v0, $zero, L_08001E74
    if (ctx->r2 == 0) {
        // 0x08001E30: addiu       $a0, $zero, 0x269
        ctx->r4 = ADD32(0, 0X269);
            goto L_08001E74;
    }
    // 0x08001E30: addiu       $a0, $zero, 0x269
    ctx->r4 = ADD32(0, 0X269);
    // 0x08001E34: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E38: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08001E3C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001E40: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001E44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x08001E48: jalr        $t9
    // 0x08001E4C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001E4C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_7:
    // 0x08001E50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E54: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08001E58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001E5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1EBC) << 16);
    // 0x08001E60: sh          $t2, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r10;
    // 0x08001E64: jalr        $t9
    // 0x08001E68: addiu       $a0, $a0, 0x1EBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1EBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001E68: addiu       $a0, $a0, 0x1EBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1EBC));
    after_8:
    // 0x08001E6C: b           L_08001EAC
    // 0x08001E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001EAC;
    // 0x08001E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001E74:
    // 0x08001E74: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001E78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001E7C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001E80: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001E84: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08001E88: bne         $v1, $zero, L_08001EA0
    if (ctx->r3 != 0) {
        // 0x08001E8C: sh          $t3, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r11;
            goto L_08001EA0;
    }
    // 0x08001E8C: sh          $t3, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r11;
    // 0x08001E90: lw          $t4, 0x68($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X68);
    // 0x08001E94: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x08001E98: beql        $t5, $zero, L_08001EAC
    if (ctx->r13 == 0) {
        // 0x08001E9C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001EAC;
    }
    goto skip_0;
    // 0x08001E9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_08001EA0:
    // 0x08001EA0: jalr        $t9
    // 0x08001EA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001EA4: nop

    after_9:
    // 0x08001EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001EAC:
    // 0x08001EAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001EB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001EB4: jr          $ra
    // 0x08001EB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08001EB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08001048_6E01E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800104C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001050: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001054: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001058: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x0800105C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08001060: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08001064: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08001068: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800106C: bc1tl       L_08001098
    if (c1cs) {
        // 0x08001070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001098;
    }
    goto skip_0;
    // 0x08001070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001074: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08001078: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x0800107C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001080: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08001084: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08001088: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X10A4) << 16);
    // 0x0800108C: jalr        $t9
    // 0x08001090: addiu       $a0, $a0, 0x10A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X10A4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001090: addiu       $a0, $a0, 0x10A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X10A4));
    after_0:
    // 0x08001094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001098:
    // 0x08001098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800109C: jr          $ra
    // 0x080010A0: nop

    TRACE_RETURN()
    return;
    // 0x080010A0: nop

;}
