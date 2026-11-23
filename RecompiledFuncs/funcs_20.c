#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80026114_26D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026114: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x80026118: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8002611C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80026120: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80026124: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80026128: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8002612C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80026130: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80026134: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80026138: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8002613C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80026140: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80026144: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80026148: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8002614C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80026150: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80026154: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80026158: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x8002615C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026160: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80026164: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80026168: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x8002616C: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80026170: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80026174: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80026178: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x8002617C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80026180: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80026184: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80026188: sll         $a1, $a3, 1
    ctx->r5 = S32(ctx->r7 << 1);
    // 0x8002618C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80026190: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80026194: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80026198: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8002619C: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x800261A0: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x800261A4: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800261A8: addiu       $fp, $sp, 0xA8
    ctx->r30 = ADD32(ctx->r29, 0XA8);
    // 0x800261AC: lw          $s6, 0x60($s1)
    ctx->r22 = MEM_W(ctx->r17, 0X60);
    // 0x800261B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800261B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800261B8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800261BC: div.s       $f22, $f6, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800261C0: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800261C4: blez        $a1, L_800265F4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800261C8: div.s       $f26, $f4, $f6
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
            goto L_800265F4;
    }
    // 0x800261C8: div.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800261CC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800261D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800261D4: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x800261D8: ldc1        $f20, -0x3F58($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X3F58);
L_800261DC:
    // 0x800261DC: blez        $v0, L_800265E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800261E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800265E4;
    }
    // 0x800261E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800261E4: andi        $s5, $s3, 0x1
    ctx->r21 = ctx->r19 & 0X1;
    // 0x800261E8: div.s       $f24, $f26, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = DIV_S(ctx->f26.fl, ctx->f28.fl);
    // 0x800261EC: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x800261F0: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
L_800261F4:
    // 0x800261F4: bne         $t8, $zero, L_80026378
    if (ctx->r24 != 0) {
        // 0x800261F8: addiu       $a2, $sp, 0x9C
        ctx->r6 = ADD32(ctx->r29, 0X9C);
            goto L_80026378;
    }
    // 0x800261F8: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    // 0x800261FC: bne         $s5, $zero, L_800262B4
    if (ctx->r21 != 0) {
        // 0x80026200: addiu       $a0, $s3, -0x1
        ctx->r4 = ADD32(ctx->r19, -0X1);
            goto L_800262B4;
    }
    // 0x80026200: addiu       $a0, $s3, -0x1
    ctx->r4 = ADD32(ctx->r19, -0X1);
    // 0x80026204: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x80026208: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x8002620C: neg.s       $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = -ctx->f26.fl;
    // 0x80026210: bgez        $s3, L_80026220
    if (SIGNED(ctx->r19) >= 0) {
        // 0x80026214: sra         $a0, $s3, 1
        ctx->r4 = S32(SIGNED(ctx->r19) >> 1);
            goto L_80026220;
    }
    // 0x80026214: sra         $a0, $s3, 1
    ctx->r4 = S32(SIGNED(ctx->r19) >> 1);
    // 0x80026218: addiu       $at, $s3, 0x1
    ctx->r1 = ADD32(ctx->r19, 0X1);
    // 0x8002621C: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_80026220:
    // 0x80026220: div.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f28.fl);
    // 0x80026224: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x80026228: multu       $a0, $t5
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002622C: lw          $t9, 0x58($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X58);
    // 0x80026230: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80026234: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80026238: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8002623C: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x80026240: mflo        $t6
    ctx->r14 = lo;
    // 0x80026244: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80026248: addu        $a1, $t3, $t7
    ctx->r5 = ADD32(ctx->r11, ctx->r15);
    // 0x8002624C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80026250: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80026254: swc1        $f22, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f22.u32l;
    // 0x80026258: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8002625C: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80026260: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x80026264: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x80026268: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8002626C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80026270: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80026274: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026278: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8002627C: addu        $t7, $v0, $t3
    ctx->r15 = ADD32(ctx->r2, ctx->r11);
    // 0x80026280: mflo        $t4
    ctx->r12 = lo;
    // 0x80026284: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80026288: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x8002628C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026290: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80026294: mflo        $t8
    ctx->r24 = lo;
    // 0x80026298: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8002629C: addu        $t4, $t7, $t2
    ctx->r12 = ADD32(ctx->r15, ctx->r10);
    // 0x800262A0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800262A4: swc1        $f24, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f24.u32l;
    // 0x800262A8: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x800262AC: b           L_800264D8
    // 0x800262B0: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
        goto L_800264D8;
    // 0x800262B0: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
L_800262B4:
    // 0x800262B4: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x800262B8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x800262BC: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800262C0: bgez        $a0, L_800262D0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800262C4: sra         $t9, $a0, 1
        ctx->r25 = S32(SIGNED(ctx->r4) >> 1);
            goto L_800262D0;
    }
    // 0x800262C4: sra         $t9, $a0, 1
    ctx->r25 = S32(SIGNED(ctx->r4) >> 1);
    // 0x800262C8: addiu       $at, $a0, 0x1
    ctx->r1 = ADD32(ctx->r4, 0X1);
    // 0x800262CC: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_800262D0:
    // 0x800262D0: addiu       $a1, $t9, 0x1
    ctx->r5 = ADD32(ctx->r25, 0X1);
    // 0x800262D4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800262D8: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800262DC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800262E0: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800262E4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x800262E8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x800262EC: addu        $t4, $v0, $t2
    ctx->r12 = ADD32(ctx->r2, ctx->r10);
    // 0x800262F0: mflo        $t3
    ctx->r11 = lo;
    // 0x800262F4: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800262F8: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x800262FC: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026300: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80026304: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80026308: mflo        $t9
    ctx->r25 = lo;
    // 0x8002630C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80026310: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x80026314: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80026318: swc1        $f24, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f24.u32l;
    // 0x8002631C: swc1        $f30, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f30.u32l;
    // 0x80026320: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80026324: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80026328: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x8002632C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80026330: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80026334: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80026338: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002633C: addu        $t8, $v0, $t6
    ctx->r24 = ADD32(ctx->r2, ctx->r14);
    // 0x80026340: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x80026344: mflo        $t7
    ctx->r15 = lo;
    // 0x80026348: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8002634C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x80026350: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026354: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80026358: mflo        $t3
    ctx->r11 = lo;
    // 0x8002635C: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80026360: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80026364: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80026368: swc1        $f26, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f26.u32l;
    // 0x8002636C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80026370: b           L_800264D8
    // 0x80026374: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
        goto L_800264D8;
    // 0x80026374: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
L_80026378:
    // 0x80026378: bne         $s5, $zero, L_80026428
    if (ctx->r21 != 0) {
        // 0x8002637C: addiu       $a0, $s3, 0x1
        ctx->r4 = ADD32(ctx->r19, 0X1);
            goto L_80026428;
    }
    // 0x8002637C: addiu       $a0, $s3, 0x1
    ctx->r4 = ADD32(ctx->r19, 0X1);
    // 0x80026380: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x80026384: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x80026388: bgez        $s3, L_80026398
    if (SIGNED(ctx->r19) >= 0) {
        // 0x8002638C: sra         $a0, $s3, 1
        ctx->r4 = S32(SIGNED(ctx->r19) >> 1);
            goto L_80026398;
    }
    // 0x8002638C: sra         $a0, $s3, 1
    ctx->r4 = S32(SIGNED(ctx->r19) >> 1);
    // 0x80026390: addiu       $at, $s3, 0x1
    ctx->r1 = ADD32(ctx->r19, 0X1);
    // 0x80026394: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_80026398:
    // 0x80026398: addiu       $t3, $t4, 0x2
    ctx->r11 = ADD32(ctx->r12, 0X2);
    // 0x8002639C: multu       $a0, $t3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800263A0: lw          $t8, 0x58($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X58);
    // 0x800263A4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x800263A8: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800263AC: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x800263B0: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x800263B4: mflo        $t5
    ctx->r13 = lo;
    // 0x800263B8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800263BC: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
    // 0x800263C0: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800263C4: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800263C8: swc1        $f24, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f24.u32l;
    // 0x800263CC: swc1        $f30, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f30.u32l;
    // 0x800263D0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800263D4: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x800263D8: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x800263DC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x800263E0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800263E4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800263E8: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800263EC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800263F0: addu        $t6, $v0, $t9
    ctx->r14 = ADD32(ctx->r2, ctx->r25);
    // 0x800263F4: mflo        $t4
    ctx->r12 = lo;
    // 0x800263F8: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800263FC: addu        $t5, $t8, $t3
    ctx->r13 = ADD32(ctx->r24, ctx->r11);
    // 0x80026400: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026404: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80026408: mflo        $t7
    ctx->r15 = lo;
    // 0x8002640C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80026410: addu        $t4, $t6, $t2
    ctx->r12 = ADD32(ctx->r14, ctx->r10);
    // 0x80026414: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80026418: swc1        $f26, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f26.u32l;
    // 0x8002641C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80026420: b           L_800264D8
    // 0x80026424: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
        goto L_800264D8;
    // 0x80026424: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
L_80026428:
    // 0x80026428: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x8002642C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80026430: neg.s       $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = -ctx->f26.fl;
    // 0x80026434: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80026438: bgez        $a0, L_80026448
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002643C: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_80026448;
    }
    // 0x8002643C: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80026440: addiu       $at, $a0, 0x1
    ctx->r1 = ADD32(ctx->r4, 0X1);
    // 0x80026444: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_80026448:
    // 0x80026448: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8002644C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80026450: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026454: div.s       $f16, $f6, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x80026458: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8002645C: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80026460: addu        $t5, $v0, $t3
    ctx->r13 = ADD32(ctx->r2, ctx->r11);
    // 0x80026464: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80026468: addu        $t8, $v0, $t4
    ctx->r24 = ADD32(ctx->r2, ctx->r12);
    // 0x8002646C: mflo        $t7
    ctx->r15 = lo;
    // 0x80026470: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80026474: addu        $t2, $t5, $t6
    ctx->r10 = ADD32(ctx->r13, ctx->r14);
    // 0x80026478: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002647C: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80026480: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80026484: mflo        $t3
    ctx->r11 = lo;
    // 0x80026488: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8002648C: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80026490: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80026494: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x80026498: swc1        $f22, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f22.u32l;
    // 0x8002649C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800264A0: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x800264A4: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x800264A8: lw          $t5, 0x58($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X58);
    // 0x800264AC: addiu       $t3, $t4, 0x2
    ctx->r11 = ADD32(ctx->r12, 0X2);
    // 0x800264B0: multu       $a0, $t3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800264B4: addu        $t2, $t5, $t6
    ctx->r10 = ADD32(ctx->r13, ctx->r14);
    // 0x800264B8: mflo        $t8
    ctx->r24 = lo;
    // 0x800264BC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800264C0: addu        $a1, $t2, $t9
    ctx->r5 = ADD32(ctx->r10, ctx->r25);
    // 0x800264C4: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800264C8: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800264CC: swc1        $f24, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f24.u32l;
    // 0x800264D0: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x800264D4: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
L_800264D8:
    // 0x800264D8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800264DC: jal         0x80027364
    // 0x800264E0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80027364_27F64(rdram, ctx);
        goto after_0;
    // 0x800264E0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_0:
    // 0x800264E4: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800264E8: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x800264EC: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x800264F0: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800264F4: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x800264F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800264FC: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80026500: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80026504: multu       $s3, $t5
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026508: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8002650C: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026510: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80026514: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80026518: mul.d       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x8002651C: mflo        $t6
    ctx->r14 = lo;
    // 0x80026520: nop

    // 0x80026524: nop

    // 0x80026528: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002652C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80026530: mflo        $t4
    ctx->r12 = lo;
    // 0x80026534: addu        $t3, $s2, $t4
    ctx->r11 = ADD32(ctx->r18, ctx->r12);
    // 0x80026538: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8002653C: div.d       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = DIV_D(ctx->f18.d, ctx->f2.d);
    // 0x80026540: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80026544: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x80026548: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8002654C: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x80026550: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80026554: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x80026558: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x8002655C: div.d       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x80026560: multu       $s3, $t2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026564: mflo        $t9
    ctx->r25 = lo;
    // 0x80026568: nop

    // 0x8002656C: nop

    // 0x80026570: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026574: mflo        $t7
    ctx->r15 = lo;
    // 0x80026578: addu        $t5, $s2, $t7
    ctx->r13 = ADD32(ctx->r18, ctx->r15);
    // 0x8002657C: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x80026580: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x80026584: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80026588: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8002658C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80026590: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80026594: mul.d       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x80026598: div.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8002659C: multu       $s3, $t4
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800265A0: mflo        $t3
    ctx->r11 = lo;
    // 0x800265A4: nop

    // 0x800265A8: nop

    // 0x800265AC: multu       $t3, $s4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800265B0: mflo        $t8
    ctx->r24 = lo;
    // 0x800265B4: addu        $t2, $s2, $t8
    ctx->r10 = ADD32(ctx->r18, ctx->r24);
    // 0x800265B8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x800265BC: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x800265C0: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x800265C4: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x800265C8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800265CC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800265D0: bnel        $at, $zero, L_800261F4
    if (ctx->r1 != 0) {
        // 0x800265D4: andi        $t8, $s0, 0x1
        ctx->r24 = ctx->r16 & 0X1;
            goto L_800261F4;
    }
    goto skip_0;
    // 0x800265D4: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    skip_0:
    // 0x800265D8: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x800265DC: sll         $a1, $a3, 1
    ctx->r5 = S32(ctx->r7 << 1);
    // 0x800265E0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_800265E4:
    // 0x800265E4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800265E8: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800265EC: bne         $at, $zero, L_800261DC
    if (ctx->r1 != 0) {
        // 0x800265F0: nop
    
            goto L_800261DC;
    }
    // 0x800265F0: nop

L_800265F4:
    // 0x800265F4: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800265F8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800265FC: ldc1        $f20, -0x3F50($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X3F50);
    // 0x80026600: andi        $t7, $t9, 0x400
    ctx->r15 = ctx->r25 & 0X400;
    // 0x80026604: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x80026608: beq         $t7, $zero, L_80026628
    if (ctx->r15 == 0) {
        // 0x8002660C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80026628;
    }
    // 0x8002660C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80026610: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80026614: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80026618: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8002661C: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80026620: b           L_8002662C
    // 0x80026624: lh          $a0, -0x524E($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X524E);
        goto L_8002662C;
    // 0x80026624: lh          $a0, -0x524E($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X524E);
L_80026628:
    // 0x80026628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8002662C:
    // 0x8002662C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80026630: addiu       $v1, $a3, 0x1
    ctx->r3 = ADD32(ctx->r7, 0X1);
    // 0x80026634: addu        $t4, $s1, $t6
    ctx->r12 = ADD32(ctx->r17, ctx->r14);
    // 0x80026638: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8002663C: lw          $a2, 0x40($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X40);
    // 0x80026640: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80026644: bne         $at, $zero, L_80026A64
    if (ctx->r1 != 0) {
        // 0x80026648: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80026A64;
    }
    // 0x80026648: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8002664C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80026650: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80026654: nop

    // 0x80026658: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
L_8002665C:
    // 0x8002665C: bne         $at, $zero, L_80026A54
    if (ctx->r1 != 0) {
        // 0x80026660: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80026A54;
    }
    // 0x80026660: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80026664: sll         $a3, $s3, 1
    ctx->r7 = S32(ctx->r19 << 1);
    // 0x80026668: multu       $a3, $t1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002666C: addiu       $t3, $a3, -0x1
    ctx->r11 = ADD32(ctx->r7, -0X1);
    // 0x80026670: addiu       $s2, $s6, 0xC
    ctx->r18 = ADD32(ctx->r22, 0XC);
    // 0x80026674: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80026678: mflo        $t0
    ctx->r8 = lo;
    // 0x8002667C: nop

    // 0x80026680: nop

    // 0x80026684: multu       $t3, $t1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026688: mflo        $t8
    ctx->r24 = lo;
    // 0x8002668C: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80026690: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x80026694: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80026698: addu        $v0, $s2, $t2
    ctx->r2 = ADD32(ctx->r18, ctx->r10);
