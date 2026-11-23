#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80215198_674148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215198: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8021519C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802151A0: addiu       $fp, $a0, 0x5C
    ctx->r30 = ADD32(ctx->r4, 0X5C);
    // 0x802151A4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802151A8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802151AC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802151B0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802151B4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802151B8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802151BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802151C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802151C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802151C8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802151CC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x802151D0: lb          $t6, 0xA0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0XA0);
    // 0x802151D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802151D8: bne         $t6, $zero, L_8021525C
    if (ctx->r14 != 0) {
        // 0x802151DC: nop
    
            goto L_8021525C;
    }
    // 0x802151DC: nop

    // 0x802151E0: lw          $v0, 0x40($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X40);
    // 0x802151E4: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x802151E8: bne         $t7, $zero, L_80215220
    if (ctx->r15 != 0) {
        // 0x802151EC: andi        $t8, $v0, 0xF
        ctx->r24 = ctx->r2 & 0XF;
            goto L_80215220;
    }
    // 0x802151EC: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x802151F0: lw          $a1, 0x28($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X28);
    // 0x802151F4: blezl       $a1, L_80215208
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802151F8: lw          $a1, 0x2C($fp)
        ctx->r5 = MEM_W(ctx->r30, 0X2C);
            goto L_80215208;
    }
    goto skip_0;
    // 0x802151F8: lw          $a1, 0x2C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X2C);
    skip_0:
    // 0x802151FC: jal         0x80010864
    // 0x80215200: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    func_80010864_11464(rdram, ctx);
        goto after_0;
    // 0x80215200: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    after_0:
    // 0x80215204: lw          $a1, 0x2C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X2C);
L_80215208:
    // 0x80215208: blez        $a1, L_80215218
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021520C: nop
    
            goto L_80215218;
    }
    // 0x8021520C: nop

    // 0x80215210: jal         0x80010864
    // 0x80215214: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    func_80010864_11464(rdram, ctx);
        goto after_1;
    // 0x80215214: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    after_1:
L_80215218:
    // 0x80215218: b           L_80215250
    // 0x8021521C: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
        goto L_80215250;
    // 0x8021521C: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
L_80215220:
    // 0x80215220: bnel        $t8, $zero, L_80215254
    if (ctx->r24 != 0) {
        // 0x80215224: lw          $t9, 0x40($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X40);
            goto L_80215254;
    }
    goto skip_1;
    // 0x80215224: lw          $t9, 0x40($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X40);
    skip_1:
    // 0x80215228: lw          $a1, 0x28($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X28);
    // 0x8021522C: blezl       $a1, L_80215240
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80215230: lw          $a1, 0x2C($fp)
        ctx->r5 = MEM_W(ctx->r30, 0X2C);
            goto L_80215240;
    }
    goto skip_2;
    // 0x80215230: lw          $a1, 0x2C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X2C);
    skip_2:
    // 0x80215234: jal         0x8001080C
    // 0x80215238: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    func_8001080C_1140C(rdram, ctx);
        goto after_2;
    // 0x80215238: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    after_2:
    // 0x8021523C: lw          $a1, 0x2C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X2C);
L_80215240:
    // 0x80215240: blezl       $a1, L_80215254
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80215244: lw          $t9, 0x40($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X40);
            goto L_80215254;
    }
    goto skip_3;
    // 0x80215244: lw          $t9, 0x40($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X40);
    skip_3:
    // 0x80215248: jal         0x8001080C
    // 0x8021524C: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    func_8001080C_1140C(rdram, ctx);
        goto after_3;
    // 0x8021524C: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    after_3:
L_80215250:
    // 0x80215250: lw          $t9, 0x40($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X40);
L_80215254:
    // 0x80215254: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80215258: sw          $t0, 0x40($fp)
    MEM_W(0X40, ctx->r30) = ctx->r8;
L_8021525C:
    // 0x8021525C: jal         0x8001136C
    // 0x80215260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001136C_11F6C(rdram, ctx);
        goto after_4;
    // 0x80215260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80215264: lw          $t1, 0x14($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X14);
    // 0x80215268: lw          $s7, 0x10($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X10);
    // 0x8021526C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80215270: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x80215274: lw          $a0, 0x1C($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X1C);
    // 0x80215278: lw          $t3, 0x20($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X20);
    // 0x8021527C: or          $t2, $a0, $at
    ctx->r10 = ctx->r4 | ctx->r1;
    // 0x80215280: jal         0x802145CC
    // 0x80215284: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    func_802145CC_67357C(rdram, ctx);
        goto after_5;
    // 0x80215284: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    after_5:
    // 0x80215288: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x8021528C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80215290: addiu       $s2, $s2, -0x1B80
    ctx->r18 = ADD32(ctx->r18, -0X1B80);
    // 0x80215294: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80215298: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
L_8021529C:
    // 0x8021529C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802152A0: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
L_802152A4:
    // 0x802152A4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802152A8: addiu       $t4, $zero, 0x34
    ctx->r12 = ADD32(0, 0X34);
    // 0x802152AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802152B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802152B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802152B8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x802152BC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802152C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802152C4: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x802152C8: jal         0x802145F4
    // 0x802152CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_802145F4_6735A4(rdram, ctx);
        goto after_6;
    // 0x802152CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_6:
    // 0x802152D0: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x802152D4: slti        $at, $s0, 0x120
    ctx->r1 = SIGNED(ctx->r16) < 0X120 ? 1 : 0;
    // 0x802152D8: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x802152DC: bne         $at, $zero, L_802152A4
    if (ctx->r1 != 0) {
        // 0x802152E0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_802152A4;
    }
    // 0x802152E0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x802152E4: addiu       $s4, $s4, 0x34
    ctx->r20 = ADD32(ctx->r20, 0X34);
    // 0x802152E8: slti        $at, $s4, 0xD0
    ctx->r1 = SIGNED(ctx->r20) < 0XD0 ? 1 : 0;
    // 0x802152EC: bne         $at, $zero, L_8021529C
    if (ctx->r1 != 0) {
        // 0x802152F0: addiu       $s5, $s5, 0x34
        ctx->r21 = ADD32(ctx->r21, 0X34);
            goto L_8021529C;
    }
    // 0x802152F0: addiu       $s5, $s5, 0x34
    ctx->r21 = ADD32(ctx->r21, 0X34);
    // 0x802152F4: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
    // 0x802152F8: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x802152FC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80215300: or          $t6, $s3, $at
    ctx->r14 = ctx->r19 | ctx->r1;
    // 0x80215304: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80215308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021530C: jal         0x800109A4
    // 0x80215310: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    func_800109A4_115A4(rdram, ctx);
        goto after_7;
    // 0x80215310: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    after_7:
    // 0x80215314: jal         0x80010B60
    // 0x80215318: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80010B60_11760(rdram, ctx);
        goto after_8;
    // 0x80215318: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x8021531C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80215320: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80215324: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80215328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021532C: jal         0x80010980
    // 0x80215330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010980_11580(rdram, ctx);
        goto after_9;
    // 0x80215330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x80215334: jal         0x80216624
    // 0x80215338: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    func_80216624_6755D4(rdram, ctx);
        goto after_10;
    // 0x80215338: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    after_10:
    // 0x8021533C: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x80215340: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80215344: addiu       $a1, $s7, 0x54
    ctx->r5 = ADD32(ctx->r23, 0X54);
    // 0x80215348: addiu       $s0, $s0, 0xE
    ctx->r16 = ADD32(ctx->r16, 0XE);
    // 0x8021534C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80215350: jal         0x80010E9C
    // 0x80215354: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_11;
    // 0x80215354: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_11:
    // 0x80215358: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8021535C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80215360: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80215364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80215368: jal         0x80010980
    // 0x8021536C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_12;
    // 0x8021536C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_12:
    // 0x80215370: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80215374: jal         0x802165F0
    // 0x80215378: lw          $a1, 0x38($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X38);
    func_802165F0_6755A0(rdram, ctx);
        goto after_13;
    // 0x80215378: lw          $a1, 0x38($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X38);
    after_13:
    // 0x8021537C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80215380: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80215384: addiu       $a1, $s7, 0xD2
    ctx->r5 = ADD32(ctx->r23, 0XD2);
    // 0x80215388: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8021538C: jal         0x80010E9C
    // 0x80215390: addiu       $a2, $a2, 0x44
    ctx->r6 = ADD32(ctx->r6, 0X44);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_14;
    // 0x80215390: addiu       $a2, $a2, 0x44
    ctx->r6 = ADD32(ctx->r6, 0X44);
    after_14:
    // 0x80215394: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80215398: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8021539C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802153A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802153A4: jal         0x80010980
    // 0x802153A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80010980_11580(rdram, ctx);
        goto after_15;
    // 0x802153A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_15:
    // 0x802153AC: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802153B0: lw          $a3, 0x7010($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7010);
    // 0x802153B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802153B8: addiu       $a1, $s7, 0xEF
    ctx->r5 = ADD32(ctx->r23, 0XEF);
    // 0x802153BC: jal         0x80010E9C
    // 0x802153C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_16;
    // 0x802153C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_16:
    // 0x802153C4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x802153C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802153CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802153D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802153D4: jal         0x80010980
    // 0x802153D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_17;
    // 0x802153D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_17:
    // 0x802153DC: lw          $t8, 0x3C($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X3C);
    // 0x802153E0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x802153E4: addiu       $s1, $s7, 0x14
    ctx->r17 = ADD32(ctx->r23, 0X14);
    // 0x802153E8: blez        $t8, L_80215444
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802153EC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80215444;
    }
    // 0x802153EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_802153F0:
    // 0x802153F0: jal         0x80215150
    // 0x802153F4: lw          $a1, 0x3C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X3C);
    func_80215150_674100(rdram, ctx);
        goto after_18;
    // 0x802153F4: lw          $a1, 0x3C($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X3C);
    after_18:
    // 0x802153F8: lw          $t9, 0x3C($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X3C);
    // 0x802153FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80215400: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80215404: jal         0x802165F0
    // 0x80215408: subu        $a1, $t9, $s6
    ctx->r5 = SUB32(ctx->r25, ctx->r22);
    func_802165F0_6755A0(rdram, ctx);
        goto after_19;
    // 0x80215408: subu        $a1, $t9, $s6
    ctx->r5 = SUB32(ctx->r25, ctx->r22);
    after_19:
    // 0x8021540C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80215410: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80215414: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80215418: addu        $a2, $s0, $t0
    ctx->r6 = ADD32(ctx->r16, ctx->r8);
    // 0x8021541C: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x80215420: jal         0x80010E9C
    // 0x80215424: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_20;
    // 0x80215424: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_20:
    // 0x80215428: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8021542C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80215430: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80215434: lw          $t2, 0x3C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3C);
    // 0x80215438: slt         $at, $t2, $s6
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8021543C: beql        $at, $zero, L_802153F0
    if (ctx->r1 == 0) {
        // 0x80215440: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_802153F0;
    }
    goto skip_4;
    // 0x80215440: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_4:
