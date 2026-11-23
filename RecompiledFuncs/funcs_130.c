#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080037B0_7048B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037B0: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x080037B4: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x080037B8: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x080037BC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x080037C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080037C4: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x080037C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080037CC: mfhi        $t7
    ctx->r15 = hi;
    // 0x080037D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080037D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080037D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080037DC: bne         $t7, $zero, L_08003A1C
    if (ctx->r15 != 0) {
        // 0x080037E0: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_08003A1C;
    }
    // 0x080037E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080037E4: lhu         $t8, 0x190($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X190);
    // 0x080037E8: bnel        $t8, $zero, L_08003A20
    if (ctx->r24 != 0) {
        // 0x080037EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003A20;
    }
    goto skip_0;
    // 0x080037EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080037F0: lhu         $t9, 0x184($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X184);
    // 0x080037F4: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x080037F8: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x080037FC: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x08003800: beql        $at, $zero, L_08003A20
    if (ctx->r1 == 0) {
        // 0x08003804: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003A20;
    }
    goto skip_1;
    // 0x08003804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08003808: jalr        $s1
    // 0x0800380C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_0;
    // 0x0800380C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x08003810: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x08003814: bne         $at, $zero, L_08003924
    if (ctx->r1 != 0) {
        // 0x08003818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003924;
    }
    // 0x08003818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800381C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003820: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003824: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X3B4C) << 16);
    // 0x08003828: addiu       $a1, $a1, 0x3B4C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X3B4C));
    // 0x0800382C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003830: jalr        $t9
    // 0x08003834: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003834: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x08003838: beq         $v0, $zero, L_08003A1C
    if (ctx->r2 == 0) {
        // 0x0800383C: addiu       $t0, $zero, 0x2E
        ctx->r8 = ADD32(0, 0X2E);
            goto L_08003A1C;
    }
    // 0x0800383C: addiu       $t0, $zero, 0x2E
    ctx->r8 = ADD32(0, 0X2E);
    // 0x08003840: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003844: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08003848: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800384C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08003850: jalr        $t9
    // 0x08003854: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003854: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_2:
    // 0x08003858: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x0800385C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x08003860: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x08003864: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08003868: lhu         $t1, 0x184($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X184);
    // 0x0800386C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x08003870: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08003874: sh          $t2, 0x184($a3)
    MEM_H(0X184, ctx->r7) = ctx->r10;
    // 0x08003878: jalr        $s1
    // 0x0800387C: lw          $s0, 0x18($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X18);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x0800387C: lw          $s0, 0x18($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X18);
    after_3:
    // 0x08003880: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08003884: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08003888: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x0800388C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003890: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003894: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08003898: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800389C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x080038A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080038A4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080038A8: jalr        $s1
    // 0x080038AC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x080038AC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    after_4:
    // 0x080038B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080038B4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080038B8: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x080038BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080038C0: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x080038C4: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x080038C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080038CC: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x080038D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080038D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080038D8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x080038DC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080038E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080038E4: jalr        $s1
    // 0x080038E8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x080038E8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x080038EC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x080038F0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x080038F4: lw          $t5, -0x39F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39F4);
    // 0x080038F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080038FC: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x08003900: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08003904: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003908: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x0800390C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003910: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08003914: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08003918: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800391C: b           L_08003A1C
    // 0x08003920: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
        goto L_08003A1C;
    // 0x08003920: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
L_08003924:
    // 0x08003924: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003928: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800392C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X3D64) << 16);
    // 0x08003930: addiu       $a1, $a1, 0x3D64
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X3D64));
    // 0x08003934: jalr        $t9
    // 0x08003938: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003938: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x0800393C: beq         $v0, $zero, L_08003A1C
    if (ctx->r2 == 0) {
        // 0x08003940: addiu       $t6, $zero, 0x2E
        ctx->r14 = ADD32(0, 0X2E);
            goto L_08003A1C;
    }
    // 0x08003940: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x08003944: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003948: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800394C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003950: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08003954: jalr        $t9
    // 0x08003958: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003958: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_7:
    // 0x0800395C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08003960: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x08003964: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x08003968: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800396C: lhu         $t7, 0x184($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X184);
    // 0x08003970: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x08003974: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08003978: sh          $t8, 0x184($a3)
    MEM_H(0X184, ctx->r7) = ctx->r24;
    // 0x0800397C: jalr        $s1
    // 0x08003980: lw          $s0, 0x18($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X18);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08003980: lw          $s0, 0x18($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X18);
    after_8:
    // 0x08003984: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08003988: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x0800398C: lw          $t0, -0x39F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39F4);
    // 0x08003990: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08003994: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x08003998: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x0800399C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080039A0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x080039A4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080039A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080039AC: jalr        $s1
    // 0x080039B0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_9;
    // 0x080039B0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    after_9:
    // 0x080039B4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x080039B8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x080039BC: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x080039C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080039C4: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x080039C8: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x080039CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080039D0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x080039D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080039D8: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x080039DC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x080039E0: jalr        $s1
    // 0x080039E4: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_10;
    // 0x080039E4: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    after_10:
    // 0x080039E8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x080039EC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x080039F0: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x080039F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080039F8: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x080039FC: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08003A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003A04: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x08003A08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003A0C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003A10: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08003A14: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08003A18: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
L_08003A1C:
    // 0x08003A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003A20:
    // 0x08003A20: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08003A24: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08003A28: jr          $ra
    // 0x08003A2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08003A2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_0800413C_70523C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800413C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004140: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004144: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08004148: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800414C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004154: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08004158: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800415C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004160: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08004164: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08004168: jalr        $t9
    // 0x0800416C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800416C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08004170: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08004174: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004178: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x0800417C: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08004180: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004184: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08004188: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x0800418C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004190: jalr        $t9
    // 0x08004194: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004194: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08004198: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CDC) << 16);
    // 0x0800419C: lwc1        $f0, 0x4CDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CDC));
    // 0x080041A0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x080041A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080041A8: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080041AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080041B0: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080041B4: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080041B8: jalr        $t9
    // 0x080041BC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080041BC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_2:
    // 0x080041C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080041C4: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x080041C8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080041CC: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x080041D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080041D4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x080041D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080041DC: jalr        $t9
    // 0x080041E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080041E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080041E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080041E8: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x080041EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080041F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X4214) << 16);
    // 0x080041F4: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x080041F8: jalr        $t9
    // 0x080041FC: addiu       $a0, $a0, 0x4214
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4214));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080041FC: addiu       $a0, $a0, 0x4214
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4214));
    after_4:
    // 0x08004200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004208: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800420C: jr          $ra
    // 0x08004210: nop

    TRACE_RETURN()
    return;
    // 0x08004210: nop

;}
RECOMP_FUNC void func_080044BC_7055BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080044BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080044C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080044C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080044C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080044CC: lui         $t7, 0x220
    ctx->r15 = S32(0X220 << 16);
    // 0x080044D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080044D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x080044D8: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x080044DC: ori         $t7, $t7, 0x7E3
    ctx->r15 = ctx->r15 | 0X7E3;
    // 0x080044E0: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x080044E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080044E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080044EC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080044F0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080044F4: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x080044F8: sb          $v0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r2;
    // 0x080044FC: sb          $v0, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r2;
    // 0x08004500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004504: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08004508: jalr        $t9
    // 0x0800450C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800450C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08004510: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004514: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08004518: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x0800451C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08004520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004524: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08004528: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800452C: jalr        $t9
    // 0x08004530: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004530: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_1:
    // 0x08004534: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004538: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800453C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004540: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08004544: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08004548: jalr        $t9
    // 0x0800454C: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800454C: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    after_2:
    // 0x08004550: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004554: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800455C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08004560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004564: jalr        $t9
    // 0x08004568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800456C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004570: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004574: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004578: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800457C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004580: jalr        $t9
    // 0x08004584: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004584: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08004588: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800458C: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x08004590: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004594: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X45B8) << 16);
    // 0x08004598: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x0800459C: jalr        $t9
    // 0x080045A0: addiu       $a0, $a0, 0x45B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080045A0: addiu       $a0, $a0, 0x45B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45B8));
    after_5:
    // 0x080045A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080045A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080045AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080045B0: jr          $ra
    // 0x080045B4: nop

    TRACE_RETURN()
    return;
    // 0x080045B4: nop

;}
RECOMP_FUNC void func_0800316C_70426C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800316C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003174: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003178: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800317C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003180: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08003184: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003188: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800318C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003190: beq         $v1, $zero, L_080031B4
    if (ctx->r3 == 0) {
        // 0x08003194: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080031B4;
    }
    // 0x08003194: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003198: sh          $zero, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = 0;
    // 0x0800319C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X2F8C) << 16);
    // 0x080031A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031A4: addiu       $a0, $a0, 0x2F8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2F8C));
    // 0x080031A8: jalr        $t9
    // 0x080031AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080031B0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_080031B4:
    // 0x080031B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x080031B8: jal         0x080029CC
    // 0x080031BC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_080029CC_703ACC(rdram, ctx);
        goto after_1;
    // 0x080031BC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x080031C0: jal         0x08002540
    // 0x080031C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_08002540_703640(rdram, ctx);
        goto after_2;
    // 0x080031C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x080031C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080031CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080031D0: jr          $ra
    // 0x080031D4: nop

    TRACE_RETURN()
    return;
    // 0x080031D4: nop

;}
RECOMP_FUNC void func_08003A30_704B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A30: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08003A34: lhu         $t6, -0x3240($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3240);
    // 0x08003A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A40: bne         $t6, $zero, L_08003A54
    if (ctx->r14 != 0) {
        // 0x08003A44: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_08003A54;
    }
    // 0x08003A44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08003A48: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x08003A4C: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x08003A50: beq         $t9, $zero, L_08003B38
    if (ctx->r25 == 0) {
        // 0x08003A54: lui         $v0, 0x8022
        ctx->r2 = S32(0X8022 << 16);
            goto L_08003B38;
    }
L_08003A54:
    // 0x08003A54: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08003A58: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08003A5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08003A60: jalr        $v0
    // 0x08003A64: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08003A64: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x08003A68: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x08003A6C: bne         $at, $zero, L_08003A80
    if (ctx->r1 != 0) {
        // 0x08003A70: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_08003A80;
    }
    // 0x08003A70: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08003A74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003A78: b           L_08003A88
    // 0x08003A7C: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
        goto L_08003A88;
    // 0x08003A7C: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
L_08003A80:
    // 0x08003A80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003A84: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
L_08003A88:
    // 0x08003A88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003A8C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003A90: jalr        $t9
    // 0x08003A94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003A94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08003A98: beq         $v0, $zero, L_08003B0C
    if (ctx->r2 == 0) {
        // 0x08003A9C: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_08003B0C;
    }
    // 0x08003A9C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x08003AA0: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x08003AA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003AA8: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08003AAC: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08003AB0: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x08003AB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08003AB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08003ABC: jalr        $t9
    // 0x08003AC0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003AC0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x08003AC4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08003AC8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08003ACC: jalr        $t9
    // 0x08003AD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003AD0: nop

    after_3:
    // 0x08003AD4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08003AD8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08003ADC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08003AE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003AE4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08003AE8: lui         $at, 0xC010
    ctx->r1 = S32(0XC010 << 16);
    // 0x08003AEC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08003AF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08003AF4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08003AF8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08003AFC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08003B00: sub.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d - ctx->f16.d;
    // 0x08003B04: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08003B08: swc1        $f6, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f6.u32l;
L_08003B0C:
    // 0x08003B0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x08003B10: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08003B14: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08003B18: lw          $t3, 0x68($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X68);
    // 0x08003B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08003B20: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x08003B24: sw          $t4, 0x68($t2)
    MEM_W(0X68, ctx->r10) = ctx->r12;
    // 0x08003B28: lhu         $t5, 0x184($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X184);
    // 0x08003B2C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x08003B30: b           L_08003B3C
    // 0x08003B34: sh          $t6, 0x184($v1)
    MEM_H(0X184, ctx->r3) = ctx->r14;
        goto L_08003B3C;
    // 0x08003B34: sh          $t6, 0x184($v1)
    MEM_H(0X184, ctx->r3) = ctx->r14;
L_08003B38:
    // 0x08003B38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08003B3C:
    // 0x08003B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003B44: jr          $ra
    // 0x08003B48: nop

    TRACE_RETURN()
    return;
    // 0x08003B48: nop

;}
RECOMP_FUNC void func_08004824_705924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004824: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004828: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800482C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08004830: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004834: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004838: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800483C: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08004840: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08004844: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004848: lw          $t9, -0x39F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39F4);
    // 0x0800484C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08004850: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08004854: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x08004858: lwc1        $f0, 0x10($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X10);
    // 0x0800485C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CE0) << 16);
    // 0x08004860: ldc1        $f6, 0x4CE0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CE0));
    // 0x08004864: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08004868: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800486C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x08004870: lw          $v0, -0x3230($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3230);
    // 0x08004874: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08004878: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x0800487C: bc1f        L_08004894
    if (!c1cs) {
        // 0x08004880: lw          $v1, 0x18($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X18);
            goto L_08004894;
    }
    // 0x08004880: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08004884: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x08004888: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800488C: b           L_08004898
    // 0x08004890: nop

        goto L_08004898;
    // 0x08004890: nop

L_08004894:
    // 0x08004894: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08004898:
    // 0x08004898: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CE8) << 16);
    // 0x0800489C: lwc1        $f8, 0x4CE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CE8));
    // 0x080048A0: lwc1        $f0, 0x10($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X10);
    // 0x080048A4: lui         $at, 0x44C0
    ctx->r1 = S32(0X44C0 << 16);
    // 0x080048A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080048AC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x080048B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x080048B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080048B8: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x080048BC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x080048C0: addiu       $s0, $a2, 0xD0
    ctx->r16 = ADD32(ctx->r6, 0XD0);
    // 0x080048C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080048C8: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080048CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080048D0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x080048D4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x080048D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080048DC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x080048E0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x080048E4: jalr        $t9
    // 0x080048E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048E8: nop

    after_0:
    // 0x080048EC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x080048F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080048F4: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080048F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080048FC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08004900: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08004904: jalr        $t9
    // 0x08004908: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004908: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_1:
    // 0x0800490C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08004910: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08004914: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08004918: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800491C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08004920: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08004924: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004928: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800492C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08004930: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004934: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004938: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800493C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x08004940: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08004944: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x08004948: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800494C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08004950: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08004954: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08004958: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800495C: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08004960: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08004964: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08004968: jalr        $t9
    // 0x0800496C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800496C: nop

    after_2:
    // 0x08004970: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004974: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08004978: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800497C: jalr        $t9
    // 0x08004980: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004980: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x08004984: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004988: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800498C: jalr        $t9
    // 0x08004990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x08004994: beq         $v0, $zero, L_080049AC
    if (ctx->r2 == 0) {
        // 0x08004998: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(37, 0X49C0) << 16);
            goto L_080049AC;
    }
    // 0x08004998: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X49C0) << 16);
    // 0x0800499C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080049A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080049A4: jalr        $t9
    // 0x080049A8: addiu       $a0, $a0, 0x49C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X49C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080049A8: addiu       $a0, $a0, 0x49C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X49C0));
    after_5:
L_080049AC:
    // 0x080049AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080049B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080049B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080049B8: jr          $ra
    // 0x080049BC: nop

    TRACE_RETURN()
    return;
    // 0x080049BC: nop

;}
RECOMP_FUNC void func_0800370C_70480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800370C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003710: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800371C: addiu       $t9, $t9, 0x3FB8
    ctx->r25 = ADD32(ctx->r25, 0X3FB8);
    // 0x08003720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003724: jalr        $t9
    // 0x08003728: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003728: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x0800372C: beq         $v0, $zero, L_08003740
    if (ctx->r2 == 0) {
        // 0x08003730: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08003740;
    }
    // 0x08003730: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08003734: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08003738: b           L_08003748
    // 0x0800373C: sh          $t6, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r14;
        goto L_08003748;
    // 0x0800373C: sh          $t6, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r14;
L_08003740:
    // 0x08003740: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08003744: sh          $t7, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r15;