L_8002669C:
    // 0x8002669C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800266A0: beq         $t9, $zero, L_8002677C
    if (ctx->r25 == 0) {
        // 0x800266A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8002677C;
    }
    // 0x800266A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800266A8: addiu       $t6, $a3, -0x2
    ctx->r14 = ADD32(ctx->r7, -0X2);
    // 0x800266AC: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800266B0: lwc1        $f4, -0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0XC);
    // 0x800266B4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800266B8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800266BC: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x800266C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800266C4: addu        $t5, $s6, $t7
    ctx->r13 = ADD32(ctx->r22, ctx->r15);
    // 0x800266C8: addu        $v1, $t5, $a1
    ctx->r3 = ADD32(ctx->r13, ctx->r5);
    // 0x800266CC: mflo        $t4
    ctx->r12 = lo;
    // 0x800266D0: nop

    // 0x800266D4: nop

    // 0x800266D8: multu       $t4, $s4
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800266DC: mflo        $t3
    ctx->r11 = lo;
    // 0x800266E0: addu        $a0, $s2, $t3
    ctx->r4 = ADD32(ctx->r18, ctx->r11);
    // 0x800266E4: lwc1        $f10, -0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0XC);
    // 0x800266E8: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800266EC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800266F0: lwc1        $f8, -0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0XC);
    // 0x800266F4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800266F8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800266FC: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026700: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026704: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80026708: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8002670C: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x80026710: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80026714: lwc1        $f10, -0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0X8);
    // 0x80026718: lwc1        $f16, -0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8002671C: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80026720: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026724: lwc1        $f8, -0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X8);
    // 0x80026728: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8002672C: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80026730: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026734: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026738: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8002673C: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80026740: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x80026744: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80026748: lwc1        $f10, -0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0X4);
    // 0x8002674C: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x80026750: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80026754: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026758: lwc1        $f8, -0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8002675C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80026760: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80026764: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026768: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8002676C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80026770: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80026774: b           L_80026844
    // 0x80026778: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
        goto L_80026844;
    // 0x80026778: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
L_8002677C:
    // 0x8002677C: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x80026780: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026784: lwc1        $f10, -0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0XC);
    // 0x80026788: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8002678C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026790: mflo        $t2
    ctx->r10 = lo;
    // 0x80026794: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80026798: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8002679C: multu       $t0, $s4
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800267A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800267A4: addu        $t7, $s6, $t9
    ctx->r15 = ADD32(ctx->r22, ctx->r25);
    // 0x800267A8: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
    // 0x800267AC: lwc1        $f8, -0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0XC);
    // 0x800267B0: mflo        $t5
    ctx->r13 = lo;
    // 0x800267B4: addu        $a0, $s2, $t5
    ctx->r4 = ADD32(ctx->r18, ctx->r13);
    // 0x800267B8: lwc1        $f16, -0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, -0XC);
    // 0x800267BC: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800267C0: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800267C4: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800267C8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x800267CC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800267D0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800267D4: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800267D8: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x800267DC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800267E0: lwc1        $f10, -0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X8);
    // 0x800267E4: lwc1        $f4, -0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, -0X8);
    // 0x800267E8: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800267EC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800267F0: lwc1        $f8, -0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X8);
    // 0x800267F4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800267F8: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800267FC: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026800: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026804: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80026808: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8002680C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x80026810: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80026814: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x80026818: lwc1        $f16, -0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, -0X4);
    // 0x8002681C: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80026820: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026824: lwc1        $f8, -0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X4);
    // 0x80026828: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8002682C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80026830: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80026834: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80026838: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8002683C: div.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80026840: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
L_80026844:
    // 0x80026844: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80026848: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8002684C: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80026850: mul.s       $f8, $f10, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80026854: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80026858: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8002685C: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80026860: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80026864: mul.s       $f16, $f18, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80026868: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8002686C: mul.d       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80026870: add.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80026874: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80026878: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8002687C: div.d       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x80026880: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80026884: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80026888: nop

    // 0x8002688C: cvt.w.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_D(ctx->f18.d);
    // 0x80026890: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80026894: nop

    // 0x80026898: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8002689C: beq         $t4, $zero, L_800268EC
    if (ctx->r12 == 0) {
        // 0x800268A0: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_800268EC;
    }
    // 0x800268A0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800268A4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800268A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800268AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800268B0: sub.d       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f18.d - ctx->f6.d;
    // 0x800268B4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800268B8: nop

    // 0x800268BC: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x800268C0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800268C4: nop

    // 0x800268C8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x800268CC: bne         $t4, $zero, L_800268E4
    if (ctx->r12 != 0) {
        // 0x800268D0: nop
    
            goto L_800268E4;
    }
    // 0x800268D0: nop

    // 0x800268D4: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800268D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800268DC: b           L_800268FC
    // 0x800268E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_800268FC;
    // 0x800268E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_800268E4:
    // 0x800268E4: b           L_800268FC
    // 0x800268E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_800268FC;
    // 0x800268E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_800268EC:
    // 0x800268EC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800268F0: nop

    // 0x800268F4: bltz        $t4, L_800268E4
    if (SIGNED(ctx->r12) < 0) {
        // 0x800268F8: nop
    
            goto L_800268E4;
    }
    // 0x800268F8: nop

L_800268FC:
    // 0x800268FC: sb          $t4, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r12;
    // 0x80026900: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80026904: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80026908: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002690C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80026910: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x80026914: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80026918: mul.d       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x8002691C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80026920: div.d       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f2.d);
    // 0x80026924: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80026928: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8002692C: nop

    // 0x80026930: cvt.w.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_D(ctx->f4.d);
    // 0x80026934: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80026938: nop

    // 0x8002693C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80026940: beql        $t8, $zero, L_80026994
    if (ctx->r24 == 0) {
        // 0x80026944: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_80026994;
    }
    goto skip_1;
    // 0x80026944: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x80026948: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002694C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80026950: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80026954: sub.d       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f4.d - ctx->f18.d;
    // 0x80026958: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8002695C: nop

    // 0x80026960: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80026964: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80026968: nop

    // 0x8002696C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80026970: bne         $t8, $zero, L_80026988
    if (ctx->r24 != 0) {
        // 0x80026974: nop
    
            goto L_80026988;
    }
    // 0x80026974: nop

    // 0x80026978: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8002697C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80026980: b           L_800269A0
    // 0x80026984: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_800269A0;
    // 0x80026984: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80026988:
    // 0x80026988: b           L_800269A0
    // 0x8002698C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_800269A0;
    // 0x8002698C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80026990: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_80026994:
    // 0x80026994: nop

    // 0x80026998: bltz        $t8, L_80026988
    if (SIGNED(ctx->r24) < 0) {
        // 0x8002699C: nop
    
            goto L_80026988;
    }
    // 0x8002699C: nop

L_800269A0:
    // 0x800269A0: sb          $t8, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r24;
    // 0x800269A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800269A8: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x800269AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800269B0: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800269B4: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x800269B8: mul.d       $f10, $f16, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x800269BC: div.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x800269C0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800269C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800269C8: nop

    // 0x800269CC: cvt.w.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_D(ctx->f8.d);
    // 0x800269D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800269D4: nop

    // 0x800269D8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x800269DC: beql        $t9, $zero, L_80026A30
    if (ctx->r25 == 0) {
        // 0x800269E0: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_80026A30;
    }
    goto skip_2;
    // 0x800269E0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x800269E4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800269E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800269EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800269F0: sub.d       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f4.d = ctx->f8.d - ctx->f4.d;
    // 0x800269F4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800269F8: nop

    // 0x800269FC: cvt.w.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_D(ctx->f4.d);
    // 0x80026A00: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80026A04: nop

    // 0x80026A08: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80026A0C: bne         $t9, $zero, L_80026A24
    if (ctx->r25 != 0) {
        // 0x80026A10: nop
    
            goto L_80026A24;
    }
    // 0x80026A10: nop

    // 0x80026A14: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80026A18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80026A1C: b           L_80026A3C
    // 0x80026A20: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80026A3C;
    // 0x80026A20: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80026A24:
    // 0x80026A24: b           L_80026A3C
    // 0x80026A28: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80026A3C;
    // 0x80026A28: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80026A2C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_80026A30:
    // 0x80026A30: nop

    // 0x80026A34: bltz        $t9, L_80026A24
    if (SIGNED(ctx->r25) < 0) {
        // 0x80026A38: nop
    
            goto L_80026A24;
    }
    // 0x80026A38: nop

L_80026A3C:
    // 0x80026A3C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80026A40: sb          $t9, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r25;
    // 0x80026A44: bne         $s0, $t1, L_8002669C
    if (ctx->r16 != ctx->r9) {
        // 0x80026A48: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_8002669C;
    }
    // 0x80026A48: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80026A4C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80026A50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80026A54:
    // 0x80026A54: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80026A58: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80026A5C: bnel        $at, $zero, L_8002665C
    if (ctx->r1 != 0) {
        // 0x80026A60: slti        $at, $t1, 0x2
        ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
            goto L_8002665C;
    }
    goto skip_3;
    // 0x80026A60: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    skip_3:
L_80026A64:
    // 0x80026A64: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80026A68: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80026A6C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80026A70: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80026A74: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80026A78: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80026A7C: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x80026A80: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80026A84: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80026A88: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80026A8C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80026A90: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80026A94: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80026A98: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80026A9C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80026AA0: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80026AA4: jr          $ra
    // 0x80026AA8: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    TRACE_RETURN()
    return;
    // 0x80026AA8: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_80038E20_39A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038E20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80038E24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80038E28: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80038E2C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80038E30: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80038E34: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80038E38: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80038E3C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80038E40: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80038E44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80038E48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80038E4C: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80038E50: lui         $s7, 0x801C
    ctx->r23 = S32(0X801C << 16);
    // 0x80038E54: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80038E58: lui         $s5, 0x8017
    ctx->r21 = S32(0X8017 << 16);
    // 0x80038E5C: lui         $s4, 0x8017
    ctx->r20 = S32(0X8017 << 16);
    // 0x80038E60: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x80038E64: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80038E68: addiu       $s1, $s1, 0x1728
    ctx->r17 = ADD32(ctx->r17, 0X1728);
    // 0x80038E6C: addiu       $s3, $s3, 0x2978
    ctx->r19 = ADD32(ctx->r19, 0X2978);
    // 0x80038E70: addiu       $s4, $s4, 0x2976
    ctx->r20 = ADD32(ctx->r20, 0X2976);
    // 0x80038E74: addiu       $s5, $s5, 0x2974
    ctx->r21 = ADD32(ctx->r21, 0X2974);
    // 0x80038E78: addiu       $s6, $s6, -0x5DD0
    ctx->r22 = ADD32(ctx->r22, -0X5DD0);
    // 0x80038E7C: addiu       $s7, $s7, 0xA68
    ctx->r23 = ADD32(ctx->r23, 0XA68);
    // 0x80038E80: addiu       $s2, $s2, 0xC28
    ctx->r18 = ADD32(ctx->r18, 0XC28);
    // 0x80038E84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80038E88: addiu       $fp, $zero, 0x1C
    ctx->r30 = ADD32(0, 0X1C);
L_80038E8C:
    // 0x80038E8C: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x80038E90: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80038E94: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x80038E98: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80038E9C: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x80038EA0: bnel        $t6, $t8, L_80038F28
    if (ctx->r14 != ctx->r24) {
        // 0x80038EA4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80038F28;
    }
    goto skip_0;
    // 0x80038EA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80038EA8: lhu         $t9, 0x0($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X0);
    // 0x80038EAC: lhu         $t0, 0xAE($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XAE);
    // 0x80038EB0: beql        $t9, $t0, L_80038ED8
    if (ctx->r25 == ctx->r8) {
        // 0x80038EB4: lhu         $t7, 0x58($v0)
        ctx->r15 = MEM_HU(ctx->r2, 0X58);
            goto L_80038ED8;
    }
    goto skip_1;
    // 0x80038EB4: lhu         $t7, 0x58($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X58);
    skip_1:
    // 0x80038EB8: lbu         $t1, 0x6($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6);
    // 0x80038EBC: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80038EC0: sb          $t2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r10;
    // 0x80038EC4: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80038EC8: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x80038ECC: sh          $t3, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r11;
    // 0x80038ED0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80038ED4: lhu         $t7, 0x58($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X58);
L_80038ED8:
    // 0x80038ED8: lhu         $t5, 0x0($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X0);
    // 0x80038EDC: andi        $t6, $t7, 0x7F00
    ctx->r14 = ctx->r15 & 0X7F00;
    // 0x80038EE0: beql        $t5, $t6, L_80038F28
    if (ctx->r13 == ctx->r14) {
        // 0x80038EE4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80038F28;
    }
    goto skip_2;
    // 0x80038EE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80038EE8: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80038EEC: multu       $s0, $fp
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038EF0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80038EF4: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x80038EF8: lhu         $t0, 0x0($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X0);
    // 0x80038EFC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80038F00: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x80038F04: sh          $t1, 0x58($t2)
    MEM_H(0X58, ctx->r10) = ctx->r9;
    // 0x80038F08: lhu         $a2, 0x0($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X0);
    // 0x80038F0C: mflo        $t3
    ctx->r11 = lo;
    // 0x80038F10: addu        $a1, $s7, $t3
    ctx->r5 = ADD32(ctx->r23, ctx->r11);
    // 0x80038F14: sra         $t4, $a2, 8
    ctx->r12 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80038F18: andi        $a2, $t4, 0xFF
    ctx->r6 = ctx->r12 & 0XFF;
    // 0x80038F1C: jal         0x800485B0
    // 0x80038F20: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    alSynSetPan(rdram, ctx);
        goto after_0;
    // 0x80038F20: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    after_0:
    // 0x80038F24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80038F28:
    // 0x80038F28: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80038F2C: bne         $s0, $at, L_80038E8C
    if (ctx->r16 != ctx->r1) {
        // 0x80038F30: addiu       $s2, $s2, 0xB0
        ctx->r18 = ADD32(ctx->r18, 0XB0);
            goto L_80038E8C;
    }
    // 0x80038F30: addiu       $s2, $s2, 0xB0
    ctx->r18 = ADD32(ctx->r18, 0XB0);
    // 0x80038F34: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
    // 0x80038F38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80038F3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80038F40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80038F44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80038F48: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80038F4C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80038F50: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80038F54: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80038F58: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80038F5C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80038F60: jr          $ra
    // 0x80038F64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80038F64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001F19C_1FD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F19C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F1A0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8001F1A4: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8001F1A8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001F1AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F1B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001F1B4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001F1B8: lwc1        $f12, 0x8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8001F1BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F1C0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x8001F1C4: jal         0x800040A8
    // 0x8001F1C8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8001F1C8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x8001F1CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001F1D0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001F1D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001F1D8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8001F1DC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001F1E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001F1E4: sh          $v0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r2;
    // 0x8001F1E8: bc1fl       L_8001F1FC
    if (!c1cs) {
        // 0x8001F1EC: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_8001F1FC;
    }
    goto skip_0;
    // 0x8001F1EC: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_0:
    // 0x8001F1F0: b           L_8001F1FC
    // 0x8001F1F4: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_8001F1FC;
    // 0x8001F1F4: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x8001F1F8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8001F1FC:
    // 0x8001F1FC: ldc1        $f6, -0x46A0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X46A0);
    // 0x8001F200: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8001F204: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8001F208: nop

    // 0x8001F20C: bc1fl       L_8001F288
    if (!c1cs) {
        // 0x8001F210: lwc1        $f8, 0x18($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
            goto L_8001F288;
    }
    goto skip_1;
    // 0x8001F210: lwc1        $f8, 0x18($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
    skip_1:
    // 0x8001F214: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x8001F218: nop

    // 0x8001F21C: bc1tl       L_8001F248
    if (c1cs) {
        // 0x8001F220: sh          $zero, 0x0($a0)
        MEM_H(0X0, ctx->r4) = 0;
            goto L_8001F248;
    }
    goto skip_2;
    // 0x8001F220: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    skip_2:
    // 0x8001F224: c.eq.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl == ctx->f2.fl;
    // 0x8001F228: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x8001F22C: bc1fl       L_8001F268
    if (!c1cs) {
        // 0x8001F230: sh          $t0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r8;
            goto L_8001F268;
    }
    goto skip_3;
    // 0x8001F230: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    skip_3:
    // 0x8001F234: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x8001F238: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x8001F23C: beql        $t8, $zero, L_8001F268
    if (ctx->r24 == 0) {
        // 0x8001F240: sh          $t0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r8;
            goto L_8001F268;
    }
    goto skip_4;
    // 0x8001F240: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    skip_4:
    // 0x8001F244: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_8001F248:
    // 0x8001F248: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x8001F24C: lwc1        $f14, 0x14($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X14);
    // 0x8001F250: jal         0x800040A8
    // 0x8001F254: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001F254: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x8001F258: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8001F25C: b           L_8001F2C4
    // 0x8001F260: sh          $v0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r2;
        goto L_8001F2C4;
    // 0x8001F260: sh          $v0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r2;
    // 0x8001F264: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
L_8001F268:
    // 0x8001F268: lwc1        $f14, 0x14($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X14);
    // 0x8001F26C: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x8001F270: jal         0x800040A8
    // 0x8001F274: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8001F274: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_2:
    // 0x8001F278: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8001F27C: b           L_8001F2C4
    // 0x8001F280: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
        goto L_8001F2C4;
    // 0x8001F280: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x8001F284: lwc1        $f8, 0x18($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
L_8001F288:
    // 0x8001F288: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8001F28C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F290: div.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8001F294: jal         0x800040A8
    // 0x8001F298: div.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x8001F298: div.s       $f14, $f10, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    after_3:
    // 0x8001F29C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001F2A0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001F2A4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8001F2A8: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8001F2AC: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8001F2B0: div.s       $f14, $f18, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8001F2B4: jal         0x800040A8
    // 0x8001F2B8: div.s       $f12, $f16, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    func_800040A8_4CA8(rdram, ctx);
        goto after_4;
    // 0x8001F2B8: div.s       $f12, $f16, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    after_4:
    // 0x8001F2BC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8001F2C0: sh          $v0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r2;