L_80215444:
    // 0x80215444: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80215448: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8021544C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80215450: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80215454: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80215458: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8021545C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80215460: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80215464: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80215468: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8021546C: jr          $ra
    // 0x80215470: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80215470: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_802144E0_673490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802144E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802144E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802144E8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802144EC: jal         0x80013AC4
    // 0x802144F0: addiu       $a0, $a0, 0x6F5C
    ctx->r4 = ADD32(ctx->r4, 0X6F5C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802144F0: addiu       $a0, $a0, 0x6F5C
    ctx->r4 = ADD32(ctx->r4, 0X6F5C);
    after_0:
    // 0x802144F4: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x802144F8: addiu       $t6, $t6, 0x31B0
    ctx->r14 = ADD32(ctx->r14, 0X31B0);
    // 0x802144FC: addiu       $t7, $zero, 0x4D2
    ctx->r15 = ADD32(0, 0X4D2);
    // 0x80214500: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80214504: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80214508: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x8021450C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x80214510: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80214514: jal         0x80010230
    // 0x80214518: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_1;
    // 0x80214518: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8021451C: lui         $t8, 0x803
    ctx->r24 = S32(0X803 << 16);
    // 0x80214520: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80214524: addiu       $t8, $t8, 0x5B0
    ctx->r24 = ADD32(ctx->r24, 0X5B0);
    // 0x80214528: addiu       $t9, $zero, 0x4D2
    ctx->r25 = ADD32(0, 0X4D2);
    // 0x8021452C: sw          $v0, -0x1B80($at)
    MEM_W(-0X1B80, ctx->r1) = ctx->r2;
    // 0x80214530: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80214534: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80214538: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021453C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80214540: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80214544: jal         0x80010230
    // 0x80214548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x80214548: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8021454C: lui         $t0, 0x803
    ctx->r8 = S32(0X803 << 16);
    // 0x80214550: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80214554: addiu       $t0, $t0, 0x15B0
    ctx->r8 = ADD32(ctx->r8, 0X15B0);
    // 0x80214558: addiu       $t1, $zero, 0x4D2
    ctx->r9 = ADD32(0, 0X4D2);
    // 0x8021455C: sw          $v0, -0x1B7C($at)
    MEM_W(-0X1B7C, ctx->r1) = ctx->r2;
    // 0x80214560: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80214564: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80214568: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021456C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80214570: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80214574: jal         0x80010230
    // 0x80214578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_3;
    // 0x80214578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8021457C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214580: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80214584: sw          $v0, -0x1B78($at)
    MEM_W(-0X1B78, ctx->r1) = ctx->r2;
    // 0x80214588: jr          $ra
    // 0x8021458C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8021458C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80214E98_673E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214E98: lui         $at, 0x42AF
    ctx->r1 = S32(0X42AF << 16);
    // 0x80214E9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80214EA0: jr          $ra
    // 0x80214EA4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80214EA4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80211870_670820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211870: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211874: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211878: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021187C: jal         0x80013AC4
    // 0x80211880: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211880: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    after_0:
    // 0x80211884: lui         $t6, 0x803
    ctx->r14 = S32(0X803 << 16);
    // 0x80211888: addiu       $t6, $t6, 0x15B0
    ctx->r14 = ADD32(ctx->r14, 0X15B0);
    // 0x8021188C: addiu       $t7, $zero, 0x4D2
    ctx->r15 = ADD32(0, 0X4D2);
    // 0x80211890: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211894: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211898: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021189C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802118A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802118A4: jal         0x80010230
    // 0x802118A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_1;
    // 0x802118A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x802118AC: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x802118B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802118B4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802118B8: addiu       $t9, $zero, 0x4D3
    ctx->r25 = ADD32(0, 0X4D3);
    // 0x802118BC: sw          $v0, 0x7F10($at)
    MEM_W(0X7F10, ctx->r1) = ctx->r2;
    // 0x802118C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802118C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802118C8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802118CC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802118D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802118D4: jal         0x80010230
    // 0x802118D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_2;
    // 0x802118D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x802118DC: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x802118E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802118E4: addiu       $t0, $t0, 0x1000
    ctx->r8 = ADD32(ctx->r8, 0X1000);
    // 0x802118E8: addiu       $t1, $zero, 0x4D3
    ctx->r9 = ADD32(0, 0X4D3);
    // 0x802118EC: sw          $v0, 0x7F14($at)
    MEM_W(0X7F14, ctx->r1) = ctx->r2;
    // 0x802118F0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802118F4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802118F8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802118FC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211900: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211904: jal         0x80010230
    // 0x80211908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_3;
    // 0x80211908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8021190C: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x80211910: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211914: addiu       $t2, $t2, 0x2000
    ctx->r10 = ADD32(ctx->r10, 0X2000);
    // 0x80211918: addiu       $t3, $zero, 0x4D3
    ctx->r11 = ADD32(0, 0X4D3);
    // 0x8021191C: sw          $v0, 0x7F18($at)
    MEM_W(0X7F18, ctx->r1) = ctx->r2;
    // 0x80211920: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211924: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211928: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021192C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211930: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211934: jal         0x80010230
    // 0x80211938: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_4;
    // 0x80211938: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x8021193C: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x80211940: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211944: addiu       $t4, $t4, 0x3000
    ctx->r12 = ADD32(ctx->r12, 0X3000);
    // 0x80211948: addiu       $t5, $zero, 0x4D3
    ctx->r13 = ADD32(0, 0X4D3);
    // 0x8021194C: sw          $v0, 0x7F1C($at)
    MEM_W(0X7F1C, ctx->r1) = ctx->r2;
    // 0x80211950: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211954: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211958: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021195C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211960: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211964: jal         0x80010230
    // 0x80211968: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_5;
    // 0x80211968: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x8021196C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80211970: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211974: addiu       $t6, $t6, 0x4000
    ctx->r14 = ADD32(ctx->r14, 0X4000);
    // 0x80211978: addiu       $t7, $zero, 0x4D3
    ctx->r15 = ADD32(0, 0X4D3);
    // 0x8021197C: sw          $v0, 0x7F20($at)
    MEM_W(0X7F20, ctx->r1) = ctx->r2;
    // 0x80211980: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211984: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211988: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8021198C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211990: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211994: jal         0x80010230
    // 0x80211998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_6;
    // 0x80211998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x8021199C: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x802119A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802119A4: addiu       $t8, $t8, 0x5000
    ctx->r24 = ADD32(ctx->r24, 0X5000);
    // 0x802119A8: addiu       $t9, $zero, 0x4D3
    ctx->r25 = ADD32(0, 0X4D3);
    // 0x802119AC: sw          $v0, 0x7F24($at)
    MEM_W(0X7F24, ctx->r1) = ctx->r2;
    // 0x802119B0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802119B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802119B8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802119BC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802119C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802119C4: jal         0x80010230
    // 0x802119C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_7;
    // 0x802119C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x802119CC: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x802119D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802119D4: addiu       $t0, $t0, 0x6000
    ctx->r8 = ADD32(ctx->r8, 0X6000);
    // 0x802119D8: addiu       $t1, $zero, 0x4D3
    ctx->r9 = ADD32(0, 0X4D3);
    // 0x802119DC: sw          $v0, 0x7F28($at)
    MEM_W(0X7F28, ctx->r1) = ctx->r2;
    // 0x802119E0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802119E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802119E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802119EC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802119F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802119F4: jal         0x80010230
    // 0x802119F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_8;
    // 0x802119F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x802119FC: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x80211A00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211A04: addiu       $t2, $t2, 0x7000
    ctx->r10 = ADD32(ctx->r10, 0X7000);
    // 0x80211A08: addiu       $t3, $zero, 0x4D3
    ctx->r11 = ADD32(0, 0X4D3);
    // 0x80211A0C: sw          $v0, 0x7F2C($at)
    MEM_W(0X7F2C, ctx->r1) = ctx->r2;
    // 0x80211A10: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211A14: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211A18: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211A1C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211A20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211A24: jal         0x80010230
    // 0x80211A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_9;
    // 0x80211A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x80211A2C: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x80211A30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211A34: addiu       $t4, $t4, -0x8000
    ctx->r12 = ADD32(ctx->r12, -0X8000);
    // 0x80211A38: addiu       $t5, $zero, 0x4D3
    ctx->r13 = ADD32(0, 0X4D3);
    // 0x80211A3C: sw          $v0, 0x7F30($at)
    MEM_W(0X7F30, ctx->r1) = ctx->r2;
    // 0x80211A40: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211A44: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211A48: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211A4C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211A50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211A54: jal         0x80010230
    // 0x80211A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_10;
    // 0x80211A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x80211A5C: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x80211A60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211A64: addiu       $t6, $t6, -0x7000
    ctx->r14 = ADD32(ctx->r14, -0X7000);
    // 0x80211A68: addiu       $t7, $zero, 0x4D3
    ctx->r15 = ADD32(0, 0X4D3);
    // 0x80211A6C: sw          $v0, 0x7F34($at)
    MEM_W(0X7F34, ctx->r1) = ctx->r2;
    // 0x80211A70: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211A74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211A78: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211A7C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211A80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211A84: jal         0x80010230
    // 0x80211A88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_11;
    // 0x80211A88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x80211A8C: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x80211A90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211A94: addiu       $t8, $t8, -0x6000
    ctx->r24 = ADD32(ctx->r24, -0X6000);
    // 0x80211A98: addiu       $t9, $zero, 0x4D3
    ctx->r25 = ADD32(0, 0X4D3);
    // 0x80211A9C: sw          $v0, 0x7F38($at)
    MEM_W(0X7F38, ctx->r1) = ctx->r2;
    // 0x80211AA0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211AA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211AA8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211AAC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211AB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211AB4: jal         0x80010230
    // 0x80211AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_12;
    // 0x80211AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x80211ABC: lui         $t0, 0x801
    ctx->r8 = S32(0X801 << 16);
    // 0x80211AC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211AC4: addiu       $t0, $t0, -0x5000
    ctx->r8 = ADD32(ctx->r8, -0X5000);
    // 0x80211AC8: addiu       $t1, $zero, 0x4D3
    ctx->r9 = ADD32(0, 0X4D3);
    // 0x80211ACC: sw          $v0, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r2;
    // 0x80211AD0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211AD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211AD8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211ADC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211AE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211AE4: jal         0x80010230
    // 0x80211AE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_13;
    // 0x80211AE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x80211AEC: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x80211AF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211AF4: addiu       $t2, $t2, -0x4000
    ctx->r10 = ADD32(ctx->r10, -0X4000);
    // 0x80211AF8: addiu       $t3, $zero, 0x4D3
    ctx->r11 = ADD32(0, 0X4D3);
    // 0x80211AFC: sw          $v0, 0x7F40($at)
    MEM_W(0X7F40, ctx->r1) = ctx->r2;
    // 0x80211B00: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211B04: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211B08: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211B0C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211B10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211B14: jal         0x80010230
    // 0x80211B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_14;
    // 0x80211B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x80211B1C: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x80211B20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211B24: addiu       $t4, $t4, -0x3000
    ctx->r12 = ADD32(ctx->r12, -0X3000);
    // 0x80211B28: addiu       $t5, $zero, 0x4D3
    ctx->r13 = ADD32(0, 0X4D3);
    // 0x80211B2C: sw          $v0, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r2;
    // 0x80211B30: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211B34: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211B38: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211B3C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211B40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211B44: jal         0x80010230
    // 0x80211B48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_15;
    // 0x80211B48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x80211B4C: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x80211B50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211B54: addiu       $t6, $t6, -0x2000
    ctx->r14 = ADD32(ctx->r14, -0X2000);
    // 0x80211B58: addiu       $t7, $zero, 0x4D3
    ctx->r15 = ADD32(0, 0X4D3);
    // 0x80211B5C: sw          $v0, 0x7F48($at)
    MEM_W(0X7F48, ctx->r1) = ctx->r2;
    // 0x80211B60: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211B64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211B68: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211B6C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211B70: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211B74: jal         0x80010230
    // 0x80211B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_16;
    // 0x80211B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x80211B7C: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x80211B80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211B84: addiu       $t8, $t8, -0x1000
    ctx->r24 = ADD32(ctx->r24, -0X1000);
    // 0x80211B88: addiu       $t9, $zero, 0x4D3
    ctx->r25 = ADD32(0, 0X4D3);
    // 0x80211B8C: sw          $v0, 0x7F4C($at)
    MEM_W(0X7F4C, ctx->r1) = ctx->r2;
    // 0x80211B90: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211B94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211B98: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211B9C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211BA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211BA4: jal         0x80010230
    // 0x80211BA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_17;
    // 0x80211BA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x80211BAC: lui         $t0, 0x801
    ctx->r8 = S32(0X801 << 16);
    // 0x80211BB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211BB4: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80211BB8: addiu       $t1, $zero, 0x4D3
    ctx->r9 = ADD32(0, 0X4D3);
    // 0x80211BBC: sw          $v0, 0x7F50($at)
    MEM_W(0X7F50, ctx->r1) = ctx->r2;
    // 0x80211BC0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211BC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211BC8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80211BCC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211BD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211BD4: jal         0x80010230
    // 0x80211BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_18;
    // 0x80211BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x80211BDC: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x80211BE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211BE4: addiu       $t2, $t2, 0x1000
    ctx->r10 = ADD32(ctx->r10, 0X1000);
    // 0x80211BE8: addiu       $t3, $zero, 0x4D3
    ctx->r11 = ADD32(0, 0X4D3);
    // 0x80211BEC: sw          $v0, 0x7F54($at)
    MEM_W(0X7F54, ctx->r1) = ctx->r2;
    // 0x80211BF0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211BF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211BF8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80211BFC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211C00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211C04: jal         0x80010230
    // 0x80211C08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_19;
    // 0x80211C08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x80211C0C: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x80211C10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211C14: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x80211C18: addiu       $t5, $zero, 0x4D3
    ctx->r13 = ADD32(0, 0X4D3);
    // 0x80211C1C: sw          $v0, 0x7F58($at)
    MEM_W(0X7F58, ctx->r1) = ctx->r2;
    // 0x80211C20: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211C24: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211C28: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80211C2C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211C30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211C34: jal         0x80010230
    // 0x80211C38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_20;
    // 0x80211C38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x80211C3C: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x80211C40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211C44: addiu       $t6, $t6, 0x3000
    ctx->r14 = ADD32(ctx->r14, 0X3000);
    // 0x80211C48: addiu       $t7, $zero, 0x4D3
    ctx->r15 = ADD32(0, 0X4D3);
    // 0x80211C4C: sw          $v0, 0x7F5C($at)
    MEM_W(0X7F5C, ctx->r1) = ctx->r2;
    // 0x80211C50: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211C54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211C58: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80211C5C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211C60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211C64: jal         0x80010230
    // 0x80211C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_21;
    // 0x80211C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x80211C6C: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x80211C70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211C74: addiu       $t8, $t8, 0x4000
    ctx->r24 = ADD32(ctx->r24, 0X4000);
    // 0x80211C78: addiu       $t9, $zero, 0x4D3
    ctx->r25 = ADD32(0, 0X4D3);
    // 0x80211C7C: sw          $v0, 0x7F60($at)
    MEM_W(0X7F60, ctx->r1) = ctx->r2;
    // 0x80211C80: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211C84: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211C88: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80211C8C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211C90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211C94: jal         0x80010230
    // 0x80211C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_22;
    // 0x80211C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x80211C9C: lui         $t0, 0x801
    ctx->r8 = S32(0X801 << 16);
    // 0x80211CA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211CA4: addiu       $t0, $t0, 0x5000
    ctx->r8 = ADD32(ctx->r8, 0X5000);
    // 0x80211CA8: addiu       $t1, $zero, 0x4D3
    ctx->r9 = ADD32(0, 0X4D3);
    // 0x80211CAC: sw          $v0, 0x7F64($at)
    MEM_W(0X7F64, ctx->r1) = ctx->r2;
    // 0x80211CB0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211CB4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211CB8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211CBC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80211CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211CC4: jal         0x80010230
    // 0x80211CC8: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_80010230_10E30(rdram, ctx);
        goto after_23;
    // 0x80211CC8: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_23:
    // 0x80211CCC: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x80211CD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211CD4: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80211CD8: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80211CDC: sw          $v0, 0x7F68($at)
    MEM_W(0X7F68, ctx->r1) = ctx->r2;
    // 0x80211CE0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211CE4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211CE8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211CEC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211CF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211CF4: jal         0x80010230
    // 0x80211CF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_24;
    // 0x80211CF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
    // 0x80211CFC: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x80211D00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211D04: addiu       $t4, $t4, 0x1000
    ctx->r12 = ADD32(ctx->r12, 0X1000);
    // 0x80211D08: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x80211D0C: sw          $v0, 0x7F6C($at)
    MEM_W(0X7F6C, ctx->r1) = ctx->r2;
    // 0x80211D10: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211D14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211D18: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211D1C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211D20: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211D24: jal         0x80010230
    // 0x80211D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_25;
    // 0x80211D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x80211D2C: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x80211D30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211D34: addiu       $t6, $t6, 0x2000
    ctx->r14 = ADD32(ctx->r14, 0X2000);
    // 0x80211D38: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80211D3C: sw          $v0, 0x7F70($at)
    MEM_W(0X7F70, ctx->r1) = ctx->r2;
    // 0x80211D40: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211D44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211D48: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211D4C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211D50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211D54: jal         0x80010230
    // 0x80211D58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_26;
    // 0x80211D58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x80211D5C: lui         $t8, 0xA00
    ctx->r24 = S32(0XA00 << 16);
    // 0x80211D60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211D64: addiu       $t8, $t8, 0x3000
    ctx->r24 = ADD32(ctx->r24, 0X3000);
    // 0x80211D68: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80211D6C: sw          $v0, 0x7F74($at)
    MEM_W(0X7F74, ctx->r1) = ctx->r2;
    // 0x80211D70: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211D74: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211D78: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211D7C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211D80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211D84: jal         0x80010230
    // 0x80211D88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_27;
    // 0x80211D88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
    // 0x80211D8C: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x80211D90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211D94: addiu       $t0, $t0, 0x4000
    ctx->r8 = ADD32(ctx->r8, 0X4000);
    // 0x80211D98: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80211D9C: sw          $v0, 0x7F78($at)
    MEM_W(0X7F78, ctx->r1) = ctx->r2;
    // 0x80211DA0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211DA4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211DA8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211DAC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211DB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211DB4: jal         0x80010230
    // 0x80211DB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_28;
    // 0x80211DB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x80211DBC: lui         $t2, 0xA00
    ctx->r10 = S32(0XA00 << 16);
    // 0x80211DC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211DC4: addiu       $t2, $t2, 0x5000
    ctx->r10 = ADD32(ctx->r10, 0X5000);
    // 0x80211DC8: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80211DCC: sw          $v0, 0x7F7C($at)
    MEM_W(0X7F7C, ctx->r1) = ctx->r2;
    // 0x80211DD0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211DD4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211DD8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211DDC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211DE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211DE4: jal         0x80010230
    // 0x80211DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_29;
    // 0x80211DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x80211DEC: lui         $t4, 0xA00
    ctx->r12 = S32(0XA00 << 16);
    // 0x80211DF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211DF4: addiu       $t4, $t4, 0x6000
    ctx->r12 = ADD32(ctx->r12, 0X6000);
    // 0x80211DF8: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x80211DFC: sw          $v0, 0x7F80($at)
    MEM_W(0X7F80, ctx->r1) = ctx->r2;
    // 0x80211E00: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211E04: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211E08: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211E0C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211E10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211E14: jal         0x80010230
    // 0x80211E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_30;
    // 0x80211E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x80211E1C: lui         $t6, 0xA00
    ctx->r14 = S32(0XA00 << 16);
    // 0x80211E20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211E24: addiu       $t6, $t6, 0x7000
    ctx->r14 = ADD32(ctx->r14, 0X7000);
    // 0x80211E28: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80211E2C: sw          $v0, 0x7F84($at)
    MEM_W(0X7F84, ctx->r1) = ctx->r2;
    // 0x80211E30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211E34: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211E38: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211E3C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211E40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211E44: jal         0x80010230
    // 0x80211E48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_31;
    // 0x80211E48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x80211E4C: lui         $t8, 0xA01
    ctx->r24 = S32(0XA01 << 16);
    // 0x80211E50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211E54: addiu       $t8, $t8, -0x8000
    ctx->r24 = ADD32(ctx->r24, -0X8000);
    // 0x80211E58: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80211E5C: sw          $v0, 0x7F88($at)
    MEM_W(0X7F88, ctx->r1) = ctx->r2;
    // 0x80211E60: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211E64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211E68: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211E6C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211E70: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211E74: jal         0x80010230
    // 0x80211E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_32;
    // 0x80211E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_32:
    // 0x80211E7C: lui         $t0, 0xA01
    ctx->r8 = S32(0XA01 << 16);
    // 0x80211E80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211E84: addiu       $t0, $t0, -0x7000
    ctx->r8 = ADD32(ctx->r8, -0X7000);
    // 0x80211E88: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80211E8C: sw          $v0, 0x7F8C($at)
    MEM_W(0X7F8C, ctx->r1) = ctx->r2;
    // 0x80211E90: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211E94: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211E98: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211E9C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211EA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211EA4: jal         0x80010230
    // 0x80211EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_33;
    // 0x80211EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_33:
    // 0x80211EAC: lui         $t2, 0xA01
    ctx->r10 = S32(0XA01 << 16);
    // 0x80211EB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211EB4: addiu       $t2, $t2, -0x6000
    ctx->r10 = ADD32(ctx->r10, -0X6000);
    // 0x80211EB8: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80211EBC: sw          $v0, 0x7F90($at)
    MEM_W(0X7F90, ctx->r1) = ctx->r2;
    // 0x80211EC0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211EC4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211EC8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211ECC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211ED0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211ED4: jal         0x80010230
    // 0x80211ED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_34;
    // 0x80211ED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x80211EDC: lui         $t4, 0xA01
    ctx->r12 = S32(0XA01 << 16);
    // 0x80211EE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211EE4: addiu       $t4, $t4, -0x5000
    ctx->r12 = ADD32(ctx->r12, -0X5000);
    // 0x80211EE8: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x80211EEC: sw          $v0, 0x7F94($at)
    MEM_W(0X7F94, ctx->r1) = ctx->r2;
    // 0x80211EF0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211EF4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211EF8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211EFC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211F00: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211F04: jal         0x80010230
    // 0x80211F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_35;
    // 0x80211F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_35:
    // 0x80211F0C: lui         $t6, 0xA01
    ctx->r14 = S32(0XA01 << 16);
    // 0x80211F10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211F14: addiu       $t6, $t6, -0x4000
    ctx->r14 = ADD32(ctx->r14, -0X4000);
    // 0x80211F18: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80211F1C: sw          $v0, 0x7F98($at)
    MEM_W(0X7F98, ctx->r1) = ctx->r2;
    // 0x80211F20: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80211F24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80211F28: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211F2C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211F30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211F34: jal         0x80010230
    // 0x80211F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_36;
    // 0x80211F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x80211F3C: lui         $t8, 0xA01
    ctx->r24 = S32(0XA01 << 16);
    // 0x80211F40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211F44: addiu       $t8, $t8, -0x3000
    ctx->r24 = ADD32(ctx->r24, -0X3000);
    // 0x80211F48: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80211F4C: sw          $v0, 0x7F9C($at)
    MEM_W(0X7F9C, ctx->r1) = ctx->r2;
    // 0x80211F50: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80211F54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80211F58: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211F5C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211F60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211F64: jal         0x80010230
    // 0x80211F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_37;
    // 0x80211F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_37:
    // 0x80211F6C: lui         $t0, 0xA01
    ctx->r8 = S32(0XA01 << 16);
    // 0x80211F70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211F74: addiu       $t0, $t0, 0x4000
    ctx->r8 = ADD32(ctx->r8, 0X4000);
    // 0x80211F78: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80211F7C: sw          $v0, 0x7FA0($at)
    MEM_W(0X7FA0, ctx->r1) = ctx->r2;
    // 0x80211F80: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211F84: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211F88: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211F8C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211F90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211F94: jal         0x80010230
    // 0x80211F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_38;
    // 0x80211F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_38:
    // 0x80211F9C: lui         $t2, 0xA01
    ctx->r10 = S32(0XA01 << 16);
    // 0x80211FA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211FA4: addiu       $t2, $t2, 0x5000
    ctx->r10 = ADD32(ctx->r10, 0X5000);
    // 0x80211FA8: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80211FAC: sw          $v0, 0x7FA4($at)
    MEM_W(0X7FA4, ctx->r1) = ctx->r2;
    // 0x80211FB0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80211FB4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80211FB8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211FBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211FC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211FC4: jal         0x80010230
    // 0x80211FC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_39;
    // 0x80211FC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_39:
    // 0x80211FCC: lui         $t4, 0xA01
    ctx->r12 = S32(0XA01 << 16);
    // 0x80211FD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80211FD4: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x80211FD8: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x80211FDC: sw          $v0, 0x7FA8($at)
    MEM_W(0X7FA8, ctx->r1) = ctx->r2;
    // 0x80211FE0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80211FE4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80211FE8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80211FEC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80211FF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80211FF4: jal         0x80010230
    // 0x80211FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80010230_10E30(rdram, ctx);
        goto after_40;
    // 0x80211FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_40:
    // 0x80211FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80212000: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212004: sw          $v0, 0x7FAC($at)
    MEM_W(0X7FAC, ctx->r1) = ctx->r2;
    // 0x80212008: jr          $ra
    // 0x8021200C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8021200C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80215A10_6749C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215A10: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x80215A14: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80215A18: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80215A1C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80215A20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80215A24: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x80215A28: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80215A2C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80215A30: add.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f6.d + ctx->f8.d;
    // 0x80215A34: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80215A38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80215A3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80215A40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80215A44: mul.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80215A48: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x80215A4C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80215A50: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x80215A54: ldc1        $f8, 0x7BB8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X7BB8);
    // 0x80215A58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80215A5C: mul.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x80215A60: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x80215A64: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80215A68: ldc1        $f18, 0x7BC0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X7BC0);
    // 0x80215A6C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x80215A70: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80215A74: jr          $ra
    // 0x80215A78: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80215A78: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802122F0_6712A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802122F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802122F8: beq         $a3, $at, L_80212320
    if (ctx->r7 == ctx->r1) {
        // 0x802122FC: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80212320;
    }
    // 0x802122FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212300: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212304: beq         $a3, $at, L_80212330
    if (ctx->r7 == ctx->r1) {
        // 0x80212308: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80212330;
    }
    // 0x80212308: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021230C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80212310: beq         $a3, $at, L_8021233C
    if (ctx->r7 == ctx->r1) {
        // 0x80212314: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_8021233C;
    }
    // 0x80212314: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212318: b           L_80212364
    // 0x8021231C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80212364;
    // 0x8021231C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212320:
    // 0x80212320: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212324: lw          $v0, 0x7F98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F98);
    // 0x80212328: b           L_80212344
    // 0x8021232C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80212344;
    // 0x8021232C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212330:
    // 0x80212330: lw          $v0, 0x7F98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F98);
    // 0x80212334: b           L_80212344
    // 0x80212338: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_80212344;
    // 0x80212338: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_8021233C:
    // 0x8021233C: lw          $v0, 0x7F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F9C);
    // 0x80212340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212344:
    // 0x80212344: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80212348: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021234C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212350: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80212354: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80212358: jal         0x800106F0
    // 0x8021235C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x8021235C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80212360: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212364:
    // 0x80212364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212368: jr          $ra
    // 0x8021236C: nop

    TRACE_RETURN()
    return;
    // 0x8021236C: nop

;}
RECOMP_FUNC void func_802117A0_670750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802117A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802117A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802117A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802117AC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802117B0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802117B4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x802117B8: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x802117BC: beql        $t7, $zero, L_802117D4
    if (ctx->r15 == 0) {
        // 0x802117C0: lw          $s0, 0x50($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X50);
            goto L_802117D4;
    }
    goto skip_0;
    // 0x802117C0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x802117C4: jal         0x80034EF8
    // 0x802117C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x802117C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x802117CC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x802117D0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
L_802117D4:
    // 0x802117D4: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x802117D8: jal         0x8020E838
    // 0x802117DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8020E838_66D7E8(rdram, ctx);
        goto after_1;
    // 0x802117DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x802117E0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802117E4: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x802117E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802117EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802117F0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x802117F4: jal         0x8020F6CC
    // 0x802117F8: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8020F6CC_66E67C(rdram, ctx);
        goto after_2;
    // 0x802117F8: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x802117FC: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80211800: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x80211804: lw          $a2, 0x3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3C);
    // 0x80211808: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x8021180C: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x80211810: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80211814: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80211818: jal         0x8020F734
    // 0x8021181C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_8020F734_66E6E4(rdram, ctx);
        goto after_3;
    // 0x8021181C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x80211820: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80211824: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80211828: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021182C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80211830: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80211834: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80211838: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8021183C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80211840: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80211844: jal         0x80210F88
    // 0x80211848: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80210F88_66FF38(rdram, ctx);
        goto after_4;
    // 0x80211848: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8021184C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211850: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80211854: jal         0x8003521C
    // 0x80211858: addiu       $a0, $a0, 0x13C8
    ctx->r4 = ADD32(ctx->r4, 0X13C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80211858: addiu       $a0, $a0, 0x13C8
    ctx->r4 = ADD32(ctx->r4, 0X13C8);
    after_5:
    // 0x8021185C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80211860: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80211864: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80211868: jr          $ra
    // 0x8021186C: nop

    TRACE_RETURN()
    return;
    // 0x8021186C: nop

;}
RECOMP_FUNC void func_8021671C_6756CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021671C: beq         $a0, $zero, L_80216748
    if (ctx->r4 == 0) {
        // 0x80216720: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80216748;
    }
    // 0x80216720: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80216724: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80216728: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021672C: addiu       $v0, $v0, 0x71D0
    ctx->r2 = ADD32(ctx->r2, 0X71D0);
    // 0x80216730: addiu       $a1, $a1, 0x71C8
    ctx->r5 = ADD32(ctx->r5, 0X71C8);
L_80216734:
    // 0x80216734: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80216738: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8021673C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80216740: bne         $a1, $v0, L_80216734
    if (ctx->r5 != ctx->r2) {
        // 0x80216744: sw          $t6, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r14;
            goto L_80216734;
    }
    // 0x80216744: sw          $t6, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r14;
L_80216748:
    // 0x80216748: jr          $ra
    // 0x8021674C: nop

    TRACE_RETURN()
    return;
    // 0x8021674C: nop