L_08003748:
    // 0x08003748: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800374C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003750: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X376C) << 16);
    // 0x08003754: jalr        $t9
    // 0x08003758: addiu       $a0, $a0, 0x376C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X376C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003758: addiu       $a0, $a0, 0x376C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X376C));
    after_1:
    // 0x0800375C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003764: jr          $ra
    // 0x08003768: nop

    TRACE_RETURN()
    return;
    // 0x08003768: nop

;}
RECOMP_FUNC void func_0800045C_70155C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800045C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000464: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x08000468: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x0800046C: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x08000470: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x08000474: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08000478: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x0800047C: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08000480: lhu         $t0, 0xD2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD2);
    // 0x08000484: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4C68) << 16);
    // 0x08000488: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800048C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x08000490: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000494: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x08000498: lhu         $t4, 0xD4($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD4);
    // 0x0800049C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080004A0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080004A4: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x080004A8: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x080004AC: ldc1        $f8, 0x4C68($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4C68));
    // 0x080004B0: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x080004B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080004B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080004BC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x080004C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4C70) << 16);
    // 0x080004C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080004C8: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x080004CC: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080004D0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x080004D4: nop

    // 0x080004D8: bc1fl       L_0800051C
    if (!c1cs) {
        // 0x080004DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800051C;
    }
    goto skip_0;
    // 0x080004DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080004E0: lwc1        $f0, 0x4C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4C70));
    // 0x080004E4: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x080004E8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080004EC: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x080004F0: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x080004F4: lbu         $t8, 0x138($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X138);
    // 0x080004F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X450) << 16);
    // 0x080004FC: addiu       $a0, $a0, 0x450
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X450));
    // 0x08000500: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x08000504: sb          $t9, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r25;
    // 0x08000508: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800050C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000510: jalr        $t9
    // 0x08000514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000514: nop

    after_0:
    // 0x08000518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800051C:
    // 0x0800051C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000520: jr          $ra
    // 0x08000524: nop

    TRACE_RETURN()
    return;
    // 0x08000524: nop

;}
RECOMP_FUNC void func_080011F0_7022F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080011F4: jr          $ra
    // 0x080011F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080011F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001A28_702B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A28: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08001A2C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08001A30: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001A34: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08001A38: sw          $a0, -0x3234($at)
    MEM_W(-0X3234, ctx->r1) = ctx->r4;
    // 0x08001A3C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001A40: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001A44: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001A48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001A50: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08001A54: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08001A58: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001A5C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08001A60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001A64: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x08001A68: jalr        $t9
    // 0x08001A6C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A6C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08001A70: sw          $v0, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r2;
    // 0x08001A74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08001A78: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x08001A7C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x08001A80: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08001A84: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x08001A88: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x08001A8C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_08001A90:
    // 0x08001A90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x08001A94: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x08001A98: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x08001A9C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x08001AA0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x08001AA4: bne         $v1, $v0, L_08001A90
    if (ctx->r3 != ctx->r2) {
        // 0x08001AA8: sw          $zero, -0x10($s0)
        MEM_W(-0X10, ctx->r16) = 0;
            goto L_08001A90;
    }
    // 0x08001AA8: sw          $zero, -0x10($s0)
    MEM_W(-0X10, ctx->r16) = 0;
    // 0x08001AAC: lw          $s0, 0xD0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XD0);
    // 0x08001AB0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001AB4: ori         $t6, $t6, 0x21
    ctx->r14 = ctx->r14 | 0X21;
    // 0x08001AB8: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x08001ABC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08001AC0: sw          $t6, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r14;
    // 0x08001AC4: sb          $zero, 0x6C($s2)
    MEM_B(0X6C, ctx->r18) = 0;
    // 0x08001AC8: addiu       $v0, $v0, 0x664C
    ctx->r2 = ADD32(ctx->r2, 0X664C);
    // 0x08001ACC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08001AD0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08001AD4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001AD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001AE0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08001AE4: jalr        $v0
    // 0x08001AE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001AE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x08001AEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001AF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001AF4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x08001AF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08001AFC: addiu       $v0, $v0, 0x7360
    ctx->r2 = ADD32(ctx->r2, 0X7360);
    // 0x08001B00: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08001B04: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08001B08: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08001B0C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001B10: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001B14: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001B18: jalr        $v0
    // 0x08001B1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08001B1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x08001B20: beq         $v0, $zero, L_08001B58
    if (ctx->r2 == 0) {
        // 0x08001B24: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001B58;
    }
    // 0x08001B24: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001B2C: jal         0x080011FC
    // 0x08001B30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_080011FC_7022FC(rdram, ctx);
        goto after_3;
    // 0x08001B30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08001B34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001B38: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001B3C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001B40: sb          $t7, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r15;
    // 0x08001B44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001B48: jalr        $t9
    // 0x08001B4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001B4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x08001B50: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001B54: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001B58:
    // 0x08001B58: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001B5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001B60: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001B64: jalr        $t9
    // 0x08001B68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001B68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x08001B6C: beq         $v0, $zero, L_08001BB0
    if (ctx->r2 == 0) {
        // 0x08001B70: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001BB0;
    }
    // 0x08001B70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001B74: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x08001B78: addiu       $t8, $t8, 0x6DF8
    ctx->r24 = ADD32(ctx->r24, 0X6DF8);
    // 0x08001B7C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08001B80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001B84: jal         0x080011FC
    // 0x08001B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_080011FC_7022FC(rdram, ctx);
        goto after_6;
    // 0x08001B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x08001B8C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08001B90: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
    // 0x08001B94: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001B98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001B9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001BA0: jalr        $t9
    // 0x08001BA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001BA4: nop

    after_7:
    // 0x08001BA8: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001BAC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001BB0:
    // 0x08001BB0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001BB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001BB8: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001BBC: jalr        $t9
    // 0x08001BC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001BC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x08001BC4: beq         $v0, $zero, L_08001C08
    if (ctx->r2 == 0) {
        // 0x08001BC8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001C08;
    }
    // 0x08001BC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001BCC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x08001BD0: addiu       $t1, $t1, 0x6DF8
    ctx->r9 = ADD32(ctx->r9, 0X6DF8);
    // 0x08001BD4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x08001BD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001BDC: jal         0x080011FC
    // 0x08001BE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_080011FC_7022FC(rdram, ctx);
        goto after_9;
    // 0x08001BE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x08001BE4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08001BE8: sb          $t2, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r10;
    // 0x08001BEC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001BF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001BF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001BF8: jalr        $t9
    // 0x08001BFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001BFC: nop

    after_10:
    // 0x08001C00: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001C04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001C08:
    // 0x08001C08: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001C0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001C10: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001C14: jalr        $t9
    // 0x08001C18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001C18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x08001C1C: beq         $v0, $zero, L_08001C60
    if (ctx->r2 == 0) {
        // 0x08001C20: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001C60;
    }
    // 0x08001C20: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001C24: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x08001C28: addiu       $t3, $t3, 0x6DF8
    ctx->r11 = ADD32(ctx->r11, 0X6DF8);
    // 0x08001C2C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x08001C30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001C34: jal         0x080011FC
    // 0x08001C38: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_080011FC_7022FC(rdram, ctx);
        goto after_12;
    // 0x08001C38: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x08001C3C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08001C40: sb          $t4, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r12;
    // 0x08001C44: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001C48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001C4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001C50: jalr        $t9
    // 0x08001C54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001C54: nop

    after_13:
    // 0x08001C58: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001C5C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001C60:
    // 0x08001C60: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001C64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001C68: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001C6C: jalr        $t9
    // 0x08001C70: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001C70: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_14:
    // 0x08001C74: beq         $v0, $zero, L_08001CB8
    if (ctx->r2 == 0) {
        // 0x08001C78: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001CB8;
    }
    // 0x08001C78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001C7C: addiu       $t5, $zero, 0x1B0
    ctx->r13 = ADD32(0, 0X1B0);
    // 0x08001C80: sh          $t5, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r13;
    // 0x08001C84: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08001C88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001C8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001C90: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001C94: jalr        $t9
    // 0x08001C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x08001C9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001CA0: jal         0x080011FC
    // 0x08001CA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_080011FC_7022FC(rdram, ctx);
        goto after_16;
    // 0x08001CA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_16:
    // 0x08001CA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001CAC: sb          $t6, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r14;
    // 0x08001CB0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001CB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001CB8:
    // 0x08001CB8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001CBC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001CC0: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001CC4: jalr        $t9
    // 0x08001CC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001CC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_17:
    // 0x08001CCC: beq         $v0, $zero, L_08001D10
    if (ctx->r2 == 0) {
        // 0x08001CD0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001D10;
    }
    // 0x08001CD0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001CD4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x08001CD8: addiu       $t7, $t7, 0x6DF8
    ctx->r15 = ADD32(ctx->r15, 0X6DF8);
    // 0x08001CDC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x08001CE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001CE4: jal         0x080011FC
    // 0x08001CE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_080011FC_7022FC(rdram, ctx);
        goto after_18;
    // 0x08001CE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_18:
    // 0x08001CEC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001CF0: sb          $t8, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r24;
    // 0x08001CF4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001CF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001CFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001D00: jalr        $t9
    // 0x08001D04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001D04: nop

    after_19:
    // 0x08001D08: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001D0C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001D10:
    // 0x08001D10: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001D14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001D18: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001D1C: jalr        $t9
    // 0x08001D20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001D20: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_20:
    // 0x08001D24: beq         $v0, $zero, L_08001D68
    if (ctx->r2 == 0) {
        // 0x08001D28: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001D68;
    }
    // 0x08001D28: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001D2C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x08001D30: addiu       $t0, $t0, 0x6DF8
    ctx->r8 = ADD32(ctx->r8, 0X6DF8);
    // 0x08001D34: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x08001D38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001D3C: jal         0x080011FC
    // 0x08001D40: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_080011FC_7022FC(rdram, ctx);
        goto after_21;
    // 0x08001D40: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_21:
    // 0x08001D44: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08001D48: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x08001D4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001D50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001D54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001D58: jalr        $t9
    // 0x08001D5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001D5C: nop

    after_22:
    // 0x08001D60: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001D64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001D68:
    // 0x08001D68: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001D6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001D70: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001D74: jalr        $t9
    // 0x08001D78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001D78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_23:
    // 0x08001D7C: beq         $v0, $zero, L_08001DC0
    if (ctx->r2 == 0) {
        // 0x08001D80: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001DC0;
    }
    // 0x08001D80: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001D84: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x08001D88: addiu       $t2, $t2, 0x6DF8
    ctx->r10 = ADD32(ctx->r10, 0X6DF8);
    // 0x08001D8C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x08001D90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001D94: jal         0x080011FC
    // 0x08001D98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_080011FC_7022FC(rdram, ctx);
        goto after_24;
    // 0x08001D98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_24:
    // 0x08001D9C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08001DA0: sb          $t3, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r11;
    // 0x08001DA4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001DAC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001DB0: jalr        $t9
    // 0x08001DB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08001DB4: nop

    after_25:
    // 0x08001DB8: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001DBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001DC0:
    // 0x08001DC0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001DC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001DC8: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001DCC: jalr        $t9
    // 0x08001DD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001DD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_26:
    // 0x08001DD4: beq         $v0, $zero, L_08001E18
    if (ctx->r2 == 0) {
        // 0x08001DD8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001E18;
    }
    // 0x08001DD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001DDC: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x08001DE0: addiu       $t4, $t4, 0x6DF8
    ctx->r12 = ADD32(ctx->r12, 0X6DF8);
    // 0x08001DE4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x08001DE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001DEC: jal         0x080011FC
    // 0x08001DF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_080011FC_7022FC(rdram, ctx);
        goto after_27;
    // 0x08001DF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_27:
    // 0x08001DF4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x08001DF8: sb          $t5, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r13;
    // 0x08001DFC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001E00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001E04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001E08: jalr        $t9
    // 0x08001E0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001E0C: nop

    after_28:
    // 0x08001E10: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001E14: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001E18:
    // 0x08001E18: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001E1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001E20: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001E24: jalr        $t9
    // 0x08001E28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001E28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_29:
    // 0x08001E2C: beq         $v0, $zero, L_08001E70
    if (ctx->r2 == 0) {
        // 0x08001E30: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001E70;
    }
    // 0x08001E30: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001E34: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x08001E38: addiu       $t6, $t6, 0x6DF8
    ctx->r14 = ADD32(ctx->r14, 0X6DF8);
    // 0x08001E3C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x08001E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001E44: jal         0x080011FC
    // 0x08001E48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_080011FC_7022FC(rdram, ctx);
        goto after_30;
    // 0x08001E48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_30:
    // 0x08001E4C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x08001E50: sb          $t7, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r15;
    // 0x08001E54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001E58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001E5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001E60: jalr        $t9
    // 0x08001E64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001E64: nop

    after_31:
    // 0x08001E68: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x08001E6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_08001E70:
    // 0x08001E70: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001E74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001E78: addiu       $a1, $zero, 0x1B4
    ctx->r5 = ADD32(0, 0X1B4);
    // 0x08001E7C: jalr        $t9
    // 0x08001E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_32:
    // 0x08001E84: beq         $v0, $zero, L_08001EC4
    if (ctx->r2 == 0) {
        // 0x08001E88: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001EC4;
    }
    // 0x08001E88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001E8C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x08001E90: addiu       $t8, $t8, 0x6DF8
    ctx->r24 = ADD32(ctx->r24, 0X6DF8);
    // 0x08001E94: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08001E98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08001E9C: jal         0x080011FC
    // 0x08001EA0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_080011FC_7022FC(rdram, ctx);
        goto after_33;
    // 0x08001EA0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_33:
    // 0x08001EA4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08001EA8: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
    // 0x08001EAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001EB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001EB4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08001EB8: jalr        $t9
    // 0x08001EBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001EBC: nop

    after_34:
    // 0x08001EC0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_08001EC4:
    // 0x08001EC4: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x08001EC8: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x08001ECC: addiu       $s0, $s0, 0x71A8
    ctx->r16 = ADD32(ctx->r16, 0X71A8);
    // 0x08001ED0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X1FE8) << 16);
    // 0x08001ED4: sh          $t1, 0xD8($s2)
    MEM_H(0XD8, ctx->r18) = ctx->r9;
    // 0x08001ED8: addiu       $a1, $a1, 0x1FE8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X1FE8));
    // 0x08001EDC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001EE0: jalr        $s0
    // 0x08001EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_35;
    // 0x08001EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x08001EE8: beq         $v0, $zero, L_08001F2C
    if (ctx->r2 == 0) {
        // 0x08001EEC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001F2C;
    }
    // 0x08001EEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001EF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001EF4: addiu       $t2, $zero, 0x2E
    ctx->r10 = ADD32(0, 0X2E);
    // 0x08001EF8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001EFC: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08001F00: jalr        $t9
    // 0x08001F04: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08001F04: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_36:
    // 0x08001F08: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x08001F0C: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08001F10: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x08001F14: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x08001F18: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x08001F1C: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x08001F20: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x08001F24: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x08001F28: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_08001F2C:
    // 0x08001F2C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X2D18) << 16);
    // 0x08001F30: addiu       $a1, $a1, 0x2D18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X2D18));
    // 0x08001F34: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001F38: jalr        $s0
    // 0x08001F3C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_37;
    // 0x08001F3C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_37:
    // 0x08001F40: beq         $v0, $zero, L_08001F68
    if (ctx->r2 == 0) {
        // 0x08001F44: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001F68;
    }
    // 0x08001F44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001F48: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F4C: addiu       $t3, $zero, 0x2E
    ctx->r11 = ADD32(0, 0X2E);
    // 0x08001F50: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001F54: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08001F58: jalr        $t9
    // 0x08001F5C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001F5C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_38:
    // 0x08001F60: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x08001F64: sw          $s2, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r18;