L_8001F2C4:
    // 0x8001F2C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F2C8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8001F2CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F2D0: jr          $ra
    // 0x8001F2D4: nop

    TRACE_RETURN()
    return;
    // 0x8001F2D4: nop

;}
RECOMP_FUNC void alSynSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800486E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800486E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800486E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800486EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800486F0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800486F4: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x800486F8: beql        $t7, $zero, L_80048770
    if (ctx->r15 == 0) {
        // 0x800486FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048770;
    }
    goto skip_0;
    // 0x800486FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80048700: jal         0x80047960
    // 0x80048704: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80048704: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80048708: beq         $v0, $zero, L_8004876C
    if (ctx->r2 == 0) {
        // 0x8004870C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8004876C;
    }
    // 0x8004870C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80048710: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80048714: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x80048718: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8004871C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80048720: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x80048724: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x80048728: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8004872C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80048730: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x80048734: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x80048738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004873C: jal         0x80047858
    // 0x80048740: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x80048740: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80048744: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80048748: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8004874C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x80048750: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80048754: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80048758: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8004875C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x80048760: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80048764: jalr        $t9
    // 0x80048768: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80048768: nop

    after_2:
L_8004876C:
    // 0x8004876C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048770:
    // 0x80048770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80048774: jr          $ra
    // 0x80048778: nop

    TRACE_RETURN()
    return;
    // 0x80048778: nop

;}
RECOMP_FUNC void func_80003728_4328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003728: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000372C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80003730: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80003734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003738: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000373C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003740: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003744: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80003748: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000374C: sb          $a1, -0x522C($at)
    MEM_B(-0X522C, ctx->r1) = ctx->r5;
    // 0x80003750: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80003754: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003758: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000375C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80003760: sb          $zero, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = 0;
    // 0x80003764: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80003768: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000376C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80003770: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80003774: jal         0x80003628
    // 0x80003778: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
    func_80003628_4228(rdram, ctx);
        goto after_0;
    // 0x80003778: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
    after_0:
    // 0x8000377C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003784: jr          $ra
    // 0x80003788: nop

    TRACE_RETURN()
    return;
    // 0x80003788: nop

;}
RECOMP_FUNC void func_8000F420_10020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000F424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F428: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000F42C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000F430: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000F434: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8000F438: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8000F43C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F440: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x8000F444: lw          $a2, 0x8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X8);
    // 0x8000F448: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F44C: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x8000F450: jal         0x8000F6E8
    // 0x8000F454: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_0;
    // 0x8000F454: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000F458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F45C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000F460: jr          $ra
    // 0x8000F464: nop

    TRACE_RETURN()
    return;
    // 0x8000F464: nop

;}
RECOMP_FUNC void func_8000D6D0_E2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D6D8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x8000D6DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D6E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8000D6E4: beq         $v0, $at, L_8000D708
    if (ctx->r2 == ctx->r1) {
        // 0x8000D6E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000D708;
    }
    // 0x8000D6E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000D6EC: beq         $v0, $at, L_8000D73C
    if (ctx->r2 == ctx->r1) {
        // 0x8000D6F0: addiu       $t1, $zero, 0x6
        ctx->r9 = ADD32(0, 0X6);
            goto L_8000D73C;
    }
    // 0x8000D6F0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x8000D6F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000D6F8: beq         $v0, $at, L_8000D754
    if (ctx->r2 == ctx->r1) {
        // 0x8000D6FC: addiu       $t4, $zero, 0x6
        ctx->r12 = ADD32(0, 0X6);
            goto L_8000D754;
    }
    // 0x8000D6FC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x8000D700: b           L_8000D770
    // 0x8000D704: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
        goto L_8000D770;
    // 0x8000D704: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
L_8000D708:
    // 0x8000D708: lh          $t7, 0x40($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X40);
    // 0x8000D70C: lh          $t8, 0x42($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X42);
    // 0x8000D710: lh          $t6, 0x3E($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X3E);
    // 0x8000D714: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8000D718: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000D71C: sh          $zero, 0x64($a1)
    MEM_H(0X64, ctx->r5) = 0;
    // 0x8000D720: sh          $zero, 0x66($a1)
    MEM_H(0X66, ctx->r5) = 0;
    // 0x8000D724: sh          $t0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r8;
    // 0x8000D728: sh          $t6, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r14;
    // 0x8000D72C: mflo        $t9
    ctx->r25 = lo;
    // 0x8000D730: sh          $t9, 0x6A($a1)
    MEM_H(0X6A, ctx->r5) = ctx->r25;
    // 0x8000D734: b           L_8000D790
    // 0x8000D738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D790;
    // 0x8000D738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D73C:
    // 0x8000D73C: lh          $t2, 0x32($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X32);
    // 0x8000D740: lh          $t3, 0x34($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X34);
    // 0x8000D744: sh          $t1, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r9;
    // 0x8000D748: sh          $t2, 0x36($a1)
    MEM_H(0X36, ctx->r5) = ctx->r10;
    // 0x8000D74C: b           L_8000D78C
    // 0x8000D750: sh          $t3, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r11;
        goto L_8000D78C;
    // 0x8000D750: sh          $t3, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r11;
L_8000D754:
    // 0x8000D754: lh          $t5, 0x32($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X32);
    // 0x8000D758: lh          $t6, 0x34($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X34);
    // 0x8000D75C: sh          $t4, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r12;
    // 0x8000D760: sh          $t5, 0x36($a1)
    MEM_H(0X36, ctx->r5) = ctx->r13;
    // 0x8000D764: b           L_8000D78C
    // 0x8000D768: sh          $t6, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r14;
        goto L_8000D78C;
    // 0x8000D768: sh          $t6, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r14;
    // 0x8000D76C: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
L_8000D770:
    // 0x8000D770: jal         0x8000C878
    // 0x8000D774: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8000C878_D478(rdram, ctx);
        goto after_0;
    // 0x8000D774: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000D778: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000D77C: lh          $t7, 0x36($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X36);
    // 0x8000D780: lh          $t8, 0x38($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X38);
    // 0x8000D784: sh          $t7, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r15;
    // 0x8000D788: sh          $t8, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r24;
L_8000D78C:
    // 0x8000D78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D790:
    // 0x8000D790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D794: jr          $ra
    // 0x8000D798: nop

    TRACE_RETURN()
    return;
    // 0x8000D798: nop

;}
RECOMP_FUNC void func_800108E4_114E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800108E4: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x800108E8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800108EC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800108F0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800108F4: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x800108F8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x800108FC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80010900: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80010904: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x80010908: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x8001090C: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x80010910: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80010914: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80010918: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8001091C: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x80010920: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x80010924: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x80010928: addu        $t3, $a1, $a3
    ctx->r11 = ADD32(ctx->r5, ctx->r7);
    // 0x8001092C: andi        $t5, $t3, 0x3FF
    ctx->r13 = ctx->r11 & 0X3FF;
    // 0x80010930: sll         $t6, $t5, 14
    ctx->r14 = S32(ctx->r13 << 14);
    // 0x80010934: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80010938: or          $t4, $t6, $at
    ctx->r12 = ctx->r14 | ctx->r1;
    // 0x8001093C: addu        $t1, $a2, $t7
    ctx->r9 = ADD32(ctx->r6, ctx->r15);
    // 0x80010940: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x80010944: andi        $t8, $t1, 0x3FF
    ctx->r24 = ctx->r9 & 0X3FF;
    // 0x80010948: andi        $t6, $a2, 0x3FF
    ctx->r14 = ctx->r6 & 0X3FF;
    // 0x8001094C: andi        $t3, $a1, 0x3FF
    ctx->r11 = ctx->r5 & 0X3FF;
    // 0x80010950: sll         $t5, $t3, 14
    ctx->r13 = S32(ctx->r11 << 14);
    // 0x80010954: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80010958: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8001095C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x80010960: or          $t1, $t5, $t7
    ctx->r9 = ctx->r13 | ctx->r15;
    // 0x80010964: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x80010968: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8001096C: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x80010970: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x80010974: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80010978: jr          $ra
    // 0x8001097C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8001097C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80012878_13478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001287C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012880: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80012884: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80012888: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x8001288C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80012890: addiu       $t9, $a1, 0x60
    ctx->r25 = ADD32(ctx->r5, 0X60);
L_80012894:
    // 0x80012894: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80012898: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8001289C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800128A0: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x800128A4: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x800128A8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800128AC: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x800128B0: bne         $t0, $t9, L_80012894
    if (ctx->r8 != ctx->r25) {
        // 0x800128B4: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80012894;
    }
    // 0x800128B4: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x800128B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800128BC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x800128C0: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x800128C4: jal         0x800127B8
    // 0x800128C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800127B8_133B8(rdram, ctx);
        goto after_0;
    // 0x800128C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800128CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800128D0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x800128D4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x800128D8: jal         0x80012818
    // 0x800128DC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_80012818_13418(rdram, ctx);
        goto after_1;
    // 0x800128DC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_1:
    // 0x800128E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800128E4: jal         0x80012500
    // 0x800128E8: lhu         $a1, 0x1A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1A);
    func_80012500_13100(rdram, ctx);
        goto after_2;
    // 0x800128E8: lhu         $a1, 0x1A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1A);
    after_2:
    // 0x800128EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800128F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800128F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800128F8: jr          $ra
    // 0x800128FC: nop

    TRACE_RETURN()
    return;
    // 0x800128FC: nop

;}
RECOMP_FUNC void func_8000A18C_AD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A18C: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x8000A190: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000A194: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8000A198: sh          $t6, 0x5D0C($v0)
    MEM_H(0X5D0C, ctx->r2) = ctx->r14;
    // 0x8000A19C: lh          $t7, 0x5D0C($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X5D0C);
    // 0x8000A1A0: sw          $zero, 0x5D10($v0)
    MEM_W(0X5D10, ctx->r2) = 0;
    // 0x8000A1A4: sh          $t7, 0x5D0A($v0)
    MEM_H(0X5D0A, ctx->r2) = ctx->r15;
    // 0x8000A1A8: lh          $t8, 0x5D0A($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X5D0A);
    // 0x8000A1AC: sh          $t8, 0x5D08($v0)
    MEM_H(0X5D08, ctx->r2) = ctx->r24;
    // 0x8000A1B0: lh          $t9, 0x5D08($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X5D08);
    // 0x8000A1B4: jr          $ra
    // 0x8000A1B8: sh          $t9, 0x5D06($v0)
    MEM_H(0X5D06, ctx->r2) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8000A1B8: sh          $t9, 0x5D06($v0)
    MEM_H(0X5D06, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80003528_4128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003528: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000352C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80003530: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80003534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003538: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000353C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003540: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003544: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80003548: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000354C: sb          $a1, -0x5228($at)
    MEM_B(-0X5228, ctx->r1) = ctx->r5;
    // 0x80003550: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80003554: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003558: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000355C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80003560: jal         0x80003428
    // 0x80003564: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    func_80003428_4028(rdram, ctx);
        goto after_0;
    // 0x80003564: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    after_0:
    // 0x80003568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000356C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003570: jr          $ra
    // 0x80003574: nop

    TRACE_RETURN()
    return;
    // 0x80003574: nop

;}
RECOMP_FUNC void func_8000F5F8_101F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F5F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000F5FC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8000F600: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F604: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000F608: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8000F60C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000F610: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000F614: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000F618: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000F61C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000F620: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000F624: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000F628: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000F62C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000F630: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000F634: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8000F638: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000F63C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000F640: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000F644: jal         0x800417E0
    // 0x8000F648: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000F648: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8000F64C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000F650: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x8000F654: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x8000F658: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8000F65C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8000F660: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8000F664: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000F668: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000F66C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8000F670: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8000F674: jal         0x8001CC38
    // 0x8000F678: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_8001CC38_1D838(rdram, ctx);
        goto after_1;
    // 0x8000F678: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8000F67C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000F680: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000F684: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x8000F688: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8000F68C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000F690: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8000F694: bc1fl       L_8000F6DC
    if (!c1cs) {
        // 0x8000F698: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F6DC;
    }
    goto skip_0;
    // 0x8000F698: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8000F69C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F6A0: nop

    // 0x8000F6A4: bc1fl       L_8000F6B4
    if (!c1cs) {
        // 0x8000F6A8: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_8000F6B4;
    }
    goto skip_1;
    // 0x8000F6A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x8000F6AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8000F6B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_8000F6B4:
    // 0x8000F6B4: nop

    // 0x8000F6B8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8000F6BC: nop

    // 0x8000F6C0: bc1fl       L_8000F6D0
    if (!c1cs) {
        // 0x8000F6C4: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_8000F6D0;
    }
    goto skip_2;
    // 0x8000F6C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x8000F6C8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8000F6CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_8000F6D0:
    // 0x8000F6D0: jal         0x8000F730
    // 0x8000F6D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000F730_10330(rdram, ctx);
        goto after_2;
    // 0x8000F6D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8000F6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000F6DC:
    // 0x8000F6DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8000F6E0: jr          $ra
    // 0x8000F6E4: nop

    TRACE_RETURN()
    return;
    // 0x8000F6E4: nop

;}
RECOMP_FUNC void func_8001904C_19C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001904C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80019050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019054: lb          $t6, 0x5($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X5);
    // 0x80019058: lw          $a2, 0x74($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X74);
    // 0x8001905C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80019060: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80019064: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80019068: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001906C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80019070: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80019074: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019078: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001907C: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x80019080: beq         $a2, $zero, L_8001909C
    if (ctx->r6 == 0) {
        // 0x80019084: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8001909C;
    }
    // 0x80019084: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80019088: lw          $t1, 0x2C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X2C);
    // 0x8001908C: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x80019090: ori         $v1, $v1, 0xFFFE
    ctx->r3 = ctx->r3 | 0XFFFE;
    // 0x80019094: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x80019098: beq         $t9, $t2, L_8001914C
    if (ctx->r25 == ctx->r10) {
        // 0x8001909C: lui         $v1, 0x8FFF
        ctx->r3 = S32(0X8FFF << 16);
            goto L_8001914C;
    }
L_8001909C:
    // 0x8001909C: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x800190A0: ori         $v1, $v1, 0xFFFE
    ctx->r3 = ctx->r3 | 0XFFFE;
    // 0x800190A4: beq         $a2, $zero, L_800190E4
    if (ctx->r6 == 0) {
        // 0x800190A8: or          $t0, $a2, $zero
        ctx->r8 = ctx->r6 | 0;
            goto L_800190E4;
    }
    // 0x800190A8: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x800190AC: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
    // 0x800190B0: beq         $a2, $zero, L_800190E4
    if (ctx->r6 == 0) {
        // 0x800190B4: nop
    
            goto L_800190E4;
    }
    // 0x800190B4: nop

    // 0x800190B8: lw          $t3, 0x2C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X2C);
    // 0x800190BC: and         $t4, $t3, $v1
    ctx->r12 = ctx->r11 & ctx->r3;
    // 0x800190C0: beq         $v0, $t4, L_800190E4
    if (ctx->r2 == ctx->r12) {
        // 0x800190C4: nop
    
            goto L_800190E4;
    }
    // 0x800190C4: nop

    // 0x800190C8: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
L_800190CC:
    // 0x800190CC: beq         $a2, $zero, L_800190E4
    if (ctx->r6 == 0) {
        // 0x800190D0: nop
    
            goto L_800190E4;
    }
    // 0x800190D0: nop

    // 0x800190D4: lw          $t5, 0x2C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X2C);
    // 0x800190D8: and         $t6, $t5, $v1
    ctx->r14 = ctx->r13 & ctx->r3;
    // 0x800190DC: bnel        $v0, $t6, L_800190CC
    if (ctx->r2 != ctx->r14) {
        // 0x800190E0: lw          $a2, 0x74($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X74);
            goto L_800190CC;
    }
    goto skip_0;
    // 0x800190E0: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
    skip_0:
L_800190E4:
    // 0x800190E4: beq         $a2, $zero, L_80019104
    if (ctx->r6 == 0) {
        // 0x800190E8: lui         $at, 0x7000
        ctx->r1 = S32(0X7000 << 16);
            goto L_80019104;
    }
    // 0x800190E8: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x800190EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800190F0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800190F4: jal         0x800363F4
    // 0x800190F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800363F4_36FF4(rdram, ctx);
        goto after_0;
    // 0x800190F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800190FC: b           L_8001914C
    // 0x80019100: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
        goto L_8001914C;
    // 0x80019100: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_80019104:
    // 0x80019104: lw          $a0, 0x94($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X94);
    // 0x80019108: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x8001910C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80019110: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80019114: jal         0x80019160
    // 0x80019118: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80019160_19D60(rdram, ctx);
        goto after_1;
    // 0x80019118: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8001911C: jal         0x80036448
    // 0x80019120: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80036448_37048(rdram, ctx);
        goto after_2;
    // 0x80019120: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80019124: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80019128: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001912C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80019130: lw          $t7, 0x94($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X94);
    // 0x80019134: sw          $t7, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r15;
    // 0x80019138: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001913C: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x80019140: beq         $t0, $zero, L_8001914C
    if (ctx->r8 == 0) {
        // 0x80019144: sw          $v0, 0x74($a3)
        MEM_W(0X74, ctx->r7) = ctx->r2;
            goto L_8001914C;
    }
    // 0x80019144: sw          $v0, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->r2;
    // 0x80019148: sw          $t0, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r8;