;}
RECOMP_FUNC void func_802125E4_671594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802125E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802125E8: beq         $a3, $zero, L_80212610
    if (ctx->r7 == 0) {
        // 0x802125EC: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80212610;
    }
    // 0x802125EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802125F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802125F4: beq         $a3, $at, L_80212620
    if (ctx->r7 == ctx->r1) {
        // 0x802125F8: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80212620;
    }
    // 0x802125F8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802125FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212600: beq         $a3, $at, L_8021262C
    if (ctx->r7 == ctx->r1) {
        // 0x80212604: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_8021262C;
    }
    // 0x80212604: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212608: b           L_80212654
    // 0x8021260C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80212654;
    // 0x8021260C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212610:
    // 0x80212610: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212614: lw          $v0, 0x7F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F78);
    // 0x80212618: b           L_80212634
    // 0x8021261C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80212634;
    // 0x8021261C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212620:
    // 0x80212620: lw          $v0, 0x7F78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F78);
    // 0x80212624: b           L_80212634
    // 0x80212628: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_80212634;
    // 0x80212628: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_8021262C:
    // 0x8021262C: lw          $v0, 0x7F7C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F7C);
    // 0x80212630: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212634:
    // 0x80212634: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80212638: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021263C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212640: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80212644: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80212648: jal         0x800106F0
    // 0x8021264C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x8021264C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80212650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212654:
    // 0x80212654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212658: jr          $ra
    // 0x8021265C: nop

    TRACE_RETURN()
    return;
    // 0x8021265C: nop

;}
RECOMP_FUNC void func_8020E300_66D2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E300: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x8020E304: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8020E308: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8020E30C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E310: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x8020E314: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020E318: lwc1        $f18, 0x6BD0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BD0);
    // 0x8020E31C: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x8020E320: jr          $ra
    // 0x8020E324: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8020E324: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80214EA8_673E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214EA8: lui         $at, 0xC2E1
    ctx->r1 = S32(0XC2E1 << 16);
    // 0x80214EAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80214EB0: jr          $ra
    // 0x80214EB4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80214EB4: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802135B8_672568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802135B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802135BC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802135C0: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x802135C4: addiu       $s0, $s0, -0x39F8
    ctx->r16 = ADD32(ctx->r16, -0X39F8);
    // 0x802135C8: lw          $t6, 0xF4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF4);
    // 0x802135CC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x802135D0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x802135D4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802135D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802135DC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x802135E0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x802135E4: beq         $t6, $zero, L_80213614
    if (ctx->r14 == 0) {
        // 0x802135E8: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_80213614;
    }
    // 0x802135E8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802135EC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802135F0: lw          $t8, 0x7F48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F48);
    // 0x802135F4: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x802135F8: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x802135FC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80213600: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80213604: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213608: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021360C: jal         0x800106F0
    // 0x80213610: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80213610: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
L_80213614:
    // 0x80213614: addiu       $a1, $s3, 0x1A
    ctx->r5 = ADD32(ctx->r19, 0X1A);
    // 0x80213618: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021361C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213620: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80213624: jal         0x80212660
    // 0x80213628: lw          $a3, 0xFC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XFC);
    func_80212660_671610(rdram, ctx);
        goto after_1;
    // 0x80213628: lw          $a3, 0xFC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XFC);
    after_1:
    // 0x8021362C: lw          $t0, 0x108($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X108);
    // 0x80213630: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213634: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    // 0x80213638: beq         $t0, $zero, L_80213668
    if (ctx->r8 == 0) {
        // 0x8021363C: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_80213668;
    }
    // 0x8021363C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80213640: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80213644: lw          $t2, 0x7F10($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7F10);
    // 0x80213648: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x8021364C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x80213650: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80213654: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80213658: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x8021365C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213660: jal         0x800106F0
    // 0x80213664: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x80213664: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_2:
L_80213668:
    // 0x80213668: lw          $t4, 0xF8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF8);
    // 0x8021366C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213670: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80213674: beq         $t4, $zero, L_802136A4
    if (ctx->r12 == 0) {
        // 0x80213678: addiu       $a2, $s2, 0x1E
        ctx->r6 = ADD32(ctx->r18, 0X1E);
            goto L_802136A4;
    }
    // 0x80213678: addiu       $a2, $s2, 0x1E
    ctx->r6 = ADD32(ctx->r18, 0X1E);
    // 0x8021367C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80213680: lw          $t6, 0x7FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7FA0);
    // 0x80213684: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80213688: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x8021368C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80213690: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80213694: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213698: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021369C: jal         0x800106F0
    // 0x802136A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x802136A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
L_802136A4:
    // 0x802136A4: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x802136A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802136AC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802136B0: beq         $t8, $zero, L_802136E0
    if (ctx->r24 == 0) {
        // 0x802136B4: addiu       $a2, $s2, 0x1E
        ctx->r6 = ADD32(ctx->r18, 0X1E);
            goto L_802136E0;
    }
    // 0x802136B4: addiu       $a2, $s2, 0x1E
    ctx->r6 = ADD32(ctx->r18, 0X1E);
    // 0x802136B8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802136BC: lw          $t0, 0x7F1C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F1C);
    // 0x802136C0: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x802136C4: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x802136C8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802136CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802136D0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802136D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802136D8: jal         0x800106F0
    // 0x802136DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x802136DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_4:
L_802136E0:
    // 0x802136E0: lw          $t2, 0x10C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10C);
    // 0x802136E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802136E8: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    // 0x802136EC: beq         $t2, $zero, L_80213718
    if (ctx->r10 == 0) {
        // 0x802136F0: addiu       $a2, $s2, 0x1E
        ctx->r6 = ADD32(ctx->r18, 0X1E);
            goto L_80213718;
    }
    // 0x802136F0: addiu       $a2, $s2, 0x1E
    ctx->r6 = ADD32(ctx->r18, 0X1E);
    // 0x802136F4: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x802136F8: lw          $t4, 0x7F1C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7F1C);
    // 0x802136FC: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x80213700: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80213704: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213708: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021370C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213710: jal         0x800106F0
    // 0x80213714: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80213714: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_5:
L_80213718:
    // 0x80213718: lw          $t5, 0x110($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X110);
    // 0x8021371C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213720: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80213724: beq         $t5, $zero, L_80213764
    if (ctx->r13 == 0) {
        // 0x80213728: addiu       $a2, $s2, 0x3C
        ctx->r6 = ADD32(ctx->r18, 0X3C);
            goto L_80213764;
    }
    // 0x80213728: addiu       $a2, $s2, 0x3C
    ctx->r6 = ADD32(ctx->r18, 0X3C);
    // 0x8021372C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80213730: lw          $t7, 0x7F14($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F14);
    // 0x80213734: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80213738: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021373C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213740: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213744: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213748: jal         0x800106F0
    // 0x8021374C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x8021374C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_6:
    // 0x80213750: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213754: addiu       $a1, $s3, 0xA
    ctx->r5 = ADD32(ctx->r19, 0XA);
    // 0x80213758: addiu       $a2, $s2, 0x44
    ctx->r6 = ADD32(ctx->r18, 0X44);
    // 0x8021375C: jal         0x802121FC
    // 0x80213760: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    func_802121FC_6711AC(rdram, ctx);
        goto after_7;
    // 0x80213760: lw          $a3, 0x110($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X110);
    after_7:
L_80213764:
    // 0x80213764: lw          $t8, 0x118($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X118);
    // 0x80213768: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021376C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80213770: beq         $t8, $zero, L_802137BC
    if (ctx->r24 == 0) {
        // 0x80213774: addiu       $a2, $s2, 0x3C
        ctx->r6 = ADD32(ctx->r18, 0X3C);
            goto L_802137BC;
    }
    // 0x80213774: addiu       $a2, $s2, 0x3C
    ctx->r6 = ADD32(ctx->r18, 0X3C);
    // 0x80213778: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8021377C: lw          $t0, 0x7F14($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F14);
    // 0x80213780: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80213784: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x80213788: addiu       $t2, $s2, 0x44
    ctx->r10 = ADD32(ctx->r18, 0X44);
    // 0x8021378C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80213790: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80213794: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80213798: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x8021379C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802137A0: jal         0x800106F0
    // 0x802137A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_8;
    // 0x802137A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_8:
    // 0x802137A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802137AC: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    // 0x802137B0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802137B4: jal         0x802121FC
    // 0x802137B8: lw          $a3, 0x118($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X118);
    func_802121FC_6711AC(rdram, ctx);
        goto after_9;
    // 0x802137B8: lw          $a3, 0x118($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X118);
    after_9:
L_802137BC:
    // 0x802137BC: lw          $t3, 0x114($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X114);
    // 0x802137C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802137C4: addiu       $a1, $s3, 0x34
    ctx->r5 = ADD32(ctx->r19, 0X34);
    // 0x802137C8: beq         $t3, $zero, L_80213810
    if (ctx->r11 == 0) {
        // 0x802137CC: addiu       $a2, $s2, 0x3C
        ctx->r6 = ADD32(ctx->r18, 0X3C);
            goto L_80213810;
    }
    // 0x802137CC: addiu       $a2, $s2, 0x3C
    ctx->r6 = ADD32(ctx->r18, 0X3C);
    // 0x802137D0: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x802137D4: lw          $t5, 0x7F18($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7F18);
    // 0x802137D8: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x802137DC: addiu       $t6, $s2, 0x44
    ctx->r14 = ADD32(ctx->r18, 0X44);
    // 0x802137E0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802137E4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802137E8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802137EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802137F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802137F4: jal         0x800106F0
    // 0x802137F8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_10;
    // 0x802137F8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_10:
    // 0x802137FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213800: addiu       $a1, $s3, 0x3E
    ctx->r5 = ADD32(ctx->r19, 0X3E);
    // 0x80213804: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80213808: jal         0x802121FC
    // 0x8021380C: lw          $a3, 0x114($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X114);
    func_802121FC_6711AC(rdram, ctx);
        goto after_11;
    // 0x8021380C: lw          $a3, 0x114($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X114);
    after_11:
L_80213810:
    // 0x80213810: lw          $t7, 0x260($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X260);
    // 0x80213814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80213818: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021381C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80213820: bne         $at, $zero, L_80213850
    if (ctx->r1 != 0) {
        // 0x80213824: addiu       $a2, $s2, 0x3C
        ctx->r6 = ADD32(ctx->r18, 0X3C);
            goto L_80213850;
    }
    // 0x80213824: addiu       $a2, $s2, 0x3C
    ctx->r6 = ADD32(ctx->r18, 0X3C);
    // 0x80213828: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021382C: lw          $t9, 0x7F2C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F2C);
    // 0x80213830: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80213834: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80213838: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021383C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80213840: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213844: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213848: jal         0x800106F0
    // 0x8021384C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_12;
    // 0x8021384C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_12:
L_80213850:
    // 0x80213850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80213854: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80213858: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8021385C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80213860: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80213864: jr          $ra
    // 0x80213868: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80213868: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8021121C_6701CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021121C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211220: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211228: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021122C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211230: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80211234: addiu       $a1, $a1, 0x10CC
    ctx->r5 = ADD32(ctx->r5, 0X10CC);
    // 0x80211238: jal         0x80034E08
    // 0x8021123C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021123C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80211240: bne         $v0, $zero, L_80211250
    if (ctx->r2 != 0) {
        // 0x80211244: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80211250;
    }
    // 0x80211244: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80211248: b           L_802112B0
    // 0x8021124C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802112B0;
    // 0x8021124C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211250:
    // 0x80211250: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80211254: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80211258: jal         0x800119D4
    // 0x8021125C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800119D4_125D4(rdram, ctx);
        goto after_1;
    // 0x8021125C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x80211260: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80211264: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80211268: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8021126C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x80211270: addiu       $a1, $zero, 0x9C4
    ctx->r5 = ADD32(0, 0X9C4);
    // 0x80211274: jal         0x800148F0
    // 0x80211278: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_2;
    // 0x80211278: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x8021127C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80211280: addiu       $v1, $a2, 0x5C
    ctx->r3 = ADD32(ctx->r6, 0X5C);
    // 0x80211284: bne         $v0, $zero, L_8021129C
    if (ctx->r2 != 0) {
        // 0x80211288: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8021129C;
    }
    // 0x80211288: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8021128C: jal         0x802111C4
    // 0x80211290: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802111C4_670174(rdram, ctx);
        goto after_3;
    // 0x80211290: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x80211294: b           L_802112B0
    // 0x80211298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802112B0;
    // 0x80211298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021129C:
    // 0x8021129C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802112A0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x802112A4: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
    // 0x802112A8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802112AC: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
L_802112B0:
    // 0x802112B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802112B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802112B8: jr          $ra
    // 0x802112BC: nop

    TRACE_RETURN()
    return;
    // 0x802112BC: nop

;}
RECOMP_FUNC void func_8020D2E8_66C298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8020D2EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8020D2F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8020D2F4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x8020D2F8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8020D2FC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8020D300: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8020D304: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x8020D308: lui         $a1, 0x802F
    ctx->r5 = S32(0X802F << 16);
    // 0x8020D30C: addiu       $a1, $a1, 0x7000
    ctx->r5 = ADD32(ctx->r5, 0X7000);
    // 0x8020D310: ori         $a2, $zero, 0xA000
    ctx->r6 = 0 | 0XA000;
    // 0x8020D314: jal         0x800148C0
    // 0x8020D318: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148C0_154C0(rdram, ctx);
        goto after_0;
    // 0x8020D318: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x8020D31C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x8020D320: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8020D324: jal         0x8001B6A4
    // 0x8020D328: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_1;
    // 0x8020D328: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8020D32C: jal         0x800101AC
    // 0x8020D330: nop

    func_800101AC_10DAC(rdram, ctx);
        goto after_2;
    // 0x8020D330: nop

    after_2:
    // 0x8020D334: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D338: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D33C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8020D340: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8020D344: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x8020D348: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x8020D34C: beq         $at, $zero, L_8020D5C0
    if (ctx->r1 == 0) {
        // 0x8020D350: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8020D5C0;
    }
    // 0x8020D350: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020D354: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020D358: addu        $at, $at, $t7
    gpr jr_addend_8020D360 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020D35C: lw          $t7, 0x7214($at)
    ctx->r15 = ADD32(ctx->r1, 0X7214);
    // 0x8020D360: jr          $t7
    // 0x8020D364: nop

    switch (jr_addend_8020D360 >> 2) {
        case 0: goto L_8020D368; break;
        case 1: goto L_8020D3A4; break;
        case 2: goto L_8020D424; break;
        case 3: goto L_8020D440; break;
        case 4: goto L_8020D48C; break;
        case 5: goto L_8020D4D8; break;
        case 6: goto L_8020D528; break;
        case 7: goto L_8020D578; break;
        default: switch_error(__func__, 0x8020D360, 0x80217214);
    }
    // 0x8020D364: nop

L_8020D368:
    // 0x8020D368: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020D36C: addiu       $t8, $zero, 0x14A
    ctx->r24 = ADD32(0, 0X14A);
    // 0x8020D370: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8020D374: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020D37C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8020D380: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8020D384: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8020D388: jal         0x8020F170
    // 0x8020D38C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_8020F170_66E120(rdram, ctx);
        goto after_3;
    // 0x8020D38C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8020D390: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D394: jal         0x8003521C
    // 0x8020D398: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x8020D398: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_4:
    // 0x8020D39C: b           L_8020D5C4
    // 0x8020D3A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D3A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D3A4:
    // 0x8020D3A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020D3A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D3AC: sw          $t9, -0x3754($at)
    MEM_W(-0X3754, ctx->r1) = ctx->r25;
    // 0x8020D3B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D3B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D3B8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D3BC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8020D3C0: addiu       $a0, $a0, -0x39C0
    ctx->r4 = ADD32(ctx->r4, -0X39C0);
    // 0x8020D3C4: addiu       $v0, $v0, -0x39F0
    ctx->r2 = ADD32(ctx->r2, -0X39F0);
    // 0x8020D3C8: sw          $t0, -0x3750($at)
    MEM_W(-0X3750, ctx->r1) = ctx->r8;
    // 0x8020D3CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8020D3D0:
    // 0x8020D3D0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8020D3D4: sw          $v1, 0x298($v0)
    MEM_W(0X298, ctx->r2) = ctx->r3;
    // 0x8020D3D8: sw          $v1, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r3;
    // 0x8020D3DC: sw          $v1, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r3;
    // 0x8020D3E0: bne         $v0, $a0, L_8020D3D0
    if (ctx->r2 != ctx->r4) {
        // 0x8020D3E4: sw          $v1, 0x294($v0)
        MEM_W(0X294, ctx->r2) = ctx->r3;
            goto L_8020D3D0;
    }
    // 0x8020D3E4: sw          $v1, 0x294($v0)
    MEM_W(0X294, ctx->r2) = ctx->r3;
    // 0x8020D3E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020D3EC: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x8020D3F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020D3F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D3F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020D3FC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8020D400: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8020D404: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8020D408: jal         0x8020F170
    // 0x8020D40C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_8020F170_66E120(rdram, ctx);
        goto after_5;
    // 0x8020D40C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8020D410: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D414: jal         0x8003521C
    // 0x8020D418: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x8020D418: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_6:
    // 0x8020D41C: b           L_8020D5C4
    // 0x8020D420: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D420: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D424:
    // 0x8020D424: jal         0x8021433C
    // 0x8020D428: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8021433C_6732EC(rdram, ctx);
        goto after_7;
    // 0x8020D428: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8020D42C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D430: jal         0x8003521C
    // 0x8020D434: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x8020D434: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_8:
    // 0x8020D438: b           L_8020D5C4
    // 0x8020D43C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D43C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D440:
    // 0x8020D440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020D444: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8020D448: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D44C: addiu       $t2, $t2, 0x6A20
    ctx->r10 = ADD32(ctx->r10, 0X6A20);
    // 0x8020D450: sw          $a3, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r7;
    // 0x8020D454: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8020D458: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8020D45C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020D460: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8020D464: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D468: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8020D46C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D470: jal         0x802160A0
    // 0x8020D474: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_802160A0_675050(rdram, ctx);
        goto after_9;
    // 0x8020D474: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x8020D478: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D47C: jal         0x8003521C
    // 0x8020D480: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x8020D480: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_10:
    // 0x8020D484: b           L_8020D5C4
    // 0x8020D488: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D488: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D48C:
    // 0x8020D48C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020D490: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x8020D494: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D498: addiu       $t3, $t3, 0x6A20
    ctx->r11 = ADD32(ctx->r11, 0X6A20);
    // 0x8020D49C: sw          $a3, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r7;
    // 0x8020D4A0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8020D4A4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8020D4A8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020D4AC: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8020D4B0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8020D4B4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8020D4B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D4BC: jal         0x802160A0
    // 0x8020D4C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_802160A0_675050(rdram, ctx);
        goto after_11;
    // 0x8020D4C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_11:
    // 0x8020D4C4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D4C8: jal         0x8003521C
    // 0x8020D4CC: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_12;
    // 0x8020D4CC: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_12:
    // 0x8020D4D0: b           L_8020D5C4
    // 0x8020D4D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D4D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D4D8:
    // 0x8020D4D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020D4DC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x8020D4E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D4E4: addiu       $t5, $t5, 0x6A20
    ctx->r13 = ADD32(ctx->r13, 0X6A20);
    // 0x8020D4E8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8020D4EC: sw          $a3, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r7;
    // 0x8020D4F0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020D4F4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8020D4F8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8020D4FC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020D500: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8020D504: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D508: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D50C: jal         0x802160A0
    // 0x8020D510: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_802160A0_675050(rdram, ctx);
        goto after_13;
    // 0x8020D510: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x8020D514: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D518: jal         0x8003521C
    // 0x8020D51C: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_14;
    // 0x8020D51C: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_14:
    // 0x8020D520: b           L_8020D5C4
    // 0x8020D524: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D524: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D528:
    // 0x8020D528: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020D52C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020D530: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D534: addiu       $t7, $t7, 0x6A20
    ctx->r15 = ADD32(ctx->r15, 0X6A20);
    // 0x8020D538: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8020D53C: sw          $a3, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r7;
    // 0x8020D540: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8020D544: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8020D548: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8020D54C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020D550: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8020D554: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D558: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D55C: jal         0x802160A0
    // 0x8020D560: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_802160A0_675050(rdram, ctx);
        goto after_15;
    // 0x8020D560: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x8020D564: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D568: jal         0x8003521C
    // 0x8020D56C: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_16;
    // 0x8020D56C: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_16:
    // 0x8020D570: b           L_8020D5C4
    // 0x8020D574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8020D5C4;
    // 0x8020D574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D578:
    // 0x8020D578: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020D57C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020D580: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D584: addiu       $t9, $t9, 0x6A20
    ctx->r25 = ADD32(ctx->r25, 0X6A20);
    // 0x8020D588: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8020D58C: sw          $a3, -0x3778($at)
    MEM_W(-0X3778, ctx->r1) = ctx->r7;
    // 0x8020D590: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8020D594: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8020D598: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8020D59C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020D5A0: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8020D5A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8020D5A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D5AC: jal         0x802160A0
    // 0x8020D5B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_802160A0_675050(rdram, ctx);
        goto after_17;
    // 0x8020D5B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_17:
    // 0x8020D5B4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D5B8: jal         0x8003521C
    // 0x8020D5BC: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003521C_35E1C(rdram, ctx);
        goto after_18;
    // 0x8020D5BC: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_18:
L_8020D5C0:
    // 0x8020D5C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020D5C4:
    // 0x8020D5C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8020D5C8: jr          $ra
    // 0x8020D5CC: nop

    TRACE_RETURN()
    return;
    // 0x8020D5CC: nop

;}
RECOMP_FUNC void func_8020E498_66D448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E498: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020E49C: addiu       $t7, $t7, 0x6BD0
    ctx->r15 = ADD32(ctx->r15, 0X6BD0);
    // 0x8020E4A0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8020E4A4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8020E4A8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020E4AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020E4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E4B4: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x8020E4B8: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8020E4BC: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x8020E4C0: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x8020E4C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8020E4C8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8020E4CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020E4D0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8020E4D4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E4D8: bc1f        L_8020E4F8
    if (!c1cs) {
        // 0x8020E4DC: addiu       $t0, $t0, 0x6BDC
        ctx->r8 = ADD32(ctx->r8, 0X6BDC);
            goto L_8020E4F8;
    }
    // 0x8020E4DC: addiu       $t0, $t0, 0x6BDC
    ctx->r8 = ADD32(ctx->r8, 0X6BDC);
    // 0x8020E4E0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E4E4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020E4E8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E4EC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8020E4F0: b           L_8020E504
    // 0x8020E4F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E504;
    // 0x8020E4F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8020E4F8:
    // 0x8020E4F8: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020E4FC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E500: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8020E504:
    // 0x8020E504: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E508: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x8020E50C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8020E510: addiu       $t8, $t8, 0x6BD8
    ctx->r24 = ADD32(ctx->r24, 0X6BD8);
    // 0x8020E514: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8020E518: bne         $v1, $t8, L_8020E54C
    if (ctx->r3 != ctx->r24) {
        // 0x8020E51C: swc1        $f16, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
            goto L_8020E54C;
    }
    // 0x8020E51C: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x8020E520: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x8020E524: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020E528: bne         $t9, $at, L_8020E54C
    if (ctx->r25 != ctx->r1) {
        // 0x8020E52C: nop
    
            goto L_8020E54C;
    }
    // 0x8020E52C: nop

    // 0x8020E530: lw          $a1, 0x28($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X28);
    // 0x8020E534: lw          $a2, 0x2C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X2C);
    // 0x8020E538: jal         0x8020E34C
    // 0x8020E53C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8020E34C_66D2FC(rdram, ctx);
        goto after_0;
    // 0x8020E53C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8020E540: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8020E544: b           L_8020E578
    // 0x8020E548: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
        goto L_8020E578;
    // 0x8020E548: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
L_8020E54C:
    // 0x8020E54C: bnel        $v1, $t0, L_8020E57C
    if (ctx->r3 != ctx->r8) {
        // 0x8020E550: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020E57C;
    }
    goto skip_0;
    // 0x8020E550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020E554: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x8020E558: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020E55C: bnel        $t1, $zero, L_8020E57C
    if (ctx->r9 != 0) {
        // 0x8020E560: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020E57C;
    }
    goto skip_1;
    // 0x8020E560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8020E564: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8020E568: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020E56C: sw          $t2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r10;
    // 0x8020E570: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x8020E574: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
L_8020E578:
    // 0x8020E578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020E57C:
    // 0x8020E57C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8020E580: jr          $ra
    // 0x8020E584: nop

    TRACE_RETURN()
    return;
    // 0x8020E584: nop

;}
RECOMP_FUNC void func_8020D2A0_66C250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D2A4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D2A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D2AC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8020D2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D2B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020D2B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020D2BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8020D2C0: lhu         $t7, -0x4F86($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F86);
    // 0x8020D2C4: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x8020D2C8: beql        $t8, $zero, L_8020D2DC
    if (ctx->r24 == 0) {
        // 0x8020D2CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020D2DC;
    }
    goto skip_0;
    // 0x8020D2CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020D2D0: jal         0x80011A9C
    // 0x8020D2D4: nop

    func_80011A9C_1269C(rdram, ctx);
        goto after_0;
    // 0x8020D2D4: nop

    after_0:
    // 0x8020D2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020D2DC:
    // 0x8020D2DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D2E0: jr          $ra
    // 0x8020D2E4: nop

    TRACE_RETURN()
    return;
    // 0x8020D2E4: nop

;}
RECOMP_FUNC void func_80210F88_66FF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80210F8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80210F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80210F94: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80210F98: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80210F9C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80210FA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80210FA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80210FA8: addiu       $a1, $a1, -0x80
    ctx->r5 = ADD32(ctx->r5, -0X80);
    // 0x80210FAC: jal         0x80034E08
    // 0x80210FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80210FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80210FB4: bne         $v0, $zero, L_80210FC4
    if (ctx->r2 != 0) {
        // 0x80210FB8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80210FC4;
    }
    // 0x80210FB8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80210FBC: b           L_802110B8
    // 0x80210FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802110B8;
    // 0x80210FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80210FC4:
    // 0x80210FC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80210FC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80210FCC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80210FD0: jal         0x80011908
    // 0x80210FD4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_80011908_12508(rdram, ctx);
        goto after_1;
    // 0x80210FD4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80210FD8: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x80210FDC: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80210FE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80210FE4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80210FE8: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x80210FEC: bgez        $t7, L_80211004
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210FF0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80211004;
    }
    // 0x80210FF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210FF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210FF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210FFC: nop

    // 0x80211000: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80211004:
    // 0x80211004: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x80211008: jal         0x80011760
    // 0x8021100C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_2;
    // 0x8021100C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80211010: jal         0x8020D5D0
    // 0x80211014: addiu       $a0, $zero, 0x3B6
    ctx->r4 = ADD32(0, 0X3B6);
    func_8020D5D0_66C580(rdram, ctx);
        goto after_3;
    // 0x80211014: addiu       $a0, $zero, 0x3B6
    ctx->r4 = ADD32(0, 0X3B6);
    after_3:
    // 0x80211018: jal         0x8020FEAC
    // 0x8021101C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020FEAC_66EE5C(rdram, ctx);
        goto after_4;
    // 0x8021101C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80211020: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80211024: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80211028: jal         0x8020FCA0
    // 0x8021102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8020FCA0_66EC50(rdram, ctx);
        goto after_5;
    // 0x8021102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80211030: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80211034: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80211038: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021103C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80211040: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x80211044: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80211048: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021104C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80211050: swc1        $f16, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f16.u32l;
    // 0x80211054: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80211058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021105C: swc1        $f18, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f18.u32l;
    // 0x80211060: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80211064: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
    // 0x80211068: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021106C: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80211070: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x80211074: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80211078: swc1        $f18, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f18.u32l;
    // 0x8021107C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80211080: jal         0x80012940
    // 0x80211084: swc1        $f4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f4.u32l;
    func_80012940_13540(rdram, ctx);
        goto after_6;
    // 0x80211084: swc1        $f4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x80211088: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8021108C: lwc1        $f0, 0x77B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X77B0);
    // 0x80211090: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80211094: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80211098: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    // 0x8021109C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x802110A0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x802110A4: jal         0x80038B98
    // 0x802110A8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_7;
    // 0x802110A8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    after_7:
    // 0x802110AC: jal         0x80038B98
    // 0x802110B0: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    func_80038B98_39798(rdram, ctx);
        goto after_8;
    // 0x802110B0: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_8:
    // 0x802110B4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_802110B8:
    // 0x802110B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802110BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802110C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802110C4: jr          $ra
    // 0x802110C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802110C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80214304_6732B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214304: bne         $a0, $zero, L_80214314
    if (ctx->r4 != 0) {
        // 0x80214308: addiu       $v1, $a0, 0x5C
        ctx->r3 = ADD32(ctx->r4, 0X5C);
            goto L_80214314;
    }
    // 0x80214308: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021430C: jr          $ra
    // 0x80214310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80214310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214314:
    // 0x80214314: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80214318: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x8021431C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214320: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x80214324: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80214328: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
    // 0x8021432C: sw          $t8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r24;
    // 0x80214330: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80214334: jr          $ra
    // 0x80214338: nop

    TRACE_RETURN()
    return;
    // 0x80214338: nop

;}
RECOMP_FUNC void func_802169B8_675968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802169B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802169BC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802169C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802169C4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x802169C8: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x802169CC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802169D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802169D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802169D8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802169DC: addiu       $t0, $t0, 0x7020
    ctx->r8 = ADD32(ctx->r8, 0X7020);
    // 0x802169E0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802169E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802169E8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x802169EC: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x802169F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802169F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802169F8: lbu         $a1, 0xC($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XC);
    // 0x802169FC: jal         0x8021684C
    // 0x80216A00: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8021684C_6757FC(rdram, ctx);
        goto after_0;
    // 0x80216A00: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80216A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216A08: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80216A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80216A10: jr          $ra
    // 0x80216A14: nop

    TRACE_RETURN()
    return;
    // 0x80216A14: nop

;}
RECOMP_FUNC void func_8020D8B4_66C864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D8B4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8020D8B8: addiu       $t0, $t0, 0x7D90
    ctx->r8 = ADD32(ctx->r8, 0X7D90);
    // 0x8020D8BC: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8020D8C0: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x8020D8C4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8020D8C8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8020D8CC: sw          $t8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r24;
    // 0x8020D8D0: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8020D8D4: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8020D8D8: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8020D8DC: lui         $t7, 0xF510
    ctx->r15 = S32(0XF510 << 16);
    // 0x8020D8E0: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8020D8E4: sw          $t7, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r15;
    // 0x8020D8E8: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x8020D8EC: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x8020D8F0: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x8020D8F4: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8020D8F8: sw          $t6, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r14;
    // 0x8020D8FC: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x8020D900: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8020D904: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8020D908: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8020D90C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8020D910: or          $t5, $t7, $t9
    ctx->r13 = ctx->r15 | ctx->r25;
    // 0x8020D914: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8020D918: lw          $t9, 0xA8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA8);
    // 0x8020D91C: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8020D920: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8020D924: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8020D928: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020D92C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8020D930: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020D934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D938: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x8020D93C: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x8020D940: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x8020D944: addiu       $v0, $v0, 0x7DC0
    ctx->r2 = ADD32(ctx->r2, 0X7DC0);
    // 0x8020D948: sw          $t8, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r24;
    // 0x8020D94C: sw          $t6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r14;
    // 0x8020D950: mflo        $t2
    ctx->r10 = lo;
    // 0x8020D954: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x8020D958: sltiu       $at, $t2, 0x7FF
    ctx->r1 = ctx->r10 < 0X7FF ? 1 : 0;
    // 0x8020D95C: sw          $t5, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r13;
    // 0x8020D960: beq         $at, $zero, L_8020D970
    if (ctx->r1 == 0) {
        // 0x8020D964: sw          $zero, 0x24($t0)
        MEM_W(0X24, ctx->r8) = 0;
            goto L_8020D970;
    }
    // 0x8020D964: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
    // 0x8020D968: b           L_8020D974
    // 0x8020D96C: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_8020D974;
    // 0x8020D96C: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_8020D970:
    // 0x8020D970: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
L_8020D974:
    // 0x8020D974: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x8020D978: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8020D97C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020D980: sll         $t8, $t4, 1
    ctx->r24 = S32(ctx->r12 << 1);
    // 0x8020D984: srl         $a2, $t8, 3
    ctx->r6 = S32(U32(ctx->r24) >> 3);
    // 0x8020D988: bne         $a2, $zero, L_8020D998
    if (ctx->r6 != 0) {
        // 0x8020D98C: or          $t4, $t8, $zero
        ctx->r12 = ctx->r24 | 0;
            goto L_8020D998;
    }
    // 0x8020D98C: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x8020D990: b           L_8020D99C
    // 0x8020D994: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8020D99C;
    // 0x8020D994: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8020D998:
    // 0x8020D998: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_8020D99C:
    // 0x8020D99C: bne         $a2, $zero, L_8020D9AC
    if (ctx->r6 != 0) {
        // 0x8020D9A0: addiu       $t6, $a3, 0x7FF
        ctx->r14 = ADD32(ctx->r7, 0X7FF);
            goto L_8020D9AC;
    }
    // 0x8020D9A0: addiu       $t6, $a3, 0x7FF
    ctx->r14 = ADD32(ctx->r7, 0X7FF);
    // 0x8020D9A4: b           L_8020D9B0
    // 0x8020D9A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8020D9B0;
    // 0x8020D9A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8020D9AC:
    // 0x8020D9AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_8020D9B0:
    // 0x8020D9B0: divu        $zero, $t6, $a1
    lo = S32(U32(ctx->r14) / U32(ctx->r5)); hi = S32(U32(ctx->r14) % U32(ctx->r5));
    // 0x8020D9B4: mflo        $t7
    ctx->r15 = lo;
    // 0x8020D9B8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8020D9BC: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8020D9C0: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x8020D9C4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8020D9C8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8020D9CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020D9D0: sw          $t9, 0x7DBC($at)
    MEM_W(0X7DBC, ctx->r1) = ctx->r25;
    // 0x8020D9D4: addiu       $ra, $t4, 0x7
    ctx->r31 = ADD32(ctx->r12, 0X7);
    // 0x8020D9D8: srl         $t8, $ra, 3
    ctx->r24 = S32(U32(ctx->r31) >> 3);
    // 0x8020D9DC: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8020D9E0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8020D9E4: addiu       $v1, $v1, 0x7DC0
    ctx->r3 = ADD32(ctx->r3, 0X7DC0);
    // 0x8020D9E8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020D9EC: addiu       $v0, $v0, 0x7DC8
    ctx->r2 = ADD32(ctx->r2, 0X7DC8);
    // 0x8020D9F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020D9F4: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x8020D9F8: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8020D9FC: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8020DA00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DA04: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8020DA08: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8020DA0C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8020DA10: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8020DA14: or          $ra, $t6, $zero
    ctx->r31 = ctx->r14 | 0;
    // 0x8020DA18: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8020DA1C: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8020DA20: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8020DA24: lw          $t6, 0xAC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XAC);
    // 0x8020DA28: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DA2C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8020DA30: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8020DA34: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8020DA38: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8020DA3C: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8020DA40: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8020DA44: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8020DA48: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8020DA4C: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x8020DA50: lw          $v1, 0xA8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA8);
    // 0x8020DA54: bne         $a1, $zero, L_8020DA60
    if (ctx->r5 != 0) {
        // 0x8020DA58: nop
    
            goto L_8020DA60;
    }
    // 0x8020DA58: nop

    // 0x8020DA5C: break       7
    do_break(2149636700);
L_8020DA60:
    // 0x8020DA60: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x8020DA64: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8020DA68: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8020DA6C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8020DA70: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8020DA74: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8020DA78: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8020DA7C: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8020DA80: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x8020DA84: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x8020DA88: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x8020DA8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020DA90: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8020DA94: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DA98: bne         $t8, $at, L_8020DBE8
    if (ctx->r24 != ctx->r1) {
        // 0x8020DA9C: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8020DBE8;
    }
    // 0x8020DA9C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8020DAA0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020DAA4: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8020DAA8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8020DAAC: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8020DAB0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DAB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DAB8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8020DABC: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8020DAC0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DAC4: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x8020DAC8: andi        $t9, $t1, 0x1FF
    ctx->r25 = ctx->r9 & 0X1FF;
    // 0x8020DACC: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8020DAD0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020DAD4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8020DAD8: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x8020DADC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DAE0: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8020DAE4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8020DAE8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8020DAEC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8020DAF0: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8020DAF4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8020DAF8: sltiu       $at, $t2, 0x7FF
    ctx->r1 = ctx->r10 < 0X7FF ? 1 : 0;
    // 0x8020DAFC: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    // 0x8020DB00: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DB04: beq         $at, $zero, L_8020DB14
    if (ctx->r1 == 0) {
        // 0x8020DB08: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_8020DB14;
    }
    // 0x8020DB08: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x8020DB0C: b           L_8020DB18
    // 0x8020DB10: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_8020DB18;
    // 0x8020DB10: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_8020DB14:
    // 0x8020DB14: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
L_8020DB18:
    // 0x8020DB18: bne         $a2, $zero, L_8020DB28
    if (ctx->r6 != 0) {
        // 0x8020DB1C: lui         $t2, 0x100
        ctx->r10 = S32(0X100 << 16);
            goto L_8020DB28;
    }
    // 0x8020DB1C: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
    // 0x8020DB20: b           L_8020DB2C
    // 0x8020DB24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8020DB2C;
    // 0x8020DB24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8020DB28:
    // 0x8020DB28: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_8020DB2C:
    // 0x8020DB2C: bne         $a2, $zero, L_8020DB3C
    if (ctx->r6 != 0) {
        // 0x8020DB30: addiu       $t9, $a3, 0x7FF
        ctx->r25 = ADD32(ctx->r7, 0X7FF);
            goto L_8020DB3C;
    }
    // 0x8020DB30: addiu       $t9, $a3, 0x7FF
    ctx->r25 = ADD32(ctx->r7, 0X7FF);
    // 0x8020DB34: b           L_8020DB40
    // 0x8020DB38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8020DB40;
    // 0x8020DB38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8020DB3C:
    // 0x8020DB3C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_8020DB40:
    // 0x8020DB40: divu        $zero, $t9, $a1
    lo = S32(U32(ctx->r25) / U32(ctx->r5)); hi = S32(U32(ctx->r25) % U32(ctx->r5));
    // 0x8020DB44: mflo        $t8
    ctx->r24 = lo;
    // 0x8020DB48: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8020DB4C: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x8020DB50: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8020DB54: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8020DB58: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8020DB5C: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x8020DB60: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8020DB64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020DB68: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8020DB6C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DB70: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8020DB74: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020DB78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020DB7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8020DB80: or          $t8, $ra, $t1
    ctx->r24 = ctx->r31 | ctx->r9;
    // 0x8020DB84: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8020DB88: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8020DB8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8020DB90: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8020DB94: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8020DB98: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8020DB9C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8020DBA0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x8020DBA4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DBA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020DBAC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8020DBB0: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8020DBB4: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8020DBB8: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8020DBBC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8020DBC0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8020DBC4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8020DBC8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8020DBCC: or          $t7, $t4, $t2
    ctx->r15 = ctx->r12 | ctx->r10;
    // 0x8020DBD0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DBD4: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8020DBD8: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8020DBDC: bne         $a1, $zero, L_8020DBE8
    if (ctx->r5 != 0) {
        // 0x8020DBE0: nop
    
            goto L_8020DBE8;
    }
    // 0x8020DBE0: nop

    // 0x8020DBE4: break       7
    do_break(2149637092);
L_8020DBE8:
    // 0x8020DBE8: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x8020DBEC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x8020DBF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020DBF4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020DBF8: subu        $t7, $a3, $t0
    ctx->r15 = SUB32(ctx->r7, ctx->r8);
    // 0x8020DBFC: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8020DC00: and         $t8, $v0, $t7
    ctx->r24 = ctx->r2 & ctx->r15;
    // 0x8020DC04: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020DC08: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8020DC0C: and         $a1, $t8, $a3
    ctx->r5 = ctx->r24 & ctx->r7;
    // 0x8020DC10: and         $a0, $t0, $a3
    ctx->r4 = ctx->r8 & ctx->r7;
    // 0x8020DC14: jal         0x80040620
    // 0x8020DC18: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8020DC18: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_0:
    // 0x8020DC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DC20: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x8020DC24: addiu       $v0, $t0, 0x7D90
    ctx->r2 = ADD32(ctx->r8, 0X7D90);
    // 0x8020DC28: jr          $ra
    // 0x8020DC2C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8020DC2C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80212DF4_671DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212DF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80212DF8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80212DFC: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x80212E00: addiu       $s2, $s2, 0x7F34
    ctx->r18 = ADD32(ctx->r18, 0X7F34);
    // 0x80212E04: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80212E08: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80212E0C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80212E10: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80212E14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80212E18: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80212E1C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80212E20: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80212E24: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80212E28: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80212E2C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80212E30: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212E34: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212E38: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80212E3C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80212E40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212E44: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212E48: jal         0x800106F0
    // 0x80212E4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80212E4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80212E50: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80212E54: lw          $t0, 0x7F38($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F38);
    // 0x80212E58: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80212E5C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212E60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212E68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80212E6C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80212E70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212E74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212E78: jal         0x800106F0
    // 0x80212E7C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x80212E7C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x80212E80: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80212E84: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80212E88: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80212E8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212E90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80212E94: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80212E98: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212E9C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212EA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212EA4: jal         0x800106F0
    // 0x80212EA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x80212EA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_2:
    // 0x80212EAC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80212EB0: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    // 0x80212EB4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80212EB8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80212EBC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80212EC0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80212EC4: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80212EC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212ECC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80212ED0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212ED4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212ED8: jal         0x800106F0
    // 0x80212EDC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x80212EDC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_3:
    // 0x80212EE0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80212EE4: addiu       $a1, $s0, 0x48
    ctx->r5 = ADD32(ctx->r16, 0X48);
    // 0x80212EE8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80212EEC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80212EF0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212EF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212EF8: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80212EFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212F00: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80212F04: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212F08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212F0C: jal         0x800106F0
    // 0x80212F10: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80212F10: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x80212F14: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80212F18: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80212F1C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80212F20: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80212F24: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80212F28: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80212F2C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80212F30: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212F34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212F38: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212F3C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212F40: jal         0x800106F0
    // 0x80212F44: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80212F44: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x80212F48: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80212F4C: addiu       $a2, $s3, 0x10
    ctx->r6 = ADD32(ctx->r19, 0X10);
    // 0x80212F50: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80212F54: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80212F58: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80212F5C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80212F60: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80212F64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212F68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80212F6C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212F70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212F74: jal         0x800106F0
    // 0x80212F78: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x80212F78: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_6:
    // 0x80212F7C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80212F80: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80212F84: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80212F88: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212F8C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212F90: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212F94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212F98: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80212F9C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212FA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212FA4: jal         0x800106F0
    // 0x80212FA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_7;
    // 0x80212FA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x80212FAC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80212FB0: lw          $t0, 0x7F40($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F40);
    // 0x80212FB4: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    // 0x80212FB8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80212FBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212FC0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80212FC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212FC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80212FCC: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x80212FD0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212FD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212FD8: jal         0x800106F0
    // 0x80212FDC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_8;
    // 0x80212FDC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_8:
    // 0x80212FE0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80212FE4: lw          $t2, 0x7F40($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7F40);
    // 0x80212FE8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80212FEC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80212FF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212FF4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80212FF8: addiu       $a2, $s3, 0x24
    ctx->r6 = ADD32(ctx->r19, 0X24);
    // 0x80212FFC: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    // 0x80213000: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213004: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213008: jal         0x800106F0
    // 0x8021300C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_800106F0_112F0(rdram, ctx);
        goto after_9;
    // 0x8021300C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_9:
    // 0x80213010: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80213014: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80213018: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8021301C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80213020: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80213024: jr          $ra
    // 0x80213028: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80213028: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8020FBF8_66EBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FBF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020FBFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020FC00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8020FC04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