L_08001F68:
    // 0x08001F68: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X370C) << 16);
    // 0x08001F6C: addiu       $a1, $a1, 0x370C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X370C));
    // 0x08001F70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001F74: jalr        $s0
    // 0x08001F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_39;
    // 0x08001F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_39:
    // 0x08001F7C: beq         $v0, $zero, L_08001FA0
    if (ctx->r2 == 0) {
        // 0x08001F80: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_08001FA0;
    }
    // 0x08001F80: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08001F84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F88: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x08001F8C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001F90: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08001F94: jalr        $t9
    // 0x08001F98: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001F98: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_40:
    // 0x08001F9C: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
L_08001FA0:
    // 0x08001FA0: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x08001FA4: sh          $t5, 0xD8($s2)
    MEM_H(0XD8, ctx->r18) = ctx->r13;
    // 0x08001FA8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08001FAC: lw          $t7, -0x3248($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3248);
    // 0x08001FB0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FB4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08001FB8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08001FBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X19AC) << 16);
    // 0x08001FC4: addiu       $a0, $a0, 0x19AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X19AC));
    // 0x08001FC8: jalr        $t9
    // 0x08001FCC: sb          $t6, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001FCC: sb          $t6, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r14;
    after_41:
    // 0x08001FD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001FD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001FD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08001FE0: jr          $ra
    // 0x08001FE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08001FE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_080007FC_7018FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007FC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x08000800: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(37, 0X4A80) << 16);
    // 0x08000804: addiu       $t0, $t0, 0x4A80
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(37, 0X4A80));
    // 0x08000808: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x0800080C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x08000810: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x08000814: lui         $s4, 0x1
    ctx->r20 = S32(0X1 << 16);
    // 0x08000818: addiu       $at, $zero, 0x270F
    ctx->r1 = ADD32(0, 0X270F);
    // 0x0800081C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x08000820: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x08000824: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x08000828: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x0800082C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x08000830: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x08000834: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08000838: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x0800083C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000840: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x08000844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000848: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800084C: beq         $t6, $at, L_08000914
    if (ctx->r14 == ctx->r1) {
        // 0x08000850: ori         $s4, $s4, 0x869F
        ctx->r20 = ctx->r20 | 0X869F;
            goto L_08000914;
    }
    // 0x08000850: ori         $s4, $s4, 0x869F
    ctx->r20 = ctx->r20 | 0X869F;
    // 0x08000854: lui         $t7, 0x800
    ctx->r15 = S32(RELOC_HI16(37, 0X4A80) << 16);
    // 0x08000858: addiu       $s0, $t7, 0x4A80
    ctx->r16 = ADD32(ctx->r15, (int16_t)RELOC_LO16(37, 0X4A80));
    // 0x0800085C: lui         $fp, 0x8022
    ctx->r30 = S32(0X8022 << 16);
    // 0x08000860: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x08000864: addiu       $s6, $s6, -0x39F4
    ctx->r22 = ADD32(ctx->r22, -0X39F4);
    // 0x08000868: addiu       $fp, $fp, -0x5230
    ctx->r30 = ADD32(ctx->r30, -0X5230);
    // 0x0800086C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x08000870: addiu       $s7, $zero, 0x400
    ctx->r23 = ADD32(0, 0X400);
    // 0x08000874: lh          $s2, 0x0($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X0);
L_08000878:
    // 0x08000878: lh          $s3, 0x2($s0)
    ctx->r19 = MEM_H(ctx->r16, 0X2);
    // 0x0800087C: lwc1        $f8, 0x8($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X8);
    // 0x08000880: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x08000884: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x08000888: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x0800088C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000890: lwc1        $f4, 0x10($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X10);
    // 0x08000894: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x08000898: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x0800089C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x080008A0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080008A4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080008A8: jalr        $fp
    // 0x080008AC: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_0;
    // 0x080008AC: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_0:
    // 0x080008B0: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x080008B4: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x080008B8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x080008BC: lhu         $a0, 0x16($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X16);
    // 0x080008C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080008C4: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x080008C8: beql        $at, $zero, L_080008DC
    if (ctx->r1 == 0) {
        // 0x080008CC: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_080008DC;
    }
    goto skip_0;
    // 0x080008CC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    skip_0:
    // 0x080008D0: b           L_080008DC
    // 0x080008D4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
        goto L_080008DC;
    // 0x080008D4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x080008D8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_080008DC:
    // 0x080008DC: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x080008E0: bnel        $at, $zero, L_080008F0
    if (ctx->r1 != 0) {
        // 0x080008E4: slt         $at, $v0, $s4
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_080008F0;
    }
    goto skip_1;
    // 0x080008E4: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    skip_1:
    // 0x080008E8: subu        $v0, $s7, $v0
    ctx->r2 = SUB32(ctx->r23, ctx->r2);
    // 0x080008EC: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
L_080008F0:
    // 0x080008F0: beql        $at, $zero, L_08000908
    if (ctx->r1 == 0) {
        // 0x080008F4: lh          $t9, 0x0($s1)
        ctx->r25 = MEM_H(ctx->r17, 0X0);
            goto L_08000908;
    }
    goto skip_2;
    // 0x080008F4: lh          $t9, 0x0($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X0);
    skip_2:
    // 0x080008F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x080008FC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x08000900: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x08000904: lh          $t9, 0x0($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X0);
L_08000908:
    // 0x08000908: addiu       $at, $zero, 0x270F
    ctx->r1 = ADD32(0, 0X270F);
    // 0x0800090C: bnel        $t9, $at, L_08000878
    if (ctx->r25 != ctx->r1) {
        // 0x08000910: lh          $s2, 0x0($s0)
        ctx->r18 = MEM_H(ctx->r16, 0X0);
            goto L_08000878;
    }
    goto skip_3;
    // 0x08000910: lh          $s2, 0x0($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X0);
    skip_3:
L_08000914:
    // 0x08000914: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x08000918: lwc1        $f8, 0x8($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X8);
    // 0x0800091C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x08000920: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000924: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000928: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800092C: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x08000930: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x08000934: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000938: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x0800093C: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x08000940: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x08000944: lwc1        $f6, 0x10($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X10);
    // 0x08000948: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x0800094C: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x08000950: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08000954: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x08000958: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x0800095C: jalr        $t9
    // 0x08000960: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000960: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x08000964: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x08000968: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x0800096C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x08000970: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08000974: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08000978: sh          $a2, 0xD8($t1)
    MEM_H(0XD8, ctx->r9) = ctx->r6;
    // 0x0800097C: sh          $a3, 0xDA($t1)
    MEM_H(0XDA, ctx->r9) = ctx->r7;
    // 0x08000980: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x08000984: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08000988: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800098C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000990: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x08000994: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000998: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x0800099C: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080009A0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080009A4: swc1        $f8, 0x78($t1)
    MEM_W(0X78, ctx->r9) = ctx->f8.u32l;
    // 0x080009A8: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x080009AC: lwc1        $f18, 0x10($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X10);
    // 0x080009B0: sub.s       $f0, $f10, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x080009B4: sub.s       $f2, $f18, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x080009B8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080009BC: nop

    // 0x080009C0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080009C4: jalr        $t9
    // 0x080009C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009C8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x080009CC: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x080009D0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080009D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080009D8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x080009DC: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x080009E0: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080009E4: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x080009E8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080009EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080009F0: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x080009F4: addiu       $s0, $s0, -0x6D4C
    ctx->r16 = ADD32(ctx->r16, -0X6D4C);
    // 0x080009F8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x080009FC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000A00: swc1        $f4, 0x7C($t2)
    MEM_W(0X7C, ctx->r10) = ctx->f4.u32l;
    // 0x08000A04: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x08000A08: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000A0C: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08000A10: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000A14: jalr        $s0
    // 0x08000A18: swc1        $f4, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08000A18: swc1        $f4, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->f4.u32l;
    after_3:
    // 0x08000A1C: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x08000A20: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x08000A24: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08000A28: jalr        $s0
    // 0x08000A2C: sh          $t3, 0xD0($t4)
    MEM_H(0XD0, ctx->r12) = ctx->r11;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x08000A2C: sh          $t3, 0xD0($t4)
    MEM_H(0XD0, ctx->r12) = ctx->r11;
    after_4:
    // 0x08000A30: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x08000A34: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x08000A38: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08000A3C: jalr        $s0
    // 0x08000A40: sh          $t5, 0xD2($t6)
    MEM_H(0XD2, ctx->r14) = ctx->r13;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08000A40: sh          $t5, 0xD2($t6)
    MEM_H(0XD2, ctx->r14) = ctx->r13;
    after_5:
    // 0x08000A44: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x08000A48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A4C: andi        $t7, $v0, 0x3FF
    ctx->r15 = ctx->r2 & 0X3FF;
    // 0x08000A50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X6A0) << 16);
    // 0x08000A58: addiu       $a0, $a0, 0x6A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X6A0));
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: sh          $t7, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000A60: sh          $t7, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r15;
    after_6:
    // 0x08000A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x08000A68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000A6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08000A70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000A74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x08000A78: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x08000A7C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A80: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x08000A84: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x08000A88: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x08000A8C: jr          $ra
    // 0x08000A90: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x08000A90: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_08001770_702870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800177C: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08001780: lhu         $t7, 0xDC($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XDC);
    // 0x08001784: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X1460) << 16);
    // 0x08001788: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X1460));
    // 0x0800178C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08001790: sh          $t8, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r24;
    // 0x08001794: jalr        $t9
    // 0x08001798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800179C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080017A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080017A4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080017A8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080017AC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080017B0: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x080017B4: beq         $v1, $zero, L_080017C4
    if (ctx->r3 == 0) {
        // 0x080017B8: sh          $t0, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r8;
            goto L_080017C4;
    }
    // 0x080017B8: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x080017BC: jalr        $t9
    // 0x080017C0: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017C0: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    after_1:
L_080017C4:
    // 0x080017C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017CC: jr          $ra
    // 0x080017D0: nop

    TRACE_RETURN()
    return;
    // 0x080017D0: nop

;}
RECOMP_FUNC void func_08004700_705800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004700: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08004704: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08004708: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800470C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004710: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08004714: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08004718: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x0800471C: lhu         $t9, -0x3240($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X3240);
    // 0x08004720: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08004724: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08004728: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800472C: beq         $t9, $zero, L_08004814
    if (ctx->r25 == 0) {
        // 0x08004730: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_08004814;
    }
    // 0x08004730: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x08004734: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x08004738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800473C: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x08004740: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004744: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004748: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800474C: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x08004750: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08004754: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x08004758: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X49D8) << 16);
    // 0x0800475C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004760: addiu       $a1, $a1, 0x49D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X49D8));
    // 0x08004764: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08004768: jalr        $t9
    // 0x0800476C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800476C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x08004770: beq         $v0, $zero, L_080047A4
    if (ctx->r2 == 0) {
        // 0x08004774: addiu       $t2, $zero, 0x2E
        ctx->r10 = ADD32(0, 0X2E);
            goto L_080047A4;
    }
    // 0x08004774: addiu       $t2, $zero, 0x2E
    ctx->r10 = ADD32(0, 0X2E);
    // 0x08004778: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x0800477C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004780: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08004784: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08004788: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x0800478C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004790: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08004794: jalr        $t9
    // 0x08004798: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004798: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x0800479C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080047A0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080047A4:
    // 0x080047A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080047A8: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080047AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080047B0: jalr        $t9
    // 0x080047B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080047B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x080047B8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x080047BC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080047C0: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080047C4: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x080047C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x080047CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080047D0: jalr        $t9
    // 0x080047D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080047D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x080047D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x080047DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080047E0: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080047E4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x080047E8: jalr        $t9
    // 0x080047EC: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080047EC: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    after_4:
    // 0x080047F0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x080047F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080047F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080047FC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x08004800: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004804: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X4824) << 16);
    // 0x08004808: addiu       $a0, $a0, 0x4824
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4824));
    // 0x0800480C: jalr        $t9
    // 0x08004810: sw          $t5, -0x322C($at)
    MEM_W(-0X322C, ctx->r1) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004810: sw          $t5, -0x322C($at)
    MEM_W(-0X322C, ctx->r1) = ctx->r13;
    after_5:
L_08004814:
    // 0x08004814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004818: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800481C: jr          $ra
    // 0x08004820: nop

    TRACE_RETURN()
    return;
    // 0x08004820: nop

;}
RECOMP_FUNC void func_08000A94_701B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A94: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08000A98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000A9C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000AA0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000AA4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000AA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AAC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000AB0: beq         $v0, $zero, L_08000ABC
    if (ctx->r2 == 0) {
        // 0x08000AB4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_08000ABC;
    }
    // 0x08000AB4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AB8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
L_08000ABC:
    // 0x08000ABC: lw          $v1, 0x68($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X68);
    // 0x08000AC0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000AC4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000AC8: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x08000ACC: beq         $t7, $zero, L_08000B64
    if (ctx->r15 == 0) {
        // 0x08000AD0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000B64;
    }
    // 0x08000AD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AD4: lhu         $t0, 0x184($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X184);
    // 0x08000AD8: lhu         $t8, 0xD0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD0);
    // 0x08000ADC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000AE0: addiu       $a0, $zero, 0x24F
    ctx->r4 = ADD32(0, 0X24F);
    // 0x08000AE4: bne         $t0, $t8, L_08000B60
    if (ctx->r8 != ctx->r24) {
        // 0x08000AE8: and         $t4, $v1, $at
        ctx->r12 = ctx->r3 & ctx->r1;
            goto L_08000B60;
    }
    // 0x08000AE8: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x08000AEC: lhu         $t1, 0x186($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X186);
    // 0x08000AF0: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x08000AF4: sh          $t9, 0x184($v0)
    MEM_H(0X184, ctx->r2) = ctx->r25;
    // 0x08000AF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AFC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000B00: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000B04: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x08000B08: sh          $t2, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r10;
    // 0x08000B0C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000B10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000B14: jalr        $t9
    // 0x08000B18: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B18: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08000B1C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000B20: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000B24: lhu         $t3, 0x184($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X184);
    // 0x08000B28: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000B2C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000B30: slti        $at, $t3, 0x9
    ctx->r1 = SIGNED(ctx->r11) < 0X9 ? 1 : 0;
    // 0x08000B34: bne         $at, $zero, L_08000B44
    if (ctx->r1 != 0) {
        // 0x08000B38: nop
    
            goto L_08000B44;
    }
    // 0x08000B38: nop

    // 0x08000B3C: jalr        $t9
    // 0x08000B40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_08000B44:
    // 0x08000B44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B48: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X7FC) << 16);
    // 0x08000B50: jalr        $t9
    // 0x08000B54: addiu       $a0, $a0, 0x7FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X7FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B54: addiu       $a0, $a0, 0x7FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X7FC));
    after_2:
    // 0x08000B58: b           L_08000CBC
    // 0x08000B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08000CBC;
    // 0x08000B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000B60:
    // 0x08000B60: sw          $t4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r12;