L_8001914C:
    // 0x8001914C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019150: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80019154: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80019158: jr          $ra
    // 0x8001915C: nop

    TRACE_RETURN()
    return;
    // 0x8001915C: nop

;}
RECOMP_FUNC void func_80012764_13364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012764: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80012768: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x8001276C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012770: swc1        $f12, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f12.u32l;
    // 0x80012774: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80012778: nop

    // 0x8001277C: bc1fl       L_800127A0
    if (!c1cs) {
        // 0x80012780: lwc1        $f10, 0x64($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X64);
            goto L_800127A0;
    }
    goto skip_0;
    // 0x80012780: lwc1        $f10, 0x64($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X64);
    skip_0:
    // 0x80012784: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012788: lwc1        $f6, 0x64($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X64);
    // 0x8001278C: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80012790: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80012794: b           L_800127A8
    // 0x80012798: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800127A8;
    // 0x80012798: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8001279C: lwc1        $f10, 0x64($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X64);
L_800127A0:
    // 0x800127A0: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x800127A4: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_800127A8:
    // 0x800127A8: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800127AC: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800127B0: jr          $ra
    // 0x800127B4: swc1        $f4, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800127B4: swc1        $f4, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000A918_B518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A918: lbu         $v1, 0x370($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X370);
    // 0x8000A91C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8000A920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000A924: blez        $v1, L_8000A994
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8000A928: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_8000A994;
    }
    // 0x8000A928: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8000A92C: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
L_8000A930:
    // 0x8000A930: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8000A934: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8000A938: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x8000A93C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000A940: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8000A944: lbu         $t8, 0x4($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X4);
    // 0x8000A948: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000A94C: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x8000A950: bnel        $t9, $zero, L_8000A98C
    if (ctx->r25 != 0) {
        // 0x8000A954: slt         $at, $v0, $a2
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8000A98C;
    }
    goto skip_0;
    // 0x8000A954: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    skip_0:
    // 0x8000A958: lbu         $t1, 0x371($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X371);
    // 0x8000A95C: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x8000A960: beql        $t2, $zero, L_8000A97C
    if (ctx->r10 == 0) {
        // 0x8000A964: lhu         $t5, 0x6($a1)
        ctx->r13 = MEM_HU(ctx->r5, 0X6);
            goto L_8000A97C;
    }
    goto skip_1;
    // 0x8000A964: lhu         $t5, 0x6($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X6);
    skip_1:
    // 0x8000A968: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x8000A96C: subu        $t4, $t0, $t3
    ctx->r12 = SUB32(ctx->r8, ctx->r11);
    // 0x8000A970: b           L_8000A980
    // 0x8000A974: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
        goto L_8000A980;
    // 0x8000A974: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
    // 0x8000A978: lhu         $t5, 0x6($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X6);
L_8000A97C:
    // 0x8000A97C: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
L_8000A980:
    // 0x8000A980: lbu         $v1, 0x370($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X370);
    // 0x8000A984: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8000A988: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
L_8000A98C:
    // 0x8000A98C: bne         $at, $zero, L_8000A930
    if (ctx->r1 != 0) {
        // 0x8000A990: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_8000A930;
    }
    // 0x8000A990: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_8000A994:
    // 0x8000A994: jr          $ra
    // 0x8000A998: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8000A998: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80005900_6500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005900: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80005904: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80005908: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000590C: addiu       $a1, $a1, 0x73AC
    ctx->r5 = ADD32(ctx->r5, 0X73AC);
    // 0x80005910: addiu       $v1, $v1, 0x73A4
    ctx->r3 = ADD32(ctx->r3, 0X73A4);
    // 0x80005914: addiu       $v0, $v0, 0x73B0
    ctx->r2 = ADD32(ctx->r2, 0X73B0);
    // 0x80005918: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8000591C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80005920: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80005924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005928: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8000592C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80005930: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80005934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005938: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000593C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80005940: beq         $t9, $zero, L_80005950
    if (ctx->r25 == 0) {
        // 0x80005944: sw          $t1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r9;
            goto L_80005950;
    }
    // 0x80005944: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x80005948: b           L_80005970
    // 0x8000594C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_80005970;
    // 0x8000594C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80005950:
    // 0x80005950: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005954: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80005958: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8000595C: ori         $at, $at, 0x5FA0
    ctx->r1 = ctx->r1 | 0X5FA0;
    // 0x80005960: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80005964: jal         0x80005984
    // 0x80005968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80005984_6584(rdram, ctx);
        goto after_0;
    // 0x80005968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8000596C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80005970:
    // 0x80005970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005978: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000597C: jr          $ra
    // 0x80005980: nop

    TRACE_RETURN()
    return;
    // 0x80005980: nop

;}
RECOMP_FUNC void func_8003CB48_3D748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CB48: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003CB4C: lw          $t6, 0x1728($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1728);
    // 0x8003CB50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003CB54: lw          $t7, 0x6C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X6C);
    // 0x8003CB58: sw          $t7, 0x172C($at)
    MEM_W(0X172C, ctx->r1) = ctx->r15;
    // 0x8003CB5C: jr          $ra
    // 0x8003CB60: nop

    TRACE_RETURN()
    return;
    // 0x8003CB60: nop

;}
RECOMP_FUNC void func_80003D28_4928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003D28: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80003D2C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80003D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003D38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003D3C: bgez        $t6, L_80003D54
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80003D40: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80003D54;
    }
    // 0x80003D40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003D44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80003D48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80003D4C: nop

    // 0x80003D50: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80003D54:
    // 0x80003D54: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80003D58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80003D5C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80003D60: ldc1        $f4, -0x5730($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5730);
    // 0x80003D64: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003D68: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80003D6C: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80003D70: jal         0x800419B0
    // 0x80003D74: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x80003D74: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x80003D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003D80: jr          $ra
    // 0x80003D84: nop

    TRACE_RETURN()
    return;
    // 0x80003D84: nop

;}
RECOMP_FUNC void func_80035020_35C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003502C: jal         0x80035044
    // 0x80035030: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80035044_35C44(rdram, ctx);
        goto after_0;
    // 0x80035030: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80035034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003503C: jr          $ra
    // 0x80035040: nop

    TRACE_RETURN()
    return;
    // 0x80035040: nop

;}
RECOMP_FUNC void func_80018F3C_19B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80018F3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80018F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018F44: lb          $t6, 0x4($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X4);
    // 0x80018F48: lw          $a2, 0x78($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X78);
    // 0x80018F4C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80018F50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018F54: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80018F58: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80018F5C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80018F60: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80018F64: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80018F68: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80018F6C: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x80018F70: beq         $a2, $zero, L_80018F8C
    if (ctx->r6 == 0) {
        // 0x80018F74: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80018F8C;
    }
    // 0x80018F74: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80018F78: lw          $t1, 0x2C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X2C);
    // 0x80018F7C: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x80018F80: ori         $v1, $v1, 0xFFFE
    ctx->r3 = ctx->r3 | 0XFFFE;
    // 0x80018F84: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x80018F88: beq         $t9, $t2, L_80019038
    if (ctx->r25 == ctx->r10) {
        // 0x80018F8C: lui         $v1, 0x8FFF
        ctx->r3 = S32(0X8FFF << 16);
            goto L_80019038;
    }
L_80018F8C:
    // 0x80018F8C: lui         $v1, 0x8FFF
    ctx->r3 = S32(0X8FFF << 16);
    // 0x80018F90: ori         $v1, $v1, 0xFFFE
    ctx->r3 = ctx->r3 | 0XFFFE;
    // 0x80018F94: beq         $a2, $zero, L_80018FD4
    if (ctx->r6 == 0) {
        // 0x80018F98: or          $t0, $a2, $zero
        ctx->r8 = ctx->r6 | 0;
            goto L_80018FD4;
    }
    // 0x80018F98: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80018F9C: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
    // 0x80018FA0: beq         $a2, $zero, L_80018FD4
    if (ctx->r6 == 0) {
        // 0x80018FA4: nop
    
            goto L_80018FD4;
    }
    // 0x80018FA4: nop

    // 0x80018FA8: lw          $t3, 0x2C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X2C);
    // 0x80018FAC: and         $t4, $t3, $v1
    ctx->r12 = ctx->r11 & ctx->r3;
    // 0x80018FB0: beq         $v0, $t4, L_80018FD4
    if (ctx->r2 == ctx->r12) {
        // 0x80018FB4: nop
    
            goto L_80018FD4;
    }
    // 0x80018FB4: nop

    // 0x80018FB8: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
L_80018FBC:
    // 0x80018FBC: beq         $a2, $zero, L_80018FD4
    if (ctx->r6 == 0) {
        // 0x80018FC0: nop
    
            goto L_80018FD4;
    }
    // 0x80018FC0: nop

    // 0x80018FC4: lw          $t5, 0x2C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X2C);
    // 0x80018FC8: and         $t6, $t5, $v1
    ctx->r14 = ctx->r13 & ctx->r3;
    // 0x80018FCC: bnel        $v0, $t6, L_80018FBC
    if (ctx->r2 != ctx->r14) {
        // 0x80018FD0: lw          $a2, 0x74($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X74);
            goto L_80018FBC;
    }
    goto skip_0;
    // 0x80018FD0: lw          $a2, 0x74($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X74);
    skip_0:
L_80018FD4:
    // 0x80018FD4: beq         $a2, $zero, L_80018FF4
    if (ctx->r6 == 0) {
        // 0x80018FD8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80018FF4;
    }
    // 0x80018FD8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80018FDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80018FE0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80018FE4: jal         0x80036388
    // 0x80018FE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80036388_36F88(rdram, ctx);
        goto after_0;
    // 0x80018FE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80018FEC: b           L_80019038
    // 0x80018FF0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
        goto L_80019038;
    // 0x80018FF0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_80018FF4:
    // 0x80018FF4: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x80018FF8: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x80018FFC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80019000: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80019004: jal         0x80019160
    // 0x80019008: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80019160_19D60(rdram, ctx);
        goto after_1;
    // 0x80019008: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_1:
    // 0x8001900C: jal         0x80036448
    // 0x80019010: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_80036448_37048(rdram, ctx);
        goto after_2;
    // 0x80019010: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80019014: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80019018: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001901C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80019020: sw          $a3, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r7;
    // 0x80019024: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80019028: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x8001902C: beq         $t0, $zero, L_80019038
    if (ctx->r8 == 0) {
        // 0x80019030: sw          $v0, 0x78($a3)
        MEM_W(0X78, ctx->r7) = ctx->r2;
            goto L_80019038;
    }
    // 0x80019030: sw          $v0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->r2;
    // 0x80019034: sw          $t0, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r8;
L_80019038:
    // 0x80019038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001903C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80019040: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80019044: jr          $ra
    // 0x80019048: nop

    TRACE_RETURN()
    return;
    // 0x80019048: nop

;}
RECOMP_FUNC void func_80036448_37048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003644C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80036450: addiu       $v0, $v0, -0x2550
    ctx->r2 = ADD32(ctx->r2, -0X2550);
    // 0x80036454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80036458: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8003645C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80036460: addiu       $a0, $a0, -0x254E
    ctx->r4 = ADD32(ctx->r4, -0X254E);
    // 0x80036464: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x80036468: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003646C: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
    // 0x80036470: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80036474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036478: beq         $at, $zero, L_80036484
    if (ctx->r1 == 0) {
        // 0x8003647C: sh          $t7, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r15;
            goto L_80036484;
    }
    // 0x8003647C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80036480: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_80036484:
    // 0x80036484: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80036488: lw          $a0, -0x2CE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CE0);
    // 0x8003648C: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80036490: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80036494: beq         $a0, $zero, L_800364B4
    if (ctx->r4 == 0) {
        // 0x80036498: nop
    
            goto L_800364B4;
    }
    // 0x80036498: nop

    // 0x8003649C: jal         0x80036058
    // 0x800364A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036058_36C58(rdram, ctx);
        goto after_0;
    // 0x800364A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800364A4: bne         $v0, $zero, L_800364D0
    if (ctx->r2 != 0) {
        // 0x800364A8: nop
    
            goto L_800364D0;
    }
    // 0x800364A8: nop

    // 0x800364AC: b           L_800364D0
    // 0x800364B0: nop

        goto L_800364D0;
    // 0x800364B0: nop

L_800364B4:
    // 0x800364B4: lhu         $t9, -0x2CAC($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2CAC);
    // 0x800364B8: lh          $t0, -0x2524($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X2524);
    // 0x800364BC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800364C0: bgtz        $t1, L_800364D0
    if (SIGNED(ctx->r9) > 0) {
        // 0x800364C4: nop
    
            goto L_800364D0;
    }
    // 0x800364C4: nop

    // 0x800364C8: b           L_800364EC
    // 0x800364CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800364EC;
    // 0x800364CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800364D0:
    // 0x800364D0: jal         0x80035D8C
    // 0x800364D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80035D8C_3698C(rdram, ctx);
        goto after_1;
    // 0x800364D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x800364D8: beql        $v0, $zero, L_800364EC
    if (ctx->r2 == 0) {
        // 0x800364DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800364EC;
    }
    goto skip_0;
    // 0x800364DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800364E0: b           L_800364F0
    // 0x800364E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800364F0;
    // 0x800364E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800364E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800364EC:
    // 0x800364EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800364F0:
    // 0x800364F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800364F4: jr          $ra
    // 0x800364F8: nop

    TRACE_RETURN()
    return;
    // 0x800364F8: nop

;}
RECOMP_FUNC void func_80001980_2580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001988: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000198C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80001990: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80001994: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80001998: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8000199C: addiu       $a0, $a0, 0x1A40
    ctx->r4 = ADD32(ctx->r4, 0X1A40);
    // 0x800019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800019A4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800019A8: jal         0x80040FD0
    // 0x800019AC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x800019AC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800019B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800019B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800019B8: jr          $ra
    // 0x800019BC: nop

    TRACE_RETURN()
    return;
    // 0x800019BC: nop

;}
RECOMP_FUNC void func_800133D4_13FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800133D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800133D8: jr          $ra
    // 0x800133DC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x800133DC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8003C720_3D320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C720: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C724: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C728: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003C72C: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x8003C730: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003C734: sb          $zero, 0x8C($t6)
    MEM_B(0X8C, ctx->r14) = 0;
    // 0x8003C738: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8003C73C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003C740: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8003C744: sb          $t8, 0x88($t9)
    MEM_B(0X88, ctx->r25) = ctx->r24;
    // 0x8003C748: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8003C74C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8003C750: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003C754: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8003C758: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x8003C75C: sb          $t3, 0x89($t4)
    MEM_B(0X89, ctx->r12) = ctx->r11;
    // 0x8003C760: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8003C764: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003C768: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003C76C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003C770: lb          $t8, 0x0($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X0);
    // 0x8003C774: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8003C778: sh          $t9, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r25;
    // 0x8003C77C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8003C780: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8003C784: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8003C788: jr          $ra
    // 0x8003C78C: nop

    TRACE_RETURN()
    return;
    // 0x8003C78C: nop

;}
RECOMP_FUNC void func_8003CCCC_3D8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CCCC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CCD0: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003CCD4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003CCD8: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003CCDC: lw          $t8, 0x1728($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1728);
    // 0x8003CCE0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003CCE4: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    // 0x8003CCE8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003CCEC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003CCF0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8003CCF4: jr          $ra
    // 0x8003CCF8: nop

    TRACE_RETURN()
    return;
    // 0x8003CCF8: nop

;}
RECOMP_FUNC void _getVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005015C: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80050160: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80050164: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x80050168: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x8005016C: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80050170: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80050174: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80050178: bne         $t9, $zero, L_80050188
    if (ctx->r25 != 0) {
        // 0x8005017C: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80050188;
    }
    // 0x8005017C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80050180: jr          $ra
    // 0x80050184: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    TRACE_RETURN()
    return;
    // 0x80050184: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80050188:
    // 0x80050188: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8005018C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80050190: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80050194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80050198: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005019C: bgez        $a2, L_800501B4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800501A0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800501B4;
    }
    // 0x800501A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800501A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800501A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800501AC: nop

    // 0x800501B0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_800501B4:
    // 0x800501B4: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x800501B8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800501BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800501C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800501C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800501C8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x800501CC: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800501D0: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_800501D4:
    // 0x800501D4: beq         $t7, $zero, L_800501E4
    if (ctx->r15 == 0) {
        // 0x800501D8: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_800501E4;
    }
    // 0x800501D8: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x800501DC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800501E0: nop