L_8020FC08:
    // 0x8020FC08: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x8020FC0C: jal         0x80011760
    // 0x8020FC10: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_0;
    // 0x8020FC10: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    after_0:
    // 0x8020FC14: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x8020FC18: beql        $t6, $zero, L_8020FC2C
    if (ctx->r14 == 0) {
        // 0x8020FC1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8020FC2C;
    }
    goto skip_0;
    // 0x8020FC1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8020FC20: b           L_8020FC08
    // 0x8020FC24: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
        goto L_8020FC08;
    // 0x8020FC24: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x8020FC28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8020FC2C:
    // 0x8020FC2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8020FC34: jr          $ra
    // 0x8020FC38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8020FC38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80214EB8_673E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214EB8: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x80214EBC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80214EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214EC4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80214EC8: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x80214ECC: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x80214ED0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x80214ED4: sw          $a3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r7;
    // 0x80214ED8: lw          $a2, 0x1C0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C0);
    // 0x80214EDC: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    // 0x80214EE0: jal         0x802169B8
    // 0x80214EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802169B8_675968(rdram, ctx);
        goto after_0;
    // 0x80214EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80214EE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214EEC: lwc1        $f0, 0x7BB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7BB0);
    // 0x80214EF0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80214EF4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214EF8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214EFC: addiu       $t6, $zero, 0x4D2
    ctx->r14 = ADD32(0, 0X4D2);
    // 0x80214F00: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80214F04: addiu       $a3, $a3, 0x6FD8
    ctx->r7 = ADD32(ctx->r7, 0X6FD8);
    // 0x80214F08: addiu       $a1, $a1, 0x4A34
    ctx->r5 = ADD32(ctx->r5, 0X4A34);
    // 0x80214F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214F10: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80214F14: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80214F18: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80214F1C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80214F20: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80214F24: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80214F28: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80214F2C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80214F30: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80214F34: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80214F38: jal         0x800358E8
    // 0x80214F3C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x80214F3C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80214F40: bne         $v0, $zero, L_80214F50
    if (ctx->r2 != 0) {
        // 0x80214F44: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80214F50;
    }
    // 0x80214F44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80214F48: b           L_8021513C
    // 0x80214F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021513C;
    // 0x80214F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214F50:
    // 0x80214F50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80214F54: jal         0x80011968
    // 0x80214F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80011968_12568(rdram, ctx);
        goto after_2;
    // 0x80214F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80214F5C: jal         0x80011760
    // 0x80214F60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x80214F60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80214F64: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
    // 0x80214F68: lw          $a3, 0x1BC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1BC);
    // 0x80214F6C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x80214F70: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80214F74: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x80214F78: lw          $t8, 0x1AC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1AC);
    // 0x80214F7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80214F80: lui         $at, 0xC148
    ctx->r1 = S32(0XC148 << 16);
    // 0x80214F84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80214F88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80214F8C: sb          $t8, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r24;
    // 0x80214F90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214F94: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x80214F98: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x80214F9C: beq         $a3, $at, L_80215080
    if (ctx->r7 == ctx->r1) {
        // 0x80214FA0: swc1        $f8, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
            goto L_80215080;
    }
    // 0x80214FA0: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x80214FA4: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80214FA8: jal         0x802166B4
    // 0x80214FAC: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    func_802166B4_675664(rdram, ctx);
        goto after_4;
    // 0x80214FAC: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    after_4:
    // 0x80214FB0: lw          $a3, 0x1BC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1BC);
    // 0x80214FB4: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x80214FB8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80214FBC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80214FC0: beql        $at, $zero, L_80215084
    if (ctx->r1 == 0) {
        // 0x80214FC4: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_80215084;
    }
    goto skip_0;
    // 0x80214FC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_0:
    // 0x80214FC8: bgez        $a3, L_80214FD8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80214FCC: sra         $t0, $a3, 3
        ctx->r8 = S32(SIGNED(ctx->r7) >> 3);
            goto L_80214FD8;
    }
    // 0x80214FCC: sra         $t0, $a3, 3
    ctx->r8 = S32(SIGNED(ctx->r7) >> 3);
    // 0x80214FD0: addiu       $at, $a3, 0x7
    ctx->r1 = ADD32(ctx->r7, 0X7);
    // 0x80214FD4: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80214FD8:
    // 0x80214FD8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80214FDC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80214FE0: bgez        $a3, L_80214FF4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80214FE4: andi        $t4, $a3, 0x7
        ctx->r12 = ctx->r7 & 0X7;
            goto L_80214FF4;
    }
    // 0x80214FE4: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x80214FE8: beq         $t4, $zero, L_80214FF4
    if (ctx->r12 == 0) {
        // 0x80214FEC: nop
    
            goto L_80214FF4;
    }
    // 0x80214FEC: nop

    // 0x80214FF0: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_80214FF4:
    // 0x80214FF4: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x80214FF8: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x80214FFC: beq         $t7, $zero, L_80215080
    if (ctx->r15 == 0) {
        // 0x80215000: lw          $a0, 0x1B4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1B4);
            goto L_80215080;
    }
    // 0x80215000: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80215004: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    // 0x80215008: jal         0x80216794
    // 0x8021500C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80216794_675744(rdram, ctx);
        goto after_5;
    // 0x8021500C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_5:
    // 0x80215010: lw          $a3, 0x1BC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1BC);
    // 0x80215014: lui         $at, 0xE000
    ctx->r1 = S32(0XE000 << 16);
    // 0x80215018: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021501C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x80215020: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80215024: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80215028: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x8021502C: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x80215030: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80215034: jal         0x8001B918
    // 0x80215038: addu        $a2, $a3, $at
    ctx->r6 = ADD32(ctx->r7, ctx->r1);
    func_8001B918_1C518(rdram, ctx);
        goto after_6;
    // 0x80215038: addu        $a2, $a3, $at
    ctx->r6 = ADD32(ctx->r7, ctx->r1);
    after_6:
    // 0x8021503C: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80215040: lwc1        $f16, 0xFC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80215044: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80215048: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021504C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80215050: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80215054: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80215058: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021505C: nop

    // 0x80215060: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80215064: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80215068: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021506C: jal         0x800040A8
    // 0x80215070: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    func_800040A8_4CA8(rdram, ctx);
        goto after_7;
    // 0x80215070: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    after_7:
    // 0x80215074: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x80215078: b           L_8021508C
    // 0x8021507C: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
        goto L_8021508C;
    // 0x8021507C: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
L_80215080:
    // 0x80215080: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_80215084:
    // 0x80215084: sh          $zero, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = 0;
    // 0x80215088: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
L_8021508C:
    // 0x8021508C: lw          $t0, 0x1B4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1B4);
    // 0x80215090: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80215094: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80215098: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8021509C: lw          $t2, -0x3778($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3778);
    // 0x802150A0: beql        $t2, $zero, L_80215100
    if (ctx->r10 == 0) {
        // 0x802150A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80215100;
    }
    goto skip_1;
    // 0x802150A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x802150A8: jal         0x8021666C
    // 0x802150AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8021666C_67561C(rdram, ctx);
        goto after_8;
    // 0x802150AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_8:
    // 0x802150B0: lw          $t5, 0x1B8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1B8);
    // 0x802150B4: bnel        $v0, $t5, L_80215100
    if (ctx->r2 != ctx->r13) {
        // 0x802150B8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80215100;
    }
    goto skip_2;
    // 0x802150B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_2:
    // 0x802150BC: jal         0x80216690
    // 0x802150C0: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    func_80216690_675640(rdram, ctx);
        goto after_9;
    // 0x802150C0: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    after_9:
    // 0x802150C4: lui         $at, 0xE000
    ctx->r1 = S32(0XE000 << 16);
    // 0x802150C8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x802150CC: addu        $a2, $v0, $at
    ctx->r6 = ADD32(ctx->r2, ctx->r1);
    // 0x802150D0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x802150D4: jal         0x8001B918
    // 0x802150D8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_8001B918_1C518(rdram, ctx);
        goto after_10;
    // 0x802150D8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_10:
    // 0x802150DC: lw          $t4, 0x1AC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1AC);
    // 0x802150E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802150E4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x802150E8: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x802150EC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802150F0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x802150F4: jal         0x802149AC
    // 0x802150F8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    func_802149AC_67395C(rdram, ctx);
        goto after_11;
    // 0x802150F8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    after_11:
    // 0x802150FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80215100:
    // 0x80215100: jal         0x80011A38
    // 0x80215104: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    func_80011A38_12638(rdram, ctx);
        goto after_12;
    // 0x80215104: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    after_12:
    // 0x80215108: beq         $v0, $zero, L_80215118
    if (ctx->r2 == 0) {
        // 0x8021510C: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_80215118;
    }
    // 0x8021510C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80215110: addiu       $t6, $t6, 0x6FD8
    ctx->r14 = ADD32(ctx->r14, 0X6FD8);
    // 0x80215114: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
L_80215118:
    // 0x80215118: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x8021511C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80215120: jal         0x80011A38
    // 0x80215124: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    func_80011A38_12638(rdram, ctx);
        goto after_13;
    // 0x80215124: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    after_13:
    // 0x80215128: beq         $v0, $zero, L_80215138
    if (ctx->r2 == 0) {
        // 0x8021512C: lui         $t7, 0x8021
        ctx->r15 = S32(0X8021 << 16);
            goto L_80215138;
    }
    // 0x8021512C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80215130: addiu       $t7, $t7, 0x6FF8
    ctx->r15 = ADD32(ctx->r15, 0X6FF8);
    // 0x80215134: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
L_80215138:
    // 0x80215138: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8021513C:
    // 0x8021513C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80215140: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80215144: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80215148: jr          $ra
    // 0x8021514C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    TRACE_RETURN()
    return;
    // 0x8021514C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_802160A0_675050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802160A0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802160A4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802160A8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802160AC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802160B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802160B4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802160B8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802160BC: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802160C0: addiu       $a1, $a1, 0x642C
    ctx->r5 = ADD32(ctx->r5, 0X642C);
    // 0x802160C4: jal         0x80034E08
    // 0x802160C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802160C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802160CC: bne         $v0, $zero, L_802160DC
    if (ctx->r2 != 0) {
        // 0x802160D0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_802160DC;
    }
    // 0x802160D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802160D4: b           L_80216418
    // 0x802160D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x802160D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802160DC:
    // 0x802160DC: jal         0x802144E0
    // 0x802160E0: nop

    func_802144E0_673490(rdram, ctx);
        goto after_1;
    // 0x802160E0: nop

    after_1:
    // 0x802160E4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x802160E8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x802160EC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802160F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802160F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802160F8: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x802160FC: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80216100: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80216104: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80216108: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8021610C: lw          $t0, -0x3778($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3778);
    // 0x80216110: beql        $t0, $zero, L_80216150
    if (ctx->r8 == 0) {
        // 0x80216114: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80216150;
    }
    goto skip_0;
    // 0x80216114: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80216118: jal         0x80216690
    // 0x8021611C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80216690_675640(rdram, ctx);
        goto after_2;
    // 0x8021611C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x80216120: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80216124: jal         0x8021666C
    // 0x80216128: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    func_8021666C_67561C(rdram, ctx);
        goto after_3;
    // 0x80216128: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    after_3:
    // 0x8021612C: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x80216130: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x80216134: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216138: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8021613C: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x80216140: sllv        $t5, $t4, $s0
    ctx->r13 = S32(ctx->r12 << (ctx->r16 & 31));
    // 0x80216144: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x80216148: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8021614C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80216150:
    // 0x80216150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80216154: jal         0x80035EEC
    // 0x80216158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x80216158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8021615C: bne         $v0, $zero, L_80216174
    if (ctx->r2 != 0) {
        // 0x80216160: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80216174;
    }
    // 0x80216160: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80216164: jal         0x80216054
    // 0x80216168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_5;
    // 0x80216168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8021616C: b           L_80216418
    // 0x80216170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x80216170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216174:
    // 0x80216174: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80216178: addiu       $t9, $t9, 0x6F58
    ctx->r25 = ADD32(ctx->r25, 0X6F58);
    // 0x8021617C: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x80216180: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80216184: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80216188: sb          $t7, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r15;
    // 0x8021618C: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    // 0x80216190: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x80216194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80216198: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021619C: jal         0x80035EEC
    // 0x802161A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_6;
    // 0x802161A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x802161A4: bne         $v0, $zero, L_802161BC
    if (ctx->r2 != 0) {
        // 0x802161A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802161BC;
    }
    // 0x802161A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802161AC: jal         0x80216054
    // 0x802161B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_7;
    // 0x802161B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x802161B4: b           L_80216418
    // 0x802161B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x802161B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802161BC:
    // 0x802161BC: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802161C0: addiu       $t1, $t1, 0x6F50
    ctx->r9 = ADD32(ctx->r9, 0X6F50);
    // 0x802161C4: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x802161C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802161CC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x802161D0: sb          $t8, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r24;
    // 0x802161D4: sw          $t2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r10;
    // 0x802161D8: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x802161DC: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x802161E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802161E4: sb          $t4, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r12;
    // 0x802161E8: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x802161EC: lb          $a0, 0x36($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X36);
    // 0x802161F0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x802161F4: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x802161F8: jal         0x80215A10
    // 0x802161FC: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_80215A10_6749C0(rdram, ctx);
        goto after_8;
    // 0x802161FC: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_8:
    // 0x80216200: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80216204: jal         0x80012940
    // 0x80216208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_9;
    // 0x80216208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8021620C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80216210: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80216214: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80216218: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8021621C: jal         0x800127B8
    // 0x80216220: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800127B8_133B8(rdram, ctx);
        goto after_10;
    // 0x80216220: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80216224: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80216228: jal         0x800124A0
    // 0x8021622C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_11;
    // 0x8021622C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_11:
    // 0x80216230: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x80216234: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x80216238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021623C: bne         $t3, $zero, L_80216254
    if (ctx->r11 != 0) {
        // 0x80216240: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80216254;
    }
    // 0x80216240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80216244: jal         0x80216054
    // 0x80216248: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_12;
    // 0x80216248: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x8021624C: b           L_80216418
    // 0x80216250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x80216250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216254:
    // 0x80216254: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x80216258: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8021625C: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80216260: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80216264: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80216268: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8021626C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x80216270: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80216274: jal         0x80214EB8
    // 0x80216278: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80214EB8_673E68(rdram, ctx);
        goto after_13;
    // 0x80216278: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_13:
    // 0x8021627C: bne         $v0, $zero, L_80216294
    if (ctx->r2 != 0) {
        // 0x80216280: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80216294;
    }
    // 0x80216280: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80216284: jal         0x80216054
    // 0x80216288: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_14;
    // 0x80216288: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x8021628C: b           L_80216418
    // 0x80216290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x80216290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216294:
    // 0x80216294: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80216298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021629C: jal         0x80035EEC
    // 0x802162A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_15;
    // 0x802162A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802162A4: bne         $v0, $zero, L_802162BC
    if (ctx->r2 != 0) {
        // 0x802162A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802162BC;
    }
    // 0x802162A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802162AC: jal         0x80216054
    // 0x802162B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_16;
    // 0x802162B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x802162B4: b           L_80216418
    // 0x802162B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x802162B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802162BC:
    // 0x802162BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802162C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802162C4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802162C8: addiu       $t8, $t8, 0x6EF0
    ctx->r24 = ADD32(ctx->r24, 0X6EF0);
    // 0x802162CC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802162D0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802162D4: addu        $t1, $t8, $at
    ctx->r9 = ADD32(ctx->r24, ctx->r1);
    // 0x802162D8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x802162DC: sb          $t0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r8;
    // 0x802162E0: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x802162E4: sb          $t2, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r10;
    // 0x802162E8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x802162EC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x802162F0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x802162F4: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x802162F8: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x802162FC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80216300: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80216304: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80216308: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8021630C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80216310: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80216314: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80216318: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8021631C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80216320: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80216324: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80216328: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8021632C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80216330: jal         0x802155F4
    // 0x80216334: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_802155F4_6745A4(rdram, ctx);
        goto after_17;
    // 0x80216334: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_17:
    // 0x80216338: bne         $v0, $zero, L_80216350
    if (ctx->r2 != 0) {
        // 0x8021633C: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_80216350;
    }
    // 0x8021633C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80216340: jal         0x80216054
    // 0x80216344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_18;
    // 0x80216344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80216348: b           L_80216418
    // 0x8021634C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x8021634C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216350:
    // 0x80216350: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x80216354: lbu         $t0, 0x7ACD($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7ACD);
    // 0x80216358: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021635C: sb          $t0, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r8;
    // 0x80216360: lb          $v0, 0x37($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X37);
    // 0x80216364: beq         $v0, $zero, L_80216384
    if (ctx->r2 == 0) {
        // 0x80216368: nop
    
            goto L_80216384;
    }
    // 0x80216368: nop

    // 0x8021636C: beq         $v0, $at, L_80216398
    if (ctx->r2 == ctx->r1) {
        // 0x80216370: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80216398;
    }
    // 0x80216370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80216374: beq         $v0, $at, L_802163AC
    if (ctx->r2 == ctx->r1) {
        // 0x80216378: nop
    
            goto L_802163AC;
    }
    // 0x80216378: nop

    // 0x8021637C: b           L_802163BC
    // 0x80216380: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
        goto L_802163BC;
    // 0x80216380: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
L_80216384:
    // 0x80216384: jal         0x80214CF0
    // 0x80216388: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214CF0_673CA0(rdram, ctx);
        goto after_19;
    // 0x80216388: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_19:
    // 0x8021638C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80216390: b           L_802163B8
    // 0x80216394: sb          $t8, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r24;
        goto L_802163B8;
    // 0x80216394: sb          $t8, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r24;
L_80216398:
    // 0x80216398: jal         0x80214D64
    // 0x8021639C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_20;
    // 0x8021639C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_20:
    // 0x802163A0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802163A4: b           L_802163B8
    // 0x802163A8: sb          $t1, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r9;
        goto L_802163B8;
    // 0x802163A8: sb          $t1, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r9;
L_802163AC:
    // 0x802163AC: jal         0x80214D64
    // 0x802163B0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80214D64_673D14(rdram, ctx);
        goto after_21;
    // 0x802163B0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_21:
    // 0x802163B4: sb          $zero, 0x36($s0)
    MEM_B(0X36, ctx->r16) = 0;
L_802163B8:
    // 0x802163B8: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