L_08000B64:
    // 0x08000B64: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000B68: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000B6C: jalr        $t9
    // 0x08000B70: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B70: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_3:
    // 0x08000B74: addiu       $v1, $v0, 0x100
    ctx->r3 = ADD32(ctx->r2, 0X100);
    // 0x08000B78: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000B7C: andi        $t5, $v1, 0x3FF
    ctx->r13 = ctx->r3 & 0X3FF;
    // 0x08000B80: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000B84: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x08000B88: jalr        $t9
    // 0x08000B8C: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000B8C: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    after_4:
    // 0x08000B90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000B94: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000B98: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000B9C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x08000BA0: lhu         $a0, 0x52($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X52);
    // 0x08000BA4: jalr        $t9
    // 0x08000BA8: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000BA8: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x08000BAC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BB0: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x08000BB4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x08000BB8: jalr        $t9
    // 0x08000BBC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000BBC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_6:
    // 0x08000BC0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000BC4: addiu       $t9, $t9, -0x24FC
    ctx->r25 = ADD32(ctx->r25, -0X24FC);
    // 0x08000BC8: lhu         $a3, 0xD6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XD6);
    // 0x08000BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000BD0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x08000BD4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x08000BD8: jalr        $t9
    // 0x08000BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000BE0: lhu         $t6, 0x54($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X54);
    // 0x08000BE4: lui         $at, 0xC36B
    ctx->r1 = S32(0XC36B << 16);
    // 0x08000BE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000BEC: sh          $t6, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r14;
    // 0x08000BF0: lhu         $t7, 0x56($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X56);
    // 0x08000BF4: lui         $at, 0x436B
    ctx->r1 = S32(0X436B << 16);
    // 0x08000BF8: sh          $t7, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r15;
    // 0x08000BFC: lhu         $t8, 0x58($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X58);
    // 0x08000C00: sh          $t8, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r24;
    // 0x08000C04: lhu         $t1, 0xD6($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD6);
    // 0x08000C08: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x08000C0C: sh          $t2, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r10;
    // 0x08000C10: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000C14: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000C18: nop

    // 0x08000C1C: bc1fl       L_08000C3C
    if (!c1cs) {
        // 0x08000C20: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_08000C3C;
    }
    goto skip_0;
    // 0x08000C20: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x08000C24: swc1        $f2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f2.u32l;
    // 0x08000C28: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08000C2C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08000C30: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    // 0x08000C34: lwc1        $f0, 0x10($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000C38: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_08000C3C:
    // 0x08000C3C: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x08000C40: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000C44: nop

    // 0x08000C48: bc1fl       L_08000C64
    if (!c1cs) {
        // 0x08000C4C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_08000C64;
    }
    goto skip_1;
    // 0x08000C4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x08000C50: swc1        $f2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f2.u32l;
    // 0x08000C54: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08000C58: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x08000C5C: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x08000C60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_08000C64:
    // 0x08000C64: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000C68: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08000C6C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000C70: nop

    // 0x08000C74: bc1fl       L_08000C94
    if (!c1cs) {
        // 0x08000C78: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_08000C94;
    }
    goto skip_2;
    // 0x08000C78: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x08000C7C: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x08000C80: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000C84: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x08000C88: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08000C8C: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000C90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_08000C94:
    // 0x08000C94: nop

    // 0x08000C98: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08000C9C: nop

    // 0x08000CA0: bc1fl       L_08000CBC
    if (!c1cs) {
        // 0x08000CA4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000CBC;
    }
    goto skip_3;
    // 0x08000CA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x08000CA8: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x08000CAC: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000CB0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08000CB4: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x08000CB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000CBC:
    // 0x08000CBC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000CC0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000CC4: jr          $ra
    // 0x08000CC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x08000CC8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_08003F68_705068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003F74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003F78: jal         0x08003A30
    // 0x08003F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08003A30_704B30(rdram, ctx);
        goto after_0;
    // 0x08003F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003F80: bne         $v0, $zero, L_08004020
    if (ctx->r2 != 0) {
        // 0x08003F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004020;
    }
    // 0x08003F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003F88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003F8C: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003F90: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08003F94: jalr        $t9
    // 0x08003F98: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003F98: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_1:
    // 0x08003F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003FA0: addiu       $t9, $t9, -0x16DC
    ctx->r25 = ADD32(ctx->r25, -0X16DC);
    // 0x08003FA4: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x08003FA8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08003FAC: jalr        $t9
    // 0x08003FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003FB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003FB8: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003FBC: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003FC0: jalr        $t9
    // 0x08003FC4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003FC4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_3:
    // 0x08003FC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08003FCC: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003FD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003FD4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x08003FD8: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003FDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X4034) << 16);
    // 0x08003FE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003FE8: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x08003FEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003FF0: addiu       $a0, $a0, 0x4034
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4034));
    // 0x08003FF4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003FF8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08003FFC: nop

    // 0x08004000: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08004004: sh          $t1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r9;
    // 0x08004008: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x0800400C: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x08004010: bne         $v1, $zero, L_08004020
    if (ctx->r3 != 0) {
        // 0x08004014: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_08004020;
    }
    // 0x08004014: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08004018: jalr        $t9
    // 0x0800401C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800401C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    after_4:
L_08004020:
    // 0x08004020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800402C: jr          $ra
    // 0x08004030: nop

    TRACE_RETURN()
    return;
    // 0x08004030: nop

;}
RECOMP_FUNC void func_08002D18_703E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D18: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002D1C: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08002D20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002D24: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08002D28: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08002D2C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08002D30: lui         $t9, 0x60
    ctx->r25 = S32(0X60 << 16);
    // 0x08002D34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002D38: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002D3C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002D40: sw          $t6, 0xB0($t0)
    MEM_W(0XB0, ctx->r8) = ctx->r14;
    // 0x08002D44: sw          $t7, 0xB4($t0)
    MEM_W(0XB4, ctx->r8) = ctx->r15;
    // 0x08002D48: sw          $t8, 0xC0($t0)
    MEM_W(0XC0, ctx->r8) = ctx->r24;
    // 0x08002D4C: sh          $zero, 0x190($t0)
    MEM_H(0X190, ctx->r8) = 0;
    // 0x08002D50: ori         $t9, $t9, 0x82E0
    ctx->r25 = ctx->r25 | 0X82E0;
    // 0x08002D54: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08002D58: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x08002D5C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002D60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D64: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002D68: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X4700) << 16);
    // 0x08002D6C: sh          $t1, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r9;
    // 0x08002D70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002D74: sw          $a0, 0x1A0($t0)
    MEM_W(0X1A0, ctx->r8) = ctx->r4;
    // 0x08002D78: addiu       $a1, $a1, 0x4700
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X4700));
    // 0x08002D7C: jalr        $t9
    // 0x08002D80: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D80: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x08002D84: beq         $v0, $zero, L_08002DB8
    if (ctx->r2 == 0) {
        // 0x08002D88: addiu       $t4, $zero, 0x2E
        ctx->r12 = ADD32(0, 0X2E);
            goto L_08002DB8;
    }
    // 0x08002D88: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x08002D8C: lw          $t2, 0x64($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X64);
    // 0x08002D90: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002D94: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08002D98: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x08002D9C: sw          $t3, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r11;
    // 0x08002DA0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002DA4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08002DA8: jalr        $t9
    // 0x08002DAC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DAC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x08002DB0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08002DB4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08002DB8:
    // 0x08002DB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DBC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002DC4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08002DC8: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08002DCC: jalr        $t9
    // 0x08002DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002DD4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002DD8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002DDC: addiu       $t5, $zero, 0x1B0
    ctx->r13 = ADD32(0, 0X1B0);
    // 0x08002DE0: addiu       $t0, $t0, -0x33D0
    ctx->r8 = ADD32(ctx->r8, -0X33D0);
    // 0x08002DE4: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x08002DE8: sb          $t6, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r14;
    // 0x08002DEC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x08002DF0: sh          $t7, 0x18C($t0)
    MEM_H(0X18C, ctx->r8) = ctx->r15;
    // 0x08002DF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002DF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08002DFC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E00: sh          $zero, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = 0;
    // 0x08002E04: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    // 0x08002E08: sh          $t8, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r24;
    // 0x08002E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E10: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x08002E14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08002E18: jalr        $t9
    // 0x08002E1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x08002E20: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CCC) << 16);
    // 0x08002E24: lwc1        $f0, 0x4CCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CCC));
    // 0x08002E28: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08002E2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E30: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
    // 0x08002E34: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002E38: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002E3C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002E40: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08002E44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002E50: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002E54: jalr        $t9
    // 0x08002E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08002E5C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002E60: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x08002E64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E68: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x08002E6C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08002E70: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002E74: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x08002E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E7C: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x08002E80: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08002E84: jalr        $t9
    // 0x08002E88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002E88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08002E8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X2EB4) << 16);
    // 0x08002E98: jalr        $t9
    // 0x08002E9C: addiu       $a0, $a0, 0x2EB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2EB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002E9C: addiu       $a0, $a0, 0x2EB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2EB4));
    after_6:
    // 0x08002EA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002EA4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002EA8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002EAC: jr          $ra
    // 0x08002EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08002EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080006A0_7017A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080006A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080006A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080006AC: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x080006B0: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x080006B4: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x080006B8: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x080006BC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x080006C0: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x080006C4: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x080006C8: lhu         $t0, 0xD2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD2);
    // 0x080006CC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080006D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080006D4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x080006D8: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x080006DC: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x080006E0: lhu         $t4, 0xD4($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD4);
    // 0x080006E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080006E8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x080006EC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080006F0: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x080006F4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080006F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080006FC: addiu       $a1, $a1, 0x1EF8
    ctx->r5 = ADD32(ctx->r5, 0X1EF8);
    // 0x08000700: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x08000704: xori        $t8, $v1, 0x3
    ctx->r24 = ctx->r3 ^ 0X3;
    // 0x08000708: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x0800070C: bne         $t8, $zero, L_08000790
    if (ctx->r24 != 0) {
        // 0x08000710: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_08000790;
    }
    // 0x08000710: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000714: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000718: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800071C: jalr        $t9
    // 0x08000720: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000720: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000724: beq         $v0, $zero, L_08000790
    if (ctx->r2 == 0) {
        // 0x08000728: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_08000790;
    }
    // 0x08000728: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x0800072C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000730: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000738: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800073C: jalr        $t9
    // 0x08000740: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000740: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x08000744: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000748: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800074C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000750: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000754: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000758: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x0800075C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000760: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000764: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000768: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800076C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000770: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08000774: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x08000778: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x0800077C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000780: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000784: jalr        $t9
    // 0x08000788: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000788: nop

    after_2:
    // 0x0800078C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
L_08000790:
    // 0x08000790: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x08000794: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000798: lwc1        $f8, 0x7C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X7C);
    // 0x0800079C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4C78) << 16);
    // 0x080007A0: ldc1        $f16, 0x4C78($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4C78));
    // 0x080007A4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080007A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X528) << 16);
    // 0x080007AC: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x080007B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007B8: addiu       $a0, $a0, 0x528
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X528));
    // 0x080007BC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080007C0: swc1        $f4, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f4.u32l;
    // 0x080007C4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080007C8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x080007CC: nop

    // 0x080007D0: bc1fl       L_080007EC
    if (!c1cs) {
        // 0x080007D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080007EC;
    }
    goto skip_0;
    // 0x080007D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080007D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080007DC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x080007E0: jalr        $t9
    // 0x080007E4: swc1        $f8, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080007E4: swc1        $f8, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f8.u32l;
    after_3:
    // 0x080007E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080007EC:
    // 0x080007EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080007F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080007F4: jr          $ra
    // 0x080007F8: nop

    TRACE_RETURN()
    return;
    // 0x080007F8: nop

;}
RECOMP_FUNC void func_08001FE8_7030E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FE8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x08001FEC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x08001FF0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x08001FF4: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x08001FF8: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x08001FFC: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x08002000: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x08002004: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x08002008: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x0800200C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x08002010: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x08002014: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x08002018: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x0800201C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x08002020: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x08002024: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x08002028: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x0800202C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x08002030: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x08002034: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002038: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800203C: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x08002040: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002044: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08002048: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x0800204C: jalr        $t9
    // 0x08002050: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002050: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_0:
    // 0x08002054: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002058: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800205C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08002060: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002064: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08002068: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800206C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08002070: jalr        $t9
    // 0x08002074: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002074: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08002078: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x0800207C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x08002080: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08002084: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x08002088: sw          $v0, 0xD0($fp)
    MEM_W(0XD0, ctx->r30) = ctx->r2;
    // 0x0800208C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002090: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x08002094: addiu       $t8, $zero, 0x1B0
    ctx->r24 = ADD32(0, 0X1B0);
    // 0x08002098: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x0800209C: sh          $t8, 0x5E($fp)
    MEM_H(0X5E, ctx->r30) = ctx->r24;
    // 0x080020A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CA0) << 16);
    // 0x080020A4: ldc1        $f24, 0x4CA0($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CA0));
    // 0x080020A8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080020AC: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x080020B0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x080020B4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x080020B8: addiu       $v1, $v1, 0x6E54
    ctx->r3 = ADD32(ctx->r3, 0X6E54);
    // 0x080020BC: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x080020C0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x080020C4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x080020C8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x080020CC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x080020D0: addiu       $s4, $s4, -0x39F4
    ctx->r20 = ADD32(ctx->r20, -0X39F4);
    // 0x080020D4: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    // 0x080020D8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x080020DC: ori         $s5, $zero, 0x8000
    ctx->r21 = 0 | 0X8000;
    // 0x080020E0: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
L_080020E4:
    // 0x080020E4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x080020E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080020EC: jalr        $v1
    // 0x080020F0: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x080020F0: nop

    after_2:
    // 0x080020F4: beq         $v0, $zero, L_08002210
    if (ctx->r2 == 0) {
        // 0x080020F8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002210;
    }
    // 0x080020F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080020FC: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x08002100: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08002104: sll         $s3, $s2, 2
    ctx->r19 = S32(ctx->r18 << 2);
    // 0x08002108: addu        $s3, $s3, $s2
    ctx->r19 = ADD32(ctx->r19, ctx->r18);
    // 0x0800210C: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x08002110: lui         $s6, 0x8022
    ctx->r22 = S32(0X8022 << 16);
    // 0x08002114: sll         $t1, $s2, 3
    ctx->r9 = S32(ctx->r18 << 3);
    // 0x08002118: addiu       $s6, $s6, -0x53F8
    ctx->r22 = ADD32(ctx->r22, -0X53F8);
    // 0x0800211C: sll         $s3, $s3, 4
    ctx->r19 = S32(ctx->r19 << 4);
    // 0x08002120: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    // 0x08002124: jalr        $s1
    // 0x08002128: addu        $s7, $t0, $t1
    ctx->r23 = ADD32(ctx->r8, ctx->r9);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x08002128: addu        $s7, $t0, $t1
    ctx->r23 = ADD32(ctx->r8, ctx->r9);
    after_3:
    // 0x0800212C: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x08002130: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002134: addiu       $a0, $zero, 0x4B0
    ctx->r4 = ADD32(0, 0X4B0);
    // 0x08002138: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x0800213C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002140: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x08002144: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x08002148: jalr        $s1
    // 0x0800214C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x0800214C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    after_4:
    // 0x08002150: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x08002154: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002158: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0800215C: lwc1        $f18, 0xC($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XC);
    // 0x08002160: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002164: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x08002168: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x0800216C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002170: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002174: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x08002178: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x0800217C: lwc1        $f16, 0x10($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08002180: add.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x08002184: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002188: jalr        $s1
    // 0x0800218C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x0800218C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x08002190: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08002194: sh          $s5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r21;
    // 0x08002198: sh          $s5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r21;
    // 0x0800219C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080021A0: sh          $s5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r21;
    // 0x080021A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x080021A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021AC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x080021B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080021B4: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x080021B8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080021BC: mul.d       $f18, $f8, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x080021C0: add.d       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = ctx->f18.d + ctx->f24.d;
    // 0x080021C4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x080021C8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080021CC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080021D0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080021D4: jalr        $s6
    // 0x080021D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_6;
    // 0x080021D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_6:
    // 0x080021DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080021E0: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x080021E4: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x080021E8: jalr        $s1
    // 0x080021EC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x080021EC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_7:
    // 0x080021F0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080021F4: nop

    // 0x080021F8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080021FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08002200: div.d       $f8, $f16, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f8.d = DIV_D(ctx->f16.d, ctx->f26.d);
    // 0x08002204: add.d       $f18, $f8, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = ctx->f8.d + ctx->f28.d;
    // 0x08002208: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x0800220C: swc1        $f4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f4.u32l;