L_800501E4:
    // 0x800501E4: beq         $t8, $zero, L_800501FC
    if (ctx->r24 == 0) {
        // 0x800501E8: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_800501FC;
    }
    // 0x800501E8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800501EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800501F0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800501F4: bnel        $v0, $v1, L_800501D4
    if (ctx->r2 != ctx->r3) {
        // 0x800501F8: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_800501D4;
    }
    goto skip_0;
    // 0x800501F8: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_0:
L_800501FC:
    // 0x800501FC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80050200: nop

    // 0x80050204: jr          $ra
    // 0x80050208: nop

    TRACE_RETURN()
    return;
    // 0x80050208: nop

;}
RECOMP_FUNC void func_8003B394_3BF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B398: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B39C: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B3A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B3A8: lhu         $t6, 0x4C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4C);
    // 0x8003B3AC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003B3B0: sh          $t7, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r15;
    // 0x8003B3B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B3B8: lhu         $t8, 0x4C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4C);
    // 0x8003B3BC: bnel        $t8, $zero, L_8003B400
    if (ctx->r24 != 0) {
        // 0x8003B3C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003B400;
    }
    goto skip_0;
    // 0x8003B3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003B3C4: lbu         $v1, 0x49($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X49);
    // 0x8003B3C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003B3CC: beq         $v1, $zero, L_8003B3E4
    if (ctx->r3 == 0) {
        // 0x8003B3D0: nop
    
            goto L_8003B3E4;
    }
    // 0x8003B3D0: nop

    // 0x8003B3D4: beq         $v1, $at, L_8003B3F4
    if (ctx->r3 == ctx->r1) {
        // 0x8003B3D8: nop
    
            goto L_8003B3F4;
    }
    // 0x8003B3D8: nop

    // 0x8003B3DC: b           L_8003B400
    // 0x8003B3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B400;
    // 0x8003B3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B3E4:
    // 0x8003B3E4: jal         0x8003B248
    // 0x8003B3E8: nop

    func_8003B248_3BE48(rdram, ctx);
        goto after_0;
    // 0x8003B3E8: nop

    after_0:
    // 0x8003B3EC: b           L_8003B400
    // 0x8003B3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B400;
    // 0x8003B3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B3F4:
    // 0x8003B3F4: jal         0x8003B2B4
    // 0x8003B3F8: nop

    func_8003B2B4_3BEB4(rdram, ctx);
        goto after_1;
    // 0x8003B3F8: nop

    after_1:
    // 0x8003B3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B400:
    // 0x8003B400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B404: jr          $ra
    // 0x8003B408: nop

    TRACE_RETURN()
    return;
    // 0x8003B408: nop

;}
RECOMP_FUNC void func_8000702C_7C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000702C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80007030: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80007034: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80007038: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000703C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80007040: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80007044: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007048: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000704C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80007050: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80007054: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007058: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000705C: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x80007060: addiu       $s4, $zero, 0x29A
    ctx->r20 = ADD32(0, 0X29A);
    // 0x80007064: addiu       $s5, $zero, 0x29B
    ctx->r21 = ADD32(0, 0X29B);
    // 0x80007068: addiu       $s6, $zero, 0x29C
    ctx->r22 = ADD32(0, 0X29C);
    // 0x8000706C: addiu       $s7, $zero, 0x29D
    ctx->r23 = ADD32(0, 0X29D);
    // 0x80007070: addiu       $fp, $a0, 0x40
    ctx->r30 = ADD32(ctx->r4, 0X40);
    // 0x80007074: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_80007078:
    // 0x80007078: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8000707C: jal         0x80040110
    // 0x80007080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80007080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80007084: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80007088: beq         $a1, $s4, L_800070B0
    if (ctx->r5 == ctx->r20) {
        // 0x8000708C: nop
    
            goto L_800070B0;
    }
    // 0x8000708C: nop

    // 0x80007090: beq         $a1, $s5, L_800070C0
    if (ctx->r5 == ctx->r21) {
        // 0x80007094: nop
    
            goto L_800070C0;
    }
    // 0x80007094: nop

    // 0x80007098: beq         $a1, $s6, L_800070D0
    if (ctx->r5 == ctx->r22) {
        // 0x8000709C: nop
    
            goto L_800070D0;
    }
    // 0x8000709C: nop

    // 0x800070A0: beql        $a1, $s7, L_800070E4
    if (ctx->r5 == ctx->r23) {
        // 0x800070A4: lw          $s0, 0x298($s2)
        ctx->r16 = MEM_W(ctx->r18, 0X298);
            goto L_800070E4;
    }
    goto skip_0;
    // 0x800070A4: lw          $s0, 0x298($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X298);
    skip_0:
    // 0x800070A8: b           L_80007114
    // 0x800070AC: nop

        goto L_80007114;
    // 0x800070AC: nop

L_800070B0:
    // 0x800070B0: jal         0x80007204
    // 0x800070B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007204_7E04(rdram, ctx);
        goto after_1;
    // 0x800070B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x800070B8: b           L_80007078
    // 0x800070BC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
        goto L_80007078;
    // 0x800070BC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_800070C0:
    // 0x800070C0: jal         0x80007324
    // 0x800070C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007324_7F24(rdram, ctx);
        goto after_2;
    // 0x800070C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x800070C8: b           L_80007078
    // 0x800070CC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
        goto L_80007078;
    // 0x800070CC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_800070D0:
    // 0x800070D0: jal         0x80007478
    // 0x800070D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007478_8078(rdram, ctx);
        goto after_3;
    // 0x800070D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800070D8: b           L_80007078
    // 0x800070DC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
        goto L_80007078;
    // 0x800070DC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800070E0: lw          $s0, 0x298($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X298);
L_800070E4:
    // 0x800070E4: addiu       $s1, $s2, 0x20
    ctx->r17 = ADD32(ctx->r18, 0X20);
    // 0x800070E8: beql        $s0, $zero, L_80007078
    if (ctx->r16 == 0) {
        // 0x800070EC: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_80007078;
    }
    goto skip_1;
    // 0x800070EC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    skip_1:
    // 0x800070F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_800070F4:
    // 0x800070F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800070F8: jal         0x80040250
    // 0x800070FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x800070FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80007100: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80007104: bnel        $s0, $zero, L_800070F4
    if (ctx->r16 != 0) {
        // 0x80007108: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_800070F4;
    }
    goto skip_2;
    // 0x80007108: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x8000710C: b           L_80007078
    // 0x80007110: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
        goto L_80007078;
    // 0x80007110: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_80007114:
    // 0x80007114: jal         0x80007160
    // 0x80007118: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007160_7D60(rdram, ctx);
        goto after_5;
    // 0x80007118: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x8000711C: b           L_80007078
    // 0x80007120: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
        goto L_80007078;
    // 0x80007120: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80007124: nop

    // 0x80007128: nop

    // 0x8000712C: nop

    // 0x80007130: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80007134: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007138: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000713C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007140: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80007144: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80007148: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000714C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80007150: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80007154: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80007158: jr          $ra
    // 0x8000715C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8000715C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void _VirtualToPhysicalTask(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800427E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800427E4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x800427E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800427EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800427F0: addiu       $t6, $t6, -0x61B0
    ctx->r14 = ADD32(ctx->r14, -0X61B0);
    // 0x800427F4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800427F8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800427FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80042800: jal         0x8004BB00
    // 0x80042804: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    _bcopy(rdram, ctx);
        goto after_0;
    // 0x80042804: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80042808: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8004280C: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80042810: beq         $t8, $zero, L_80042828
    if (ctx->r24 == 0) {
        // 0x80042814: nop
    
            goto L_80042828;
    }
    // 0x80042814: nop

    // 0x80042818: jal         0x80047710
    // 0x8004281C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8004281C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x80042820: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80042824: sw          $v0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r2;
L_80042828:
    // 0x80042828: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8004282C: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x80042830: beq         $t1, $zero, L_80042848
    if (ctx->r9 == 0) {
        // 0x80042834: nop
    
            goto L_80042848;
    }
    // 0x80042834: nop

    // 0x80042838: jal         0x80047710
    // 0x8004283C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8004283C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_2:
    // 0x80042840: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80042844: sw          $v0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r2;
L_80042848:
    // 0x80042848: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8004284C: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x80042850: beq         $t4, $zero, L_80042868
    if (ctx->r12 == 0) {
        // 0x80042854: nop
    
            goto L_80042868;
    }
    // 0x80042854: nop

    // 0x80042858: jal         0x80047710
    // 0x8004285C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x8004285C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_3:
    // 0x80042860: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80042864: sw          $v0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r2;
L_80042868:
    // 0x80042868: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8004286C: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x80042870: beq         $t7, $zero, L_80042888
    if (ctx->r15 == 0) {
        // 0x80042874: nop
    
            goto L_80042888;
    }
    // 0x80042874: nop

    // 0x80042878: jal         0x80047710
    // 0x8004287C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x8004287C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x80042880: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80042884: sw          $v0, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r2;
L_80042888:
    // 0x80042888: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8004288C: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x80042890: beq         $t0, $zero, L_800428A8
    if (ctx->r8 == 0) {
        // 0x80042894: nop
    
            goto L_800428A8;
    }
    // 0x80042894: nop

    // 0x80042898: jal         0x80047710
    // 0x8004289C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x8004289C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_5:
    // 0x800428A0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800428A4: sw          $v0, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->r2;
L_800428A8:
    // 0x800428A8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800428AC: lw          $t3, 0x30($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X30);
    // 0x800428B0: beq         $t3, $zero, L_800428C8
    if (ctx->r11 == 0) {
        // 0x800428B4: nop
    
            goto L_800428C8;
    }
    // 0x800428B4: nop

    // 0x800428B8: jal         0x80047710
    // 0x800428BC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_6;
    // 0x800428BC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_6:
    // 0x800428C0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800428C4: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
L_800428C8:
    // 0x800428C8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800428CC: lw          $t6, 0x38($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X38);
    // 0x800428D0: beq         $t6, $zero, L_800428E8
    if (ctx->r14 == 0) {
        // 0x800428D4: nop
    
            goto L_800428E8;
    }
    // 0x800428D4: nop

    // 0x800428D8: jal         0x80047710
    // 0x800428DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x800428DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_7:
    // 0x800428E0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800428E4: sw          $v0, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->r2;
L_800428E8:
    // 0x800428E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800428EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800428F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800428F4: jr          $ra
    // 0x800428F8: nop

    TRACE_RETURN()
    return;
    // 0x800428F8: nop

;}
RECOMP_FUNC void func_8003F6E8_402E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F6E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F6EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F6F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F6F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8003F6F8: jal         0x80037C20
    // 0x8003F6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_0;
    // 0x8003F6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8003F700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F708: jr          $ra
    // 0x8003F70C: nop

    TRACE_RETURN()
    return;
    // 0x8003F70C: nop

    // 0x8003F710: jr          $ra
    // 0x8003F714: nop

    TRACE_RETURN()
    return;
    // 0x8003F714: nop

;}
RECOMP_FUNC void func_80038F68_39B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038F68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80038F6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80038F70: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80038F74: addiu       $s4, $s4, 0x9FD
    ctx->r20 = ADD32(ctx->r20, 0X9FD);
    // 0x80038F78: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80038F7C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80038F80: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80038F84: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80038F88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80038F8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80038F90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80038F94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80038F98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80038F9C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80038FA0: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80038FA4: addiu       $s2, $s2, 0xA00
    ctx->r18 = ADD32(ctx->r18, 0XA00);
    // 0x80038FA8: beq         $v0, $zero, L_800390A8
    if (ctx->r2 == 0) {
        // 0x80038FAC: addiu       $fp, $zero, 0xA
        ctx->r30 = ADD32(0, 0XA);
            goto L_800390A8;
    }
    // 0x80038FAC: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
    // 0x80038FB0: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x80038FB4: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80038FB8: addiu       $s3, $s3, 0xA20
    ctx->r19 = ADD32(ctx->r19, 0XA20);
    // 0x80038FBC: addiu       $s6, $s6, 0xC28
    ctx->r22 = ADD32(ctx->r22, 0XC28);
    // 0x80038FC0: addiu       $s7, $zero, 0xC0
    ctx->r23 = ADD32(0, 0XC0);
    // 0x80038FC4: addiu       $s5, $zero, 0x50
    ctx->r21 = ADD32(0, 0X50);
    // 0x80038FC8: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
L_80038FCC:
    // 0x80038FCC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80038FD0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80038FD4: andi        $t1, $t0, 0x7FFF
    ctx->r9 = ctx->r8 & 0X7FFF;
    // 0x80038FD8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80038FDC: sb          $t9, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r25;
    // 0x80038FE0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80038FE4: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80038FE8: bne         $s5, $t1, L_80039010
    if (ctx->r21 != ctx->r9) {
        // 0x80038FEC: andi        $s0, $t7, 0xFFFF
        ctx->r16 = ctx->r15 & 0XFFFF;
            goto L_80039010;
    }
    // 0x80038FEC: andi        $s0, $t7, 0xFFFF
    ctx->r16 = ctx->r15 & 0XFFFF;
    // 0x80038FF0: jal         0x8000631C
    // 0x80038FF4: nop

    func_8000631C_6F1C(rdram, ctx);
        goto after_0;
    // 0x80038FF4: nop

    after_0:
    // 0x80038FF8: beq         $v0, $zero, L_80039010
    if (ctx->r2 == 0) {
        // 0x80038FFC: nop
    
            goto L_80039010;
    }
    // 0x80038FFC: nop

    // 0x80039000: bne         $s7, $s0, L_80039010
    if (ctx->r23 != ctx->r16) {
        // 0x80039004: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80039010;
    }
    // 0x80039004: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80039008: jal         0x8003A138
    // 0x8003900C: sw          $fp, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r30;
    func_8003A138_3AD38(rdram, ctx);
        goto after_1;
    // 0x8003900C: sw          $fp, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r30;
    after_1:
L_80039010:
    // 0x80039010: beq         $s1, $zero, L_8003909C
    if (ctx->r17 == 0) {
        // 0x80039014: slti        $at, $s0, 0x100
        ctx->r1 = SIGNED(ctx->r16) < 0X100 ? 1 : 0;
            goto L_8003909C;
    }
    // 0x80039014: slti        $at, $s0, 0x100
    ctx->r1 = SIGNED(ctx->r16) < 0X100 ? 1 : 0;
    // 0x80039018: beq         $at, $zero, L_80039074
    if (ctx->r1 == 0) {
        // 0x8003901C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80039074;
    }
    // 0x8003901C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80039020: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80039024: beq         $at, $zero, L_80039048
    if (ctx->r1 == 0) {
        // 0x80039028: sll         $t2, $s0, 2
        ctx->r10 = S32(ctx->r16 << 2);
            goto L_80039048;
    }
    // 0x80039028: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8003902C: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80039030: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80039034: lw          $t9, -0x1A34($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1A34);
    // 0x80039038: jalr        $t9
    // 0x8003903C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8003903C: nop

    after_2:
    // 0x80039040: b           L_800390A0
    // 0x80039044: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
        goto L_800390A0;
    // 0x80039044: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
L_80039048:
    // 0x80039048: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x8003904C: beq         $at, $zero, L_80039064
    if (ctx->r1 == 0) {
        // 0x80039050: nop
    
            goto L_80039064;
    }
    // 0x80039050: nop

    // 0x80039054: jal         0x80039554
    // 0x80039058: nop

    func_80039554_3A154(rdram, ctx);
        goto after_3;
    // 0x80039058: nop

    after_3:
    // 0x8003905C: b           L_800390A0
    // 0x80039060: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
        goto L_800390A0;
    // 0x80039060: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
L_80039064:
    // 0x80039064: jal         0x80038D64
    // 0x80039068: nop

    func_80038D64_39964(rdram, ctx);
        goto after_4;
    // 0x80039068: nop

    after_4:
    // 0x8003906C: b           L_800390A0
    // 0x80039070: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
        goto L_800390A0;
    // 0x80039070: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
L_80039074:
    // 0x80039074: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80039078: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003907C: beq         $at, $zero, L_80039094
    if (ctx->r1 == 0) {
        // 0x80039080: nop
    
            goto L_80039094;
    }
    // 0x80039080: nop

    // 0x80039084: jal         0x800390D8
    // 0x80039088: nop

    func_800390D8_39CD8(rdram, ctx);
        goto after_5;
    // 0x80039088: nop

    after_5:
    // 0x8003908C: b           L_800390A0
    // 0x80039090: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
        goto L_800390A0;
    // 0x80039090: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
L_80039094:
    // 0x80039094: jal         0x8003A24C
    // 0x80039098: nop

    func_8003A24C_3AE4C(rdram, ctx);
        goto after_6;
    // 0x80039098: nop

    after_6:
L_8003909C:
    // 0x8003909C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