L_802163BC:
    // 0x802163BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802163C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802163C4: sw          $t2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r10;
    // 0x802163C8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x802163CC: sh          $t4, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r12;
    // 0x802163D0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x802163D4: sh          $t3, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r11;
    // 0x802163D8: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x802163DC: lh          $t7, 0x42($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X42);
    // 0x802163E0: sh          $t5, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r13;
    // 0x802163E4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x802163E8: sb          $t7, 0x38($s0)
    MEM_B(0X38, ctx->r16) = ctx->r15;
    // 0x802163EC: jal         0x800119D4
    // 0x802163F0: sh          $t6, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r14;
    func_800119D4_125D4(rdram, ctx);
        goto after_22;
    // 0x802163F0: sh          $t6, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r14;
    after_22:
    // 0x802163F4: bne         $v0, $zero, L_8021640C
    if (ctx->r2 != 0) {
        // 0x802163F8: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_8021640C;
    }
    // 0x802163F8: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x802163FC: jal         0x80216054
    // 0x80216400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80216054_675004(rdram, ctx);
        goto after_23;
    // 0x80216400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x80216404: b           L_80216418
    // 0x80216408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80216418;
    // 0x80216408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021640C:
    // 0x8021640C: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80216410: sh          $t9, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r25;
    // 0x80216414: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80216418:
    // 0x80216418: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8021641C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80216420: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80216424: jr          $ra
    // 0x80216428: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80216428: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_802155F4_6745A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802155F4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802155F8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802155FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80215600: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80215604: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80215608: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021560C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80215610: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80215614: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80215618: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8021561C: addiu       $a1, $a1, 0x5198
    ctx->r5 = ADD32(ctx->r5, 0X5198);
    // 0x80215620: jal         0x80034E08
    // 0x80215624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80215624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80215628: bne         $v0, $zero, L_80215638
    if (ctx->r2 != 0) {
        // 0x8021562C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80215638;
    }
    // 0x8021562C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80215630: b           L_802159F8
    // 0x80215634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802159F8;
    // 0x80215634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215638:
    // 0x80215638: addiu       $s1, $s2, 0x5C
    ctx->r17 = ADD32(ctx->r18, 0X5C);
    // 0x8021563C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80215640: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80215644: jal         0x80011610
    // 0x80215648: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80011610_12210(rdram, ctx);
        goto after_1;
    // 0x80215648: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8021564C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80215650: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80215654: jal         0x800115F8
    // 0x80215658: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_800115F8_121F8(rdram, ctx);
        goto after_2;
    // 0x80215658: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_2:
    // 0x8021565C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80215660: addiu       $t6, $t6, 0x5474
    ctx->r14 = ADD32(ctx->r14, 0X5474);
    // 0x80215664: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x80215668: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8021566C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80215670: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80215674: jal         0x800103DC
    // 0x80215678: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_800103DC_10FDC(rdram, ctx);
        goto after_3;
    // 0x80215678: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_3:
    // 0x8021567C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80215680: bne         $v0, $at, L_80215698
    if (ctx->r2 != ctx->r1) {
        // 0x80215684: sw          $v0, 0x30($s1)
        MEM_W(0X30, ctx->r17) = ctx->r2;
            goto L_80215698;
    }
    // 0x80215684: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
    // 0x80215688: jal         0x80215474
    // 0x8021568C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80215474_674424(rdram, ctx);
        goto after_4;
    // 0x8021568C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80215690: b           L_802159F8
    // 0x80215694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802159F8;
    // 0x80215694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215698:
    // 0x80215698: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021569C: jal         0x800119D4
    // 0x802156A0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_800119D4_125D4(rdram, ctx);
        goto after_5;
    // 0x802156A0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_5:
    // 0x802156A4: bne         $v0, $zero, L_802156BC
    if (ctx->r2 != 0) {
        // 0x802156A8: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_802156BC;
    }
    // 0x802156A8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802156AC: jal         0x80215474
    // 0x802156B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80215474_674424(rdram, ctx);
        goto after_6;
    // 0x802156B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802156B4: b           L_802159F8
    // 0x802156B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802159F8;
    // 0x802156B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802156BC:
    // 0x802156BC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802156C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802156C4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x802156C8: jal         0x800119D4
    // 0x802156CC: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    func_800119D4_125D4(rdram, ctx);
        goto after_7;
    // 0x802156CC: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_7:
    // 0x802156D0: bne         $v0, $zero, L_802156E8
    if (ctx->r2 != 0) {
        // 0x802156D4: sw          $v0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r2;
            goto L_802156E8;
    }
    // 0x802156D4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x802156D8: jal         0x80215474
    // 0x802156DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80215474_674424(rdram, ctx);
        goto after_8;
    // 0x802156DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x802156E0: b           L_802159F8
    // 0x802156E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802159F8;
    // 0x802156E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802156E8:
    // 0x802156E8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802156EC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802156F0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x802156F4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x802156F8: addiu       $a1, $zero, 0x1DB0
    ctx->r5 = ADD32(0, 0X1DB0);
    // 0x802156FC: jal         0x800148F0
    // 0x80215700: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_9;
    // 0x80215700: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_9:
    // 0x80215704: bne         $v0, $zero, L_8021571C
    if (ctx->r2 != 0) {
        // 0x80215708: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_8021571C;
    }
    // 0x80215708: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8021570C: jal         0x80215474
    // 0x80215710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80215474_674424(rdram, ctx);
        goto after_10;
    // 0x80215710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x80215714: b           L_802159F8
    // 0x80215718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802159F8;
    // 0x80215718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021571C:
    // 0x8021571C: jal         0x80216648
    // 0x80215720: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    func_80216648_6755F8(rdram, ctx);
        goto after_11;
    // 0x80215720: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_11:
    // 0x80215724: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80215728: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x8021572C: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x80215730: lw          $t8, -0x1B7C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1B7C);
    // 0x80215734: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80215738: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x8021573C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80215740: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80215744: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80215748: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x8021574C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80215750: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80215754: jal         0x800106F0
    // 0x80215758: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_12;
    // 0x80215758: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_12:
    // 0x8021575C: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80215760: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x80215764: lw          $t1, -0x1B7C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1B7C);
    // 0x80215768: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8021576C: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x80215770: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80215774: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80215778: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8021577C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80215780: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x80215784: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80215788: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8021578C: jal         0x800106F0
    // 0x80215790: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_13;
    // 0x80215790: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_13:
    // 0x80215794: lw          $t4, 0x3C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X3C);
    // 0x80215798: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021579C: blez        $t4, L_802157F8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802157A0: addiu       $s0, $v1, 0x1
        ctx->r16 = ADD32(ctx->r3, 0X1);
            goto L_802157F8;
    }
    // 0x802157A0: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
L_802157A4:
    // 0x802157A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802157A8: jal         0x80215150
    // 0x802157AC: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    func_80215150_674100(rdram, ctx);
        goto after_14;
    // 0x802157AC: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    after_14:
    // 0x802157B0: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x802157B4: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x802157B8: lw          $t6, -0x1B78($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1B78);
    // 0x802157BC: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x802157C0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802157C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802157C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802157CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802157D0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802157D4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802157D8: jal         0x800106F0
    // 0x802157DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_15;
    // 0x802157DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_15:
    // 0x802157E0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x802157E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x802157E8: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x802157EC: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802157F0: bnel        $at, $zero, L_802157A4
    if (ctx->r1 != 0) {
        // 0x802157F4: addiu       $s0, $v1, 0x1
        ctx->r16 = ADD32(ctx->r3, 0X1);
            goto L_802157A4;
    }
    goto skip_0;
    // 0x802157F4: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    skip_0:
L_802157F8:
    // 0x802157F8: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x802157FC: lui         $t0, 0x8022
    ctx->r8 = S32(0X8022 << 16);
    // 0x80215800: lw          $t0, -0x1B78($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1B78);
    // 0x80215804: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80215808: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8021580C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80215810: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80215814: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80215818: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x8021581C: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x80215820: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80215824: jal         0x800106F0
    // 0x80215828: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_16;
    // 0x80215828: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_16:
    // 0x8021582C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80215830: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80215834: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x80215838: lw          $t3, -0x1B78($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1B78);
    // 0x8021583C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80215840: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80215844: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80215848: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8021584C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80215850: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80215854: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x80215858: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x8021585C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80215860: jal         0x800106F0
    // 0x80215864: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_17;
    // 0x80215864: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_17:
    // 0x80215868: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x8021586C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x80215870: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80215874: addiu       $t8, $t8, -0x39F8
    ctx->r24 = ADD32(ctx->r24, -0X39F8);
    // 0x80215878: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8021587C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80215880: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80215884: lw          $v1, 0x2F0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X2F0);
    // 0x80215888: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021588C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80215890: beq         $v1, $at, L_802158B8
    if (ctx->r3 == ctx->r1) {
        // 0x80215894: addiu       $a2, $zero, 0xA9
        ctx->r6 = ADD32(0, 0XA9);
            goto L_802158B8;
    }
    // 0x80215894: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x80215898: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021589C: beq         $v1, $at, L_802158E8
    if (ctx->r3 == ctx->r1) {
        // 0x802158A0: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_802158E8;
    }
    // 0x802158A0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802158A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802158A8: beq         $v1, $at, L_80215920
    if (ctx->r3 == ctx->r1) {
        // 0x802158AC: addiu       $a1, $zero, 0x44
        ctx->r5 = ADD32(0, 0X44);
            goto L_80215920;
    }
    // 0x802158AC: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x802158B0: b           L_80215950
    // 0x802158B4: nop

        goto L_80215950;
    // 0x802158B4: nop

L_802158B8:
    // 0x802158B8: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x802158BC: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x802158C0: lw          $t1, -0x1B7C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1B7C);
    // 0x802158C4: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x802158C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802158CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802158D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802158D4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802158D8: jal         0x800106F0
    // 0x802158DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_18;
    // 0x802158DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_18:
    // 0x802158E0: b           L_80215950
    // 0x802158E4: nop

        goto L_80215950;
    // 0x802158E4: nop

L_802158E8:
    // 0x802158E8: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x802158EC: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x802158F0: lw          $t3, -0x1B78($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1B78);
    // 0x802158F4: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x802158F8: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x802158FC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80215900: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80215904: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80215908: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x8021590C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80215910: jal         0x800106F0
    // 0x80215914: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_19;
    // 0x80215914: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_19:
    // 0x80215918: b           L_80215950
    // 0x8021591C: nop

        goto L_80215950;
    // 0x8021591C: nop

L_80215920:
    // 0x80215920: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80215924: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x80215928: lw          $t6, -0x1B7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1B7C);
    // 0x8021592C: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80215930: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80215934: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80215938: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8021593C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80215940: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    // 0x80215944: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80215948: jal         0x800106F0
    // 0x8021594C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_20;
    // 0x8021594C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_20:
L_80215950:
    // 0x80215950: jal         0x800105AC
    // 0x80215954: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_800105AC_111AC(rdram, ctx);
        goto after_21;
    // 0x80215954: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_21:
    // 0x80215958: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021595C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x80215960: jal         0x8021480C
    // 0x80215964: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_8021480C_6737BC(rdram, ctx);
        goto after_22;
    // 0x80215964: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_22:
    // 0x80215968: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    // 0x8021596C: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80215970: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80215974: jal         0x80215150
    // 0x80215978: subu        $a0, $a1, $t8
    ctx->r4 = SUB32(ctx->r5, ctx->r24);
    func_80215150_674100(rdram, ctx);
        goto after_23;
    // 0x80215978: subu        $a0, $a1, $t8
    ctx->r4 = SUB32(ctx->r5, ctx->r24);
    after_23:
    // 0x8021597C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215980: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x80215984: jal         0x800115E0
    // 0x80215988: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_800115E0_121E0(rdram, ctx);
        goto after_24;
    // 0x80215988: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_24:
    // 0x8021598C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80215990: lw          $t0, 0x280($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X280);
    // 0x80215994: beql        $t0, $zero, L_802159DC
    if (ctx->r8 == 0) {
        // 0x80215998: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802159DC;
    }
    goto skip_1;
    // 0x80215998: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x8021599C: jal         0x8021666C
    // 0x802159A0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    func_8021666C_67561C(rdram, ctx);
        goto after_25;
    // 0x802159A0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_25:
    // 0x802159A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802159A8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x802159AC: jal         0x802148F8
    // 0x802159B0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_802148F8_6738A8(rdram, ctx);
        goto after_26;
    // 0x802159B0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_26:
    // 0x802159B4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x802159B8: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    // 0x802159BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802159C0: jal         0x80215150
    // 0x802159C4: subu        $a0, $a1, $v1
    ctx->r4 = SUB32(ctx->r5, ctx->r3);
    func_80215150_674100(rdram, ctx);
        goto after_27;
    // 0x802159C4: subu        $a0, $a1, $v1
    ctx->r4 = SUB32(ctx->r5, ctx->r3);
    after_27:
    // 0x802159C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802159CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802159D0: jal         0x800115E0
    // 0x802159D4: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_800115E0_121E0(rdram, ctx);
        goto after_28;
    // 0x802159D4: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_28:
    // 0x802159D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_802159DC:
    // 0x802159DC: jal         0x80215524
    // 0x802159E0: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    func_80215524_6744D4(rdram, ctx);
        goto after_29;
    // 0x802159E0: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    after_29:
    // 0x802159E4: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x802159E8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x802159EC: sw          $t1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r9;
    // 0x802159F0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x802159F4: sw          $t2, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r10;
L_802159F8:
    // 0x802159F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802159FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80215A00: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80215A04: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80215A08: jr          $ra
    // 0x80215A0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80215A0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80212B44_671AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212B44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80212B48: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212B4C: lw          $t7, 0x7F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F40);
    // 0x80212B50: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80212B54: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80212B58: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80212B5C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80212B60: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80212B64: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80212B68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80212B6C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80212B70: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80212B74: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80212B78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212B7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212B80: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212B84: jal         0x800106F0
    // 0x80212B88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80212B88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80212B8C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80212B90: lw          $t0, 0x7F48($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F48);
    // 0x80212B94: addiu       $a2, $s2, 0x18
    ctx->r6 = ADD32(ctx->r18, 0X18);
    // 0x80212B98: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80212B9C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80212BA0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80212BA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80212BA8: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80212BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212BB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212BB4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212BB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212BBC: jal         0x800106F0
    // 0x80212BC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x80212BC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x80212BC4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80212BC8: lw          $t3, 0x7F48($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7F48);
    // 0x80212BCC: addiu       $a2, $s2, 0x38
    ctx->r6 = ADD32(ctx->r18, 0X38);
    // 0x80212BD0: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80212BD4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80212BD8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80212BDC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80212BE0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80212BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212BE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212BEC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212BF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212BF4: jal         0x800106F0
    // 0x80212BF8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x80212BF8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_2:
    // 0x80212BFC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80212C00: lw          $t6, 0x7F44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F44);
    // 0x80212C04: addiu       $a2, $s2, 0x58
    ctx->r6 = ADD32(ctx->r18, 0X58);
    // 0x80212C08: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80212C0C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80212C10: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80212C14: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80212C18: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x80212C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212C20: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212C24: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212C28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212C2C: jal         0x800106F0
    // 0x80212C30: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x80212C30: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_3:
    // 0x80212C34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80212C38: lw          $t9, 0x7F44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F44);
    // 0x80212C3C: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x80212C40: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80212C44: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80212C48: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x80212C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212C50: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80212C54: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212C58: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212C5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212C60: jal         0x800106F0
    // 0x80212C64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80212C64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_4:
    // 0x80212C68: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80212C6C: lw          $t1, 0x7F44($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7F44);
    // 0x80212C70: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80212C74: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80212C78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80212C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212C80: addiu       $a2, $s2, 0x6C
    ctx->r6 = ADD32(ctx->r18, 0X6C);
    // 0x80212C84: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212C88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212C8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212C90: jal         0x800106F0
    // 0x80212C94: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80212C94: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_5:
    // 0x80212C98: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80212C9C: lw          $t3, 0x7F40($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7F40);
    // 0x80212CA0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80212CA4: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80212CA8: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80212CAC: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80212CB0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80212CB4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80212CB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80212CBC: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x80212CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212CC4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80212CC8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212CCC: jal         0x800106F0
    // 0x80212CD0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x80212CD0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_6:
    // 0x80212CD4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212CD8: lw          $t7, 0x7F48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F48);
    // 0x80212CDC: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80212CE0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80212CE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212CE8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80212CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212CF0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80212CF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212CF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212CFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212D00: jal         0x800106F0
    // 0x80212D04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_7;
    // 0x80212D04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x80212D08: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80212D0C: lw          $t9, 0x7F48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F48);
    // 0x80212D10: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80212D14: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80212D18: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80212D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212D20: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80212D24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80212D28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212D2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212D30: jal         0x800106F0
    // 0x80212D34: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_8;
    // 0x80212D34: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_8:
    // 0x80212D38: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80212D3C: lw          $t1, 0x7F44($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7F44);
    // 0x80212D40: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80212D44: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80212D48: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80212D4C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80212D50: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212D54: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80212D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212D5C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80212D60: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80212D64: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212D68: jal         0x800106F0
    // 0x80212D6C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_9;
    // 0x80212D6C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_9:
    // 0x80212D70: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80212D74: lw          $t5, 0x7F30($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7F30);
    // 0x80212D78: addiu       $a2, $s2, -0x3
    ctx->r6 = ADD32(ctx->r18, -0X3);
    // 0x80212D7C: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80212D80: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212D84: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80212D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212D8C: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x80212D90: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x80212D94: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212D98: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212D9C: jal         0x800106F0
    // 0x80212DA0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_10;
    // 0x80212DA0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_10:
    // 0x80212DA4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212DA8: lw          $t7, 0x7F20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F20);
    // 0x80212DAC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80212DB0: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80212DB4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80212DB8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80212DBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80212DC0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212DC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212DCC: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80212DD0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212DD4: jal         0x800106F0
    // 0x80212DD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_11;
    // 0x80212DD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_11:
    // 0x80212DDC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80212DE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80212DE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80212DE8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80212DEC: jr          $ra
    // 0x80212DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80212DF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8020E838_66D7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E838: beq         $a0, $zero, L_8020E8E0
    if (ctx->r4 == 0) {
        // 0x8020E83C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8020E8E0;
    }
    // 0x8020E83C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E840: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8020E844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8020E848: sb          $a2, 0x54($v0)
    MEM_B(0X54, ctx->r2) = ctx->r6;
    // 0x8020E84C: beq         $v1, $zero, L_8020E858
    if (ctx->r3 == 0) {
        // 0x8020E850: addiu       $a1, $v0, 0xC
        ctx->r5 = ADD32(ctx->r2, 0XC);
            goto L_8020E858;
    }
    // 0x8020E850: addiu       $a1, $v0, 0xC
    ctx->r5 = ADD32(ctx->r2, 0XC);
    // 0x8020E854: sb          $a2, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r6;
L_8020E858:
    // 0x8020E858: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8020E85C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020E860: beql        $a0, $zero, L_8020E870
    if (ctx->r4 == 0) {
        // 0x8020E864: lw          $a0, 0x8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X8);
            goto L_8020E870;
    }
    goto skip_0;
    // 0x8020E864: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x8020E868: sb          $a2, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r6;
    // 0x8020E86C: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
L_8020E870:
    // 0x8020E870: beql        $a0, $zero, L_8020E880
    if (ctx->r4 == 0) {
        // 0x8020E874: lw          $a0, 0xC($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XC);
            goto L_8020E880;
    }
    goto skip_1;
    // 0x8020E874: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    skip_1:
    // 0x8020E878: sb          $a2, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r6;
    // 0x8020E87C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
L_8020E880:
    // 0x8020E880: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8020E884: beql        $a0, $zero, L_8020E894
    if (ctx->r4 == 0) {
        // 0x8020E888: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_8020E894;
    }
    goto skip_2;
    // 0x8020E888: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    skip_2:
    // 0x8020E88C: sb          $a2, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r6;
    // 0x8020E890: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_8020E894:
    // 0x8020E894: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8020E898: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8020E89C: beql        $v0, $zero, L_8020E8AC
    if (ctx->r2 == 0) {
        // 0x8020E8A0: lw          $v0, 0x8($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X8);
            goto L_8020E8AC;
    }
    goto skip_3;
    // 0x8020E8A0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    skip_3:
    // 0x8020E8A4: sb          $a2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r6;
    // 0x8020E8A8: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
L_8020E8AC:
    // 0x8020E8AC: beql        $v0, $zero, L_8020E8BC
    if (ctx->r2 == 0) {
        // 0x8020E8B0: lw          $v0, 0xC($a1)
        ctx->r2 = MEM_W(ctx->r5, 0XC);
            goto L_8020E8BC;
    }
    goto skip_4;
    // 0x8020E8B0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    skip_4:
    // 0x8020E8B4: sb          $a2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r6;
    // 0x8020E8B8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
L_8020E8BC:
    // 0x8020E8BC: beql        $v0, $zero, L_8020E8CC
    if (ctx->r2 == 0) {
        // 0x8020E8C0: lw          $v0, 0x10($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X10);
            goto L_8020E8CC;
    }
    goto skip_5;
    // 0x8020E8C0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    skip_5:
    // 0x8020E8C4: sb          $a2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r6;
    // 0x8020E8C8: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
L_8020E8CC:
    // 0x8020E8CC: beq         $v0, $zero, L_8020E8D8
    if (ctx->r2 == 0) {
        // 0x8020E8D0: nop
    
            goto L_8020E8D8;
    }
    // 0x8020E8D0: nop

    // 0x8020E8D4: sb          $a2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r6;