L_08002210:
    // 0x08002210: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x08002214: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x08002218: bnel        $s2, $at, L_080020E4
    if (ctx->r18 != ctx->r1) {
        // 0x0800221C: lw          $v1, 0x78($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X78);
            goto L_080020E4;
    }
    goto skip_0;
    // 0x0800221C: lw          $v1, 0x78($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X78);
    skip_0:
    // 0x08002220: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002224: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002228: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X227C) << 16);
    // 0x0800222C: jalr        $t9
    // 0x08002230: addiu       $a0, $a0, 0x227C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X227C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002230: addiu       $a0, $a0, 0x227C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X227C));
    after_8:
    // 0x08002234: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x08002238: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x0800223C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x08002240: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x08002244: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x08002248: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x0800224C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x08002250: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08002254: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x08002258: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x0800225C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x08002260: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x08002264: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x08002268: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x0800226C: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x08002270: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x08002274: jr          $ra
    // 0x08002278: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x08002278: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_0800125C_70235C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800125C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001260: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001264: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x08001268: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x0800126C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001274: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001278: lw          $t7, 0xA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA0);
    // 0x0800127C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001280: bnel        $v0, $t7, L_080013B8
    if (ctx->r2 != ctx->r15) {
        // 0x08001284: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080013B8;
    }
    goto skip_0;
    // 0x08001284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001288: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x0800128C: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08001290: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x08001294: lhu         $t3, 0x16($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X16);
    // 0x08001298: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x0800129C: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x080012A0: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x080012A4: lhu         $t9, 0xE4($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XE4);
    // 0x080012A8: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    // 0x080012AC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080012B0: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x080012B4: subu        $t1, $t8, $t9
    ctx->r9 = SUB32(ctx->r24, ctx->r25);
    // 0x080012B8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080012BC: lhu         $t8, 0xE8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XE8);
    // 0x080012C0: lhu         $t4, 0xE6($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XE6);
    // 0x080012C4: andi        $a1, $t1, 0x3FF
    ctx->r5 = ctx->r9 & 0X3FF;
    // 0x080012C8: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x080012CC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080012D0: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x080012D4: andi        $a3, $t9, 0x3FF
    ctx->r7 = ctx->r25 & 0X3FF;
    // 0x080012D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080012DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080012E0: addiu       $t9, $t9, -0x1B5C
    ctx->r25 = ADD32(ctx->r25, -0X1B5C);
    // 0x080012E4: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x080012E8: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x080012EC: andi        $a2, $t5, 0x3FF
    ctx->r6 = ctx->r13 & 0X3FF;
    // 0x080012F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080012F4: jalr        $t9
    // 0x080012F8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012F8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x080012FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001300: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001304: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08001308: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800130C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001310: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001314: addiu       $t9, $t9, -0x57A8
    ctx->r25 = ADD32(ctx->r25, -0X57A8);
    // 0x08001318: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x0800131C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08001320: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x08001324: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x08001328: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x0800132C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001330: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001334: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x08001338: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x0800133C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x08001340: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001344: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001348: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x0800134C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x08001350: jalr        $t9
    // 0x08001354: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001354: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x08001358: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x0800135C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08001360: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001364: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001368: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800136C: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001370: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x08001374: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x08001378: swc1        $f6, 0xC0($t2)
    MEM_W(0XC0, ctx->r10) = ctx->f6.u32l;
    // 0x0800137C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08001380: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08001384: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08001388: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x0800138C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001390: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x08001394: swc1        $f18, 0xC4($t3)
    MEM_W(0XC4, ctx->r11) = ctx->f18.u32l;
    // 0x08001398: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x0800139C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x080013A0: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080013A4: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x080013A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080013AC: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x080013B0: swc1        $f16, 0xC8($t4)
    MEM_W(0XC8, ctx->r12) = ctx->f16.u32l;
    // 0x080013B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013B8:
    // 0x080013B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080013BC: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x080013C0: jr          $ra
    // 0x080013C4: nop

    TRACE_RETURN()
    return;
    // 0x080013C4: nop

;}
RECOMP_FUNC void func_0800444C_70554C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800444C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004454: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08004458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x0800445C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08004460: beq         $t7, $zero, L_080044AC
    if (ctx->r15 == 0) {
        // 0x08004464: nop
    
            goto L_080044AC;
    }
    // 0x08004464: nop

    // 0x08004468: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800446C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004470: lhu         $t8, 0x184($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X184);
    // 0x08004474: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08004478: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800447C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x08004480: sh          $t9, 0x184($v0)
    MEM_H(0X184, ctx->r2) = ctx->r25;
    // 0x08004484: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004488: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x0800448C: jalr        $t9
    // 0x08004490: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004490: nop

    after_0:
    // 0x08004494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x0800449C: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x080044A0: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x080044A4: b           L_080044AC
    // 0x080044A8: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
        goto L_080044AC;
    // 0x080044A8: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
L_080044AC:
    // 0x080044AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080044B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080044B4: jr          $ra
    // 0x080044B8: nop

    TRACE_RETURN()
    return;
    // 0x080044B8: nop

;}
RECOMP_FUNC void func_080049C0_705AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080049C4: jr          $ra
    // 0x080049C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080049C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080011FC_7022FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011FC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x08001200: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x08001204: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08001208: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x0800120C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08001210: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x08001214: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x08001218: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x0800121C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001220: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001224: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001228: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800122C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001230: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x08001234: addiu       $t7, $zero, 0x1B0
    ctx->r15 = ADD32(0, 0X1B0);
    // 0x08001238: ori         $t8, $t8, 0x21
    ctx->r24 = ctx->r24 | 0X21;
    // 0x0800123C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x08001240: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08001244: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001248: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800124C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x08001250: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001254: jr          $ra
    // 0x08001258: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x08001258: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_08003B4C_704C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003B50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003B54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003B58: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08003B5C: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x08003B60: lui         $t7, 0x220
    ctx->r15 = S32(0X220 << 16);
    // 0x08003B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08003B68: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x08003B6C: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08003B70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003B74: addiu       $t6, $zero, 0x12D
    ctx->r14 = ADD32(0, 0X12D);
    // 0x08003B78: ori         $t7, $t7, 0x7E3
    ctx->r15 = ctx->r15 | 0X7E3;
    // 0x08003B7C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08003B80: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x08003B84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003B88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003B8C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003B90: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003B94: sb          $v0, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r2;
    // 0x08003B98: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x08003B9C: sh          $t1, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r9;
    // 0x08003BA0: sb          $v0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r2;
    // 0x08003BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003BA8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003BAC: jalr        $t9
    // 0x08003BB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003BB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08003BB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BB8: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003BC4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003BC8: jalr        $t9
    // 0x08003BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003BD0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BD4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003BD8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08003BDC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08003BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003BE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003BE8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08003BEC: jalr        $t9
    // 0x08003BF0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003BF0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_2:
    // 0x08003BF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BF8: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C00: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08003C04: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x08003C08: jalr        $t9
    // 0x08003C0C: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003C0C: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    after_3:
    // 0x08003C10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C14: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08003C20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08003C24: jalr        $t9
    // 0x08003C28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003C28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08003C2C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x08003C30: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08003C34: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08003C38: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x08003C3C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x08003C40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003C44: lwc1        $f4, 0x10($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
    // 0x08003C48: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x08003C4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003C54: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08003C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C5C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08003C60: jalr        $t9
    // 0x08003C64: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003C64: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    after_5:
    // 0x08003C68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3C90) << 16);
    // 0x08003C74: jalr        $t9
    // 0x08003C78: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3C90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003C78: addiu       $a0, $a0, 0x3C90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3C90));
    after_6:
    // 0x08003C7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003C80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003C88: jr          $ra
    // 0x08003C8C: nop

    TRACE_RETURN()
    return;
    // 0x08003C8C: nop

;}
RECOMP_FUNC void func_080036CC_7047CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080036D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080036D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080036D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080036DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036E0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080036E4: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080036E8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080036EC: beq         $v1, $zero, L_080036FC
    if (ctx->r3 == 0) {
        // 0x080036F0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080036FC;
    }
    // 0x080036F0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080036F4: jalr        $t9
    // 0x080036F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036F8: nop

    after_0:
L_080036FC:
    // 0x080036FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003704: jr          $ra
    // 0x08003708: nop

    TRACE_RETURN()
    return;
    // 0x08003708: nop

;}
RECOMP_FUNC void func_08002F8C_70408C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002F90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002F94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002F98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002F9C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002FA0: lh          $v0, 0xDE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XDE);
    // 0x08002FA4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002FA8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08002FAC: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x08002FB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002FB4: sh          $zero, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = 0;
    // 0x08002FB8: beq         $at, $zero, L_08002FCC
    if (ctx->r1 == 0) {
        // 0x08002FBC: sw          $t7, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r15;
            goto L_08002FCC;
    }
    // 0x08002FBC: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08002FC0: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x08002FC4: b           L_08002FD4
    // 0x08002FC8: sh          $t8, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r24;
        goto L_08002FD4;
    // 0x08002FC8: sh          $t8, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r24;
L_08002FCC:
    // 0x08002FCC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08002FD0: sh          $t9, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r25;
L_08002FD4:
    // 0x08002FD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FD8: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002FDC: lh          $a1, 0xDE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XDE);
    // 0x08002FE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FE8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002FEC: jalr        $t9
    // 0x08002FF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002FF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08002FF4: lh          $t0, 0xDA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XDA);
    // 0x08002FF8: lh          $t1, 0xDC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDC);
    // 0x08002FFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3054) << 16);
    // 0x08003000: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003004: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x08003008: sh          $t2, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r10;
    // 0x0800300C: lh          $v0, 0xDA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDA);
    // 0x08003010: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x08003014: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003018: slti        $at, $v0, 0x41
    ctx->r1 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x0800301C: beq         $at, $zero, L_08003030
    if (ctx->r1 == 0) {
        // 0x08003020: addiu       $a0, $a0, 0x3054
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3054));
            goto L_08003030;
    }
    // 0x08003020: addiu       $a0, $a0, 0x3054
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3054));
    // 0x08003024: slti        $at, $v0, -0x40
    ctx->r1 = SIGNED(ctx->r2) < -0X40 ? 1 : 0;
    // 0x08003028: beq         $at, $zero, L_08003038
    if (ctx->r1 == 0) {
        // 0x0800302C: nop
    
            goto L_08003038;
    }
    // 0x0800302C: nop

L_08003030:
    // 0x08003030: jalr        $t9
    // 0x08003034: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003034: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    after_1:
L_08003038:
    // 0x08003038: jal         0x080029CC
    // 0x0800303C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_080029CC_703ACC(rdram, ctx);
        goto after_2;
    // 0x0800303C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003040: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003044: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003048: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800304C: jr          $ra
    // 0x08003050: nop

    TRACE_RETURN()
    return;
    // 0x08003050: nop

;}
RECOMP_FUNC void func_080042F8_7053F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080042F8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x080042FC: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x08004300: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x08004304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800430C: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x08004310: bne         $t7, $zero, L_0800443C
    if (ctx->r15 != 0) {
        // 0x08004314: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_0800443C;
    }
    // 0x08004314: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004318: lhu         $t8, 0x184($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X184);
    // 0x0800431C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(37, 0X44BC) << 16);
    // 0x08004320: addiu       $a1, $a1, 0x44BC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(37, 0X44BC));
    // 0x08004324: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x08004328: beq         $at, $zero, L_0800443C
    if (ctx->r1 == 0) {
        // 0x0800432C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_0800443C;
    }
    // 0x0800432C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004330: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004334: jalr        $t9
    // 0x08004338: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004338: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x0800433C: beq         $v0, $zero, L_0800443C
    if (ctx->r2 == 0) {
        // 0x08004340: addiu       $t0, $zero, 0x2E
        ctx->r8 = ADD32(0, 0X2E);
            goto L_0800443C;
    }
    // 0x08004340: addiu       $t0, $zero, 0x2E
    ctx->r8 = ADD32(0, 0X2E);
    // 0x08004344: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004348: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x0800434C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004350: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08004354: jalr        $t9
    // 0x08004358: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004358: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x0800435C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08004360: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x08004364: addiu       $a3, $a3, -0x33D0
    ctx->r7 = ADD32(ctx->r7, -0X33D0);
    // 0x08004368: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800436C: lhu         $t1, 0x184($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X184);
    // 0x08004370: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08004374: addiu       $a1, $a1, -0x6D4C
    ctx->r5 = ADD32(ctx->r5, -0X6D4C);
    // 0x08004378: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x0800437C: sh          $t2, 0x184($a3)
    MEM_H(0X184, ctx->r7) = ctx->r10;
    // 0x08004380: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x08004384: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004388: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x0800438C: jalr        $a1
    // 0x08004390: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_2;
    // 0x08004390: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_2:
    // 0x08004394: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004398: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x0800439C: lw          $t4, -0x39F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39F4);
    // 0x080043A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080043A4: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x080043A8: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x080043AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080043B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x080043B4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x080043B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080043BC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080043C0: swc1        $f18, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f18.u32l;
    // 0x080043C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080043C8: jalr        $t9
    // 0x080043CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080043CC: nop

    after_3:
    // 0x080043D0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080043D4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080043D8: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x080043DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080043E0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x080043E4: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x080043E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080043EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x080043F0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x080043F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080043F8: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x080043FC: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x08004400: swc1        $f18, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f18.u32l;
    // 0x08004404: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08004408: jalr        $t9
    // 0x0800440C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800440C: nop

    after_4:
    // 0x08004410: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004414: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08004418: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x0800441C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004420: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x08004424: lwc1        $f8, 0x10($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X10);
    // 0x08004428: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800442C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08004430: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08004434: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08004438: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
L_0800443C:
    // 0x0800443C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004444: jr          $ra
    // 0x08004448: nop

    TRACE_RETURN()
    return;
    // 0x08004448: nop

;}
RECOMP_FUNC void func_080049D8_705AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080049DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080049E0: addiu       $t6, $zero, 0x312
    ctx->r14 = ADD32(0, 0X312);
    // 0x080049E4: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x080049E8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080049EC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080049F0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080049F4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080049F8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080049FC: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08004A00: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004A08: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08004A0C: jalr        $t9
    // 0x08004A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08004A14: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004A18: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08004A1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004A20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004A24: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x08004A28: sb          $zero, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = 0;
    // 0x08004A2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004A30: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x08004A34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004A38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08004A3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004A40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004A44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X49CC) << 16);
    // 0x08004A48: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X49CC));
    // 0x08004A4C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08004A50: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08004A54: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08004A58: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08004A5C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08004A60: jalr        $t9
    // 0x08004A64: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004A64: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_1:
    // 0x08004A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004A70: jr          $ra
    // 0x08004A74: nop

    TRACE_RETURN()
    return;
    // 0x08004A74: nop