L_800390A0:
    // 0x800390A0: bnel        $v0, $zero, L_80038FCC
    if (ctx->r2 != 0) {
        // 0x800390A4: lw          $t0, 0x0($s6)
        ctx->r8 = MEM_W(ctx->r22, 0X0);
            goto L_80038FCC;
    }
    goto skip_0;
    // 0x800390A4: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    skip_0:
L_800390A8:
    // 0x800390A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800390AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800390B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800390B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800390B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800390BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800390C0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800390C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800390C8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800390CC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800390D0: jr          $ra
    // 0x800390D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x800390D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003B564_3C164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B568: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003B56C: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003B570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B574: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003B578: lui         $at, 0x7F
    ctx->r1 = S32(0X7F << 16);
    // 0x8003B57C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B580: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x8003B584: beq         $t6, $zero, L_8003B5C0
    if (ctx->r14 == 0) {
        // 0x8003B588: srl         $v0, $t6, 8
        ctx->r2 = S32(U32(ctx->r14) >> 8);
            goto L_8003B5C0;
    }
    // 0x8003B588: srl         $v0, $t6, 8
    ctx->r2 = S32(U32(ctx->r14) >> 8);
    // 0x8003B58C: sltiu       $at, $v0, 0x7F01
    ctx->r1 = ctx->r2 < 0X7F01 ? 1 : 0;
    // 0x8003B590: bnel        $at, $zero, L_8003B5A0
    if (ctx->r1 != 0) {
        // 0x8003B594: sb          $zero, 0x5B($v1)
        MEM_B(0X5B, ctx->r3) = 0;
            goto L_8003B5A0;
    }
    goto skip_0;
    // 0x8003B594: sb          $zero, 0x5B($v1)
    MEM_B(0X5B, ctx->r3) = 0;
    skip_0:
    // 0x8003B598: addiu       $v0, $zero, 0x7F00
    ctx->r2 = ADD32(0, 0X7F00);
    // 0x8003B59C: sb          $zero, 0x5B($v1)
    MEM_B(0X5B, ctx->r3) = 0;
L_8003B5A0:
    // 0x8003B5A0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8003B5A4: ori         $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 | 0X8000;
    // 0x8003B5A8: jal         0x8003BCFC
    // 0x8003B5AC: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    func_8003BCFC_3C8FC(rdram, ctx);
        goto after_0;
    // 0x8003B5AC: sh          $t8, 0x58($t9)
    MEM_H(0X58, ctx->r25) = ctx->r24;
    after_0:
    // 0x8003B5B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B5B4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003B5B8: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003B5BC: lw          $v1, 0x1728($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1728);
L_8003B5C0:
    // 0x8003B5C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B5C4: addiu       $v0, $v0, 0x172C
    ctx->r2 = ADD32(ctx->r2, 0X172C);
    // 0x8003B5C8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8003B5CC: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8003B5D0: sb          $t1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r9;
    // 0x8003B5D4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8003B5D8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8003B5DC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003B5E0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003B5E4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8003B5E8: lbu         $a1, 0xC($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0XC);
    // 0x8003B5EC: addiu       $a0, $a0, -0x1080
    ctx->r4 = ADD32(ctx->r4, -0X1080);
    // 0x8003B5F0: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8003B5F4: beq         $at, $zero, L_8003B61C
    if (ctx->r1 == 0) {
        // 0x8003B5F8: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_8003B61C;
    }
    // 0x8003B5F8: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x8003B5FC: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    // 0x8003B600: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003B604: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x8003B608: lw          $a0, -0x1660($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1660);
    // 0x8003B60C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8003B610: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8003B614: b           L_8003B61C
    // 0x8003B618: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
        goto L_8003B61C;
    // 0x8003B618: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
L_8003B61C:
    // 0x8003B61C: jal         0x8003B634
    // 0x8003B620: nop

    func_8003B634_3C234(rdram, ctx);
        goto after_1;
    // 0x8003B620: nop

    after_1:
    // 0x8003B624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B62C: jr          $ra
    // 0x8003B630: nop

    TRACE_RETURN()
    return;
    // 0x8003B630: nop

;}
RECOMP_FUNC void func_80034D24_35924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034D28: bne         $a0, $zero, L_80034D38
    if (ctx->r4 != 0) {
        // 0x80034D2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80034D38;
    }
    // 0x80034D2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80034D30: b           L_80034DD0
    // 0x80034D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034DD0;
    // 0x80034D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034D38:
    // 0x80034D38: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80034D3C: beql        $v1, $zero, L_80034DD0
    if (ctx->r3 == 0) {
        // 0x80034D40: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80034DD0;
    }
    goto skip_0;
    // 0x80034D40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x80034D44: lhu         $a1, 0x20($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X20);
    // 0x80034D48: lhu         $a2, 0x20($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X20);
    // 0x80034D4C: lw          $a3, 0x4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4);
    // 0x80034D50: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80034D54: bnel        $at, $zero, L_80034DD0
    if (ctx->r1 != 0) {
        // 0x80034D58: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80034DD0;
    }
    goto skip_1;
    // 0x80034D58: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_1:
L_80034D5C:
    // 0x80034D5C: bne         $v0, $zero, L_80034D74
    if (ctx->r2 != 0) {
        // 0x80034D60: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_80034D74;
    }
    // 0x80034D60: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80034D64: bnel        $a1, $a2, L_80034D78
    if (ctx->r5 != ctx->r6) {
        // 0x80034D68: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80034D78;
    }
    goto skip_2;
    // 0x80034D68: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80034D6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80034D70: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
L_80034D74:
    // 0x80034D74: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80034D78:
    // 0x80034D78: beq         $v1, $zero, L_80034D90
    if (ctx->r3 == 0) {
        // 0x80034D7C: nop
    
            goto L_80034D90;
    }
    // 0x80034D7C: nop

    // 0x80034D80: lhu         $a1, 0x20($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X20);
    // 0x80034D84: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80034D88: beq         $at, $zero, L_80034D5C
    if (ctx->r1 == 0) {
        // 0x80034D8C: nop
    
            goto L_80034D5C;
    }
    // 0x80034D8C: nop

L_80034D90:
    // 0x80034D90: beql        $v0, $zero, L_80034DD0
    if (ctx->r2 == 0) {
        // 0x80034D94: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80034DD0;
    }
    goto skip_3;
    // 0x80034D94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_3:
    // 0x80034D98: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80034D9C: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x80034DA0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x80034DA4: beq         $v1, $zero, L_80034DB0
    if (ctx->r3 == 0) {
        // 0x80034DA8: sw          $v1, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r3;
            goto L_80034DB0;
    }
    // 0x80034DA8: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80034DAC: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
L_80034DB0:
    // 0x80034DB0: bne         $a1, $a0, L_80034DC4
    if (ctx->r5 != ctx->r4) {
        // 0x80034DB4: lui         $at, 0x8007
        ctx->r1 = S32(0X8007 << 16);
            goto L_80034DC4;
    }
    // 0x80034DB4: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80034DB8: sw          $v0, -0x2CD8($at)
    MEM_W(-0X2CD8, ctx->r1) = ctx->r2;
    // 0x80034DBC: b           L_80034DCC
    // 0x80034DC0: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
        goto L_80034DCC;
    // 0x80034DC0: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
L_80034DC4:
    // 0x80034DC4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80034DC8: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
L_80034DCC:
    // 0x80034DCC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80034DD0:
    // 0x80034DD0: jr          $ra
    // 0x80034DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80034DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001E2BC_1EEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E2BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001E2C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001E2C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8001E2C8: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8001E2CC: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8001E2D0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001E2D4: bne         $v1, $v0, L_8001E2E8
    if (ctx->r3 != ctx->r2) {
        // 0x8001E2D8: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001E2E8;
    }
    // 0x8001E2D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E2DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E2E0: b           L_8001E2EC
    // 0x8001E2E4: sh          $zero, -0x7610($at)
    MEM_H(-0X7610, ctx->r1) = 0;
        goto L_8001E2EC;
    // 0x8001E2E4: sh          $zero, -0x7610($at)
    MEM_H(-0X7610, ctx->r1) = 0;
L_8001E2E8:
    // 0x8001E2E8: sh          $v0, -0x7610($at)
    MEM_H(-0X7610, ctx->r1) = ctx->r2;
L_8001E2EC:
    // 0x8001E2EC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8001E2F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E2F4: bne         $v1, $v0, L_8001E308
    if (ctx->r3 != ctx->r2) {
        // 0x8001E2F8: nop
    
            goto L_8001E308;
    }
    // 0x8001E2F8: nop

    // 0x8001E2FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E300: b           L_8001E30C
    // 0x8001E304: sh          $zero, -0x760E($at)
    MEM_H(-0X760E, ctx->r1) = 0;
        goto L_8001E30C;
    // 0x8001E304: sh          $zero, -0x760E($at)
    MEM_H(-0X760E, ctx->r1) = 0;
L_8001E308:
    // 0x8001E308: sh          $v0, -0x760E($at)
    MEM_H(-0X760E, ctx->r1) = ctx->r2;
L_8001E30C:
    // 0x8001E30C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8001E310: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E314: bne         $v1, $v0, L_8001E328
    if (ctx->r3 != ctx->r2) {
        // 0x8001E318: nop
    
            goto L_8001E328;
    }
    // 0x8001E318: nop

    // 0x8001E31C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E320: b           L_8001E32C
    // 0x8001E324: sh          $zero, -0x760C($at)
    MEM_H(-0X760C, ctx->r1) = 0;
        goto L_8001E32C;
    // 0x8001E324: sh          $zero, -0x760C($at)
    MEM_H(-0X760C, ctx->r1) = 0;
L_8001E328:
    // 0x8001E328: sh          $v0, -0x760C($at)
    MEM_H(-0X760C, ctx->r1) = ctx->r2;
L_8001E32C:
    // 0x8001E32C: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8001E330: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8001E334: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x8001E338: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8001E33C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8001E340: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x8001E344: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8001E348: lhu         $t8, 0x18($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X18);
    // 0x8001E34C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001E350: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8001E354: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8001E358: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8001E35C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8001E360: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8001E364: jal         0x8001E9B0
    // 0x8001E368: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_8001E9B0_1F5B0(rdram, ctx);
        goto after_0;
    // 0x8001E368: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8001E36C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001E370: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8001E374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001E378: jr          $ra
    // 0x8001E37C: nop

    TRACE_RETURN()
    return;
    // 0x8001E37C: nop

;}
RECOMP_FUNC void func_80038210_38E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038210: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80038214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80038218: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8003821C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80038220: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80038224: jal         0x800385C4
    // 0x80038228: nop

    func_800385C4_391C4(rdram, ctx);
        goto after_0;
    // 0x80038228: nop

    after_0:
    // 0x8003822C: jal         0x80047710
    // 0x80038230: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80038230: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x80038234: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80038238: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8003823C: beq         $v1, $zero, L_80038258
    if (ctx->r3 == 0) {
        // 0x80038240: nop
    
            goto L_80038258;
    }
    // 0x80038240: nop

    // 0x80038244: lh          $a1, 0x4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X4);
    // 0x80038248: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8003824C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80038250: jal         0x80047790
    // 0x80038254: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x80038254: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_80038258:
    // 0x80038258: jal         0x80047840
    // 0x8003825C: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_3;
    // 0x8003825C: nop

    after_3:
    // 0x80038260: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80038264: lw          $t7, 0x224C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X224C);
    // 0x80038268: srl         $t8, $v0, 2
    ctx->r24 = S32(U32(ctx->r2) >> 2);
    // 0x8003826C: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80038270: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80038274: addiu       $t2, $t9, 0x100
    ctx->r10 = ADD32(ctx->r25, 0X100);
    // 0x80038278: andi        $t3, $t2, 0xFFF0
    ctx->r11 = ctx->r10 & 0XFFF0;
    // 0x8003827C: sh          $t3, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r11;
    // 0x80038280: lw          $v1, 0x2248($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2248);
    // 0x80038284: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80038288: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x8003828C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80038290: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038294: beq         $at, $zero, L_800382A4
    if (ctx->r1 == 0) {
        // 0x80038298: nop
    
            goto L_800382A4;
    }
    // 0x80038298: nop

    // 0x8003829C: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x800382A0: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
L_800382A4:
    // 0x800382A4: lw          $t4, -0x1DC8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1DC8);
    // 0x800382A8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800382AC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800382B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800382B4: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x800382B8: jal         0x80047998
    // 0x800382BC: lw          $a0, -0x2490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2490);
    alAudioFrame(rdram, ctx);
        goto after_4;
    // 0x800382BC: lw          $a0, -0x2490($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2490);
    after_4:
    // 0x800382C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800382C4: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x800382C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800382CC: addiu       $t1, $t1, -0x2490
    ctx->r9 = ADD32(ctx->r9, -0X2490);
    // 0x800382D0: addiu       $v1, $v1, -0x1DC8
    ctx->r3 = ADD32(ctx->r3, -0X1DC8);
    // 0x800382D4: bne         $t6, $zero, L_800382E4
    if (ctx->r14 != 0) {
        // 0x800382D8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800382E4;
    }
    // 0x800382D8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800382DC: b           L_800383B0
    // 0x800382E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800383B0;
    // 0x800382E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800382E4:
    // 0x800382E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800382E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800382EC: addiu       $t7, $t7, -0x21B0
    ctx->r15 = ADD32(ctx->r15, -0X21B0);
    // 0x800382F0: addiu       $t8, $s0, 0x70
    ctx->r24 = ADD32(ctx->r16, 0X70);
    // 0x800382F4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x800382F8: sw          $t7, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r15;
    // 0x800382FC: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x80038300: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80038304: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80038308: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8003830C: addiu       $t0, $t0, 0x25B0
    ctx->r8 = ADD32(ctx->r8, 0X25B0);
    // 0x80038310: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80038314: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80038318: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8003831C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80038320: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x80038324: sw          $t4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r12;
    // 0x80038328: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8003832C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80038330: addiu       $t4, $t4, 0x2680
    ctx->r12 = ADD32(ctx->r12, 0X2680);
    // 0x80038334: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80038338: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x8003833C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80038340: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80038344: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80038348: subu        $t9, $a3, $t8
    ctx->r25 = SUB32(ctx->r7, ctx->r24);
    // 0x8003834C: sra         $t2, $t9, 3
    ctx->r10 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80038350: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80038354: subu        $t5, $t4, $t0
    ctx->r13 = SUB32(ctx->r12, ctx->r8);
    // 0x80038358: addiu       $t6, $t6, 0x3AB0
    ctx->r14 = ADD32(ctx->r14, 0X3AB0);
    // 0x8003835C: addiu       $t7, $t7, -0x22A0
    ctx->r15 = ADD32(ctx->r15, -0X22A0);
    // 0x80038360: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80038364: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x80038368: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8003836C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x80038370: sw          $t5, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r13;
    // 0x80038374: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80038378: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    // 0x8003837C: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x80038380: sw          $t8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r24;
    // 0x80038384: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80038388: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8003838C: lw          $a0, -0x3350($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3350);
    // 0x80038390: jal         0x80040250
    // 0x80038394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80038394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80038398: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x8003839C: addiu       $v1, $v1, -0x1DC8
    ctx->r3 = ADD32(ctx->r3, -0X1DC8);
    // 0x800383A0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800383A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800383A8: xori        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 ^ 0X1;
    // 0x800383AC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_800383B0:
    // 0x800383B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800383B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800383B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800383BC: jr          $ra
    // 0x800383C0: nop

    TRACE_RETURN()
    return;
    // 0x800383C0: nop

;}
RECOMP_FUNC void func_8003C970_3D570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C970: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003C974: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003C978: addiu       $a2, $a2, 0x1728
    ctx->r6 = ADD32(ctx->r6, 0X1728);
    // 0x8003C97C: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x8003C980: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003C984: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003C988: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003C98C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8003C990: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8003C994: lbu         $t7, 0x5E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5E);
    // 0x8003C998: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003C99C: beq         $v0, $zero, L_8003C9B4
    if (ctx->r2 == 0) {
        // 0x8003C9A0: sb          $t8, 0x5E($a0)
        MEM_B(0X5E, ctx->r4) = ctx->r24;
            goto L_8003C9B4;
    }
    // 0x8003C9A0: sb          $t8, 0x5E($a0)
    MEM_B(0X5E, ctx->r4) = ctx->r24;
    // 0x8003C9A4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003C9A8: lbu         $t9, 0x5E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X5E);
    // 0x8003C9AC: beql        $t9, $v0, L_8003CA10
    if (ctx->r25 == ctx->r2) {
        // 0x8003C9B0: sh          $zero, 0x40($a0)
        MEM_H(0X40, ctx->r4) = 0;
            goto L_8003CA10;
    }
    goto skip_0;
    // 0x8003C9B0: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    skip_0:
L_8003C9B4:
    // 0x8003C9B4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003C9B8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8003C9BC: lh          $t0, 0x40($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X40);
    // 0x8003C9C0: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x8003C9C4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8003C9C8: sh          $t3, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r11;
    // 0x8003C9CC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8003C9D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003C9D4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003C9D8: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x8003C9DC: lb          $t8, 0x0($t5)
    ctx->r24 = MEM_B(ctx->r13, 0X0);
    // 0x8003C9E0: lh          $t6, 0x32($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X32);
    // 0x8003C9E4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8003C9E8: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x8003C9EC: sh          $t1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r9;
    // 0x8003C9F0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003C9F4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8003C9F8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8003C9FC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x8003CA00: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x8003CA04: jr          $ra
    // 0x8003CA08: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x8003CA08: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8003CA0C: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