L_8020E8D8:
    // 0x8020E8D8: bne         $a0, $v1, L_8020E894
    if (ctx->r4 != ctx->r3) {
        // 0x8020E8DC: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8020E894;
    }
    // 0x8020E8DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_8020E8E0:
    // 0x8020E8E0: jr          $ra
    // 0x8020E8E4: nop

    TRACE_RETURN()
    return;
    // 0x8020E8E4: nop

;}
RECOMP_FUNC void func_802145CC_67357C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802145CC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802145D0: addiu       $t7, $t7, 0x6F68
    ctx->r15 = ADD32(ctx->r15, 0X6F68);
    // 0x802145D4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x802145D8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802145DC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802145E0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x802145E4: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x802145E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802145EC: jr          $ra
    // 0x802145F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x802145F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80214284_673234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214284: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021428C: beq         $a0, $zero, L_802142F4
    if (ctx->r4 == 0) {
        // 0x80214290: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_802142F4;
    }
    // 0x80214290: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80214294: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80214298: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8021429C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802142A0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802142A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802142A8: jal         0x80212010
    // 0x802142AC: sb          $t7, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r15;
    func_80212010_670FC0(rdram, ctx);
        goto after_0;
    // 0x802142AC: sb          $t7, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r15;
    after_0:
    // 0x802142B0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802142B4: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x802142B8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802142BC: jal         0x80010374
    // 0x802142C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80010374_10F74(rdram, ctx);
        goto after_1;
    // 0x802142C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802142C4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802142C8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x802142CC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x802142D0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x802142D4: beq         $a1, $zero, L_802142EC
    if (ctx->r5 == 0) {
        // 0x802142D8: nop
    
            goto L_802142EC;
    }
    // 0x802142D8: nop

    // 0x802142DC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x802142E0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x802142E4: jal         0x80014B74
    // 0x802142E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x802142E8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
L_802142EC:
    // 0x802142EC: jal         0x80034EF8
    // 0x802142F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_3;
    // 0x802142F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
L_802142F4:
    // 0x802142F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802142F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802142FC: jr          $ra
    // 0x80214300: nop

    TRACE_RETURN()
    return;
    // 0x80214300: nop

;}
RECOMP_FUNC void func_80216648_6755F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216648: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021664C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216650: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80216654: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216658: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021665C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80216660: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80216664: jr          $ra
    // 0x80216668: lbu         $v0, 0x7020($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7020);
    TRACE_RETURN()
    return;
    // 0x80216668: lbu         $v0, 0x7020($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7020);
;}
RECOMP_FUNC void func_8020D5D0_66C580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D5D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D5D4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x8020D5D8: addiu       $t1, $t1, 0x7CD0
    ctx->r9 = ADD32(ctx->r9, 0X7CD0);
    // 0x8020D5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D5E0: bgtz        $a0, L_8020D5F0
    if (SIGNED(ctx->r4) > 0) {
        // 0x8020D5E4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8020D5F0;
    }
    // 0x8020D5E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020D5E8: b           L_8020D8A4
    // 0x8020D5EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8020D8A4;
    // 0x8020D5EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8020D5F0:
    // 0x8020D5F0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020D5F4: addiu       $v0, $v0, 0x7CD8
    ctx->r2 = ADD32(ctx->r2, 0X7CD8);
    // 0x8020D5F8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8020D5FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D600: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8020D604: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8020D608: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D60C: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8020D610: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8020D614: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x8020D618: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020D61C: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8020D620: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8020D624: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D628: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8020D62C: ori         $t2, $t2, 0x1701
    ctx->r10 = ctx->r10 | 0X1701;
    // 0x8020D630: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020D634: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8020D638: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8020D63C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D640: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8020D644: ori         $t3, $t3, 0x402
    ctx->r11 = ctx->r11 | 0X402;
    // 0x8020D648: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x8020D64C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8020D650: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x8020D654: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8020D658: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8020D65C: ori         $t5, $t5, 0x602
    ctx->r13 = ctx->r13 | 0X602;
    // 0x8020D660: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D664: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x8020D668: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8020D66C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020D670: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D674: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8020D678: ori         $t6, $t6, 0x801
    ctx->r14 = ctx->r14 | 0X801;
    // 0x8020D67C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D680: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8020D684: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020D688: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8020D68C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x8020D690: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D694: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8020D698: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020D69C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8020D6A0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D6A4: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8020D6A8: ori         $t8, $t8, 0x1102
    ctx->r24 = ctx->r24 | 0X1102;
    // 0x8020D6AC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020D6B0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8020D6B4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8020D6B8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8020D6BC: ori         $t9, $t9, 0x1301
    ctx->r25 = ctx->r25 | 0X1301;
    // 0x8020D6C0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8020D6C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D6C8: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x8020D6CC: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x8020D6D0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8020D6D4: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8020D6D8: ori         $t3, $t3, 0xC02
    ctx->r11 = ctx->r11 | 0XC02;
    // 0x8020D6DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D6E0: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x8020D6E4: addiu       $t4, $zero, 0x2000
    ctx->r12 = ADD32(0, 0X2000);
    // 0x8020D6E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020D6EC: sw          $t4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r12;
    // 0x8020D6F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D6F4: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8020D6F8: ori         $t5, $t5, 0x903
    ctx->r13 = ctx->r13 | 0X903;
    // 0x8020D6FC: addiu       $t6, $zero, 0xC00
    ctx->r14 = ADD32(0, 0XC00);
    // 0x8020D700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D704: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8020D708: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8020D70C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D710: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8020D714: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8020D718: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020D71C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8020D720: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8020D724: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D728: lui         $t9, 0xF
    ctx->r25 = S32(0XF << 16);
    // 0x8020D72C: ori         $t9, $t9, 0x3205
    ctx->r25 = ctx->r25 | 0X3205;
    // 0x8020D730: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x8020D734: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020D738: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8020D73C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8020D740: lui         $t3, 0x3
    ctx->r11 = S32(0X3 << 16);
    // 0x8020D744: ori         $t3, $t3, 0x2205
    ctx->r11 = ctx->r11 | 0X2205;
    // 0x8020D748: lui         $t2, 0xB700
    ctx->r10 = S32(0XB700 << 16);
    // 0x8020D74C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x8020D750: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x8020D754: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D758: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8020D75C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D760: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8020D764: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x8020D768: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020D76C: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x8020D770: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8020D774: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D778: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8020D77C: lui         $t6, 0xC811
    ctx->r14 = S32(0XC811 << 16);
    // 0x8020D780: ori         $t6, $t6, 0x3078
    ctx->r14 = ctx->r14 | 0X3078;
    // 0x8020D784: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8020D788: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D78C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8020D790: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8020D794: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D798: lui         $t7, 0xFC12
    ctx->r15 = S32(0XFC12 << 16);
    // 0x8020D79C: ori         $t7, $t7, 0x7FFF
    ctx->r15 = ctx->r15 | 0X7FFF;
    // 0x8020D7A0: addiu       $t8, $zero, -0xDC8
    ctx->r24 = ADD32(0, -0XDC8);
    // 0x8020D7A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020D7A8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8020D7AC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8020D7B0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D7B4: addiu       $t2, $zero, -0x80
    ctx->r10 = ADD32(0, -0X80);
    // 0x8020D7B8: lui         $t9, 0xF800
    ctx->r25 = S32(0XF800 << 16);
    // 0x8020D7BC: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8020D7C0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8020D7C4: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x8020D7C8: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x8020D7CC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020D7D0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8020D7D4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8020D7D8: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x8020D7DC: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x8020D7E0: subu        $a3, $t5, $t4
    ctx->r7 = SUB32(ctx->r13, ctx->r12);
    // 0x8020D7E4: ori         $t6, $t6, 0xF400
    ctx->r14 = ctx->r14 | 0XF400;
    // 0x8020D7E8: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x8020D7EC: negu        $t2, $t4
    ctx->r10 = SUB32(0, ctx->r12);
    // 0x8020D7F0: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8020D7F4: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x8020D7F8: mflo        $t7
    ctx->r15 = lo;
    // 0x8020D7FC: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x8020D800: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8020D804: div         $zero, $t5, $a3
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r7)));
    // 0x8020D808: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D80C: bne         $a3, $zero, L_8020D818
    if (ctx->r7 != 0) {
        // 0x8020D810: nop
    
            goto L_8020D818;
    }
    // 0x8020D810: nop

    // 0x8020D814: break       7
    do_break(2149636116);
L_8020D818:
    // 0x8020D818: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8020D81C: bne         $a3, $at, L_8020D830
    if (ctx->r7 != ctx->r1) {
        // 0x8020D820: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8020D830;
    }
    // 0x8020D820: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D824: bne         $t6, $at, L_8020D830
    if (ctx->r14 != ctx->r1) {
        // 0x8020D828: nop
    
            goto L_8020D830;
    }
    // 0x8020D828: nop

    // 0x8020D82C: break       6
    do_break(2149636140);
L_8020D830:
    // 0x8020D830: addu        $at, $t6, $zero
    ctx->r1 = ADD32(ctx->r14, 0);
    // 0x8020D834: mflo        $t6
    ctx->r14 = lo;
    // 0x8020D838: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8020D83C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8020D840: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8020D844: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x8020D848: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8020D84C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8020D850: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8020D854: subu        $t2, $a2, $t1
    ctx->r10 = SUB32(ctx->r6, ctx->r9);
    // 0x8020D858: bne         $a3, $zero, L_8020D864
    if (ctx->r7 != 0) {
        // 0x8020D85C: nop
    
            goto L_8020D864;
    }
    // 0x8020D85C: nop

    // 0x8020D860: break       7
    do_break(2149636192);
L_8020D864:
    // 0x8020D864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8020D868: bne         $a3, $at, L_8020D87C
    if (ctx->r7 != ctx->r1) {
        // 0x8020D86C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8020D87C;
    }
    // 0x8020D86C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D870: bne         $t5, $at, L_8020D87C
    if (ctx->r13 != ctx->r1) {
        // 0x8020D874: nop
    
            goto L_8020D87C;
    }
    // 0x8020D874: nop

    // 0x8020D878: break       6
    do_break(2149636216);
L_8020D87C:
    // 0x8020D87C: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x8020D880: and         $t3, $v0, $t2
    ctx->r11 = ctx->r2 & ctx->r10;
    // 0x8020D884: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8020D888: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8020D88C: and         $a1, $t3, $a2
    ctx->r5 = ctx->r11 & ctx->r6;
    // 0x8020D890: and         $a0, $t1, $a2
    ctx->r4 = ctx->r9 & ctx->r6;
    // 0x8020D894: jal         0x80040620
    // 0x8020D898: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D898: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    after_0:
    // 0x8020D89C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x8020D8A0: addiu       $v0, $t1, 0x7CD0
    ctx->r2 = ADD32(ctx->r9, 0X7CD0);
L_8020D8A4:
    // 0x8020D8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D8AC: jr          $ra
    // 0x8020D8B0: nop

    TRACE_RETURN()
    return;
    // 0x8020D8B0: nop

;}
RECOMP_FUNC void func_8020E328_66D2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E328: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020E32C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8020E330: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x8020E334: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8020E338: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8020E33C: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x8020E340: swc1        $f6, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f6.u32l;
    // 0x8020E344: jr          $ra
    // 0x8020E348: swc1        $f10, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x8020E348: swc1        $f10, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_802110CC_67007C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802110CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802110D0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802110D4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802110D8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802110DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802110E0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802110E4: lw          $s0, 0x5C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X5C);
    // 0x802110E8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802110EC: or          $t7, $s0, $at
    ctx->r15 = ctx->r16 | ctx->r1;
    // 0x802110F0: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x802110F4: jal         0x800108BC
    // 0x802110F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x802110F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802110FC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80211100: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80211104: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80211108: lw          $a2, 0x68($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X68);
    // 0x8021110C: lw          $a1, 0x64($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X64);
    // 0x80211110: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80211114: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80211118: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021111C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80211120: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80211124: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80211128: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    // 0x8021112C: jal         0x800108E4
    // 0x80211130: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x80211130: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    after_1:
    // 0x80211134: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80211138: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021113C: jal         0x800109A4
    // 0x80211140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_2;
    // 0x80211140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80211144: jal         0x80010B60
    // 0x80211148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80010B60_11760(rdram, ctx);
        goto after_3;
    // 0x80211148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8021114C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80211150: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80211154: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80211158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021115C: jal         0x80010980
    // 0x80211160: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80010980_11580(rdram, ctx);
        goto after_4;
    // 0x80211160: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_4:
    // 0x80211164: jal         0x8020F5F0
    // 0x80211168: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    func_8020F5F0_66E5A0(rdram, ctx);
        goto after_5;
    // 0x80211168: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_5:
    // 0x8021116C: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x80211170: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x80211174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211178: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8021117C: addiu       $a1, $a1, 0x5
    ctx->r5 = ADD32(ctx->r5, 0X5);
    // 0x80211180: jal         0x80010E9C
    // 0x80211184: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_6;
    // 0x80211184: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    after_6:
    // 0x80211188: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8021118C: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x80211190: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80211194: lw          $v1, 0x30($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X30);
    // 0x80211198: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x8021119C: subu        $t3, $a2, $v1
    ctx->r11 = SUB32(ctx->r6, ctx->r3);
    // 0x802111A0: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x802111A4: and         $a1, $t4, $a2
    ctx->r5 = ctx->r12 & ctx->r6;
    // 0x802111A8: jal         0x80040620
    // 0x802111AC: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_7;
    // 0x802111AC: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_7:
    // 0x802111B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802111B4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802111B8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802111BC: jr          $ra
    // 0x802111C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802111C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80213424_6723D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213424: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80213428: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8021342C: lw          $t7, 0x7F60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F60);
    // 0x80213430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80213434: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80213438: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8021343C: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x80213440: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213444: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80213448: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021344C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80213450: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213454: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213458: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8021345C: jal         0x800106F0
    // 0x80213460: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80213460: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80213464: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80213468: lw          $t9, 0x7F64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F64);
    // 0x8021346C: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x80213470: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80213474: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80213478: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8021347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213480: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x80213484: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213488: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x8021348C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213490: jal         0x800106F0
    // 0x80213494: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x80213494: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80213498: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8021349C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x802134A0: lw          $a3, -0x3948($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3948);
    // 0x802134A4: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x802134A8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x802134AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802134B0: jal         0x802125E4
    // 0x802134B4: addiu       $a1, $s1, 0x29
    ctx->r5 = ADD32(ctx->r17, 0X29);
    func_802125E4_671594(rdram, ctx);
        goto after_2;
    // 0x802134B4: addiu       $a1, $s1, 0x29
    ctx->r5 = ADD32(ctx->r17, 0X29);
    after_2:
    // 0x802134B8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x802134BC: lw          $t1, -0x3938($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3938);
    // 0x802134C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802134C4: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802134C8: beq         $t1, $zero, L_802134FC
    if (ctx->r9 == 0) {
        // 0x802134CC: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_802134FC;
    }
    // 0x802134CC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802134D0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802134D4: lw          $t3, 0x7FAC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7FAC);
    // 0x802134D8: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x802134DC: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x802134E0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802134E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802134E8: addiu       $a2, $a2, 0x1E
    ctx->r6 = ADD32(ctx->r6, 0X1E);
    // 0x802134EC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802134F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802134F4: jal         0x800106F0
    // 0x802134F8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x802134F8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_3:
L_802134FC:
    // 0x802134FC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80213500: lw          $t5, -0x3928($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3928);
    // 0x80213504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213508: addiu       $a1, $s1, 0x3F
    ctx->r5 = ADD32(ctx->r17, 0X3F);
    // 0x8021350C: beq         $t5, $zero, L_8021353C
    if (ctx->r13 == 0) {
        // 0x80213510: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_8021353C;
    }
    // 0x80213510: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80213514: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80213518: lw          $t7, 0x7F7C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F7C);
    // 0x8021351C: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80213520: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80213524: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80213528: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021352C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213530: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213534: jal         0x800106F0
    // 0x80213538: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80213538: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
L_8021353C:
    // 0x8021353C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80213540: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80213544: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80213548: jr          $ra
    // 0x8021354C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021354C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8020E630_66D5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E630: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8020E634: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8020E638: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020E63C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8020E640: lui         $a0, 0x804
    ctx->r4 = S32(0X804 << 16);
    // 0x8020E644: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    // 0x8020E648: jal         0x80014840
    // 0x8020E64C: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x8020E64C: addiu       $a1, $zero, 0x4D0
    ctx->r5 = ADD32(0, 0X4D0);
    after_0:
    // 0x8020E650: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8020E654: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x8020E658: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x8020E65C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8020E660: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8020E664: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8020E668: lw          $v1, 0xA8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XA8);
    // 0x8020E66C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8020E670: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x8020E674: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x8020E678: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x8020E67C: addiu       $t1, $t1, 0x5C
    ctx->r9 = ADD32(ctx->r9, 0X5C);
    // 0x8020E680: subu        $t2, $t9, $v1
    ctx->r10 = SUB32(ctx->r25, ctx->r3);
    // 0x8020E684: addiu       $t8, $v1, 0x5
    ctx->r24 = ADD32(ctx->r3, 0X5);
    // 0x8020E688: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8020E68C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8020E690: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8020E694: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8020E698: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8020E69C: addiu       $a1, $a1, -0x2120
    ctx->r5 = ADD32(ctx->r5, -0X2120);
    // 0x8020E6A0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8020E6A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8020E6A8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8020E6AC: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8020E6B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8020E6B4: jal         0x8020D8B4
    // 0x8020E6B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8020D8B4_66C864(rdram, ctx);
        goto after_1;
    // 0x8020E6B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
    // 0x8020E6BC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8020E6C0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020E6C4: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x8020E6C8: lw          $t6, 0x50($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X50);
    // 0x8020E6CC: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8020E6D0: lw          $t7, 0x4C($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4C);
    // 0x8020E6D4: lw          $v1, 0x40($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X40);
    // 0x8020E6D8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8020E6DC: beq         $v1, $zero, L_8020E700
    if (ctx->r3 == 0) {
        // 0x8020E6E0: sw          $t8, 0x4C($t1)
        MEM_W(0X4C, ctx->r9) = ctx->r24;
            goto L_8020E700;
    }
    // 0x8020E6E0: sw          $t8, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r24;
    // 0x8020E6E4: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x8020E6E8: addiu       $t2, $t9, 0x20
    ctx->r10 = ADD32(ctx->r25, 0X20);
    // 0x8020E6EC: sh          $t2, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r10;
    // 0x8020E6F0: lw          $v1, 0x40($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X40);
    // 0x8020E6F4: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
    // 0x8020E6F8: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8020E6FC: sh          $t4, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r12;
L_8020E700:
    // 0x8020E700: lw          $t5, 0x48($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X48);
    // 0x8020E704: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8020E708: slti        $at, $t6, 0x15
    ctx->r1 = SIGNED(ctx->r14) < 0X15 ? 1 : 0;
    // 0x8020E70C: bne         $at, $zero, L_8020E800
    if (ctx->r1 != 0) {
        // 0x8020E710: sw          $t6, 0x48($t1)
        MEM_W(0X48, ctx->r9) = ctx->r14;
            goto L_8020E800;
    }
    // 0x8020E710: sw          $t6, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->r14;
    // 0x8020E714: lbu         $t8, 0x54($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X54);
    // 0x8020E718: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8020E71C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8020E720: bnel        $t8, $zero, L_8020E804
    if (ctx->r24 != 0) {
        // 0x8020E724: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8020E804;
    }
    goto skip_0;
    // 0x8020E724: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x8020E728: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8020E72C: beql        $v0, $zero, L_8020E744
    if (ctx->r2 == 0) {
        // 0x8020E730: lw          $v1, 0x4($t1)
        ctx->r3 = MEM_W(ctx->r9, 0X4);
            goto L_8020E744;
    }
    goto skip_1;
    // 0x8020E730: lw          $v1, 0x4($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X4);
    skip_1:
    // 0x8020E734: lbu         $t9, 0x64($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X64);
    // 0x8020E738: xori        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 ^ 0X1;
    // 0x8020E73C: sb          $t2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r10;
    // 0x8020E740: lw          $v1, 0x4($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X4);
L_8020E744:
    // 0x8020E744: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8020E748: beql        $v1, $zero, L_8020E760
    if (ctx->r3 == 0) {
        // 0x8020E74C: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_8020E760;
    }
    goto skip_2;
    // 0x8020E74C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x8020E750: lbu         $t3, 0x64($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X64);
    // 0x8020E754: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x8020E758: sb          $t4, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r12;
    // 0x8020E75C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_8020E760:
    // 0x8020E760: beql        $v1, $zero, L_8020E778
    if (ctx->r3 == 0) {
        // 0x8020E764: lw          $v1, 0xC($v0)
        ctx->r3 = MEM_W(ctx->r2, 0XC);
            goto L_8020E778;
    }
    goto skip_3;
    // 0x8020E764: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    skip_3:
    // 0x8020E768: lbu         $t5, 0x64($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X64);
    // 0x8020E76C: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8020E770: sb          $t6, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r14;
    // 0x8020E774: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