;}
RECOMP_FUNC void func_0800227C_70337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800227C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08002280: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x08002284: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08002288: mtc1        $at, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r1;
    // 0x0800228C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x08002290: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002294: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x08002298: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x0800229C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x080022A0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x080022A4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x080022A8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x080022AC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x080022B0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x080022B4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CA8) << 16);
    // 0x080022B8: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x080022BC: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x080022C0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x080022C4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x080022C8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x080022CC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x080022D0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x080022D4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x080022D8: ldc1        $f22, 0x4CA8($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CA8));
    // 0x080022DC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x080022E0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x080022E4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x080022E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CB0) << 16);
    // 0x080022EC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x080022F0: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x080022F4: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x080022F8: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x080022FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002300: lw          $s2, 0xD0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XD0);
    // 0x08002304: addiu       $s7, $s7, -0x6D4C
    ctx->r23 = ADD32(ctx->r23, -0X6D4C);
    // 0x08002308: addiu       $s3, $s3, -0x39F4
    ctx->r19 = ADD32(ctx->r19, -0X39F4);
    // 0x0800230C: ldc1        $f20, 0x4CB0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CB0));
    // 0x08002310: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x08002314: ori         $s5, $zero, 0x8000
    ctx->r21 = 0 | 0X8000;
    // 0x08002318: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_0800231C:
    // 0x0800231C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x08002320: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x08002324: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x08002328: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800232C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08002330: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x08002334: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x08002338: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800233C: lwc1        $f14, 0x10($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08002340: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x08002344: sub.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f24.fl;
    // 0x08002348: bc1fl       L_08002360
    if (!c1cs) {
        // 0x0800234C: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_08002360;
    }
    goto skip_0;
    // 0x0800234C: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_0:
    // 0x08002350: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x08002354: b           L_08002360
    // 0x08002358: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_08002360;
    // 0x08002358: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x0800235C: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_08002360:
    // 0x08002360: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x08002364: nop

    // 0x08002368: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x0800236C: nop

    // 0x08002370: bc1fl       L_080024F0
    if (!c1cs) {
        // 0x08002374: addiu       $s4, $s4, 0x8
        ctx->r20 = ADD32(ctx->r20, 0X8);
            goto L_080024F0;
    }
    goto skip_1;
    // 0x08002374: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    skip_1:
    // 0x08002378: jalr        $s7
    // 0x0800237C: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_0;
    // 0x0800237C: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    after_0:
    // 0x08002380: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x08002384: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002388: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x0800238C: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08002390: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002394: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x08002398: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x0800239C: jalr        $s1
    // 0x080023A0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_1;
    // 0x080023A0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x080023A4: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x080023A8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080023AC: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080023B0: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080023B4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080023B8: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x080023BC: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080023C0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x080023C4: lwc1        $f12, 0x8($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X8);
    // 0x080023C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x080023CC: nop

    // 0x080023D0: bc1fl       L_080023E8
    if (!c1cs) {
        // 0x080023D4: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_080023E8;
    }
    goto skip_2;
    // 0x080023D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x080023D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x080023DC: b           L_080023E8
    // 0x080023E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_080023E8;
    // 0x080023E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x080023E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_080023E8:
    // 0x080023E8: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x080023EC: nop

    // 0x080023F0: bc1fl       L_08002434
    if (!c1cs) {
        // 0x080023F4: lw          $t9, 0x0($s3)
        ctx->r25 = MEM_W(ctx->r19, 0X0);
            goto L_08002434;
    }
    goto skip_3;
    // 0x080023F4: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    skip_3:
    // 0x080023F8: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080023FC: lwc1        $f2, 0xC($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0XC);
    // 0x08002400: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002404: nop

    // 0x08002408: bc1fl       L_08002420
    if (!c1cs) {
        // 0x0800240C: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08002420;
    }
    goto skip_4;
    // 0x0800240C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
    // 0x08002410: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002414: b           L_08002420
    // 0x08002418: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08002420;
    // 0x08002418: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x0800241C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08002420:
    // 0x08002420: c.lt.s      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.fl < ctx->f28.fl;
    // 0x08002424: nop

    // 0x08002428: bc1tl       L_080024F0
    if (c1cs) {
        // 0x0800242C: addiu       $s4, $s4, 0x8
        ctx->r20 = ADD32(ctx->r20, 0X8);
            goto L_080024F0;
    }
    goto skip_5;
    // 0x0800242C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    skip_5:
    // 0x08002430: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
L_08002434:
    // 0x08002434: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002438: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800243C: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x08002440: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x08002444: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x08002448: lhu         $t0, -0x324A($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X324A);
    // 0x0800244C: bne         $t0, $at, L_08002484
    if (ctx->r8 != ctx->r1) {
        // 0x08002450: nop
    
            goto L_08002484;
    }
    // 0x08002450: nop

    // 0x08002454: jalr        $s1
    // 0x08002458: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x08002458: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x0800245C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002460: nop

    // 0x08002464: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x08002468: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x0800246C: add.d       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = ctx->f18.d + ctx->f20.d;
    // 0x08002470: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x08002474: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08002478: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800247C: b           L_080024B0
    // 0x08002480: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_080024B0;
    // 0x08002480: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_08002484:
    // 0x08002484: jalr        $s1
    // 0x08002488: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x08002488: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x0800248C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08002490: nop

    // 0x08002494: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08002498: mul.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x0800249C: add.d       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f4.d + ctx->f22.d;
    // 0x080024A0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x080024A4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080024A8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080024AC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_080024B0:
    // 0x080024B0: sh          $s5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r21;
    // 0x080024B4: sh          $s5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r21;
    // 0x080024B8: sh          $s5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r21;
    // 0x080024BC: jalr        $s1
    // 0x080024C0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x080024C0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x080024C4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x080024C8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080024CC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080024D0: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080024D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080024D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080024DC: div.d       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f30.d);
    // 0x080024E0: add.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d + ctx->f4.d;
    // 0x080024E4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080024E8: swc1        $f18, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f18.u32l;
    // 0x080024EC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
L_080024F0:
    // 0x080024F0: bne         $s4, $fp, L_0800231C
    if (ctx->r20 != ctx->r30) {
        // 0x080024F4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_0800231C;
    }
    // 0x080024F4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x080024F8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x080024FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08002500: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x08002504: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x08002508: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x0800250C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x08002510: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x08002514: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x08002518: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x0800251C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x08002520: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x08002524: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x08002528: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x0800252C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x08002530: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x08002534: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x08002538: jr          $ra
    // 0x0800253C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x0800253C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_080046F4_7057F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080046F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080046F8: jr          $ra
    // 0x080046FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080046FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080013C8_7024C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013C8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080013CC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080013D0: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x080013D4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080013D8: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x080013DC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080013E0: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x080013E4: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x080013E8: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080013EC: sh          $t7, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r15;
    // 0x080013F0: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x080013F4: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x080013F8: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x080013FC: lhu         $t0, 0x18($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X18);
    // 0x08001400: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08001404: jr          $ra
    // 0x08001408: sh          $t1, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x08001408: sh          $t1, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_08002EB4_703FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002EB8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002EBC: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x08002EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002EC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002EC8: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08002ECC: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08002ED0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x08002ED4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002ED8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08002EDC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002EE0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002EE4: bc1fl       L_08002EFC
    if (!c1cs) {
        // 0x08002EE8: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_08002EFC;
    }
    goto skip_0;
    // 0x08002EE8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x08002EEC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08002EF0: b           L_08002EFC
    // 0x08002EF4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08002EFC;
    // 0x08002EF4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x08002EF8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08002EFC:
    // 0x08002EFC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x08002F00: nop

    // 0x08002F04: bc1f        L_08002F34
    if (!c1cs) {
        // 0x08002F08: nop
    
            goto L_08002F34;
    }
    // 0x08002F08: nop

    // 0x08002F0C: jalr        $t9
    // 0x08002F10: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F10: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_0:
    // 0x08002F14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002F1C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08002F20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X2F58) << 16);
    // 0x08002F28: sh          $t7, -0x3240($at)
    MEM_H(-0X3240, ctx->r1) = ctx->r15;
    // 0x08002F2C: jalr        $t9
    // 0x08002F30: addiu       $a0, $a0, 0x2F58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2F58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F30: addiu       $a0, $a0, 0x2F58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X2F58));
    after_1:
L_08002F34:
    // 0x08002F34: jal         0x080029CC
    // 0x08002F38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_080029CC_703ACC(rdram, ctx);
        goto after_2;
    // 0x08002F38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08002F3C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08002F40: sh          $zero, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = 0;
    // 0x08002F44: sh          $zero, 0xDE($t8)
    MEM_H(0XDE, ctx->r24) = 0;
    // 0x08002F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F50: jr          $ra
    // 0x08002F54: nop

    TRACE_RETURN()
    return;
    // 0x08002F54: nop

;}
RECOMP_FUNC void func_080019AC_702AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080019B8: lhu         $t7, 0xD8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD8);
    // 0x080019BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080019C0: lhu         $t6, -0x3242($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3242);
    // 0x080019C4: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x080019C8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x080019CC: slti        $at, $t9, 0x400
    ctx->r1 = SIGNED(ctx->r25) < 0X400 ? 1 : 0;
    // 0x080019D0: sh          $t8, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r24;
    // 0x080019D4: bne         $at, $zero, L_080019F8
    if (ctx->r1 != 0) {
        // 0x080019D8: sh          $t6, 0xDA($a0)
        MEM_H(0XDA, ctx->r4) = ctx->r14;
            goto L_080019F8;
    }
    // 0x080019D8: sh          $t6, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r14;
    // 0x080019DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X18E4) << 16);
    // 0x080019E8: jalr        $t9
    // 0x080019EC: addiu       $a0, $a0, 0x18E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X18E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019EC: addiu       $a0, $a0, 0x18E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X18E4));
    after_0:
    // 0x080019F0: b           L_08001A1C
    // 0x080019F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001A1C;
    // 0x080019F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080019F8:
    // 0x080019F8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X1460) << 16);
    // 0x080019FC: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X1460));
    // 0x08001A00: jalr        $t9
    // 0x08001A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08001A08: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X140C) << 16);
    // 0x08001A0C: addiu       $t9, $t9, 0x140C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X140C));
    // 0x08001A10: jalr        $t9
    // 0x08001A14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08001A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001A1C:
    // 0x08001A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A20: jr          $ra
    // 0x08001A24: nop

    TRACE_RETURN()
    return;
    // 0x08001A24: nop

;}
RECOMP_FUNC void func_08000000_701100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x08000004: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000008: lhu         $t6, -0x324C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X324C);
    // 0x0800000C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x08000010: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x08000014: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x08000018: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x0800001C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x08000020: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x08000024: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x08000028: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x0800002C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x08000030: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x08000034: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x08000038: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x0800003C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x08000040: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x08000044: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x08000048: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x0800004C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08000050: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x08000054: bne         $at, $zero, L_08000060
    if (ctx->r1 != 0) {
        // 0x08000058: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_08000060;
    }
    // 0x08000058: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x0800005C: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
L_08000060:
    // 0x08000060: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000064: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x08000068: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x0800006C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x08000070: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x08000074: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x08000078: lw          $t9, 0xD0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD0);
    // 0x0800007C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x08000080: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000084: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x08000088: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x0800008C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x08000090: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_08000094:
    // 0x08000094: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x08000098: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x0800009C: lhu         $t2, -0x324C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X324C);
    // 0x080000A0: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x080000A4: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x080000A8: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x080000AC: bne         $t1, $t2, L_0800018C
    if (ctx->r9 != ctx->r10) {
        // 0x080000B0: lw          $fp, 0x18($s0)
        ctx->r30 = MEM_W(ctx->r16, 0X18);
            goto L_0800018C;
    }
    // 0x080000B0: lw          $fp, 0x18($s0)
    ctx->r30 = MEM_W(ctx->r16, 0X18);
    // 0x080000B4: lwc1        $f4, 0x8($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X8);
    // 0x080000B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080000BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080000C0: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x080000C4: lwc1        $f6, 0xC($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0XC);
    // 0x080000C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000CC: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080000D0: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x080000D4: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x080000D8: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x080000DC: addiu       $s7, $s7, 0x3EA0
    ctx->r23 = ADD32(ctx->r23, 0X3EA0);
    // 0x080000E0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080000E4: addiu       $s4, $s4, 0x3E10
    ctx->r20 = ADD32(ctx->r20, 0X3E10);
    // 0x080000E8: swc1        $f4, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f4.u32l;
    // 0x080000EC: lwc1        $f6, 0x10($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X10);
    // 0x080000F0: swc1        $f6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f6.u32l;
    // 0x080000F4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080000F8: jalr        $t9
    // 0x080000FC: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080000FC: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    after_0:
    // 0x08000100: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x08000104: jalr        $s4
    // 0x08000108: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x08000108: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x0800010C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x08000110: lhu         $t4, -0x324A($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X324A);
    // 0x08000114: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08000118: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800011C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x08000120: bgez        $t4, L_08000134
    if (SIGNED(ctx->r12) >= 0) {
        // 0x08000124: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08000134;
    }
    // 0x08000124: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800012C: nop

    // 0x08000130: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_08000134:
    // 0x08000134: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x08000138: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    // 0x0800013C: div.d       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f24.d);
    // 0x08000140: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x08000144: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x08000148: jalr        $s7
    // 0x0800014C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_2;
    // 0x0800014C: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x08000150: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08000154: lhu         $t5, -0x324A($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X324A);
    // 0x08000158: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x0800015C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000160: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x08000164: bgez        $t5, L_08000178
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08000168: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_08000178;
    }
    // 0x08000168: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800016C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000170: nop

    // 0x08000174: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_08000178:
    // 0x08000178: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800017C: div.d       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f24.d);
    // 0x08000180: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08000184: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000188: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
L_0800018C:
    // 0x0800018C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x08000190: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x08000194: lw          $s2, 0xD0($t6)
    ctx->r18 = MEM_W(ctx->r14, 0XD0);
    // 0x08000198: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_0800019C:
    // 0x0800019C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x080001A0: beq         $t7, $s5, L_080001B4
    if (ctx->r15 == ctx->r21) {
        // 0x080001A4: nop
    
            goto L_080001B4;
    }
    // 0x080001A4: nop

    // 0x080001A8: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    // 0x080001AC: beql        $t8, $zero, L_080001C0
    if (ctx->r24 == 0) {
        // 0x080001B0: lw          $s1, 0x18($s0)
        ctx->r17 = MEM_W(ctx->r16, 0X18);
            goto L_080001C0;
    }
    goto skip_0;
    // 0x080001B0: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    skip_0:
L_080001B4:
    // 0x080001B4: b           L_080002D0
    // 0x080001B8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_080002D0;
    // 0x080001B8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x080001BC: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
L_080001C0:
    // 0x080001C0: lwc1        $f16, 0x8($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X8);
    // 0x080001C4: lwc1        $f18, 0x10($fp)
    ctx->f18.u32l = MEM_W(ctx->r30, 0X10);
    // 0x080001C8: lwc1        $f20, 0x8($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080001CC: lwc1        $f22, 0x10($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080001D0: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x080001D4: sub.s       $f0, $f16, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x080001D8: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x080001DC: addiu       $s7, $s7, 0x3EA0
    ctx->r23 = ADD32(ctx->r23, 0X3EA0);
    // 0x080001E0: sub.s       $f2, $f18, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x080001E4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080001E8: addiu       $s4, $s4, 0x3E10
    ctx->r20 = ADD32(ctx->r20, 0X3E10);
    // 0x080001EC: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x080001F0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080001F4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080001F8: c.lt.s      $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f4.fl < ctx->f26.fl;
    // 0x080001FC: nop

    // 0x08000200: bc1fl       L_080002D0
    if (!c1cs) {
        // 0x08000204: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_080002D0;
    }
    goto skip_1;
    // 0x08000204: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_1:
    // 0x08000208: sub.s       $f12, $f20, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x0800020C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000210: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000214: sub.s       $f14, $f22, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x08000218: jalr        $t9
    // 0x0800021C: addiu       $s6, $s6, -0xBE0
    ctx->r22 = ADD32(ctx->r22, -0XBE0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800021C: addiu       $s6, $s6, -0xBE0
    ctx->r22 = ADD32(ctx->r22, -0XBE0);
    after_3:
    // 0x08000220: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x08000224: jalr        $s4
    // 0x08000228: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_4;
    // 0x08000228: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x0800022C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000230: lhu         $t0, -0x324A($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X324A);
    // 0x08000234: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000238: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800023C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08000240: bgez        $t0, L_08000254
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08000244: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_08000254;
    }
    // 0x08000244: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800024C: nop

    // 0x08000250: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_08000254:
    // 0x08000254: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x08000258: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    // 0x0800025C: div.d       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f24.d);
    // 0x08000260: mul.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x08000264: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x08000268: jalr        $s7
    // 0x0800026C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_5;
    // 0x0800026C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x08000270: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000274: lhu         $t1, -0x324A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X324A);
    // 0x08000278: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x0800027C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000280: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08000284: bgez        $t1, L_08000298
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08000288: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000298;
    }
    // 0x08000288: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800028C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000290: nop

    // 0x08000294: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_08000298:
    // 0x08000298: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x0800029C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x080002A0: div.d       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f24.d);
    // 0x080002A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080002A8: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x080002AC: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080002B0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080002B4: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    // 0x080002B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080002BC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x080002C0: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x080002C4: jalr        $s6
    // 0x080002C8: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_6;
    // 0x080002C8: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x080002CC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_080002D0:
    // 0x080002D0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x080002D4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080002D8: bnel        $s5, $at, L_0800019C
    if (ctx->r21 != ctx->r1) {
        // 0x080002DC: lw          $t7, 0x74($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X74);
            goto L_0800019C;
    }
    goto skip_2;
    // 0x080002DC: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    skip_2:
    // 0x080002E0: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x080002E4: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x080002E8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080002EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x080002F0: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x080002F4: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x080002F8: bne         $t6, $at, L_08000094
    if (ctx->r14 != ctx->r1) {
        // 0x080002FC: sw          $t4, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r12;
            goto L_08000094;
    }
    // 0x080002FC: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x08000300: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x08000304: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x08000308: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x0800030C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x08000310: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x08000314: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x08000318: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x0800031C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x08000320: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x08000324: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x08000328: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x0800032C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x08000330: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x08000334: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x08000338: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x0800033C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x08000340: jr          $ra
    // 0x08000344: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x08000344: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_08003054_704154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800305C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003060: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003064: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003068: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800306C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003070: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08003074: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003078: beq         $v1, $zero, L_08003098
    if (ctx->r3 == 0) {
        // 0x0800307C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003098;
    }
    // 0x0800307C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003080: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X30B0) << 16);
    // 0x08003084: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003088: addiu       $a0, $a0, 0x30B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X30B0));
    // 0x0800308C: jalr        $t9
    // 0x08003090: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003090: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003094: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08003098:
    // 0x08003098: jal         0x080029CC
    // 0x0800309C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_080029CC_703ACC(rdram, ctx);
        goto after_1;
    // 0x0800309C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x080030A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080030A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080030A8: jr          $ra
    // 0x080030AC: nop

    TRACE_RETURN()
    return;
    // 0x080030AC: nop