L_8003CA10:
    // 0x8003CA10: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8003CA14: lh          $t5, 0x40($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X40);
    // 0x8003CA18: sh          $t5, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r13;
    // 0x8003CA1C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003CA20: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8003CA24: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8003CA28: jr          $ra
    // 0x8003CA2C: nop

    TRACE_RETURN()
    return;
    // 0x8003CA2C: nop

;}
RECOMP_FUNC void func_80035690_36290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035690: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035694: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80035698: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8003569C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x800356A0: lhu         $a3, 0x86($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X86);
    // 0x800356A4: jal         0x80034CBC
    // 0x800356A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80034CBC_358BC(rdram, ctx);
        goto after_0;
    // 0x800356A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800356AC: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800356B0: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800356B4: lhu         $t6, 0x66($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X66);
    // 0x800356B8: lhu         $t7, 0x6A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6A);
    // 0x800356BC: lhu         $t8, 0x6E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6E);
    // 0x800356C0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800356C4: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800356C8: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800356CC: lhu         $t9, 0x7E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7E);
    // 0x800356D0: lhu         $t0, 0x82($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X82);
    // 0x800356D4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x800356D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800356DC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x800356E0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800356E4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x800356E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800356EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800356F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800356F4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800356F8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800356FC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80035700: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80035704: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80035708: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8003570C: jal         0x80035964
    // 0x80035710: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_80035964_36564(rdram, ctx);
        goto after_1;
    // 0x80035710: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_1:
    // 0x80035714: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80035718: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8003571C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80035720: jr          $ra
    // 0x80035724: nop

    TRACE_RETURN()
    return;
    // 0x80035724: nop

;}
RECOMP_FUNC void func_8001CD4C_1D94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001CD4C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8001CD50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001CD54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001CD58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001CD5C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8001CD60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8001CD64: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8001CD68: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8001CD6C: jal         0x8001D898
    // 0x8001CD70: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x8001CD70: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x8001CD74: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001CD78: jal         0x800040A8
    // 0x8001CD7C: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001CD7C: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x8001CD80: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8001CD84: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001CD88: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001CD8C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001CD90: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8001CD94: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8001CD98: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CD9C: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001CDA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001CDA4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8001CDA8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8001CDAC: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x8001CDB0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001CDB4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x8001CDB8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001CDBC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001CDC0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001CDC4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8001CDC8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8001CDCC: bc1fl       L_8001CDE0
    if (!c1cs) {
        // 0x8001CDD0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8001CDE0;
    }
    goto skip_0;
    // 0x8001CDD0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x8001CDD4: b           L_8001CDE0
    // 0x8001CDD8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8001CDE0;
    // 0x8001CDD8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8001CDDC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8001CDE0:
    // 0x8001CDE0: ldc1        $f18, -0x4718($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4718);
    // 0x8001CDE4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8001CDE8: c.lt.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d < ctx->f18.d;
    // 0x8001CDEC: nop

    // 0x8001CDF0: bc1f        L_8001CE08
    if (!c1cs) {
        // 0x8001CDF4: nop
    
            goto L_8001CE08;
    }
    // 0x8001CDF4: nop

    // 0x8001CDF8: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x8001CDFC: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8001CE00: b           L_8001CF48
    // 0x8001CE04: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
        goto L_8001CF48;
    // 0x8001CE04: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_8001CE08:
    // 0x8001CE08: jal         0x8001D898
    // 0x8001CE0C: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    func_8001D898_1E498(rdram, ctx);
        goto after_2;
    // 0x8001CE0C: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    after_2:
    // 0x8001CE10: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001CE14: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001CE18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001CE1C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001CE20: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001CE24: ldc1        $f18, -0x4710($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X4710);
    // 0x8001CE28: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8001CE2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001CE30: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8001CE34: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001CE38: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8001CE3C: nop

    // 0x8001CE40: bc1fl       L_8001CE54
    if (!c1cs) {
        // 0x8001CE44: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8001CE54;
    }
    goto skip_1;
    // 0x8001CE44: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x8001CE48: b           L_8001CE54
    // 0x8001CE4C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8001CE54;
    // 0x8001CE4C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8001CE50: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8001CE54:
    // 0x8001CE54: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8001CE58: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x8001CE5C: nop

    // 0x8001CE60: bc1f        L_8001CE78
    if (!c1cs) {
        // 0x8001CE64: nop
    
            goto L_8001CE78;
    }
    // 0x8001CE64: nop

    // 0x8001CE68: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x8001CE6C: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8001CE70: b           L_8001CF48
    // 0x8001CE74: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
        goto L_8001CF48;
    // 0x8001CE74: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_8001CE78:
    // 0x8001CE78: jal         0x800040A8
    // 0x8001CE7C: nop

    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x8001CE7C: nop

    after_3:
    // 0x8001CE80: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001CE84: subu        $v1, $t6, $v0
    ctx->r3 = SUB32(ctx->r14, ctx->r2);
    // 0x8001CE88: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x8001CE8C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x8001CE90: beq         $t8, $zero, L_8001CEBC
    if (ctx->r24 == 0) {
        // 0x8001CE94: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_8001CEBC;
    }
    // 0x8001CE94: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8001CE98: andi        $t9, $t7, 0x100
    ctx->r25 = ctx->r15 & 0X100;
    // 0x8001CE9C: beq         $t9, $zero, L_8001CEB0
    if (ctx->r25 == 0) {
        // 0x8001CEA0: addiu       $t0, $zero, -0x100
        ctx->r8 = ADD32(0, -0X100);
            goto L_8001CEB0;
    }
    // 0x8001CEA0: addiu       $t0, $zero, -0x100
    ctx->r8 = ADD32(0, -0X100);
    // 0x8001CEA4: addiu       $a3, $t7, 0x100
    ctx->r7 = ADD32(ctx->r15, 0X100);
    // 0x8001CEA8: b           L_8001CED8
    // 0x8001CEAC: addiu       $v1, $v0, -0xF0
    ctx->r3 = ADD32(ctx->r2, -0XF0);
        goto L_8001CED8;
    // 0x8001CEAC: addiu       $v1, $v0, -0xF0
    ctx->r3 = ADD32(ctx->r2, -0XF0);
L_8001CEB0:
    // 0x8001CEB0: subu        $a3, $t0, $v1
    ctx->r7 = SUB32(ctx->r8, ctx->r3);
    // 0x8001CEB4: b           L_8001CED8
    // 0x8001CEB8: addiu       $v1, $v0, -0xF0
    ctx->r3 = ADD32(ctx->r2, -0XF0);
        goto L_8001CED8;
    // 0x8001CEB8: addiu       $v1, $v0, -0xF0
    ctx->r3 = ADD32(ctx->r2, -0XF0);
L_8001CEBC:
    // 0x8001CEBC: andi        $t1, $v1, 0x100
    ctx->r9 = ctx->r3 & 0X100;
    // 0x8001CEC0: beq         $t1, $zero, L_8001CED0
    if (ctx->r9 == 0) {
        // 0x8001CEC4: addiu       $t2, $zero, 0x100
        ctx->r10 = ADD32(0, 0X100);
            goto L_8001CED0;
    }
    // 0x8001CEC4: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x8001CEC8: b           L_8001CED4
    // 0x8001CECC: addiu       $a3, $v1, -0x100
    ctx->r7 = ADD32(ctx->r3, -0X100);
        goto L_8001CED4;
    // 0x8001CECC: addiu       $a3, $v1, -0x100
    ctx->r7 = ADD32(ctx->r3, -0X100);
L_8001CED0:
    // 0x8001CED0: subu        $a3, $t2, $v1
    ctx->r7 = SUB32(ctx->r10, ctx->r3);
L_8001CED4:
    // 0x8001CED4: addiu       $v1, $v0, 0xF0
    ctx->r3 = ADD32(ctx->r2, 0XF0);
L_8001CED8:
    // 0x8001CED8: andi        $t3, $a3, 0x3FF
    ctx->r11 = ctx->r7 & 0X3FF;
    // 0x8001CEDC: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    // 0x8001CEE0: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8001CEE4: jal         0x80003EA0
    // 0x8001CEE8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_4;
    // 0x8001CEE8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_4:
    // 0x8001CEEC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001CEF0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8001CEF4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8001CEF8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8001CEFC: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x8001CF00: jal         0x80003F30
    // 0x8001CF04: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_5;
    // 0x8001CF04: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8001CF08: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001CF0C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001CF10: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001CF14: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x8001CF18: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001CF1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001CF20: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x8001CF24: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001CF28: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x8001CF2C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x8001CF30: jal         0x8001D718
    // 0x8001CF34: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_6;
    // 0x8001CF34: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8001CF38: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001CF3C: ori         $v0, $a3, 0x400
    ctx->r2 = ctx->r7 | 0X400;
    // 0x8001CF40: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x8001CF44: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8001CF48:
    // 0x8001CF48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CF4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001CF50: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8001CF54: jr          $ra
    // 0x8001CF58: nop

    TRACE_RETURN()
    return;
    // 0x8001CF58: nop

;}
RECOMP_FUNC void func_80023F14_24B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023F14: bgez        $a0, L_80023F24
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023F18: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023F24;
    }
    // 0x80023F18: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023F1C: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023F20: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023F24:
    // 0x80023F24: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023F28: addiu       $t8, $t8, -0x7108
    ctx->r24 = ADD32(ctx->r24, -0X7108);
    // 0x80023F2C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023F30: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80023F34: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80023F38: bgez        $a0, L_80023F4C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023F3C: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_80023F4C;
    }
    // 0x80023F3C: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x80023F40: beq         $t0, $zero, L_80023F4C
    if (ctx->r8 == 0) {
        // 0x80023F44: nop
    
            goto L_80023F4C;
    }
    // 0x80023F44: nop

    // 0x80023F48: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80023F4C:
    // 0x80023F4C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80023F50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80023F54: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80023F58: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80023F5C: jr          $ra
    // 0x80023F60: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x80023F60: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void ldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051820: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x80051824: mflo        $v0
    ctx->r2 = lo;
    // 0x80051828: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005182C: bne         $a2, $zero, L_80051838
    if (ctx->r6 != 0) {
        // 0x80051830: nop
    
            goto L_80051838;
    }
    // 0x80051830: nop

    // 0x80051834: break       7
    do_break(2147817524);
L_80051838:
    // 0x80051838: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005183C: bne         $a2, $at, L_80051850
    if (ctx->r6 != ctx->r1) {
        // 0x80051840: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80051850;
    }
    // 0x80051840: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80051844: bne         $a1, $at, L_80051850
    if (ctx->r5 != ctx->r1) {
        // 0x80051848: nop
    
            goto L_80051850;
    }
    // 0x80051848: nop

    // 0x8005184C: break       6
    do_break(2147817548);
L_80051850:
    // 0x80051850: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051854: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x80051858: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x8005185C: mflo        $t6
    ctx->r14 = lo;
    // 0x80051860: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x80051864: bgez        $v0, L_80051888
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80051868: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_80051888;
    }
    // 0x80051868: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8005186C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x80051870: blez        $v1, L_80051888
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80051874: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_80051888;
    }
    // 0x80051874: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80051878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005187C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80051880: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80051884: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_80051888:
    // 0x80051888: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005188C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80051890: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80051894: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80051898: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8005189C: jr          $ra
    // 0x800518A0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x800518A0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_8000D2C0_DEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D2C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000D2C4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000D2C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000D2CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000D2D0: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000D2D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000D2D8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8000D2DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000D2E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8000D2E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000D2E8: beq         $v0, $zero, L_8000D320
    if (ctx->r2 == 0) {
        // 0x8000D2EC: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8000D320;
    }
    // 0x8000D2EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000D2F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000D2F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000D2F8: addiu       $s3, $zero, 0x78
    ctx->r19 = ADD32(0, 0X78);
L_8000D2FC:
    // 0x8000D2FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000D300: jal         0x8000D33C
    // 0x8000D304: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8000D33C_DF3C(rdram, ctx);
        goto after_0;
    // 0x8000D304: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x8000D308: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000D30C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8000D310: sh          $zero, 0x74($s0)
    MEM_H(0X74, ctx->r16) = 0;
    // 0x8000D314: sh          $zero, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = 0;
    // 0x8000D318: bne         $s1, $s3, L_8000D2FC
    if (ctx->r17 != ctx->r19) {
        // 0x8000D31C: sh          $zero, 0x72($s0)
        MEM_H(0X72, ctx->r16) = 0;
            goto L_8000D2FC;
    }
    // 0x8000D31C: sh          $zero, 0x72($s0)
    MEM_H(0X72, ctx->r16) = 0;
L_8000D320:
    // 0x8000D320: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000D324: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000D328: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000D32C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D330: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000D334: jr          $ra
    // 0x8000D338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000D338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001C970_1D570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001C970: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8001C974: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8001C978: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8001C97C: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8001C980: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8001C984: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x8001C988: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x8001C98C: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x8001C990: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x8001C994: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x8001C998: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x8001C99C: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x8001C9A0: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8001C9A4: swc1        $f10, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
    // 0x8001C9A8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8001C9AC: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x8001C9B0: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8001C9B4: jr          $ra
    // 0x8001C9B8: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8001C9B8: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80002938_3538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002938: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000293C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x80002940: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80002944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002948: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8000294C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002950: addu        $v1, $a0, $at
    ctx->r3 = ADD32(ctx->r4, ctx->r1);
    // 0x80002954: lbu         $v0, 0x2DD6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2DD6);
    // 0x80002958: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000295C: beq         $v0, $zero, L_80002984
    if (ctx->r2 == 0) {
        // 0x80002960: nop
    
            goto L_80002984;
    }
    // 0x80002960: nop

    // 0x80002964: beq         $v0, $at, L_800029E8
    if (ctx->r2 == ctx->r1) {
        // 0x80002968: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800029E8;
    }
    // 0x80002968: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000296C: beq         $v0, $at, L_80002A3C
    if (ctx->r2 == ctx->r1) {
        // 0x80002970: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80002A3C;
    }
    // 0x80002970: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80002974: beq         $v0, $at, L_80002A4C
    if (ctx->r2 == ctx->r1) {
        // 0x80002978: lui         $t7, 0x8005
        ctx->r15 = S32(0X8005 << 16);
            goto L_80002A4C;
    }
    // 0x80002978: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000297C: b           L_80002A8C
    // 0x80002980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002A8C;
    // 0x80002980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002984:
    // 0x80002984: jal         0x8000383C
    // 0x80002988: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80002988: nop

    after_0:
    // 0x8000298C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80002990: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80002994: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002998: addiu       $t6, $zero, 0x24C
    ctx->r14 = ADD32(0, 0X24C);
    // 0x8000299C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800029A0: jal         0x8000B3E4
    // 0x800029A4: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    func_8000B3E4_BFE4(rdram, ctx);
        goto after_1;
    // 0x800029A4: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    after_1:
    // 0x800029A8: jal         0x80020440
    // 0x800029AC: nop

    func_80020440_21040(rdram, ctx);
        goto after_2;
    // 0x800029AC: nop

    after_2:
    // 0x800029B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800029B4: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800029B8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x800029BC: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x800029C0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800029C4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x800029C8: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x800029CC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800029D0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800029D4: lbu         $t8, -0x522A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X522A);
    // 0x800029D8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800029DC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800029E0: b           L_80002A88
    // 0x800029E4: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
        goto L_80002A88;
    // 0x800029E4: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
L_800029E8:
    // 0x800029E8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800029EC: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800029F0: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x800029F4: lh          $t0, 0x2DB7($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2DB7);
    // 0x800029F8: bne         $t0, $zero, L_80002A2C
    if (ctx->r8 != 0) {
        // 0x800029FC: nop
    
            goto L_80002A2C;
    }
    // 0x800029FC: nop

    // 0x80002A00: lhu         $t1, 0x3094($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X3094);
    // 0x80002A04: lhu         $t2, 0x307C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X307C);
    // 0x80002A08: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80002A0C: andi        $t4, $t3, 0xD000
    ctx->r12 = ctx->r11 & 0XD000;
    // 0x80002A10: beq         $t4, $zero, L_80002A2C
    if (ctx->r12 == 0) {
        // 0x80002A14: nop
    
            goto L_80002A2C;
    }
    // 0x80002A14: nop

    // 0x80002A18: lbu         $t5, 0x2DD5($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2DD5);
    // 0x80002A1C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002A20: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80002A24: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80002A28: sb          $t6, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r14;