L_8020E778:
    // 0x8020E778: beql        $v1, $zero, L_8020E790
    if (ctx->r3 == 0) {
        // 0x8020E77C: addiu       $v1, $t1, 0xC
        ctx->r3 = ADD32(ctx->r9, 0XC);
            goto L_8020E790;
    }
    goto skip_4;
    // 0x8020E77C: addiu       $v1, $t1, 0xC
    ctx->r3 = ADD32(ctx->r9, 0XC);
    skip_4:
    // 0x8020E780: lbu         $t7, 0x64($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X64);
    // 0x8020E784: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8020E788: sb          $t8, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r24;
    // 0x8020E78C: addiu       $v1, $t1, 0xC
    ctx->r3 = ADD32(ctx->r9, 0XC);
L_8020E790:
    // 0x8020E790: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8020E794: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8020E798: beql        $v0, $zero, L_8020E7B0
    if (ctx->r2 == 0) {
        // 0x8020E79C: lw          $v0, 0x8($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X8);
            goto L_8020E7B0;
    }
    goto skip_5;
    // 0x8020E79C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    skip_5:
    // 0x8020E7A0: lbu         $t9, 0x64($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X64);
    // 0x8020E7A4: xori        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 ^ 0X1;
    // 0x8020E7A8: sb          $t2, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r10;
    // 0x8020E7AC: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
L_8020E7B0:
    // 0x8020E7B0: beql        $v0, $zero, L_8020E7C8
    if (ctx->r2 == 0) {
        // 0x8020E7B4: lw          $v0, 0xC($v1)
        ctx->r2 = MEM_W(ctx->r3, 0XC);
            goto L_8020E7C8;
    }
    goto skip_6;
    // 0x8020E7B4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    skip_6:
    // 0x8020E7B8: lbu         $t3, 0x64($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X64);
    // 0x8020E7BC: xori        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 ^ 0X1;
    // 0x8020E7C0: sb          $t4, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r12;
    // 0x8020E7C4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
L_8020E7C8:
    // 0x8020E7C8: beql        $v0, $zero, L_8020E7E0
    if (ctx->r2 == 0) {
        // 0x8020E7CC: lw          $v0, 0x10($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X10);
            goto L_8020E7E0;
    }
    goto skip_7;
    // 0x8020E7CC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    skip_7:
    // 0x8020E7D0: lbu         $t5, 0x64($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X64);
    // 0x8020E7D4: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8020E7D8: sb          $t6, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r14;
    // 0x8020E7DC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
L_8020E7E0:
    // 0x8020E7E0: beq         $v0, $zero, L_8020E7F4
    if (ctx->r2 == 0) {
        // 0x8020E7E4: nop
    
            goto L_8020E7F4;
    }
    // 0x8020E7E4: nop

    // 0x8020E7E8: lbu         $t7, 0x64($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X64);
    // 0x8020E7EC: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8020E7F0: sb          $t8, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r24;
L_8020E7F4:
    // 0x8020E7F4: bne         $a0, $a1, L_8020E790
    if (ctx->r4 != ctx->r5) {
        // 0x8020E7F8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8020E790;
    }
    // 0x8020E7F8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8020E7FC: sw          $zero, 0x48($t1)
    MEM_W(0X48, ctx->r9) = 0;
L_8020E800:
    // 0x8020E800: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8020E804:
    // 0x8020E804: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8020E808: jr          $ra
    // 0x8020E80C: nop

    TRACE_RETURN()
    return;
    // 0x8020E80C: nop

;}
RECOMP_FUNC void func_802149AC_67395C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802149AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802149B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802149B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802149B8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802149BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802149C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802149C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802149C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802149CC: addiu       $a1, $a1, 0x498C
    ctx->r5 = ADD32(ctx->r5, 0X498C);
    // 0x802149D0: jal         0x80034E08
    // 0x802149D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802149D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802149D8: bne         $v0, $zero, L_802149E8
    if (ctx->r2 != 0) {
        // 0x802149DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802149E8;
    }
    // 0x802149DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802149E0: b           L_80214A20
    // 0x802149E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214A20;
    // 0x802149E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802149E8:
    // 0x802149E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802149EC: jal         0x80011968
    // 0x802149F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x802149F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x802149F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802149F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802149FC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80214A00: jal         0x80011908
    // 0x80214A04: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x80214A04: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80214A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214A0C: jal         0x802148F8
    // 0x80214A10: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_802148F8_6738A8(rdram, ctx);
        goto after_3;
    // 0x80214A10: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x80214A14: jal         0x80011760
    // 0x80214A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_4;
    // 0x80214A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80214A1C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80214A20:
    // 0x80214A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214A24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80214A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80214A2C: jr          $ra
    // 0x80214A30: nop

    TRACE_RETURN()
    return;
    // 0x80214A30: nop

;}
RECOMP_FUNC void func_8020EED0_66DE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EED0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8020EED4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020EED8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8020EEDC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8020EEE0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8020EEE4: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x8020EEE8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020EEEC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8020EEF0: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8020EEF4: bne         $at, $zero, L_8020EF18
    if (ctx->r1 != 0) {
        // 0x8020EEF8: addiu       $s0, $a1, 0x5C
        ctx->r16 = ADD32(ctx->r5, 0X5C);
            goto L_8020EF18;
    }
    // 0x8020EEF8: addiu       $s0, $a1, 0x5C
    ctx->r16 = ADD32(ctx->r5, 0X5C);
    // 0x8020EEFC: sw          $t7, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r15;
    // 0x8020EF00: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8020EF04: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8020EF08: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020EF0C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8020EF10: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8020EF14: sb          $t8, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r24;
L_8020EF18:
    // 0x8020EF18: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020EF1C: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x8020EF20: addiu       $a0, $a0, 0x7E90
    ctx->r4 = ADD32(ctx->r4, 0X7E90);
    // 0x8020EF24: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020EF28: or          $t0, $a0, $at
    ctx->r8 = ctx->r4 | ctx->r1;
    // 0x8020EF2C: jal         0x800108BC
    // 0x8020EF30: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x8020EF30: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    after_0:
    // 0x8020EF34: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x8020EF38: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8020EF3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8020EF40: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020EF44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020EF48: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x8020EF4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020EF50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020EF54: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8020EF58: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8020EF5C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8020EF60: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8020EF64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020EF68: jal         0x800108E4
    // 0x8020EF6C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x8020EF6C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_1:
    // 0x8020EF70: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x8020EF74: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x8020EF78: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8020EF7C: lw          $v1, 0x30($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X30);
    // 0x8020EF80: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8020EF84: subu        $t7, $a2, $v1
    ctx->r15 = SUB32(ctx->r6, ctx->r3);
    // 0x8020EF88: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8020EF8C: and         $a1, $t8, $a2
    ctx->r5 = ctx->r24 & ctx->r6;
    // 0x8020EF90: jal         0x80040620
    // 0x8020EF94: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8020EF94: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_2:
    // 0x8020EF98: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x8020EF9C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8020EFA0: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x8020EFA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8020EFA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8020EFAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8020EFB0: jr          $ra
    // 0x8020EFB4: nop

    TRACE_RETURN()
    return;
    // 0x8020EFB4: nop

;}
RECOMP_FUNC void func_8020E2F8_66D2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E2F8: jr          $ra
    // 0x8020E2FC: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8020E2FC: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80216690_675640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216690: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80216694: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216698: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021669C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802166A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802166A4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802166A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802166AC: jr          $ra
    // 0x802166B0: lb          $v0, 0x7029($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X7029);
    TRACE_RETURN()
    return;
    // 0x802166B0: lb          $v0, 0x7029($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X7029);
;}
RECOMP_FUNC void func_80214E38_673DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214E38: lwc1        $f4, 0xA4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80214E3C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80214E40: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80214E44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80214E48: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80214E4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214E50: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80214E54: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80214E58: swc1        $f16, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f16.u32l;
    // 0x80214E5C: lwc1        $f18, 0x7BA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BA8);
    // 0x80214E60: jr          $ra
    // 0x80214E64: swc1        $f18, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80214E64: swc1        $f18, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80215D60_67F740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215D60: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80215D64: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80215D68: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215D6C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x80215D70: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80215D74: nop

    // 0x80215D78: bc1fl       L_80215D9C
    if (!c1cs) {
        // 0x80215D7C: lwc1        $f10, 0x14($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80215D9C;
    }
    goto skip_0;
    // 0x80215D7C: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    skip_0:
    // 0x80215D80: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215D84: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80215D88: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80215D8C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215D90: b           L_80215DA4
    // 0x80215D94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80215DA4;
    // 0x80215D94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80215D98: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
L_80215D9C:
    // 0x80215D9C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80215DA0: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80215DA4:
    // 0x80215DA4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80215DA8: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80215DAC: jr          $ra
    // 0x80215DB0: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80215DB0: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802122CC_67BCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122CC: jr          $ra
    // 0x802122D0: sb          $zero, 0x98($a0)
    MEM_B(0X98, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802122D0: sb          $zero, 0x98($a0)
    MEM_B(0X98, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80213D4C_67D72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213D4C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80213D50: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80213D54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80213D58: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80213D5C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213D60: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80213D64: addiu       $a1, $a1, 0x39C4
    ctx->r5 = ADD32(ctx->r5, 0X39C4);
    // 0x80213D68: jal         0x80034E08
    // 0x80213D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80213D70: bne         $v0, $zero, L_80213D80
    if (ctx->r2 != 0) {
        // 0x80213D74: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80213D80;
    }
    // 0x80213D74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213D78: b           L_80213E1C
    // 0x80213D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213E1C;
    // 0x80213D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213D80:
    // 0x80213D80: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213D84: lwc1        $f2, -0x571C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X571C);
    // 0x80213D88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80213D8C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80213D90: addiu       $a1, $a1, 0x554
    ctx->r5 = ADD32(ctx->r5, 0X554);
    // 0x80213D94: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213D98: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80213D9C: addiu       $t6, $zero, 0x277
    ctx->r14 = ADD32(0, 0X277);
    // 0x80213DA0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80213DA4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80213DA8: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80213DAC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80213DB0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213DB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213DB8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80213DBC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80213DC0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80213DC4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80213DC8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80213DCC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80213DD0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80213DD4: jal         0x8000DBF0
    // 0x80213DD8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80213DD8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80213DDC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80213DE0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80213DE4: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80213DE8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80213DEC: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x80213DF0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80213DF4: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80213DF8: addiu       $t9, $t9, 0x1D40
    ctx->r25 = ADD32(ctx->r25, 0X1D40);
    // 0x80213DFC: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x80213E00: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80213E04: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
    // 0x80213E08: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80213E0C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80213E10: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80213E14: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
    // 0x80213E18: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80213E1C:
    // 0x80213E1C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80213E20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80213E24: jr          $ra
    // 0x80213E28: nop

    TRACE_RETURN()
    return;
    // 0x80213E28: nop

;}
RECOMP_FUNC void func_80227250_690C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227250: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80227254: jr          $ra
    // 0x80227258: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80227258: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021D9C4_6873A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D9C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021D9C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021D9CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021D9D0: bgez        $t6, L_8021D9E8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021D9D4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021D9E8;
    }
    // 0x8021D9D4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021D9D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021D9DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021D9E0: nop

    // 0x8021D9E4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021D9E8:
    // 0x8021D9E8: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021D9EC: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x8021D9F0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021D9F4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021D9F8: nop

    // 0x8021D9FC: bc1fl       L_8021DA20
    if (!c1cs) {
        // 0x8021DA00: lwc1        $f18, 0x10($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021DA20;
    }
    goto skip_0;
    // 0x8021DA00: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x8021DA04: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021DA08: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021DA0C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021DA10: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021DA14: b           L_8021DA28
    // 0x8021DA18: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021DA28;
    // 0x8021DA18: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021DA1C: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
L_8021DA20:
    // 0x8021DA20: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021DA24: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021DA28:
    // 0x8021DA28: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021DA2C: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021DA30: jr          $ra
    // 0x8021DA34: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021DA34: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8020D4D0_676EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D4D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8020D4D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8020D4D8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8020D4DC: sb          $a3, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r7;
    // 0x8020D4E0: sb          $a2, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r6;
    // 0x8020D4E4: jr          $ra
    // 0x8020D4E8: sb          $a1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8020D4E8: sb          $a1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80229A54_693434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229A58: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80229A5C: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80229A60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229A64: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80229A68: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80229A6C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229A70: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80229A74: addiu       $a1, $a1, -0x69F0
    ctx->r5 = ADD32(ctx->r5, -0X69F0);
    // 0x80229A78: jal         0x80034E08
    // 0x80229A7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80229A7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80229A80: bne         $v0, $zero, L_80229A90
    if (ctx->r2 != 0) {
        // 0x80229A84: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80229A90;
    }
    // 0x80229A84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80229A88: b           L_80229BF4
    // 0x80229A8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80229BF4;
    // 0x80229A8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80229A90:
    // 0x80229A90: swc1        $f20, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f20.u32l;
    // 0x80229A94: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80229A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80229AA0: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x80229AA4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80229AA8: jal         0x80011968
    // 0x80229AAC: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x80229AAC: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x80229AB0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80229AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229AB8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80229ABC: jal         0x80011908
    // 0x80229AC0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x80229AC0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x80229AC4: jal         0x80011760
    // 0x80229AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x80229AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80229ACC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80229AD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80229AD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80229AD8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80229ADC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229AE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80229AE8: jal         0x802294C0
    // 0x80229AEC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_4;
    // 0x80229AEC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80229AF0: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x80229AF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80229AF8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229B04: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x80229B08: jal         0x802294C0
    // 0x80229B0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_5;
    // 0x80229B0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80229B10: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80229B14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80229B18: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229B20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80229B24: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80229B28: jal         0x802294C0
    // 0x80229B2C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_6;
    // 0x80229B2C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x80229B30: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x80229B34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80229B38: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80229B44: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    // 0x80229B48: jal         0x802294C0
    // 0x80229B4C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_7;
    // 0x80229B4C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x80229B50: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80229B54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80229B58: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229B64: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x80229B68: jal         0x802294C0
    // 0x80229B6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_8;
    // 0x80229B6C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80229B70: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80229B74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80229B78: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229B80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80229B84: lui         $a2, 0xC140
    ctx->r6 = S32(0XC140 << 16);
    // 0x80229B88: jal         0x802294C0
    // 0x80229B8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_9;
    // 0x80229B8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x80229B90: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80229B94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80229B98: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80229BA4: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    // 0x80229BA8: jal         0x802294C0
    // 0x80229BAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_10;
    // 0x80229BAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80229BB0: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80229BB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80229BB8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229BC4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x80229BC8: jal         0x802294C0
    // 0x80229BCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_11;
    // 0x80229BCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80229BD0: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80229BD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80229BD8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80229BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80229BE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80229BE4: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x80229BE8: jal         0x802294C0
    // 0x80229BEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_802294C0_692EA0(rdram, ctx);
        goto after_12;
    // 0x80229BEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x80229BF0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80229BF4:
    // 0x80229BF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229BF8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80229BFC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229C00: jr          $ra
    // 0x80229C04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229C04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802133B4_67CD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802133B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802133B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802133BC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x802133C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802133C4: bnel        $t6, $zero, L_802133FC
    if (ctx->r14 != 0) {
        // 0x802133C8: lwc1        $f16, 0x28($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
            goto L_802133FC;
    }
    goto skip_0;
    // 0x802133C8: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    skip_0:
    // 0x802133CC: lwc1        $f18, -0xE40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XE40);
    // 0x802133D0: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802133D4: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802133D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802133DC: lwc1        $f8, -0xE3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XE3C);
    // 0x802133E0: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802133E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802133E8: jal         0x800040A8
    // 0x802133EC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802133EC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x802133F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802133F4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x802133F8: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
L_802133FC:
    // 0x802133FC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80213400: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80213404: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80213408: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021340C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213410: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80213414: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80213418: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x8021341C: jal         0x8001B5AC
    // 0x80213420: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x80213420: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80213424: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80213428: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021342C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80213430: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80213434: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80213438: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8021343C: nop

    // 0x80213440: bc1fl       L_80213458
    if (!c1cs) {
        // 0x80213444: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80213458;
    }
    goto skip_1;
    // 0x80213444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80213448: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021344C: nop

    // 0x80213450: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x80213454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80213458:
    // 0x80213458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021345C: jr          $ra
    // 0x80213460: nop

    TRACE_RETURN()
    return;
    // 0x80213460: nop

;}
RECOMP_FUNC void func_802249A0_68E380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802249A0: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802249A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802249A8: ldc1        $f4, -0x4F20($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4F20);
    // 0x802249AC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802249B0: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x802249B4: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x802249B8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802249BC: addiu       $t1, $t1, -0x4CDC
    ctx->r9 = ADD32(ctx->r9, -0X4CDC);
    // 0x802249C0: bc1fl       L_80224A3C
    if (!c1cs) {
        // 0x802249C4: lw          $t6, 0x0($t1)
        ctx->r14 = MEM_W(ctx->r9, 0X0);
            goto L_80224A3C;
    }
    goto skip_0;
    // 0x802249C4: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x802249C8: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802249CC: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802249D0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802249D4: nop

    // 0x802249D8: bc1fl       L_802249F0
    if (!c1cs) {
        // 0x802249DC: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_802249F0;
    }
    goto skip_1;
    // 0x802249DC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x802249E0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802249E4: b           L_802249F0
    // 0x802249E8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802249F0;
    // 0x802249E8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802249EC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802249F0:
    // 0x802249F0: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802249F4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802249F8: nop

    // 0x802249FC: bc1fl       L_80224A18
    if (!c1cs) {
        // 0x80224A00: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80224A18;
    }
    goto skip_2;
    // 0x80224A00: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80224A04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80224A08: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80224A0C: b           L_80224A38
    // 0x80224A10: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80224A38;
    // 0x80224A10: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80224A14: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80224A18:
    // 0x80224A18: nop

    // 0x80224A1C: bc1fl       L_80224A34
    if (!c1cs) {
        // 0x80224A20: add.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80224A34;
    }
    goto skip_3;
    // 0x80224A20: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x80224A24: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80224A28: b           L_80224A38
    // 0x80224A2C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80224A38;
    // 0x80224A2C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80224A30: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
L_80224A34:
    // 0x80224A34: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_80224A38:
    // 0x80224A38: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
L_80224A3C:
    // 0x80224A3C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80224A40: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80224A44: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80224A48: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x80224A4C: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80224A50: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224A54: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x80224A58: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80224A5C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80224A60: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80224A64: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80224A68: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224A6C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80224A70: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80224A74: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x80224A78: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80224A7C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80224A80: addiu       $t3, $a3, 0x8
    ctx->r11 = ADD32(ctx->r7, 0X8);
    // 0x80224A84: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x80224A88: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x80224A8C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224A90: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80224A94: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80224A98: nop

    // 0x80224A9C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80224AA0: beql        $t6, $zero, L_80224AF0
    if (ctx->r14 == 0) {
        // 0x80224AA4: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_80224AF0;
    }
    goto skip_4;
    // 0x80224AA4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80224AA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80224AAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224AB0: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80224AB4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80224AB8: nop

    // 0x80224ABC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80224AC0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80224AC4: nop

    // 0x80224AC8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80224ACC: bne         $t6, $zero, L_80224AE4
    if (ctx->r14 != 0) {
        // 0x80224AD0: nop
    
            goto L_80224AE4;
    }
    // 0x80224AD0: nop

    // 0x80224AD4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80224AD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80224ADC: b           L_80224AFC
    // 0x80224AE0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80224AFC;
    // 0x80224AE0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80224AE4:
    // 0x80224AE4: b           L_80224AFC
    // 0x80224AE8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80224AFC;
    // 0x80224AE8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80224AEC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_80224AF0:
    // 0x80224AF0: nop

    // 0x80224AF4: bltz        $t6, L_80224AE4
    if (SIGNED(ctx->r14) < 0) {
        // 0x80224AF8: nop
    
            goto L_80224AE4;
    }
    // 0x80224AF8: nop

L_80224AFC:
    // 0x80224AFC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80224B00: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80224B04: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80224B08: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80224B0C: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80224B10: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80224B14: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80224B18: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80224B1C: jr          $ra
    // 0x80224B20: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80224B20: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
;}
RECOMP_FUNC void func_8020D8C4_6772A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D8C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D8CC: jal         0x80013A24
    // 0x8020D8D0: addiu       $a0, $zero, 0x4D8
    ctx->r4 = ADD32(0, 0X4D8);
    func_80013A24_14624(rdram, ctx);
        goto after_0;
    // 0x8020D8D0: addiu       $a0, $zero, 0x4D8
    ctx->r4 = ADD32(0, 0X4D8);
    after_0:
    // 0x8020D8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D8DC: jr          $ra
    // 0x8020D8E0: nop

    TRACE_RETURN()
    return;
    // 0x8020D8E0: nop

;}