;}
RECOMP_FUNC void func_08004214_705314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800421C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004220: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004224: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004228: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800422C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004230: bne         $v1, $zero, L_08004260
    if (ctx->r3 != 0) {
        // 0x08004234: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004260;
    }
    // 0x08004234: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004238: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800423C: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08004240: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08004244: jalr        $t9
    // 0x08004248: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004248: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800424C: bne         $v0, $zero, L_08004260
    if (ctx->r2 != 0) {
        // 0x08004250: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08004260;
    }
    // 0x08004250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004254: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08004258: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x0800425C: beq         $t8, $zero, L_080042E8
    if (ctx->r24 == 0) {
        // 0x08004260: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080042E8;
    }
L_08004260:
    // 0x08004260: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004264: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004268: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800426C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08004270: jalr        $t9
    // 0x08004274: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004274: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08004278: beq         $v0, $zero, L_080042D8
    if (ctx->r2 == 0) {
        // 0x0800427C: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_080042D8;
    }
    // 0x0800427C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08004280: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004284: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004288: jalr        $t9
    // 0x0800428C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800428C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08004290: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004294: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004298: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800429C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080042A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080042A4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080042A8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080042AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080042B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080042B4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080042B8: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080042BC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080042C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080042C4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080042C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080042CC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080042D0: jalr        $t9
    // 0x080042D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080042D4: nop

    after_3:
L_080042D8:
    // 0x080042D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080042DC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080042E0: jalr        $t9
    // 0x080042E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080042E4: nop

    after_4:
L_080042E8:
    // 0x080042E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080042EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080042F0: jr          $ra
    // 0x080042F4: nop

    TRACE_RETURN()
    return;
    // 0x080042F4: nop

;}
RECOMP_FUNC void func_08003634_704734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003638: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800363C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003640: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003644: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08003648: jalr        $t9
    // 0x0800364C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800364C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
    // 0x08003650: bne         $v0, $zero, L_08003668
    if (ctx->r2 != 0) {
        // 0x08003654: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(37, 0X3678) << 16);
            goto L_08003668;
    }
    // 0x08003654: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3678) << 16);
    // 0x08003658: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800365C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003660: jalr        $t9
    // 0x08003664: addiu       $a0, $a0, 0x3678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3678));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003664: addiu       $a0, $a0, 0x3678
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3678));
    after_1:
L_08003668:
    // 0x08003668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800366C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003670: jr          $ra
    // 0x08003674: nop

    TRACE_RETURN()
    return;
    // 0x08003674: nop

;}
RECOMP_FUNC void func_0800140C_70250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800140C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001410: lhu         $t6, -0x324A($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X324A);
    // 0x08001414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001418: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800141C: bne         $t6, $at, L_08001450
    if (ctx->r14 != ctx->r1) {
        // 0x08001420: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_08001450;
    }
    // 0x08001420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001424: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08001428: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800142C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08001430: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08001434: jalr        $t9
    // 0x08001438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x0800143C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001440: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001444: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X17D4) << 16);
    // 0x08001448: jalr        $t9
    // 0x0800144C: addiu       $a0, $a0, 0x17D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X17D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800144C: addiu       $a0, $a0, 0x17D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X17D4));
    after_1:
L_08001450:
    // 0x08001450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001458: jr          $ra
    // 0x0800145C: nop

    TRACE_RETURN()
    return;
    // 0x0800145C: nop

;}
RECOMP_FUNC void func_080018E4_7029E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080018E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080018EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080018F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080018F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080018F8: lhu         $a0, 0xDE($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XDE);
    // 0x080018FC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001900: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001904: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x08001908: jalr        $t9
    // 0x0800190C: sh          $t6, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800190C: sh          $t6, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r14;
    after_0:
    // 0x08001910: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x08001914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001918: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X1460) << 16);
    // 0x0800191C: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X1460));
    // 0x08001920: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08001924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001928: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x0800192C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x08001930: jalr        $t9
    // 0x08001934: sh          $t2, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001934: sh          $t2, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r10;
    after_1:
    // 0x08001938: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X140C) << 16);
    // 0x0800193C: addiu       $t9, $t9, 0x140C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X140C));
    // 0x08001940: jalr        $t9
    // 0x08001944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08001948: lhu         $t3, 0xDE($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XDE);
    // 0x0800194C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08001950: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x08001954: bnel        $t4, $zero, L_0800199C
    if (ctx->r12 != 0) {
        // 0x08001958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800199C;
    }
    goto skip_0;
    // 0x08001958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x0800195C: lhu         $t5, -0x3240($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3240);
    // 0x08001960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001968: beq         $t5, $zero, L_08001998
    if (ctx->r13 == 0) {
        // 0x0800196C: lui         $a2, 0x3E80
        ctx->r6 = S32(0X3E80 << 16);
            goto L_08001998;
    }
    // 0x0800196C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001970: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001974: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001978: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800197C: jalr        $t9
    // 0x08001980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08001984: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001988: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800198C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X1868) << 16);
    // 0x08001990: jalr        $t9
    // 0x08001994: addiu       $a0, $a0, 0x1868
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X1868));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001994: addiu       $a0, $a0, 0x1868
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X1868));
    after_4:
L_08001998:
    // 0x08001998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800199C:
    // 0x0800199C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080019A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080019A4: jr          $ra
    // 0x080019A8: nop

    TRACE_RETURN()
    return;
    // 0x080019A8: nop

;}
RECOMP_FUNC void func_08000528_701628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000528: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800052C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000530: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000534: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000538: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x0800053C: lhu         $t6, 0xD0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD0);
    // 0x08000540: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x08000544: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x08000548: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x0800054C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08000550: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x08000554: lhu         $t0, 0xD2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD2);
    // 0x08000558: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x0800055C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000560: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x08000564: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000568: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x0800056C: lhu         $t4, 0xD4($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD4);
    // 0x08000570: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08000574: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08000578: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x0800057C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000580: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000584: addiu       $a1, $a1, 0x1EF8
    ctx->r5 = ADD32(ctx->r5, 0X1EF8);
    // 0x08000588: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x0800058C: xori        $t8, $v1, 0x3
    ctx->r24 = ctx->r3 ^ 0X3;
    // 0x08000590: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x08000594: bne         $t8, $zero, L_0800060C
    if (ctx->r24 != 0) {
        // 0x08000598: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_0800060C;
    }
    // 0x08000598: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x0800059C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080005A0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080005A4: jalr        $t9
    // 0x080005A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080005AC: beq         $v0, $zero, L_0800060C
    if (ctx->r2 == 0) {
        // 0x080005B0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_0800060C;
    }
    // 0x080005B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080005B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005B8: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080005BC: jalr        $t9
    // 0x080005C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x080005C4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080005C8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080005CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080005D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080005D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080005D8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x080005DC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080005E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080005E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080005EC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080005F0: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080005F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x080005F8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080005FC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000600: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000604: jalr        $t9
    // 0x08000608: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000608: nop

    after_2:
L_0800060C:
    // 0x0800060C: lh          $t0, 0xD8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XD8);
    // 0x08000610: lh          $t1, 0xDA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDA);
    // 0x08000614: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000618: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x0800061C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x08000620: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08000624: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800062C: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x08000630: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000634: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08000638: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x0800063C: jalr        $t9
    // 0x08000640: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000640: nop

    after_3:
    // 0x08000644: bne         $v0, $zero, L_0800068C
    if (ctx->r2 != 0) {
        // 0x08000648: addiu       $a0, $zero, 0x226
        ctx->r4 = ADD32(0, 0X226);
            goto L_0800068C;
    }
    // 0x08000648: addiu       $a0, $zero, 0x226
    ctx->r4 = ADD32(0, 0X226);
    // 0x0800064C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000650: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000654: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000658: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800065C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000660: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000664: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08000668: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x0800066C: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08000670: jalr        $t9
    // 0x08000674: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000674: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_4:
    // 0x08000678: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800067C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000680: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X45C) << 16);
    // 0x08000684: jalr        $t9
    // 0x08000688: addiu       $a0, $a0, 0x45C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000688: addiu       $a0, $a0, 0x45C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45C));
    after_5:
L_0800068C:
    // 0x0800068C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000690: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000694: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000698: jr          $ra
    // 0x0800069C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x0800069C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08004660_705760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004668: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800466C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004670: jal         0x0800444C
    // 0x08004674: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_0800444C_70554C(rdram, ctx);
        goto after_0;
    // 0x08004674: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08004678: bne         $v0, $zero, L_080046E0
    if (ctx->r2 != 0) {
        // 0x0800467C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080046E0;
    }
    // 0x0800467C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004680: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004684: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08004688: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x0800468C: jalr        $t9
    // 0x08004690: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004690: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_1:
    // 0x08004694: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004698: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800469C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080046A0: jalr        $t9
    // 0x080046A4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046A4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x080046A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080046AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080046B0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x080046B4: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x080046B8: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x080046BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080046C0: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x080046C4: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x080046C8: beq         $a0, $zero, L_080046E0
    if (ctx->r4 == 0) {
        // 0x080046CC: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_080046E0;
    }
    // 0x080046CC: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x080046D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X45B8) << 16);
    // 0x080046D4: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080046D8: jalr        $t9
    // 0x080046DC: addiu       $a0, $a0, 0x45B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080046DC: addiu       $a0, $a0, 0x45B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X45B8));
    after_3:
L_080046E0:
    // 0x080046E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080046E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080046E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080046EC: jr          $ra
    // 0x080046F0: nop

    TRACE_RETURN()
    return;
    // 0x080046F0: nop

;}
RECOMP_FUNC void func_080030B0_7041B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080030B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080030B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080030BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080030C0: lh          $t6, 0xDA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XDA);
    // 0x080030C4: lh          $t7, 0xDC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XDC);
    // 0x080030C8: lh          $v0, 0xDE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XDE);
    // 0x080030CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080030D0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x080030D4: blez        $v0, L_080030E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x080030D8: sh          $t8, 0xDA($a0)
        MEM_H(0XDA, ctx->r4) = ctx->r24;
            goto L_080030E8;
    }
    // 0x080030D8: sh          $t8, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r24;
    // 0x080030DC: addiu       $t9, $v0, -0x3
    ctx->r25 = ADD32(ctx->r2, -0X3);
    // 0x080030E0: b           L_080030EC
    // 0x080030E4: sh          $t9, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r25;
        goto L_080030EC;
    // 0x080030E4: sh          $t9, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r25;
L_080030E8:
    // 0x080030E8: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
L_080030EC:
    // 0x080030EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030F0: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080030F4: lh          $a1, 0xDE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XDE);
    // 0x080030F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080030FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003100: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003104: jalr        $t9
    // 0x08003108: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003108: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x0800310C: lh          $t0, 0xDA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XDA);
    // 0x08003110: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x08003114: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08003118: bne         $t0, $zero, L_08003150
    if (ctx->r8 != 0) {
        // 0x0800311C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(37, 0X316C) << 16);
            goto L_08003150;
    }
    // 0x0800311C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X316C) << 16);
    // 0x08003120: lh          $t1, 0xDC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDC);
    // 0x08003124: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    // 0x08003128: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800312C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003130: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x08003134: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08003138: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    // 0x0800313C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08003140: sw          $t5, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r13;
    // 0x08003144: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    // 0x08003148: jalr        $t9
    // 0x0800314C: addiu       $a0, $a0, 0x316C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X316C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800314C: addiu       $a0, $a0, 0x316C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X316C));
    after_1:
L_08003150:
    // 0x08003150: jal         0x080029CC
    // 0x08003154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_080029CC_703ACC(rdram, ctx);
        goto after_2;
    // 0x08003154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003158: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800315C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003164: jr          $ra
    // 0x08003168: nop

    TRACE_RETURN()
    return;
    // 0x08003168: nop

;}
RECOMP_FUNC void func_08003678_704778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800367C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003684: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003688: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x0800368C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003690: jalr        $t9
    // 0x08003694: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003694: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08003698: bne         $v0, $zero, L_080036BC
    if (ctx->r2 != 0) {
        // 0x0800369C: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_080036BC;
    }
    // 0x0800369C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x080036A0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080036A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X36CC) << 16);
    // 0x080036B0: addiu       $a0, $a0, 0x36CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X36CC));
    // 0x080036B4: jalr        $t9
    // 0x080036B8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080036B8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_080036BC:
    // 0x080036BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080036C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080036C4: jr          $ra
    // 0x080036C8: nop

    TRACE_RETURN()
    return;
    // 0x080036C8: nop

;}
RECOMP_FUNC void func_08000450_701550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000450: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000454: jr          $ra
    // 0x08000458: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000458: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003C90_704D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003C94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003C98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003C9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003CA0: jal         0x08003A30
    // 0x08003CA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08003A30_704B30(rdram, ctx);
        goto after_0;
    // 0x08003CA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003CA8: bne         $v0, $zero, L_08003D50
    if (ctx->r2 != 0) {
        // 0x08003CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003D50;
    }
    // 0x08003CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003CB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CB4: addiu       $t9, $t9, -0x16DC
    ctx->r25 = ADD32(ctx->r25, -0X16DC);
    // 0x08003CB8: jalr        $t9
    // 0x08003CBC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003CBC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_1:
    // 0x08003CC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CC4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003CC8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003CCC: jalr        $t9
    // 0x08003CD0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003CD0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08003CD4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08003CD8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CD8) << 16);
    // 0x08003CDC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003CE0: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x08003CE4: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08003CE8: lwc1        $f4, 0x4CD8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CD8));
    // 0x08003CEC: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08003CF0: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08003CF4: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x08003CF8: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08003CFC: beq         $a0, $zero, L_08003D50
    if (ctx->r4 == 0) {
        // 0x08003D00: swc1        $f4, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
            goto L_08003D50;
    }
    // 0x08003D00: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    // 0x08003D04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003D08: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D10: jalr        $t9
    // 0x08003D14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003D14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08003D18: beq         $v0, $zero, L_08003D30
    if (ctx->r2 == 0) {
        // 0x08003D1C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_08003D30;
    }
    // 0x08003D1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08003D20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D24: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08003D28: jalr        $t9
    // 0x08003D2C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003D2C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
L_08003D30:
    // 0x08003D30: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003D34: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003D38: lhu         $t8, 0x184($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X184);
    // 0x08003D3C: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x08003D40: sh          $t0, 0x184($v0)
    MEM_H(0X184, ctx->r2) = ctx->r8;
    // 0x08003D44: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    // 0x08003D48: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x08003D4C: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
L_08003D50:
    // 0x08003D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003D5C: jr          $ra
    // 0x08003D60: nop

    TRACE_RETURN()
    return;
    // 0x08003D60: nop