L_80002A2C:
    // 0x80002A2C: jal         0x800038E4
    // 0x80002A30: nop

    func_800038E4_44E4(rdram, ctx);
        goto after_3;
    // 0x80002A30: nop

    after_3:
    // 0x80002A34: b           L_80002A8C
    // 0x80002A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002A8C;
    // 0x80002A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002A3C:
    // 0x80002A3C: jal         0x8000394C
    // 0x80002A40: nop

    func_8000394C_454C(rdram, ctx);
        goto after_4;
    // 0x80002A40: nop

    after_4:
    // 0x80002A44: b           L_80002A8C
    // 0x80002A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002A8C;
    // 0x80002A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002A4C:
    // 0x80002A4C: lw          $t7, 0x48D8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X48D8);
    // 0x80002A50: bnel        $t7, $zero, L_80002A8C
    if (ctx->r15 != 0) {
        // 0x80002A54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002A8C;
    }
    goto skip_0;
    // 0x80002A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002A58: jal         0x8000383C
    // 0x80002A5C: nop

    func_8000383C_443C(rdram, ctx);
        goto after_5;
    // 0x80002A5C: nop

    after_5:
    // 0x80002A60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80002A64: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80002A68: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80002A6C: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x80002A70: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x80002A74: lhu         $t8, 0x2E19($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2E19);
    // 0x80002A78: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80002A7C: andi        $t9, $t8, 0x7FFF
    ctx->r25 = ctx->r24 & 0X7FFF;
    // 0x80002A80: jal         0x80003728
    // 0x80002A84: sh          $t9, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r25;
    func_80003728_4328(rdram, ctx);
        goto after_6;
    // 0x80002A84: sh          $t9, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r25;
    after_6:
L_80002A88:
    // 0x80002A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002A8C:
    // 0x80002A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002A90: jr          $ra
    // 0x80002A94: nop

    TRACE_RETURN()
    return;
    // 0x80002A94: nop

;}
RECOMP_FUNC void func_800371B4_37DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800371B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800371B8: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x800371BC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800371C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800371C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800371C8: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800371CC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800371D0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x800371D4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800371D8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800371DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800371E0: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x800371E4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800371E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800371EC: addiu       $a0, $zero, 0x1E2
    ctx->r4 = ADD32(0, 0X1E2);
    // 0x800371F0: sh          $t8, -0x5012($at)
    MEM_H(-0X5012, ctx->r1) = ctx->r24;
    // 0x800371F4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x800371F8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800371FC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037200: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80037204: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80037208: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8003720C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80037210: addiu       $a1, $zero, -0xD5
    ctx->r5 = ADD32(0, -0XD5);
    // 0x80037214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80037218: addiu       $a3, $zero, -0x165
    ctx->r7 = ADD32(0, -0X165);
    // 0x8003721C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80037220: nop

    // 0x80037224: sh          $t2, -0x5010($at)
    MEM_H(-0X5010, ctx->r1) = ctx->r10;
    // 0x80037228: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8003722C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80037230: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037234: lwc1        $f16, 0x10($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80037238: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8003723C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80037240: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80037244: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80037248: nop

    // 0x8003724C: sh          $t6, -0x500E($at)
    MEM_H(-0X500E, ctx->r1) = ctx->r14;
    // 0x80037250: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x80037254: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80037258: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003725C: lhu         $t9, 0x94($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X94);
    // 0x80037260: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80037264: sh          $t9, -0x500C($at)
    MEM_H(-0X500C, ctx->r1) = ctx->r25;
    // 0x80037268: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8003726C: jal         0x801FA4FC
    // 0x80037270: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801FA4FC_5B640C(rdram, ctx);
        goto after_0;
    // 0x80037270: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x80037274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80037278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003727C: jr          $ra
    // 0x80037280: nop

    TRACE_RETURN()
    return;
    // 0x80037280: nop

;}
RECOMP_FUNC void func_80020308_20F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020308: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8002030C: addiu       $a1, $a1, 0x7FC0
    ctx->r5 = ADD32(ctx->r5, 0X7FC0);
    // 0x80020310: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80020314: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x80020318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002031C: beq         $t6, $zero, L_80020344
    if (ctx->r14 == 0) {
        // 0x80020320: addiu       $a2, $a2, -0x3340
        ctx->r6 = ADD32(ctx->r6, -0X3340);
            goto L_80020344;
    }
    // 0x80020320: addiu       $a2, $a2, -0x3340
    ctx->r6 = ADD32(ctx->r6, -0X3340);
    // 0x80020324: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80020328:
    // 0x80020328: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8002032C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80020330: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80020334: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80020338: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8002033C: bnel        $t0, $zero, L_80020328
    if (ctx->r8 != 0) {
        // 0x80020340: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80020328;
    }
    goto skip_0;
    // 0x80020340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_80020344:
    // 0x80020344: addiu       $at, $a2, 0x7FFF
    ctx->r1 = ADD32(ctx->r6, 0X7FFF);
    // 0x80020348: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x8002034C: sb          $v0, 0x302F($at)
    MEM_B(0X302F, ctx->r1) = ctx->r2;
    // 0x80020350: addu        $v1, $a1, $t1
    ctx->r3 = ADD32(ctx->r5, ctx->r9);
    // 0x80020354: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x80020358: sw          $t2, 0x3031($at)
    MEM_W(0X3031, ctx->r1) = ctx->r10;
    // 0x8002035C: jr          $ra
    // 0x80020360: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80020360: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
;}
RECOMP_FUNC void func_80018B28_19728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80018B28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018B2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80018B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80018B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80018B38: bne         $a2, $zero, L_80018B68
    if (ctx->r6 != 0) {
        // 0x80018B3C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80018B68;
    }
    // 0x80018B3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80018B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80018B44: jal         0x80036448
    // 0x80018B48: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_80036448_37048(rdram, ctx);
        goto after_0;
    // 0x80018B48: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_0:
    // 0x80018B4C: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x80018B50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018B54: lw          $t6, -0x7B60($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B60);
    // 0x80018B58: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80018B5C: sw          $v0, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->r2;
    // 0x80018B60: b           L_80018BB8
    // 0x80018B64: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
        goto L_80018BB8;
    // 0x80018B64: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80018B68:
    // 0x80018B68: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80018B6C: lw          $t7, 0x2C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X2C);
    // 0x80018B70: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80018B74: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80018B78: xor         $t8, $t7, $v1
    ctx->r24 = ctx->r15 ^ ctx->r3;
    // 0x80018B7C: sltu        $t8, $zero, $t8
    ctx->r24 = 0 < ctx->r24 ? 1 : 0;
    // 0x80018B80: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80018B84: beq         $t9, $zero, L_80018BB8
    if (ctx->r25 == 0) {
        // 0x80018B88: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_80018BB8;
    }
    // 0x80018B88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80018B8C: jal         0x800364FC
    // 0x80018B90: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_800364FC_370FC(rdram, ctx);
        goto after_1;
    // 0x80018B90: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_1:
    // 0x80018B94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80018B98: jal         0x80036448
    // 0x80018B9C: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    func_80036448_37048(rdram, ctx);
        goto after_2;
    // 0x80018B9C: lw          $a0, -0x7B60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B60);
    after_2:
    // 0x80018BA0: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x80018BA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018BA8: lw          $t0, -0x7B60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7B60);
    // 0x80018BAC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80018BB0: sw          $v0, 0x78($t0)
    MEM_W(0X78, ctx->r8) = ctx->r2;
    // 0x80018BB4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80018BB8:
    // 0x80018BB8: beq         $v1, $zero, L_80018BD0
    if (ctx->r3 == 0) {
        // 0x80018BBC: sw          $v1, 0x2C($a2)
        MEM_W(0X2C, ctx->r6) = ctx->r3;
            goto L_80018BD0;
    }
    // 0x80018BBC: sw          $v1, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r3;
    // 0x80018BC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80018BC4: jal         0x800196F0
    // 0x80018BC8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_3;
    // 0x80018BC8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_3:
    // 0x80018BCC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
L_80018BD0:
    // 0x80018BD0: lb          $t1, 0x4($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X4);
    // 0x80018BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80018BD8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80018BDC: beql        $t1, $zero, L_80018C20
    if (ctx->r9 == 0) {
        // 0x80018BE0: lw          $a1, 0x78($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X78);
            goto L_80018C20;
    }
    goto skip_0;
    // 0x80018BE0: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
    skip_0:
    // 0x80018BE4: jal         0x80018F3C
    // 0x80018BE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80018F3C_19B3C(rdram, ctx);
        goto after_4;
    // 0x80018BE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_4:
    // 0x80018BEC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80018BF0: beq         $v0, $zero, L_80018C38
    if (ctx->r2 == 0) {
        // 0x80018BF4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80018C38;
    }
    // 0x80018BF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80018BF8: lb          $t2, 0x4($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X4);
    // 0x80018BFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80018C00: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80018C04: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80018C08: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80018C0C: jal         0x80018CA0
    // 0x80018C10: addu        $a0, $s0, $t3
    ctx->r4 = ADD32(ctx->r16, ctx->r11);
    func_80018CA0_198A0(rdram, ctx);
        goto after_5;
    // 0x80018C10: addu        $a0, $s0, $t3
    ctx->r4 = ADD32(ctx->r16, ctx->r11);
    after_5:
    // 0x80018C14: b           L_80018C38
    // 0x80018C18: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
        goto L_80018C38;
    // 0x80018C18: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80018C1C: lw          $a1, 0x78($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X78);
L_80018C20:
    // 0x80018C20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80018C24: beql        $a1, $zero, L_80018C3C
    if (ctx->r5 == 0) {
        // 0x80018C28: lb          $t4, 0x5($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X5);
            goto L_80018C3C;
    }
    goto skip_1;
    // 0x80018C28: lb          $t4, 0x5($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X5);
    skip_1:
    // 0x80018C2C: jal         0x8003674C
    // 0x80018C30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8003674C_3734C(rdram, ctx);
        goto after_6;
    // 0x80018C30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_6:
    // 0x80018C34: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
L_80018C38:
    // 0x80018C38: lb          $t4, 0x5($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X5);
L_80018C3C:
    // 0x80018C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80018C40: beql        $t4, $zero, L_80018C7C
    if (ctx->r12 == 0) {
        // 0x80018C44: lw          $a1, 0x74($a2)
        ctx->r5 = MEM_W(ctx->r6, 0X74);
            goto L_80018C7C;
    }
    goto skip_2;
    // 0x80018C44: lw          $a1, 0x74($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X74);
    skip_2:
    // 0x80018C48: jal         0x8001904C
    // 0x80018C4C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8001904C_19C4C(rdram, ctx);
        goto after_7;
    // 0x80018C4C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_7:
    // 0x80018C50: beq         $v0, $zero, L_80018C8C
    if (ctx->r2 == 0) {
        // 0x80018C54: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80018C8C;
    }
    // 0x80018C54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80018C58: lb          $t5, 0x5($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X5);
    // 0x80018C5C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80018C60: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80018C64: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80018C68: jal         0x80018CA0
    // 0x80018C6C: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    func_80018CA0_198A0(rdram, ctx);
        goto after_8;
    // 0x80018C6C: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    after_8:
    // 0x80018C70: b           L_80018C90
    // 0x80018C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80018C90;
    // 0x80018C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80018C78: lw          $a1, 0x74($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X74);
L_80018C7C:
    // 0x80018C7C: beql        $a1, $zero, L_80018C90
    if (ctx->r5 == 0) {
        // 0x80018C80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80018C90;
    }
    goto skip_3;
    // 0x80018C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80018C84: jal         0x80036798
    // 0x80018C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80036798_37398(rdram, ctx);
        goto after_9;
    // 0x80018C88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_9:
L_80018C8C:
    // 0x80018C8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80018C90:
    // 0x80018C90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80018C94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018C98: jr          $ra
    // 0x80018C9C: nop

    TRACE_RETURN()
    return;
    // 0x80018C9C: nop

;}
RECOMP_FUNC void func_8001F878_20478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F878: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8001F87C: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x8001F880: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x8001F884: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8001F888: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8001F88C: lhu         $t0, 0x0($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X0);
    // 0x8001F890: addiu       $t1, $t0, 0x200
    ctx->r9 = ADD32(ctx->r8, 0X200);
    // 0x8001F894: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x8001F898: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x8001F89C: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
    // 0x8001F8A0: addiu       $t4, $t3, 0x200
    ctx->r12 = ADD32(ctx->r11, 0X200);
    // 0x8001F8A4: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x8001F8A8: jr          $ra
    // 0x8001F8AC: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x8001F8AC: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
;}
RECOMP_FUNC void func_8001F8B0_204B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001F8B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F8B4: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8001F8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F8BC: addiu       $t6, $t6, -0x48D0
    ctx->r14 = ADD32(ctx->r14, -0X48D0);
    // 0x8001F8C0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8001F8C4: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x8001F8C8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8001F8CC: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8001F8D0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8001F8D4: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x8001F8D8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8001F8DC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8001F8E0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8001F8E4: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8001F8E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001F8EC: lbu         $t1, -0x5222($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X5222);
    // 0x8001F8F0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8001F8F4: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8001F8F8: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8001F8FC: jalr        $t9
    // 0x8001F900: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8001F900: nop

    after_0:
    // 0x8001F904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F90C: jr          $ra
    // 0x8001F910: nop

    TRACE_RETURN()
    return;
    // 0x8001F910: nop

;}
RECOMP_FUNC void func_8003DE80_3EA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DE80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003DE84: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003DE88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003DE8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003DE90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003DE94: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8003DE98: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8003DE9C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8003DEA0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8003DEA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003DEA8: addiu       $s3, $s3, 0x77E8
    ctx->r19 = ADD32(ctx->r19, 0X77E8);
    // 0x8003DEAC: addiu       $s2, $s2, 0x7798
    ctx->r18 = ADD32(ctx->r18, 0X7798);
L_8003DEB0:
    // 0x8003DEB0: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8003DEB4: bltzl       $v0, L_8003DF14
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003DEB8: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8003DF14;
    }
    goto skip_0;
    // 0x8003DEB8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    skip_0:
    // 0x8003DEBC: jal         0x8003DF68
    // 0x8003DEC0: nop

    func_8003DF68_3EB68(rdram, ctx);
        goto after_0;
    // 0x8003DEC0: nop

    after_0:
    // 0x8003DEC4: beq         $v0, $zero, L_8003DEE8
    if (ctx->r2 == 0) {
        // 0x8003DEC8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8003DEE8;
    }
    // 0x8003DEC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003DECC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8003DED0: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x8003DED4: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003DED8: lw          $t6, 0x7798($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7798);
    // 0x8003DEDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003DEE0: b           L_8003DF48
    // 0x8003DEE4: sw          $t6, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r14;
        goto L_8003DF48;
    // 0x8003DEE4: sw          $t6, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r14;
L_8003DEE8:
    // 0x8003DEE8: jal         0x8000D060
    // 0x8003DEEC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    func_8000D060_DC60(rdram, ctx);
        goto after_1;
    // 0x8003DEEC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x8003DEF0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8003DEF4: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x8003DEF8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8003DEFC: beq         $v1, $zero, L_8003DEB0
    if (ctx->r3 == 0) {
        // 0x8003DF00: sh          $t7, 0x8($s3)
        MEM_H(0X8, ctx->r19) = ctx->r15;
            goto L_8003DEB0;
    }
    // 0x8003DF00: sh          $t7, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r15;
    // 0x8003DF04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003DF08: b           L_8003DF48
    // 0x8003DF0C: sw          $v1, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r3;
        goto L_8003DF48;
    // 0x8003DF0C: sw          $v1, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r3;
    // 0x8003DF10: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8003DF14:
    // 0x8003DF14: bne         $v1, $v0, L_8003DF28
    if (ctx->r3 != ctx->r2) {
        // 0x8003DF18: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8003DF28;
    }
    // 0x8003DF18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003DF1C: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x8003DF20: b           L_8003DF4C
    // 0x8003DF24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003DF4C;
    // 0x8003DF24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003DF28:
    // 0x8003DF28: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
    // 0x8003DF2C: jal         0x8003DF98
    // 0x8003DF30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8003DF98_3EB98(rdram, ctx);
        goto after_2;
    // 0x8003DF30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8003DF34: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003DF38: lw          $t8, 0x7798($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7798);
    // 0x8003DF3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003DF40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003DF44: sw          $t8, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r24;
L_8003DF48:
    // 0x8003DF48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8003DF4C:
    // 0x8003DF4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003DF50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003DF54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003DF58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DF5C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003DF60: jr          $ra
    // 0x8003DF64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003DF64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003E654_3F254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E654: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E658: addiu       $v0, $v0, 0x77E8
    ctx->r2 = ADD32(ctx->r2, 0X77E8);
    // 0x8003E65C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x8003E660: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E664: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003E668: bgtz        $t7, L_8003E678
    if (SIGNED(ctx->r15) > 0) {
        // 0x8003E66C: sw          $t7, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r15;
            goto L_8003E678;
    }
    // 0x8003E66C: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x8003E670: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003E674: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
L_8003E678:
    // 0x8003E678: jr          $ra
    // 0x8003E67C: nop

    TRACE_RETURN()
    return;
    // 0x8003E67C: nop

;}