;}
RECOMP_FUNC void func_080017D4_7028D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080017DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080017E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080017E4: lhu         $t6, 0xDC($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDC);
    // 0x080017E8: lhu         $t8, 0xDA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XDA);
    // 0x080017EC: lhu         $t1, 0xD8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XD8);
    // 0x080017F0: addiu       $t9, $t6, 0x4
    ctx->r25 = ADD32(ctx->r14, 0X4);
    // 0x080017F4: sh          $t9, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = ctx->r25;
    // 0x080017F8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x080017FC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X1460) << 16);
    // 0x08001800: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x08001804: sh          $t0, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r8;
    // 0x08001808: sh          $t2, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r10;
    // 0x0800180C: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X1460));
    // 0x08001810: jalr        $t9
    // 0x08001814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001818: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800181C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x08001820: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08001824: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08001828: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x0800182C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X1770) << 16);
    // 0x08001830: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001834: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08001838: beq         $v1, $zero, L_08001858
    if (ctx->r3 == 0) {
        // 0x0800183C: sh          $t3, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r11;
            goto L_08001858;
    }
    // 0x0800183C: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    // 0x08001840: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001844: sh          $t4, -0x324A($at)
    MEM_H(-0X324A, ctx->r1) = ctx->r12;
    // 0x08001848: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800184C: sh          $t5, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r13;
    // 0x08001850: jalr        $t9
    // 0x08001854: addiu       $a0, $a0, 0x1770
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X1770));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001854: addiu       $a0, $a0, 0x1770
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X1770));
    after_1:
L_08001858:
    // 0x08001858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800185C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001860: jr          $ra
    // 0x08001864: nop

    TRACE_RETURN()
    return;
    // 0x08001864: nop

;}
RECOMP_FUNC void func_08003E60_704F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08003E64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003E68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003E70: jal         0x08003A30
    // 0x08003E74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_08003A30_704B30(rdram, ctx);
        goto after_0;
    // 0x08003E74: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003E78: bne         $v0, $zero, L_08003F54
    if (ctx->r2 != 0) {
        // 0x08003E7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003F54;
    }
    // 0x08003E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003E80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E84: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003E88: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08003E8C: jalr        $t9
    // 0x08003E90: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E90: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_1:
    // 0x08003E94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E98: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003E9C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003EA0: jalr        $t9
    // 0x08003EA4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003EA4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08003EA8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08003EAC: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003EB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003EB4: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x08003EB8: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003EBC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08003EC0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08003EC4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003EC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003ECC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08003ED0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003ED4: addiu       $t9, $t9, -0x4010
    ctx->r25 = ADD32(ctx->r25, -0X4010);
    // 0x08003ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003EDC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003EE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003EE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003EE8: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x08003EEC: nop

    // 0x08003EF0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x08003EF4: sh          $t2, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r10;
    // 0x08003EF8: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x08003EFC: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003F00: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08003F04: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08003F08: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08003F0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003F10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08003F14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08003F18: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08003F1C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08003F20: jalr        $t9
    // 0x08003F24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003F24: nop

    after_3:
    // 0x08003F28: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08003F2C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x08003F30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3F68) << 16);
    // 0x08003F34: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x08003F38: bne         $v1, $zero, L_08003F54
    if (ctx->r3 != 0) {
        // 0x08003F3C: sh          $t3, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r11;
            goto L_08003F54;
    }
    // 0x08003F3C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08003F40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F48: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08003F4C: jalr        $t9
    // 0x08003F50: addiu       $a0, $a0, 0x3F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3F68));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003F50: addiu       $a0, $a0, 0x3F68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3F68));
    after_4:
L_08003F54:
    // 0x08003F54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003F58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003F60: jr          $ra
    // 0x08003F64: nop

    TRACE_RETURN()
    return;
    // 0x08003F64: nop

;}
RECOMP_FUNC void func_080045B8_7056B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080045B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080045BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080045C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080045C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080045C8: jal         0x0800444C
    // 0x080045CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_0800444C_70554C(rdram, ctx);
        goto after_0;
    // 0x080045CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080045D0: bne         $v0, $zero, L_0800464C
    if (ctx->r2 != 0) {
        // 0x080045D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800464C;
    }
    // 0x080045D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080045D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080045DC: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x080045E0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x080045E4: jalr        $t9
    // 0x080045E8: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080045E8: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_1:
    // 0x080045EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080045F0: addiu       $t9, $t9, -0x16DC
    ctx->r25 = ADD32(ctx->r25, -0X16DC);
    // 0x080045F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080045F8: jalr        $t9
    // 0x080045FC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080045FC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_2:
    // 0x08004600: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004604: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08004608: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x0800460C: jalr        $t9
    // 0x08004610: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004610: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_3:
    // 0x08004614: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08004618: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800461C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08004620: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x08004624: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08004628: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800462C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08004630: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x08004634: beq         $a0, $zero, L_0800464C
    if (ctx->r4 == 0) {
        // 0x08004638: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_0800464C;
    }
    // 0x08004638: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x0800463C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X4660) << 16);
    // 0x08004640: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08004644: jalr        $t9
    // 0x08004648: addiu       $a0, $a0, 0x4660
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4660));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004648: addiu       $a0, $a0, 0x4660
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X4660));
    after_4:
L_0800464C:
    // 0x0800464C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004654: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004658: jr          $ra
    // 0x0800465C: nop

    TRACE_RETURN()
    return;
    // 0x0800465C: nop

;}
RECOMP_FUNC void func_080049CC_705ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080049D0: jr          $ra
    // 0x080049D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080049D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080031D8_7042D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080031D8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x080031DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080031E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x080031E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x080031E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080031EC: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x080031F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(37, 0X4CD0) << 16);
    // 0x080031F4: ldc1        $f0, 0x4CD0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(37, 0X4CD0));
    // 0x080031F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080031FC: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08003200: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08003204: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08003208: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x0800320C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08003210: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08003214: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08003218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800321C: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08003220: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08003224: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003228: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800322C: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08003230: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08003234: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003238: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x0800323C: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08003240: lh          $t6, 0xDA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XDA);
    // 0x08003244: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x08003248: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x0800324C: sh          $t7, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r15;
    // 0x08003250: lhu         $t8, 0x16($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X16);
    // 0x08003254: lh          $t9, 0xDA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XDA);
    // 0x08003258: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x0800325C: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x08003260: lhu         $t1, 0x18($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X18);
    // 0x08003264: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003268: addiu       $t9, $t9, -0x1B5C
    ctx->r25 = ADD32(ctx->r25, -0X1B5C);
    // 0x0800326C: sh          $t1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r9;
    // 0x08003270: sh          $t2, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r10;
    // 0x08003274: lhu         $a3, 0x18($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X18);
    // 0x08003278: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x0800327C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003280: jalr        $t9
    // 0x08003284: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003284: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x08003288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800328C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08003290: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003294: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x08003298: lhu         $t3, 0x8A($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X8A);
    // 0x0800329C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032A0: addiu       $t9, $t9, -0x57A8
    ctx->r25 = ADD32(ctx->r25, -0X57A8);
    // 0x080032A4: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x080032A8: addiu       $t5, $t4, 0x24
    ctx->r13 = ADD32(ctx->r12, 0X24);
    // 0x080032AC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x080032B0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x080032B4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x080032B8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080032BC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x080032C0: jalr        $t9
    // 0x080032C4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080032C4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x080032C8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x080032CC: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080032D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080032D4: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080032D8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080032DC: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x080032E0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080032E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080032E8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x080032EC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x080032F0: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080032F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080032F8: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x080032FC: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08003300: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08003304: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08003308: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x0800330C: lhu         $v0, 0x8A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X8A);
    // 0x08003310: beq         $v0, $zero, L_080035AC
    if (ctx->r2 == 0) {
        // 0x08003314: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_080035AC;
    }
    // 0x08003314: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08003318: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x0800331C: mfhi        $v1
    ctx->r3 = hi;
    // 0x08003320: sltiu       $t6, $v1, 0x1
    ctx->r14 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08003324: beq         $t6, $zero, L_0800361C
    if (ctx->r14 == 0) {
        // 0x08003328: sh          $t7, 0x8A($s2)
        MEM_H(0X8A, ctx->r18) = ctx->r15;
            goto L_0800361C;
    }
    // 0x08003328: sh          $t7, 0x8A($s2)
    MEM_H(0X8A, ctx->r18) = ctx->r15;
    // 0x0800332C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08003330: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08003334: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08003338: jalr        $v0
    // 0x0800333C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0800333C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x08003340: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x08003344: bne         $at, $zero, L_08003378
    if (ctx->r1 != 0) {
        // 0x08003348: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_08003378;
    }
    // 0x08003348: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x0800334C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003350: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003354: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003358: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x0800335C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08003360: jalr        $t9
    // 0x08003364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08003368: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800336C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08003370: b           L_0800339C
    // 0x08003374: sh          $t8, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r24;
        goto L_0800339C;
    // 0x08003374: sh          $t8, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r24;
L_08003378:
    // 0x08003378: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800337C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003380: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003384: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
    // 0x08003388: jalr        $t9
    // 0x0800338C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800338C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x08003390: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003394: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x08003398: sh          $t0, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r8;
L_0800339C:
    // 0x0800339C: lhu         $t1, 0x8A($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X8A);
    // 0x080033A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080033A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080033A8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x080033AC: mflo        $t2
    ctx->r10 = lo;
    // 0x080033B0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x080033B4: beq         $t3, $zero, L_080033D4
    if (ctx->r11 == 0) {
        // 0x080033B8: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080033D4;
    }
    // 0x080033B8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080033BC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080033C0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080033C4: jalr        $t9
    // 0x080033C8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080033C8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_5:
    // 0x080033CC: b           L_080033DC
    // 0x080033D0: nop

        goto L_080033DC;
    // 0x080033D0: nop

L_080033D4:
    // 0x080033D4: jalr        $t9
    // 0x080033D8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080033D8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_6:
L_080033DC:
    // 0x080033DC: beq         $s1, $zero, L_0800358C
    if (ctx->r17 == 0) {
        // 0x080033E0: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_0800358C;
    }
    // 0x080033E0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080033E4: jalr        $t9
    // 0x080033E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080033E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x080033EC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080033F0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080033F4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x080033F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080033FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08003400: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08003404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003408: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x0800340C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003410: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003414: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003418: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x0800341C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08003420: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08003424: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003428: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800342C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08003430: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08003434: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x08003438: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x0800343C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08003440: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08003444: jalr        $t9
    // 0x08003448: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003448: nop

    after_8:
    // 0x0800344C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003450: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08003454: jalr        $t9
    // 0x08003458: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003458: nop

    after_9:
    // 0x0800345C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x08003460: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08003464: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08003468: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x0800346C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08003470: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x08003474: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003478: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800347C: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x08003480: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08003484: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08003488: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x0800348C: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x08003490: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003494: swc1        $f16, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f16.u32l;
    // 0x08003498: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800349C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x080034A0: jalr        $t9
    // 0x080034A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080034A4: nop

    after_10:
    // 0x080034A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080034AC: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080034B0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x080034B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x080034B8: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080034BC: mflo        $t4
    ctx->r12 = lo;
    // 0x080034C0: nop

    // 0x080034C4: nop

    // 0x080034C8: div         $zero, $t4, $a1
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r5)));
    // 0x080034CC: mflo        $t5
    ctx->r13 = lo;
    // 0x080034D0: addiu       $t6, $t5, -0x5
    ctx->r14 = ADD32(ctx->r13, -0X5);
    // 0x080034D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080034D8: bne         $a1, $zero, L_080034E4
    if (ctx->r5 != 0) {
        // 0x080034DC: nop
    
            goto L_080034E4;
    }
    // 0x080034DC: nop

    // 0x080034E0: break       7
    do_break(134231264);
L_080034E4:
    // 0x080034E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x080034E8: bne         $a1, $at, L_080034FC
    if (ctx->r5 != ctx->r1) {
        // 0x080034EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_080034FC;
    }
    // 0x080034EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080034F0: bne         $t4, $at, L_080034FC
    if (ctx->r12 != ctx->r1) {
        // 0x080034F4: nop
    
            goto L_080034FC;
    }
    // 0x080034F4: nop

    // 0x080034F8: break       6
    do_break(134231288);
L_080034FC:
    // 0x080034FC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003500: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x08003504: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x08003508: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800350C: jalr        $t9
    // 0x08003510: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08003510: nop

    after_11:
    // 0x08003514: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x08003518: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x0800351C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x08003520: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08003524: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x08003528: mflo        $t8
    ctx->r24 = lo;
    // 0x0800352C: addiu       $t0, $t8, 0xA
    ctx->r8 = ADD32(ctx->r24, 0XA);
    // 0x08003530: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08003534: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08003538: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x0800353C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08003540: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003544: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08003548: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x0800354C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003550: jalr        $t9
    // 0x08003554: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08003554: nop

    after_12:
    // 0x08003558: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x0800355C: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x08003560: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x08003564: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08003568: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x0800356C: mflo        $t2
    ctx->r10 = lo;
    // 0x08003570: addiu       $t3, $t2, -0x5
    ctx->r11 = ADD32(ctx->r10, -0X5);
    // 0x08003574: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x08003578: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x0800357C: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003580: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08003584: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x08003588: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
L_0800358C:
    // 0x0800358C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003590: addiu       $t9, $t9, -0x7F70
    ctx->r25 = ADD32(ctx->r25, -0X7F70);
    // 0x08003594: jalr        $t9
    // 0x08003598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08003598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x0800359C: beq         $v0, $zero, L_0800361C
    if (ctx->r2 == 0) {
        // 0x080035A0: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_0800361C;
    }
    // 0x080035A0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x080035A4: b           L_0800361C
    // 0x080035A8: sb          $t4, 0xDD($v0)
    MEM_B(0XDD, ctx->r2) = ctx->r12;
        goto L_0800361C;
    // 0x080035A8: sb          $t4, 0xDD($v0)
    MEM_B(0XDD, ctx->r2) = ctx->r12;
L_080035AC:
    // 0x080035AC: jalr        $t9
    // 0x080035B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080035B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x080035B4: beq         $v0, $zero, L_080035CC
    if (ctx->r2 == 0) {
        // 0x080035B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_080035CC;
    }
    // 0x080035B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080035BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035C0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080035C4: jalr        $t9
    // 0x080035C8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080035C8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_15:
L_080035CC:
    // 0x080035CC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x080035D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080035D4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080035D8: sh          $t5, -0x324A($at)
    MEM_H(-0X324A, ctx->r1) = ctx->r13;
    // 0x080035DC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080035E0: sw          $zero, 0x60($s2)
    MEM_W(0X60, ctx->r18) = 0;
    // 0x080035E4: jalr        $t9
    // 0x080035E8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080035E8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_16:
    // 0x080035EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035F0: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080035F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080035F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080035FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08003600: jalr        $t9
    // 0x08003604: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08003604: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_17:
    // 0x08003608: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800360C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003610: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(37, 0X3634) << 16);
    // 0x08003614: jalr        $t9
    // 0x08003618: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3634));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08003618: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(37, 0X3634));
    after_18:
L_0800361C:
    // 0x0800361C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003624: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08003628: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x0800362C: jr          $ra
    // 0x08003630: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x08003630: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_08001868_702968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800186C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001870: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800187C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001880: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001884: lhu         $a0, 0xDE($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XDE);
    // 0x08001888: jalr        $t9
    // 0x0800188C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800188C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001890: lui         $at, 0x45E0
    ctx->r1 = S32(0X45E0 << 16);
    // 0x08001894: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001898: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800189C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X1460) << 16);
    // 0x080018A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080018A4: lhu         $t2, 0xDE($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XDE);
    // 0x080018A8: addiu       $t9, $t9, 0x1460
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X1460));
    // 0x080018AC: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x080018B0: sh          $t3, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r11;
    // 0x080018B4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x080018B8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x080018BC: jalr        $t9
    // 0x080018C0: sh          $t1, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018C0: sh          $t1, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r9;
    after_1:
    // 0x080018C4: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(37, 0X140C) << 16);
    // 0x080018C8: addiu       $t9, $t9, 0x140C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(37, 0X140C));
    // 0x080018CC: jalr        $t9
    // 0x080018D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x080018D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018DC: jr          $ra
    // 0x080018E0: nop

    TRACE_RETURN()
    return;
    // 0x080018E0: nop

;}
