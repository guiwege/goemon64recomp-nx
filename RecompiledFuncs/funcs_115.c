#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08002F5C_6D8EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002F64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002F68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002F6C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002F70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002F74: jal         0x08002898
    // 0x08002F78: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    func_08002898_6D87E8(rdram, ctx);
        goto after_0;
    // 0x08002F78: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    after_0:
    // 0x08002F7C: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002F80: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x08002F84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002F88: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08002F8C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002F90: beq         $v1, $zero, L_08002FD4
    if (ctx->r3 == 0) {
        // 0x08002F94: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_08002FD4;
    }
    // 0x08002F94: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08002F98: sb          $t9, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r25;
    // 0x08002F9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002FA0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002FA4: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08002FA8: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08002FAC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002FB8: jalr        $t9
    // 0x08002FBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002FC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X3008) << 16);
    // 0x08002FCC: jalr        $t9
    // 0x08002FD0: addiu       $a0, $a0, 0x3008
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3008));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002FD0: addiu       $a0, $a0, 0x3008
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3008));
    after_2:
L_08002FD4:
    // 0x08002FD4: lhu         $t0, 0xD2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD2);
    // 0x08002FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002FE0: beq         $t0, $zero, L_08002FF4
    if (ctx->r8 == 0) {
        // 0x08002FE4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002FF4;
    }
    // 0x08002FE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FE8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002FEC: jalr        $t9
    // 0x08002FF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002FF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_08002FF4:
    // 0x08002FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002FF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003000: jr          $ra
    // 0x08003004: nop

    TRACE_RETURN()
    return;
    // 0x08003004: nop

;}
RECOMP_FUNC void func_08002C18_6D8B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002C1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002C28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002C2C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002C30: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08002C34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002C38: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x08002C3C: jalr        $t9
    // 0x08002C40: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C40: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x08002C44: beql        $v0, $zero, L_08002C58
    if (ctx->r2 == 0) {
        // 0x08002C48: lh          $t7, 0xA0($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XA0);
            goto L_08002C58;
    }
    goto skip_0;
    // 0x08002C48: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    skip_0:
    // 0x08002C4C: jal         0x0800281C
    // 0x08002C50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_0800281C_6D876C(rdram, ctx);
        goto after_1;
    // 0x08002C50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x08002C54: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
L_08002C58:
    // 0x08002C58: lh          $t8, 0xA2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA2);
    // 0x08002C5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002C60: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08002C64: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08002C68: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002C6C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C74: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x08002C78: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002C7C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002C80: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002C84: jalr        $t9
    // 0x08002C88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C88: nop

    after_2:
    // 0x08002C8C: bne         $v0, $zero, L_08002CD0
    if (ctx->r2 != 0) {
        // 0x08002C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002CD0;
    }
    // 0x08002C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002C94: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002C98: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002C9C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002CA0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002CA8: jalr        $t9
    // 0x08002CAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002CAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08002CB0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08002CB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CBC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2CE4) << 16);
    // 0x08002CC0: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    // 0x08002CC4: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x08002CC8: jalr        $t9
    // 0x08002CCC: addiu       $a0, $a0, 0x2CE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2CE4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002CCC: addiu       $a0, $a0, 0x2CE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2CE4));
    after_4:
L_08002CD0:
    // 0x08002CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002CDC: jr          $ra
    // 0x08002CE0: nop

    TRACE_RETURN()
    return;
    // 0x08002CE0: nop

;}
RECOMP_FUNC void func_08000D48_6D6C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000D54: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08000D58: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08000D5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D60: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08000D64: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000D68: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08000D6C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000D74: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x08000D78: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000D7C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08000D80: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000D84: jalr        $t9
    // 0x08000D88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D88: nop

    after_0:
    // 0x08000D8C: bne         $v0, $zero, L_08000DA8
    if (ctx->r2 != 0) {
        // 0x08000D90: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08000DA8;
    }
    // 0x08000D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000D94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D98: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000DA0: jalr        $t9
    // 0x08000DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000DA8:
    // 0x08000DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000DB0: jr          $ra
    // 0x08000DB4: nop

    TRACE_RETURN()
    return;
    // 0x08000DB4: nop

;}
RECOMP_FUNC void func_08002398_6D82E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002398: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x0800239C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F28) << 16);
    // 0x080023A0: lwc1        $f4, 0x3F28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F28));
    // 0x080023A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080023AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080023B0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x080023B4: addiu       $t9, $t9, -0xDD8
    ctx->r25 = ADD32(ctx->r25, -0XDD8);
    // 0x080023B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080023BC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x080023C0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x080023C4: jalr        $t9
    // 0x080023C8: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023C8: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x080023CC: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x080023D0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x080023D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080023D8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080023DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023E0: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x080023E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080023E8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x080023EC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080023F0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080023F4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x080023F8: jalr        $t9
    // 0x080023FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023FC: nop

    after_1:
    // 0x08002400: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08002404: lh          $t8, 0x60($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X60);
    // 0x08002408: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x0800240C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08002410: beq         $t7, $zero, L_08002420
    if (ctx->r15 == 0) {
        // 0x08002414: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(26, 0X2470) << 16);
            goto L_08002420;
    }
    // 0x08002414: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2470) << 16);
    // 0x08002418: beq         $t8, $zero, L_08002444
    if (ctx->r24 == 0) {
        // 0x0800241C: nop
    
            goto L_08002444;
    }
    // 0x0800241C: nop

L_08002420:
    // 0x08002420: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002424: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002428: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800242C: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08002430: addiu       $a0, $a0, 0x2470
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2470));
    // 0x08002434: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08002438: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x0800243C: jalr        $t9
    // 0x08002440: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002440: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_2:
L_08002444:
    // 0x08002444: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002448: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002454: jalr        $t9
    // 0x08002458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x0800245C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002460: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002464: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x08002468: jr          $ra
    // 0x0800246C: nop

    TRACE_RETURN()
    return;
    // 0x0800246C: nop

;}
RECOMP_FUNC void func_08002218_6D8168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800221C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002224: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002228: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800222C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002234: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002238: jalr        $t9
    // 0x0800223C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800223C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08002240: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08002244: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002248: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800224C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08002250: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002254: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2278) << 16);
    // 0x08002258: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2278));
    // 0x0800225C: sh          $t6, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r14;
    // 0x08002260: jalr        $t9
    // 0x08002264: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002264: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x08002268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800226C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002270: jr          $ra
    // 0x08002274: nop

    TRACE_RETURN()
    return;
    // 0x08002274: nop

;}
RECOMP_FUNC void func_08001D10_6D7C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001D14: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001D18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08001D1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001D20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001D24: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001D28: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x08001D2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001D30: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001D34: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08001D38: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08001D3C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001D40: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001D44: jalr        $v0
    // 0x08001D48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001D48: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x08001D4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F20) << 16);
    // 0x08001D50: ldc1        $f6, 0x3F20($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F20));
    // 0x08001D54: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08001D58: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08001D5C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08001D60: lh          $t8, 0xD0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD0);
    // 0x08001D64: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001D68: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08001D6C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001D70: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x08001D74: lhu         $t9, -0x33D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X33D0);
    // 0x08001D78: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001D7C: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001D80: mflo        $a0
    ctx->r4 = lo;
    // 0x08001D84: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x08001D88: jalr        $v0
    // 0x08001D8C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08001D8C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x08001D90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001D94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001D98: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001D9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001DA0: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x08001DA4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001DA8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001DAC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x08001DB0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001DB4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08001DB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001DBC: bgez        $t1, L_08001DD0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001DC0: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_08001DD0;
    }
    // 0x08001DC0: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001DC4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001DC8: nop

    // 0x08001DCC: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08001DD0:
    // 0x08001DD0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08001DD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001DD8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001DDC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08001DE0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08001DE4: nop

    // 0x08001DE8: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001DEC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08001DF0: nop

    // 0x08001DF4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08001DF8: beql        $t3, $zero, L_08001E48
    if (ctx->r11 == 0) {
        // 0x08001DFC: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_08001E48;
    }
    goto skip_0;
    // 0x08001DFC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x08001E00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001E04: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001E08: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001E0C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08001E10: nop

    // 0x08001E14: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08001E18: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08001E1C: nop

    // 0x08001E20: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08001E24: bne         $t3, $zero, L_08001E3C
    if (ctx->r11 != 0) {
        // 0x08001E28: nop
    
            goto L_08001E3C;
    }
    // 0x08001E28: nop

    // 0x08001E2C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x08001E30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001E34: b           L_08001E54
    // 0x08001E38: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_08001E54;
    // 0x08001E38: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_08001E3C:
    // 0x08001E3C: b           L_08001E54
    // 0x08001E40: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_08001E54;
    // 0x08001E40: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x08001E44: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_08001E48:
    // 0x08001E48: nop

    // 0x08001E4C: bltz        $t3, L_08001E3C
    if (SIGNED(ctx->r11) < 0) {
        // 0x08001E50: nop
    
            goto L_08001E3C;
    }
    // 0x08001E50: nop

L_08001E54:
    // 0x08001E54: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    // 0x08001E58: lhu         $t5, -0x33D0($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X33D0);
    // 0x08001E5C: lh          $t4, 0xD2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD2);
    // 0x08001E60: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x08001E64: bgez        $t5, L_08001E74
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08001E68: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_08001E74;
    }
    // 0x08001E68: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x08001E6C: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x08001E70: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08001E74:
    // 0x08001E74: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001E78: mflo        $a0
    ctx->r4 = lo;
    // 0x08001E7C: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08001E80: jalr        $v0
    // 0x08001E84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08001E84: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x08001E88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001E8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001E90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001E94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001E98: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x08001E9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001EA0: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001EA4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x08001EA8: nop

    // 0x08001EAC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001EB0: bgez        $t8, L_08001EC4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08001EB4: sub.s       $f6, $f8, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_08001EC4;
    }
    // 0x08001EB4: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001EB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001EBC: nop

    // 0x08001EC0: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_08001EC4:
    // 0x08001EC4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001EC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001ECC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001ED0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08001ED4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001ED8: nop

    // 0x08001EDC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001EE0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001EE4: nop

    // 0x08001EE8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001EEC: beql        $t0, $zero, L_08001F3C
    if (ctx->r8 == 0) {
        // 0x08001EF0: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_08001F3C;
    }
    goto skip_1;
    // 0x08001EF0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x08001EF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001EF8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001EFC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001F00: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001F04: nop

    // 0x08001F08: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08001F0C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001F10: nop

    // 0x08001F14: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001F18: bne         $t0, $zero, L_08001F30
    if (ctx->r8 != 0) {
        // 0x08001F1C: nop
    
            goto L_08001F30;
    }
    // 0x08001F1C: nop

    // 0x08001F20: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08001F24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001F28: b           L_08001F48
    // 0x08001F2C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08001F48;
    // 0x08001F2C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08001F30:
    // 0x08001F30: b           L_08001F48
    // 0x08001F34: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08001F48;
    // 0x08001F34: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08001F38: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_08001F3C:
    // 0x08001F3C: nop

    // 0x08001F40: bltz        $t0, L_08001F30
    if (SIGNED(ctx->r8) < 0) {
        // 0x08001F44: nop
    
            goto L_08001F30;
    }
    // 0x08001F44: nop

L_08001F48:
    // 0x08001F48: sh          $t0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r8;
    // 0x08001F4C: lh          $t1, 0xD4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XD4);
    // 0x08001F50: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x08001F54: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08001F58: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001F5C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001F60: mflo        $a0
    ctx->r4 = lo;
    // 0x08001F64: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08001F68: jalr        $t9
    // 0x08001F6C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001F6C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x08001F70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001F74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001F78: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001F7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001F80: lhu         $t5, 0x18($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X18);
    // 0x08001F84: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001F88: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001F8C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x08001F90: nop

    // 0x08001F94: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001F98: bgez        $t5, L_08001FAC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08001F9C: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_08001FAC;
    }
    // 0x08001F9C: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001FA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001FA4: nop

    // 0x08001FA8: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08001FAC:
    // 0x08001FAC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08001FB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001FB4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001FB8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x08001FBC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001FC0: nop

    // 0x08001FC4: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001FC8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001FCC: nop

    // 0x08001FD0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08001FD4: beql        $t6, $zero, L_08002024
    if (ctx->r14 == 0) {
        // 0x08001FD8: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_08002024;
    }
    goto skip_2;
    // 0x08001FD8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08001FDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001FE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001FE4: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001FE8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001FEC: nop

    // 0x08001FF0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08001FF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001FF8: nop

    // 0x08001FFC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08002000: bne         $t6, $zero, L_08002018
    if (ctx->r14 != 0) {
        // 0x08002004: nop
    
            goto L_08002018;
    }
    // 0x08002004: nop

    // 0x08002008: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x0800200C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08002010: b           L_08002030
    // 0x08002014: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08002030;
    // 0x08002014: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08002018:
    // 0x08002018: b           L_08002030
    // 0x0800201C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08002030;
    // 0x0800201C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08002020: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_08002024:
    // 0x08002024: nop

    // 0x08002028: bltz        $t6, L_08002018
    if (SIGNED(ctx->r14) < 0) {
        // 0x0800202C: nop
    
            goto L_08002018;
    }
    // 0x0800202C: nop

L_08002030:
    // 0x08002030: sh          $t6, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r14;
    // 0x08002034: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    // 0x08002038: lh          $t8, 0xA2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA2);
    // 0x0800203C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08002040: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x08002044: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08002048: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800204C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08002050: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08002054: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x08002058: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x0800205C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002060: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08002064: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08002068: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x0800206C: jalr        $t9
    // 0x08002070: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002070: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x08002074: lh          $t0, 0xA2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA2);
    // 0x08002078: lh          $t1, 0xA0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA0);
    // 0x0800207C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08002080: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x08002084: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x08002088: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800208C: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002090: lui         $at, 0x4561
    ctx->r1 = S32(0X4561 << 16);
    // 0x08002094: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002098: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080020A0: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080020A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080020A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080020AC: sub.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x080020B0: sub.s       $f2, $f18, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x080020B4: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080020B8: nop

    // 0x080020BC: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080020C0: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x080020C4: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x080020C8: nop

    // 0x080020CC: bc1f        L_080020DC
    if (!c1cs) {
        // 0x080020D0: nop
    
            goto L_080020DC;
    }
    // 0x080020D0: nop

    // 0x080020D4: jalr        $t9
    // 0x080020D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080020D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_080020DC:
    // 0x080020DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080020E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080020E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080020E8: jr          $ra
    // 0x080020EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x080020EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08003308_6D9258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800330C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003318: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800331C: addiu       $t6, $zero, 0x104
    ctx->r14 = ADD32(0, 0X104);
    // 0x08003320: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003324: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08003328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800332C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08003330: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003338: jalr        $t9
    // 0x0800333C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800333C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08003340: lui         $t7, 0x2A6
    ctx->r15 = S32(0X2A6 << 16);
    // 0x08003344: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003348: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x0800334C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08003350: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x08003354: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x08003358: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x0800335C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08003360: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08003364: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08003368: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x0800336C: jalr        $t9
    // 0x08003370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003374: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003378: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800337C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003380: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08003384: jalr        $t9
    // 0x08003388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x0800338C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003390: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08003394: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003398: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X33BC) << 16);
    // 0x0800339C: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
    // 0x080033A0: jalr        $t9
    // 0x080033A4: addiu       $a0, $a0, 0x33BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X33BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080033A4: addiu       $a0, $a0, 0x33BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X33BC));
    after_3:
    // 0x080033A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080033AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080033B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080033B4: jr          $ra
    // 0x080033B8: nop

    TRACE_RETURN()
    return;
    // 0x080033B8: nop

;}
RECOMP_FUNC void func_08002670_6D85C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800267C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002680: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002684: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002688: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x0800268C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002690: bne         $v0, $zero, L_080026B8
    if (ctx->r2 != 0) {
        // 0x08002694: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080026B8;
    }
    // 0x08002694: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002698: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800269C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080026A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026A4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x080026A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X26C8) << 16);
    // 0x080026AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080026B0: jalr        $t9
    // 0x080026B4: addiu       $a0, $a0, 0x26C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X26C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080026B4: addiu       $a0, $a0, 0x26C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X26C8));
    after_0:
L_080026B8:
    // 0x080026B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080026BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080026C0: jr          $ra
    // 0x080026C4: nop

    TRACE_RETURN()
    return;
    // 0x080026C4: nop

;}
RECOMP_FUNC void func_08001C90_6D7BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001C94: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C9C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001CA0: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08001CA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001CA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08001CAC: jalr        $v0
    // 0x08001CB0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001CB0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08001CB4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08001CB8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08001CBC: sh          $v0, 0xD0($t6)
    MEM_H(0XD0, ctx->r14) = ctx->r2;
    // 0x08001CC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CC4: jalr        $t9
    // 0x08001CC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001CC8: nop

    after_1:
    // 0x08001CCC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08001CD0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08001CD4: sh          $v0, 0xD2($t7)
    MEM_H(0XD2, ctx->r15) = ctx->r2;
    // 0x08001CD8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CDC: jalr        $t9
    // 0x08001CE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001CE0: nop

    after_2:
    // 0x08001CE4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08001CE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X1D10) << 16);
    // 0x08001CF4: addiu       $a0, $a0, 0x1D10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X1D10));
    // 0x08001CF8: jalr        $t9
    // 0x08001CFC: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001CFC: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    after_3:
    // 0x08001D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001D08: jr          $ra
    // 0x08001D0C: nop

    TRACE_RETURN()
    return;
    // 0x08001D0C: nop

;}
RECOMP_FUNC void func_08000000_6D5F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000004: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3ECC) << 16);
    // 0x08000008: lwc1        $f4, 0x3ECC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X3ECC));
    // 0x0800000C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000010: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x08000014: nop

    // 0x08000018: bc1f        L_0800002C
    if (!c1cs) {
        // 0x0800001C: nop
    
            goto L_0800002C;
    }
    // 0x0800001C: nop

    // 0x08000020: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000024: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000028: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
L_0800002C:
    // 0x0800002C: jr          $ra
    // 0x08000030: nop

    TRACE_RETURN()
    return;
    // 0x08000030: nop

;}
RECOMP_FUNC void func_080022D0_6D8220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080022D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080022D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080022DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080022E0: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080022E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080022E8: jalr        $t9
    // 0x080022EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080022F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080022F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2338) << 16);
    // 0x080022F8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x080022FC: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08002300: addiu       $a0, $a0, 0x2338
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2338));
    // 0x08002304: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002308: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800230C: bne         $v0, $zero, L_08002328
    if (ctx->r2 != 0) {
        // 0x08002310: sh          $t6, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r14;
            goto L_08002328;
    }
    // 0x08002310: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08002314: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002318: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800231C: sh          $t7, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r15;
    // 0x08002320: jalr        $t9
    // 0x08002324: swc1        $f4, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002324: swc1        $f4, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f4.u32l;
    after_1:
L_08002328:
    // 0x08002328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800232C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002330: jr          $ra
    // 0x08002334: nop

    TRACE_RETURN()
    return;
    // 0x08002334: nop

;}
RECOMP_FUNC void func_0800310C_6D905C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800310C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003114: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003118: lh          $t9, 0xA2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA2);
    // 0x0800311C: lh          $t8, 0xA0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA0);
    // 0x08003120: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003124: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x08003128: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x0800312C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08003130: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003134: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003138: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x0800313C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08003140: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08003144: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003148: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x0800314C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08003150: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003154: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003158: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800315C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08003160: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003164: jalr        $t9
    // 0x08003168: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003168: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x0800316C: bne         $v0, $zero, L_080031AC
    if (ctx->r2 != 0) {
        // 0x08003170: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_080031AC;
    }
    // 0x08003170: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003174: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003178: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x0800317C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003180: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08003184: sb          $t1, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r9;
    // 0x08003188: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800318C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003190: jalr        $t9
    // 0x08003194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003198: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800319C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X31BC) << 16);
    // 0x080031A4: jalr        $t9
    // 0x080031A8: addiu       $a0, $a0, 0x31BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X31BC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080031A8: addiu       $a0, $a0, 0x31BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X31BC));
    after_2:
L_080031AC:
    // 0x080031AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080031B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080031B4: jr          $ra
    // 0x080031B8: nop

    TRACE_RETURN()
    return;
    // 0x080031B8: nop

;}
RECOMP_FUNC void func_080028DC_6D882C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080028E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080028E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080028EC: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x080028F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080028F4: jalr        $t9
    // 0x080028F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080028FC: lui         $t6, 0x2A6
    ctx->r14 = S32(0X2A6 << 16);
    // 0x08002900: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002904: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x08002908: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800290C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08002910: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x08002914: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002918: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800291C: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x08002920: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x08002924: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08002928: jalr        $t9
    // 0x0800292C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800292C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002930: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002934: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800293C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002940: jalr        $t9
    // 0x08002944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08002948: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800294C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002950: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2974) << 16);
    // 0x08002954: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x08002958: jalr        $t9
    // 0x0800295C: addiu       $a0, $a0, 0x2974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2974));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800295C: addiu       $a0, $a0, 0x2974
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2974));
    after_3:
    // 0x08002960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800296C: jr          $ra
    // 0x08002970: nop

    TRACE_RETURN()
    return;
    // 0x08002970: nop

;}
RECOMP_FUNC void func_080026C8_6D8618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080026C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080026CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080026D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080026D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080026D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080026DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080026E0: bne         $v0, $zero, L_08002704
    if (ctx->r2 != 0) {
        // 0x080026E4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002704;
    }
    // 0x080026E4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080026E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080026EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080026F4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x080026F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2714) << 16);
    // 0x080026FC: jalr        $t9
    // 0x08002700: addiu       $a0, $a0, 0x2714
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2714));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002700: addiu       $a0, $a0, 0x2714
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2714));
    after_0:
L_08002704:
    // 0x08002704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800270C: jr          $ra
    // 0x08002710: nop

    TRACE_RETURN()
    return;
    // 0x08002710: nop

;}
RECOMP_FUNC void func_080004C8_6D6418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004D4: jal         0x08000000
    // 0x080004D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x080004D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080004DC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080004E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080004E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080004E8: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x080004EC: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x080004F0: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x080004F4: lbu         $t8, 0x9A($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9A);
    // 0x080004F8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x080004FC: bgez        $t8, L_08000510
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08000500: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000510;
    }
    // 0x08000500: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000504: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000508: nop

    // 0x0800050C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08000510:
    // 0x08000510: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000514: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000518: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800051C: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000520: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x08000524: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x08000528: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800052C: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x08000530: bne         $v0, $zero, L_0800054C
    if (ctx->r2 != 0) {
        // 0x08000534: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_0800054C;
    }
    // 0x08000534: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000538: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800053C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000540: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X55C) << 16);
    // 0x08000544: jalr        $t9
    // 0x08000548: addiu       $a0, $a0, 0x55C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X55C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000548: addiu       $a0, $a0, 0x55C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X55C));
    after_1:
L_0800054C:
    // 0x0800054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000554: jr          $ra
    // 0x08000558: nop

    TRACE_RETURN()
    return;
    // 0x08000558: nop

;}
RECOMP_FUNC void func_080033BC_6D930C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080033BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080033C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080033C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080033C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080033CC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080033D0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080033D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080033D8: beq         $v0, $zero, L_080033EC
    if (ctx->r2 == 0) {
        // 0x080033DC: nop
    
            goto L_080033EC;
    }
    // 0x080033DC: nop

    // 0x080033E0: lhu         $t6, 0x5C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X5C);
    // 0x080033E4: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    // 0x080033E8: beq         $t6, $at, L_08003408
    if (ctx->r14 == ctx->r1) {
        // 0x080033EC: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08003408;
    }
L_080033EC:
    // 0x080033EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080033F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X3720) << 16);
    // 0x080033F8: jalr        $t9
    // 0x080033FC: addiu       $a0, $a0, 0x3720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3720));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033FC: addiu       $a0, $a0, 0x3720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3720));
    after_0:
    // 0x08003400: b           L_08003710
    // 0x08003404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003710;
    // 0x08003404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003408:
    // 0x08003408: lbu         $t7, 0xDC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XDC);
    // 0x0800340C: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x08003410: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x08003414: beq         $at, $zero, L_08003568
    if (ctx->r1 == 0) {
        // 0x08003418: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_08003568;
    }
    // 0x08003418: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x0800341C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F2C) << 16);
    // 0x08003420: addu        $at, $at, $t7
    gpr jr_addend_08003428 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08003424: lw          $t7, 0x3F2C($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F2C));
    // 0x08003428: jr          $t7
    // 0x0800342C: nop

    switch (jr_addend_08003428 >> 2) {
        case 0: goto L_08003430; break;
        case 1: goto L_0800344C; break;
        case 2: goto L_08003474; break;
        case 3: goto L_0800349C; break;
        case 4: goto L_080034C4; break;
        case 5: goto L_08003568; break;
        default: switch_error(__func__, 0x08003428, 0x08003F2C);
    }
    // 0x0800342C: nop

L_08003430:
    // 0x08003430: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003434: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003438: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X3720) << 16);
    // 0x0800343C: jalr        $t9
    // 0x08003440: addiu       $a0, $a0, 0x3720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3720));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003440: addiu       $a0, $a0, 0x3720
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3720));
    after_1:
    // 0x08003444: b           L_08003710
    // 0x08003448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003710;
    // 0x08003448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800344C:
    // 0x0800344C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003450: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003454: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08003458: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800345C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003464: jalr        $t9
    // 0x08003468: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003468: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800346C: b           L_0800356C
    // 0x08003470: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
        goto L_0800356C;
    // 0x08003470: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
L_08003474:
    // 0x08003474: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003478: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800347C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08003480: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800348C: jalr        $t9
    // 0x08003490: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003490: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08003494: b           L_0800356C
    // 0x08003498: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
        goto L_0800356C;
    // 0x08003498: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
L_0800349C:
    // 0x0800349C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080034A0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080034A4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080034A8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080034AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080034B4: jalr        $t9
    // 0x080034B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080034B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080034BC: b           L_0800356C
    // 0x080034C0: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
        goto L_0800356C;
    // 0x080034C0: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
L_080034C4:
    // 0x080034C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034C8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080034CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034D0: jalr        $t9
    // 0x080034D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080034D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x080034D8: bnel        $v0, $zero, L_08003710
    if (ctx->r2 != 0) {
        // 0x080034DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003710;
    }
    goto skip_0;
    // 0x080034DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080034E0: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x080034E4: andi        $t0, $t8, 0x20
    ctx->r8 = ctx->r24 & 0X20;
    // 0x080034E8: bnel        $t0, $zero, L_08003710
    if (ctx->r8 != 0) {
        // 0x080034EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08003710;
    }
    goto skip_1;
    // 0x080034EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x080034F0: lbu         $t1, 0xD4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD4);
    // 0x080034F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034F8: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x080034FC: beq         $t1, $zero, L_08003520
    if (ctx->r9 == 0) {
        // 0x08003500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003520;
    }
    // 0x08003500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003504: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003508: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x0800350C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003510: jalr        $t9
    // 0x08003514: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003514: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x08003518: b           L_0800352C
    // 0x0800351C: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
        goto L_0800352C;
    // 0x0800351C: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
L_08003520:
    // 0x08003520: jalr        $t9
    // 0x08003524: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003524: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_7:
    // 0x08003528: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
L_0800352C:
    // 0x0800352C: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08003530: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003534: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08003538: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800353C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003540: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08003544: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003548: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x0800354C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08003550: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08003554: jalr        $t9
    // 0x08003558: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003558: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    after_8:
    // 0x0800355C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x08003560: b           L_0800370C
    // 0x08003564: sh          $v0, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r2;
        goto L_0800370C;
    // 0x08003564: sh          $v0, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r2;
L_08003568:
    // 0x08003568: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
L_0800356C:
    // 0x0800356C: beq         $v1, $zero, L_08003638
    if (ctx->r3 == 0) {
        // 0x08003570: nop
    
            goto L_08003638;
    }
    // 0x08003570: nop

    // 0x08003574: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08003578: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800357C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08003580: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x08003584: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08003588: jalr        $t9
    // 0x0800358C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800358C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_9:
    // 0x08003590: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F48) << 16);
    // 0x08003594: ldc1        $f4, 0x3F48($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F48));
    // 0x08003598: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x0800359C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080035A0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x080035A4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080035A8: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x080035AC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x080035B0: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x080035B4: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x080035B8: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x080035BC: jalr        $t9
    // 0x080035C0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080035C0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_10:
    // 0x080035C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x080035C8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F50) << 16);
    // 0x080035CC: ldc1        $f8, 0x3F50($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F50));
    // 0x080035D0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x080035D4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x080035D8: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080035DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080035E0: mul.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x080035E4: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080035E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035EC: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080035F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035F4: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x080035F8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x080035FC: trunc.w.d   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x08003600: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08003604: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x08003608: nop

    // 0x0800360C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08003610: nop

    // 0x08003614: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08003618: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x0800361C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08003620: jalr        $t9
    // 0x08003624: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08003624: nop

    after_11:
    // 0x08003628: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x0800362C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x08003630: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x08003634: lbu         $v1, 0xD4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD4);
L_08003638:
    // 0x08003638: bne         $v1, $zero, L_0800370C
    if (ctx->r3 != 0) {
        // 0x0800363C: lui         $t3, 0x8000
        ctx->r11 = S32(0X8000 << 16);
            goto L_0800370C;
    }
    // 0x0800363C: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x08003640: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08003644: lui         $t4, 0x8022
    ctx->r12 = S32(0X8022 << 16);
    // 0x08003648: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800364C: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    // 0x08003650: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x08003654: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08003658: addiu       $t4, $t4, -0x44FC
    ctx->r12 = ADD32(ctx->r12, -0X44FC);
    // 0x0800365C: addiu       $t3, $t3, 0x3EA0
    ctx->r11 = ADD32(ctx->r11, 0X3EA0);
    // 0x08003660: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x08003664: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x08003668: jalr        $t9
    // 0x0800366C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800366C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_12:
    // 0x08003670: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F58) << 16);
    // 0x08003674: ldc1        $f10, 0x3F58($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F58));
    // 0x08003678: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x0800367C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08003680: mul.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x08003684: trunc.w.d   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x08003688: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x0800368C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x08003690: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    // 0x08003694: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x08003698: jalr        $t9
    // 0x0800369C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800369C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_13:
    // 0x080036A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x080036A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F60) << 16);
    // 0x080036A8: ldc1        $f6, 0x3F60($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F60));
    // 0x080036AC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x080036B0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x080036B4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080036B8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080036BC: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x080036C0: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080036C4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080036C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036CC: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x080036D0: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x080036D4: trunc.w.d   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x080036D8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080036DC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x080036E0: nop

    // 0x080036E4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x080036E8: nop

    // 0x080036EC: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080036F0: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x080036F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080036F8: jalr        $t9
    // 0x080036FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080036FC: nop

    after_14:
    // 0x08003700: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x08003704: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x08003708: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
L_0800370C:
    // 0x0800370C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003710:
    // 0x08003710: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08003714: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08003718: jr          $ra
    // 0x0800371C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x0800371C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08001104_6D7054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800110C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001110: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08001114: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08001118: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800111C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08001120: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08001124: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001128: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800112C: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08001130: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08001134: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08001138: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800113C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001140: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08001144: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08001148: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x0800114C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001150: jalr        $t9
    // 0x08001154: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001154: nop

    after_0:
    // 0x08001158: bne         $v0, $zero, L_08001170
    if (ctx->r2 != 0) {
        // 0x0800115C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(26, 0X1180) << 16);
            goto L_08001170;
    }
    // 0x0800115C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X1180) << 16);
    // 0x08001160: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001164: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001168: jalr        $t9
    // 0x0800116C: addiu       $a0, $a0, 0x1180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X1180));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800116C: addiu       $a0, $a0, 0x1180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X1180));
    after_1:
L_08001170:
    // 0x08001170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001178: jr          $ra
    // 0x0800117C: nop

    TRACE_RETURN()
    return;
    // 0x0800117C: nop

;}
RECOMP_FUNC void func_080011F0_6D7140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080011F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080011FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001200: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08001204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001208: jalr        $t9
    // 0x0800120C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800120C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001210: lui         $t6, 0x224
    ctx->r14 = S32(0X224 << 16);
    // 0x08001214: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001218: ori         $t6, $t6, 0x8361
    ctx->r14 = ctx->r14 | 0X8361;
    // 0x0800121C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001220: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001224: addiu       $t0, $zero, 0x1E1
    ctx->r8 = ADD32(0, 0X1E1);
    // 0x08001228: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x0800122C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001230: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001234: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08001238: sb          $t7, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r15;
    // 0x0800123C: sb          $t8, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r24;
    // 0x08001240: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08001244: sh          $t1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r9;
    // 0x08001248: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001254: jalr        $t9
    // 0x08001258: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001258: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800125C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001260: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001268: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x0800126C: jalr        $t9
    // 0x08001270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08001274: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001278: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800127C: addiu       $t2, $zero, -0x14
    ctx->r10 = ADD32(0, -0X14);
    // 0x08001280: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08001284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001288: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x0800128C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x08001290: jalr        $t9
    // 0x08001294: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001294: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_3:
    // 0x08001298: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800129C: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080012A0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3DC0) << 16);
    // 0x080012A4: addiu       $a1, $a1, 0x3DC0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3DC0));
    // 0x080012A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012AC: jalr        $t9
    // 0x080012B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080012B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x080012B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012B8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080012BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080012C4: jalr        $t9
    // 0x080012C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080012C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x080012CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080012D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080012D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080012D8: jr          $ra
    // 0x080012DC: nop

    TRACE_RETURN()
    return;
    // 0x080012DC: nop

;}
RECOMP_FUNC void func_080009AC_6D68FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080009B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080009B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080009B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080009BC: lui         $t6, 0xA20
    ctx->r14 = S32(0XA20 << 16);
    // 0x080009C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009C4: ori         $t6, $t6, 0x8361
    ctx->r14 = ctx->r14 | 0X8361;
    // 0x080009C8: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x080009CC: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080009D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009D4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080009D8: sh          $t7, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r15;
    // 0x080009DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009E0: jalr        $t9
    // 0x080009E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080009E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009EC: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x080009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009F4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x080009F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000A00: jalr        $t9
    // 0x08000A04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08000A08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000A0C: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08000A10: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A14: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000A18: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A1C: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08000A20: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A2C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000A30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000A34: jalr        $t9
    // 0x08000A38: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A38: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    after_2:
    // 0x08000A3C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3EF0) << 16);
    // 0x08000A40: lwc1        $f0, 0x3EF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X3EF0));
    // 0x08000A44: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A48: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A4C: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000A50: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3D80) << 16);
    // 0x08000A54: addiu       $a1, $a1, 0x3D80
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3D80));
    // 0x08000A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A60: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000A64: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000A68: jalr        $t9
    // 0x08000A6C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A6C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x08000A70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A74: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A80: jalr        $t9
    // 0x08000A84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x08000A88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000A8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000A94: jr          $ra
    // 0x08000A98: nop

    TRACE_RETURN()
    return;
    // 0x08000A98: nop

;}
RECOMP_FUNC void func_08000634_6D6584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800063C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000640: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000648: jal         0x08000000
    // 0x0800064C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x0800064C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000650: lh          $t6, 0xA2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA2);
    // 0x08000654: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    // 0x08000658: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800065C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000660: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x08000664: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000668: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800066C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x08000670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000678: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x0800067C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000680: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000684: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000688: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x0800068C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08000690: nop

    // 0x08000694: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08000698: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800069C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x080006A0: nop

    // 0x080006A4: bc1f        L_080006CC
    if (!c1cs) {
        // 0x080006A8: nop
    
            goto L_080006CC;
    }
    // 0x080006A8: nop

    // 0x080006AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080006B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006B4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080006B8: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x080006BC: jalr        $t9
    // 0x080006C0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006C0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x080006C4: b           L_080007B0
    // 0x080006C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080007B0;
    // 0x080006C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080006CC:
    // 0x080006CC: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x080006D0: andi        $t0, $t8, 0x20
    ctx->r8 = ctx->r24 & 0X20;
    // 0x080006D4: bnel        $t0, $zero, L_080007B0
    if (ctx->r8 != 0) {
        // 0x080006D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080007B0;
    }
    goto skip_0;
    // 0x080006D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080006DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080006E0: lwc1        $f16, 0xD4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x080006E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080006E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006EC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x080006F0: addiu       $t9, $t9, -0xC28
    ctx->r25 = ADD32(ctx->r25, -0XC28);
    // 0x080006F4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080006F8: addiu       $a0, $zero, 0x257
    ctx->r4 = ADD32(0, 0X257);
    // 0x080006FC: bc1t        L_0800072C
    if (c1cs) {
        // 0x08000700: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_0800072C;
    }
    // 0x08000700: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000704: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000708: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x0800070C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000710: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000714: addiu       $a0, $zero, 0x257
    ctx->r4 = ADD32(0, 0X257);
    // 0x08000718: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x0800071C: jalr        $t9
    // 0x08000720: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000720: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000724: b           L_08000734
    // 0x08000728: nop

        goto L_08000734;
    // 0x08000728: nop

L_0800072C:
    // 0x0800072C: jalr        $t9
    // 0x08000730: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000730: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
L_08000734:
    // 0x08000734: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000738: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000744: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000748: jalr        $t9
    // 0x0800074C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800074C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000750: lh          $t1, 0xA0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA0);
    // 0x08000754: lh          $t2, 0xA2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA2);
    // 0x08000758: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x0800075C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08000760: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x08000764: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000768: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800076C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000770: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08000774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000778: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x0800077C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000780: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000784: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x08000788: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0800078C: jalr        $t9
    // 0x08000790: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000790: nop

    after_5:
    // 0x08000794: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000798: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800079C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080007A0: jalr        $t9
    // 0x080007A4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080007A4: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_6:
    // 0x080007A8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x080007AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080007B0:
    // 0x080007B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080007B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080007B8: jr          $ra
    // 0x080007BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x080007BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08003720_6D9670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003724: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800372C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003730: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003734: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003738: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800373C: jalr        $t9
    // 0x08003740: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003740: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08003744: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08003748: andi        $t8, $s0, 0x3FF
    ctx->r24 = ctx->r16 & 0X3FF;
    // 0x0800374C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08003750: bnel        $t7, $zero, L_080037E8
    if (ctx->r15 != 0) {
        // 0x08003754: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080037E8;
    }
    goto skip_0;
    // 0x08003754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08003758: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x0800375C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003760: bgez        $t8, L_0800377C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08003764: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_0800377C;
    }
    // 0x08003764: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08003768: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800376C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003770: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08003774: nop

    // 0x08003778: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_0800377C:
    // 0x0800377C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F68) << 16);
    // 0x08003780: ldc1        $f10, 0x3F68($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F68));
    // 0x08003784: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003788: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x0800378C: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x08003790: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003794: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08003798: jalr        $t9
    // 0x0800379C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800379C: nop

    after_1:
    // 0x080037A0: jal         0x0800281C
    // 0x080037A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_0800281C_6D876C(rdram, ctx);
        goto after_2;
    // 0x080037A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x080037A8: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x080037AC: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x080037B0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080037B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080037B8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x080037BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080037C0: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x080037C4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080037C8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080037CC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080037D0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080037D4: jalr        $t9
    // 0x080037D8: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080037D8: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x080037DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080037E0: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x080037E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080037E8:
    // 0x080037E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080037EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080037F0: jr          $ra
    // 0x080037F4: nop

    TRACE_RETURN()
    return;
    // 0x080037F4: nop

;}
RECOMP_FUNC void func_08002DA0_6D8CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002DA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002DA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002DAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002DB0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002DB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002DB8: jal         0x08002898
    // 0x08002DBC: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    func_08002898_6D87E8(rdram, ctx);
        goto after_0;
    // 0x08002DBC: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    after_0:
    // 0x08002DC0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002DC4: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x08002DC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002DCC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08002DD0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002DD4: beq         $v1, $zero, L_08002E1C
    if (ctx->r3 == 0) {
        // 0x08002DD8: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_08002E1C;
    }
    // 0x08002DD8: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08002DDC: sb          $t9, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r25;
    // 0x08002DE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002DE4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002DE8: lui         $a2, 0x3F2A
    ctx->r6 = S32(0X3F2A << 16);
    // 0x08002DEC: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08002DF0: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x08002DF4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002E00: jalr        $t9
    // 0x08002E04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002E08: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E0C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2E50) << 16);
    // 0x08002E14: jalr        $t9
    // 0x08002E18: addiu       $a0, $a0, 0x2E50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2E50));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002E18: addiu       $a0, $a0, 0x2E50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2E50));
    after_2:
L_08002E1C:
    // 0x08002E1C: lhu         $t0, 0xD2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD2);
    // 0x08002E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002E28: beq         $t0, $zero, L_08002E3C
    if (ctx->r8 == 0) {
        // 0x08002E2C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002E3C;
    }
    // 0x08002E2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E30: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002E34: jalr        $t9
    // 0x08002E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_08002E3C:
    // 0x08002E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002E40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002E48: jr          $ra
    // 0x08002E4C: nop

    TRACE_RETURN()
    return;
    // 0x08002E4C: nop

;}
RECOMP_FUNC void func_08002CE4_6D8C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002CE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002CEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002CF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002CF4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002CF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002CFC: jal         0x08002854
    // 0x08002D00: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    func_08002854_6D87A4(rdram, ctx);
        goto after_0;
    // 0x08002D00: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    after_0:
    // 0x08002D04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D08: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08002D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D10: lhu         $a1, 0xD0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD0);
    // 0x08002D14: jalr        $t9
    // 0x08002D18: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D18: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x08002D1C: beq         $v0, $zero, L_08002D8C
    if (ctx->r2 == 0) {
        // 0x08002D20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002D8C;
    }
    // 0x08002D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D24: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D28: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002D2C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002D30: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x08002D34: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002D38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002D3C: jalr        $t9
    // 0x08002D40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08002D44: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002D48: lhu         $t0, 0xD0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD0);
    // 0x08002D4C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002D50: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002D54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D58: sb          $t7, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r15;
    // 0x08002D5C: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08002D60: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08002D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D68: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002D6C: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x08002D70: jalr        $t9
    // 0x08002D74: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002D74: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    after_3:
    // 0x08002D78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2DA0) << 16);
    // 0x08002D84: jalr        $t9
    // 0x08002D88: addiu       $a0, $a0, 0x2DA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2DA0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002D88: addiu       $a0, $a0, 0x2DA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2DA0));
    after_4:
L_08002D8C:
    // 0x08002D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002D98: jr          $ra
    // 0x08002D9C: nop

    TRACE_RETURN()
    return;
    // 0x08002D9C: nop

;}
RECOMP_FUNC void func_080020F0_6D8040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080020F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080020F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080020FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002100: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08002104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002108: jalr        $t9
    // 0x0800210C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800210C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002110: lui         $t6, 0x22E
    ctx->r14 = S32(0X22E << 16);
    // 0x08002114: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002118: ori         $t6, $t6, 0x83E1
    ctx->r14 = ctx->r14 | 0X83E1;
    // 0x0800211C: addiu       $t7, $zero, 0x3E1
    ctx->r15 = ADD32(0, 0X3E1);
    // 0x08002120: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08002124: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x08002128: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800212C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08002130: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x08002134: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08002138: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x0800213C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002144: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002148: jalr        $t9
    // 0x0800214C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800214C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002150: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002154: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002158: jalr        $t9
    // 0x0800215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08002160: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002164: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800216C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002170: jalr        $t9
    // 0x08002174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08002178: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800217C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002184: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x08002188: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x0800218C: jalr        $t9
    // 0x08002190: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002190: addiu       $a3, $zero, -0x14
    ctx->r7 = ADD32(0, -0X14);
    after_4:
    // 0x08002194: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002198: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800219C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021A0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080021A4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x080021A8: jalr        $t9
    // 0x080021AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080021AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x080021B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021B4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080021B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021BC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080021C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x080021C4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x080021C8: jalr        $t9
    // 0x080021CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080021CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x080021D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021D4: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080021D8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3DE0) << 16);
    // 0x080021DC: addiu       $a1, $a1, 0x3DE0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3DE0));
    // 0x080021E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021E4: jalr        $t9
    // 0x080021E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080021E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080021EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021F0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080021F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080021F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080021FC: jalr        $t9
    // 0x08002200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x08002204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002208: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800220C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002210: jr          $ra
    // 0x08002214: nop

    TRACE_RETURN()
    return;
    // 0x08002214: nop

;}
RECOMP_FUNC void func_080025A0_6D84F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080025A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080025A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080025A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080025AC: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x080025B0: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x080025B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080025B8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080025BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080025C0: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080025C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080025C8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x080025CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080025D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080025D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080025D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x080025DC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080025E0: jalr        $t9
    // 0x080025E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025E4: nop

    after_0:
    // 0x080025E8: bne         $v0, $zero, L_08002600
    if (ctx->r2 != 0) {
        // 0x080025EC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(26, 0X2610) << 16);
            goto L_08002600;
    }
    // 0x080025EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2610) << 16);
    // 0x080025F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025F8: jalr        $t9
    // 0x080025FC: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2610));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025FC: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2610));
    after_1:
L_08002600:
    // 0x08002600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002608: jr          $ra
    // 0x0800260C: nop

    TRACE_RETURN()
    return;
    // 0x0800260C: nop

;}
RECOMP_FUNC void func_08000408_6D6358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800040C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000410: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000418: jal         0x08000000
    // 0x0800041C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x0800041C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000420: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x08000424: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x08000428: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800042C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000430: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000434: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000438: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x0800043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000440: jalr        $t9
    // 0x08000444: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000444: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08000448: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x0800044C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x08000450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000454: andi        $t0, $t8, 0x20
    ctx->r8 = ctx->r24 & 0X20;
    // 0x08000458: bne         $t0, $zero, L_080004B4
    if (ctx->r8 != 0) {
        // 0x0800045C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_080004B4;
    }
    // 0x0800045C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000460: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000464: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000468: sh          $zero, 0x14($t1)
    MEM_H(0X14, ctx->r9) = 0;
    // 0x0800046C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000470: jalr        $t9
    // 0x08000474: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000474: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000478: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x0800047C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000480: lui         $at, 0xFD7F
    ctx->r1 = S32(0XFD7F << 16);
    // 0x08000484: ori         $at, $at, 0xFEFF
    ctx->r1 = ctx->r1 | 0XFEFF;
    // 0x08000488: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800048C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x08000490: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000494: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X4C8) << 16);
    // 0x08000498: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x0800049C: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080004A0: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x080004A4: addiu       $a0, $a0, 0x4C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X4C8));
    // 0x080004A8: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x080004AC: jalr        $t9
    // 0x080004B0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004B0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_3:
L_080004B4:
    // 0x080004B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080004B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080004BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080004C0: jr          $ra
    // 0x080004C4: nop

    TRACE_RETURN()
    return;
    // 0x080004C4: nop

;}
RECOMP_FUNC void func_08000A9C_6D69EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000AA0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(26, 0X7C0) << 16);
    // 0x08000AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AA8: addiu       $t9, $t9, 0x7C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(26, 0X7C0));
    // 0x08000AAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000AB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000ABC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000AC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AC4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000AC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08000ACC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000AD0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000AD4: jalr        $t9
    // 0x08000AD8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AD8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x08000ADC: bne         $v0, $zero, L_08000B00
    if (ctx->r2 != 0) {
        // 0x08000AE0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08000B00;
    }
    // 0x08000AE0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000AE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000AE8: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x08000AEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0XB10) << 16);
    // 0x08000AF4: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08000AF8: jalr        $t9
    // 0x08000AFC: addiu       $a0, $a0, 0xB10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XB10));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000AFC: addiu       $a0, $a0, 0xB10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XB10));
    after_2:
L_08000B00:
    // 0x08000B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B08: jr          $ra
    // 0x08000B0C: nop

    TRACE_RETURN()
    return;
    // 0x08000B0C: nop

;}
RECOMP_FUNC void func_0800012C_6D607C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800012C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000138: jal         0x08000000
    // 0x0800013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x0800013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000140: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000144: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000148: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x0800014C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08000150: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000154: lwc1        $f0, 0xC($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08000158: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800015C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000160: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000164: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000168: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x0800016C: addiu       $t9, $zero, 0x300
    ctx->r25 = ADD32(0, 0X300);
    // 0x08000170: bc1f        L_08000184
    if (!c1cs) {
        // 0x08000174: addiu       $t0, $zero, 0x8
        ctx->r8 = ADD32(0, 0X8);
            goto L_08000184;
    }
    // 0x08000174: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08000178: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x0800017C: b           L_08000188
    // 0x08000180: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08000188;
    // 0x08000180: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_08000184:
    // 0x08000184: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08000188:
    // 0x08000188: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x0800018C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x08000190: nop

    // 0x08000194: bc1tl       L_080001DC
    if (c1cs) {
        // 0x08000198: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080001DC;
    }
    goto skip_0;
    // 0x08000198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800019C: lw          $t7, 0x60($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X60);
    // 0x080001A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X1E8) << 16);
    // 0x080001A4: addiu       $a0, $a0, 0x1E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X1E8));
    // 0x080001A8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080001AC: sw          $t8, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r24;
    // 0x080001B0: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    // 0x080001B4: lw          $t1, 0x60($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X60);
    // 0x080001B8: lui         $at, 0xFD7F
    ctx->r1 = S32(0XFD7F << 16);
    // 0x080001BC: ori         $at, $at, 0xFEFF
    ctx->r1 = ctx->r1 | 0XFEFF;
    // 0x080001C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001C8: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x080001CC: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    // 0x080001D0: jalr        $t9
    // 0x080001D4: sw          $t2, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001D4: sw          $t2, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r10;
    after_1:
    // 0x080001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001DC:
    // 0x080001DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001E0: jr          $ra
    // 0x080001E4: nop

    TRACE_RETURN()
    return;
    // 0x080001E4: nop

;}
RECOMP_FUNC void func_080002BC_6D620C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080002C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080002CC: jal         0x08000000
    // 0x080002D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x080002D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x080002D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002D8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080002E0: jalr        $t9
    // 0x080002E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x080002E8: bnel        $v0, $zero, L_080003F8
    if (ctx->r2 != 0) {
        // 0x080002EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080003F8;
    }
    goto skip_0;
    // 0x080002EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080002F0: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x080002F4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x080002F8: bnel        $t7, $zero, L_080003F8
    if (ctx->r15 != 0) {
        // 0x080002FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080003F8;
    }
    goto skip_1;
    // 0x080002FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000300: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000304: lwc1        $f6, 0xD4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x08000308: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800030C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000310: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x08000314: addiu       $t9, $t9, -0xC28
    ctx->r25 = ADD32(ctx->r25, -0XC28);
    // 0x08000318: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800031C: addiu       $a0, $zero, 0x257
    ctx->r4 = ADD32(0, 0X257);
    // 0x08000320: bc1t        L_08000350
    if (c1cs) {
        // 0x08000324: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_08000350;
    }
    // 0x08000324: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000328: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800032C: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08000330: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000334: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000338: addiu       $a0, $zero, 0x257
    ctx->r4 = ADD32(0, 0X257);
    // 0x0800033C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000340: jalr        $t9
    // 0x08000344: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000344: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000348: b           L_08000358
    // 0x0800034C: nop

        goto L_08000358;
    // 0x0800034C: nop

L_08000350:
    // 0x08000350: jalr        $t9
    // 0x08000354: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000354: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
L_08000358:
    // 0x08000358: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800035C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000368: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800036C: jalr        $t9
    // 0x08000370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000374: lhu         $v0, 0xD0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD0);
    // 0x08000378: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000380: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x08000384: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000388: bgez        $v0, L_0800039C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800038C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_0800039C;
    }
    // 0x0800038C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08000390: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000394: nop

    // 0x08000398: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_0800039C:
    // 0x0800039C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x080003A0: beq         $at, $zero, L_080003B4
    if (ctx->r1 == 0) {
        // 0x080003A4: swc1        $f10, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
            goto L_080003B4;
    }
    // 0x080003A4: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x080003A8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080003AC: b           L_080003DC
    // 0x080003B0: sh          $t8, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r24;
        goto L_080003DC;
    // 0x080003B0: sh          $t8, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r24;
L_080003B4:
    // 0x080003B4: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x080003B8: jalr        $t9
    // 0x080003BC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003BC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x080003C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080003C8: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080003CC: jalr        $t9
    // 0x080003D0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080003D0: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_6:
    // 0x080003D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x080003D8: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
L_080003DC:
    // 0x080003DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003E0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080003E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080003EC: jalr        $t9
    // 0x080003F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080003F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080003F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080003F8:
    // 0x080003F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080003FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000400: jr          $ra
    // 0x08000404: nop

    TRACE_RETURN()
    return;
    // 0x08000404: nop

;}
RECOMP_FUNC void func_080017EC_6D773C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080017F0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080017F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080017F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080017FC: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08001800: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001804: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08001808: jalr        $v0
    // 0x0800180C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0800180C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08001810: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08001814: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08001818: sh          $v0, 0xD0($t6)
    MEM_H(0XD0, ctx->r14) = ctx->r2;
    // 0x0800181C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001820: jalr        $t9
    // 0x08001824: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001824: nop

    after_1:
    // 0x08001828: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x0800182C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08001830: sh          $v0, 0xD2($t7)
    MEM_H(0XD2, ctx->r15) = ctx->r2;
    // 0x08001834: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001838: jalr        $t9
    // 0x0800183C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800183C: nop

    after_2:
    // 0x08001840: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08001844: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001848: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800184C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X186C) << 16);
    // 0x08001850: addiu       $a0, $a0, 0x186C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X186C));
    // 0x08001854: jalr        $t9
    // 0x08001858: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001858: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    after_3:
    // 0x0800185C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001864: jr          $ra
    // 0x08001868: nop

    TRACE_RETURN()
    return;
    // 0x08001868: nop

;}
RECOMP_FUNC void func_080031BC_6D910C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080031BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080031C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080031C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080031C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080031CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080031D0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x080031D4: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x080031D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080031DC: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x080031E0: jalr        $t9
    // 0x080031E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x080031E8: beql        $v0, $zero, L_080031FC
    if (ctx->r2 == 0) {
        // 0x080031EC: lh          $t7, 0xA0($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XA0);
            goto L_080031FC;
    }
    goto skip_0;
    // 0x080031EC: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
    skip_0:
    // 0x080031F0: jal         0x0800281C
    // 0x080031F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_0800281C_6D876C(rdram, ctx);
        goto after_1;
    // 0x080031F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x080031F8: lh          $t7, 0xA0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA0);
L_080031FC:
    // 0x080031FC: lh          $t8, 0xA2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA2);
    // 0x08003200: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003204: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08003208: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x0800320C: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08003210: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003218: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x0800321C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003220: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08003224: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08003228: jalr        $t9
    // 0x0800322C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800322C: nop

    after_2:
    // 0x08003230: bne         $v0, $zero, L_08003270
    if (ctx->r2 != 0) {
        // 0x08003234: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003270;
    }
    // 0x08003234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003238: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800323C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003240: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08003244: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800324C: jalr        $t9
    // 0x08003250: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003250: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08003254: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003258: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800325C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003260: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X3284) << 16);
    // 0x08003264: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    // 0x08003268: jalr        $t9
    // 0x0800326C: addiu       $a0, $a0, 0x3284
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3284));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800326C: addiu       $a0, $a0, 0x3284
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3284));
    after_4:
L_08003270:
    // 0x08003270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003274: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800327C: jr          $ra
    // 0x08003280: nop

    TRACE_RETURN()
    return;
    // 0x08003280: nop

;}
RECOMP_FUNC void func_08002B68_6D8AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002B6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002B70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002B74: lh          $t9, 0xA2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA2);
    // 0x08002B78: lh          $t8, 0xA0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA0);
    // 0x08002B7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002B80: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x08002B84: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08002B88: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08002B8C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002B90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B94: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x08002B98: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002B9C: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08002BA0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002BA4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002BA8: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08002BAC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002BB0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002BB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08002BB8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08002BBC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002BC0: jalr        $t9
    // 0x08002BC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BC4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x08002BC8: bne         $v0, $zero, L_08002C08
    if (ctx->r2 != 0) {
        // 0x08002BCC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08002C08;
    }
    // 0x08002BCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002BD0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002BD4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08002BD8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002BDC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002BE0: sb          $t1, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r9;
    // 0x08002BE4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002BEC: jalr        $t9
    // 0x08002BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002BF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2C18) << 16);
    // 0x08002C00: jalr        $t9
    // 0x08002C04: addiu       $a0, $a0, 0x2C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2C18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C04: addiu       $a0, $a0, 0x2C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2C18));
    after_2:
L_08002C08:
    // 0x08002C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C10: jr          $ra
    // 0x08002C14: nop

    TRACE_RETURN()
    return;
    // 0x08002C14: nop

;}
RECOMP_FUNC void func_080007C0_6D6710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080007C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080007C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080007CC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080007D0: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x080007D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007D8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080007DC: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x080007E0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080007E4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080007E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080007EC: nop

    // 0x080007F0: bc1f        L_08000844
    if (!c1cs) {
        // 0x080007F4: nop
    
            goto L_08000844;
    }
    // 0x080007F4: nop

    // 0x080007F8: lhu         $t7, -0x33D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X33D0);
    // 0x080007FC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x08000800: addu        $a0, $t8, $a0
    ctx->r4 = ADD32(ctx->r24, ctx->r4);
    // 0x08000804: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x08000808: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x0800080C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000810: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000814: jalr        $t9
    // 0x08000818: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000818: nop

    after_0:
    // 0x0800081C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3ED0) << 16);
    // 0x08000820: ldc1        $f10, 0x3ED0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3ED0));
    // 0x08000824: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08000828: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3ED8) << 16);
    // 0x0800082C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08000830: ldc1        $f18, 0x3ED8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3ED8));
    // 0x08000834: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000838: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800083C: b           L_08000888
    // 0x08000840: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
        goto L_08000888;
    // 0x08000840: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
L_08000844:
    // 0x08000844: lhu         $t0, -0x33D0($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X33D0);
    // 0x08000848: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800084C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000850: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x08000854: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x08000858: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x0800085C: jalr        $t9
    // 0x08000860: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000860: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_1:
    // 0x08000864: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3EE0) << 16);
    // 0x08000868: ldc1        $f10, 0x3EE0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3EE0));
    // 0x0800086C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08000870: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3EE8) << 16);
    // 0x08000874: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08000878: ldc1        $f18, 0x3EE8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3EE8));
    // 0x0800087C: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x08000880: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000884: swc1        $f6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f6.u32l;
L_08000888:
    // 0x08000888: lhu         $t3, 0xDC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XDC);
    // 0x0800088C: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000890: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000894: bne         $t3, $zero, L_080008AC
    if (ctx->r11 != 0) {
        // 0x08000898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080008AC;
    }
    // 0x08000898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800089C: lw          $t4, -0x39FC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39FC);
    // 0x080008A0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080008A4: lbu         $t5, 0x4C($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4C);
    // 0x080008A8: bne         $t5, $at, L_080008E4
    if (ctx->r13 != ctx->r1) {
        // 0x080008AC: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080008E4;
    }
L_080008AC:
    // 0x080008AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008B0: sb          $t6, 0x6E($s0)
    MEM_B(0X6E, ctx->r16) = ctx->r14;
    // 0x080008B4: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x080008B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080008BC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080008C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080008C4: jalr        $t9
    // 0x080008C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080008C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080008CC: lui         $t7, 0xA20
    ctx->r15 = S32(0XA20 << 16);
    // 0x080008D0: ori         $t7, $t7, 0x8361
    ctx->r15 = ctx->r15 | 0X8361;
    // 0x080008D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080008D8: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x080008DC: b           L_08000998
    // 0x080008E0: sh          $t8, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r24;
        goto L_08000998;
    // 0x080008E0: sh          $t8, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r24;
L_080008E4:
    // 0x080008E4: lhu         $t0, 0xD0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD0);
    // 0x080008E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080008EC: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080008F0: addiu       $t2, $t0, 0x5
    ctx->r10 = ADD32(ctx->r8, 0X5);
    // 0x080008F4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x080008F8: sh          $t2, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r10;
    // 0x080008FC: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08000900: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x08000904: jalr        $v0
    // 0x08000908: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000908: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x0800090C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000910: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000914: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08000918: nop

    // 0x0800091C: bc1fl       L_08000944
    if (!c1cs) {
        // 0x08000920: lhu         $t6, 0xD0($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0XD0);
            goto L_08000944;
    }
    goto skip_0;
    // 0x08000920: lhu         $t6, 0xD0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XD0);
    skip_0:
    // 0x08000924: lhu         $t4, 0xD0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XD0);
    // 0x08000928: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x0800092C: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x08000930: jalr        $v0
    // 0x08000934: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08000934: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_4:
    // 0x08000938: b           L_08000958
    // 0x0800093C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_08000958;
    // 0x0800093C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x08000940: lhu         $t6, 0xD0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XD0);
L_08000944:
    // 0x08000944: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x08000948: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x0800094C: jalr        $v0
    // 0x08000950: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x08000950: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_5:
    // 0x08000954: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_08000958:
    // 0x08000958: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x0800095C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000960: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000964: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x08000968: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x0800096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000974: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000978: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800097C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08000980: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08000984: jalr        $t9
    // 0x08000988: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000988: nop

    after_6:
    // 0x0800098C: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x08000990: ori         $t8, $t8, 0x361
    ctx->r24 = ctx->r24 | 0X361;
    // 0x08000994: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_08000998:
    // 0x08000998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800099C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080009A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080009A4: jr          $ra
    // 0x080009A8: nop

    TRACE_RETURN()
    return;
    // 0x080009A8: nop

;}
RECOMP_FUNC void func_0800186C_6D77BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800186C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001870: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001874: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08001878: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800187C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001880: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001884: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x08001888: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800188C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001890: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08001894: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08001898: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800189C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080018A0: jalr        $v0
    // 0x080018A4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080018A4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x080018A8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F18) << 16);
    // 0x080018AC: ldc1        $f6, 0x3F18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F18));
    // 0x080018B0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x080018B4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x080018B8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x080018BC: lh          $t8, 0xD0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XD0);
    // 0x080018C0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080018C4: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080018C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080018CC: swc1        $f10, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f10.u32l;
    // 0x080018D0: lhu         $t9, -0x33D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X33D0);
    // 0x080018D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080018D8: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080018DC: mflo        $a0
    ctx->r4 = lo;
    // 0x080018E0: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x080018E4: jalr        $v0
    // 0x080018E8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080018E8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x080018EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080018F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080018F4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080018F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080018FC: lhu         $t1, 0x14($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X14);
    // 0x08001900: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08001904: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001908: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x0800190C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x08001910: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001914: bgez        $t1, L_0800192C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001918: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_0800192C;
    }
    // 0x08001918: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x0800191C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001920: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001924: nop

    // 0x08001928: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_0800192C:
    // 0x0800192C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08001930: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001934: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08001938: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x0800193C: nop

    // 0x08001940: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001944: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08001948: nop

    // 0x0800194C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08001950: beq         $t3, $zero, L_0800199C
    if (ctx->r11 == 0) {
        // 0x08001954: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_0800199C;
    }
    // 0x08001954: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001958: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800195C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001960: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001964: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08001968: nop

    // 0x0800196C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08001970: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08001974: nop

    // 0x08001978: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x0800197C: bne         $t3, $zero, L_08001994
    if (ctx->r11 != 0) {
        // 0x08001980: nop
    
            goto L_08001994;
    }
    // 0x08001980: nop

    // 0x08001984: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x08001988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800198C: b           L_080019AC
    // 0x08001990: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_080019AC;
    // 0x08001990: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_08001994:
    // 0x08001994: b           L_080019AC
    // 0x08001998: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_080019AC;
    // 0x08001998: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_0800199C:
    // 0x0800199C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x080019A0: nop

    // 0x080019A4: bltz        $t3, L_08001994
    if (SIGNED(ctx->r11) < 0) {
        // 0x080019A8: nop
    
            goto L_08001994;
    }
    // 0x080019A8: nop

L_080019AC:
    // 0x080019AC: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x080019B0: lhu         $t5, -0x33D0($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X33D0);
    // 0x080019B4: lh          $t4, 0xD2($s1)
    ctx->r12 = MEM_H(ctx->r17, 0XD2);
    // 0x080019B8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x080019BC: bgez        $t5, L_080019CC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x080019C0: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_080019CC;
    }
    // 0x080019C0: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x080019C4: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x080019C8: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_080019CC:
    // 0x080019CC: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080019D0: mflo        $a0
    ctx->r4 = lo;
    // 0x080019D4: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x080019D8: jalr        $v0
    // 0x080019DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080019DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x080019E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080019E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080019E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080019EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080019F0: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x080019F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080019F8: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x080019FC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x08001A00: nop

    // 0x08001A04: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001A08: bgez        $t8, L_08001A1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08001A0C: sub.s       $f6, $f8, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_08001A1C;
    }
    // 0x08001A0C: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001A10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001A14: nop

    // 0x08001A18: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_08001A1C:
    // 0x08001A1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001A20: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001A24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001A28: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08001A2C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001A30: nop

    // 0x08001A34: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001A38: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001A3C: nop

    // 0x08001A40: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001A44: beql        $t0, $zero, L_08001A94
    if (ctx->r8 == 0) {
        // 0x08001A48: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_08001A94;
    }
    goto skip_0;
    // 0x08001A48: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x08001A4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001A50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001A54: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001A58: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08001A5C: nop

    // 0x08001A60: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08001A64: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001A68: nop

    // 0x08001A6C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08001A70: bne         $t0, $zero, L_08001A88
    if (ctx->r8 != 0) {
        // 0x08001A74: nop
    
            goto L_08001A88;
    }
    // 0x08001A74: nop

    // 0x08001A78: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08001A7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001A80: b           L_08001AA0
    // 0x08001A84: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08001AA0;
    // 0x08001A84: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08001A88:
    // 0x08001A88: b           L_08001AA0
    // 0x08001A8C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08001AA0;
    // 0x08001A8C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08001A90: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_08001A94:
    // 0x08001A94: nop

    // 0x08001A98: bltz        $t0, L_08001A88
    if (SIGNED(ctx->r8) < 0) {
        // 0x08001A9C: nop
    
            goto L_08001A88;
    }
    // 0x08001A9C: nop

L_08001AA0:
    // 0x08001AA0: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x08001AA4: lh          $t1, 0xD4($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XD4);
    // 0x08001AA8: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x08001AAC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08001AB0: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001AB4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001AB8: mflo        $a0
    ctx->r4 = lo;
    // 0x08001ABC: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08001AC0: jalr        $t9
    // 0x08001AC4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001AC4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x08001AC8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001ACC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001AD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001AD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001AD8: lhu         $t5, 0x18($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X18);
    // 0x08001ADC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001AE0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001AE4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x08001AE8: nop

    // 0x08001AEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001AF0: bgez        $t5, L_08001B04
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08001AF4: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_08001B04;
    }
    // 0x08001AF4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001AF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001AFC: nop

    // 0x08001B00: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08001B04:
    // 0x08001B04: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08001B08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001B0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001B10: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x08001B14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001B18: nop

    // 0x08001B1C: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001B20: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001B24: nop

    // 0x08001B28: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08001B2C: beql        $t6, $zero, L_08001B7C
    if (ctx->r14 == 0) {
        // 0x08001B30: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_08001B7C;
    }
    goto skip_1;
    // 0x08001B30: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x08001B34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001B38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001B3C: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08001B40: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001B44: nop

    // 0x08001B48: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08001B4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08001B50: nop

    // 0x08001B54: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08001B58: bne         $t6, $zero, L_08001B70
    if (ctx->r14 != 0) {
        // 0x08001B5C: nop
    
            goto L_08001B70;
    }
    // 0x08001B5C: nop

    // 0x08001B60: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x08001B64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001B68: b           L_08001B88
    // 0x08001B6C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08001B88;
    // 0x08001B6C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08001B70:
    // 0x08001B70: b           L_08001B88
    // 0x08001B74: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08001B88;
    // 0x08001B74: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08001B78: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_08001B7C:
    // 0x08001B7C: nop

    // 0x08001B80: bltz        $t6, L_08001B70
    if (SIGNED(ctx->r14) < 0) {
        // 0x08001B84: nop
    
            goto L_08001B70;
    }
    // 0x08001B84: nop

L_08001B88:
    // 0x08001B88: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x08001B8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001B90: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08001B94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001B98: lwc1        $f8, 0x7C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x08001B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001BA0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x08001BA4: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x08001BA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08001BAC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001BB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001BB4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08001BB8: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08001BBC: nop

    // 0x08001BC0: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08001BC4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08001BC8: nop

    // 0x08001BCC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08001BD0: beql        $a2, $zero, L_08001C20
    if (ctx->r6 == 0) {
        // 0x08001BD4: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_08001C20;
    }
    goto skip_2;
    // 0x08001BD4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x08001BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001BDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001BE0: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x08001BE4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08001BE8: nop

    // 0x08001BEC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08001BF0: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08001BF4: nop

    // 0x08001BF8: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08001BFC: bne         $a2, $zero, L_08001C14
    if (ctx->r6 != 0) {
        // 0x08001C00: nop
    
            goto L_08001C14;
    }
    // 0x08001C00: nop

    // 0x08001C04: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001C08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001C0C: b           L_08001C2C
    // 0x08001C10: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_08001C2C;
    // 0x08001C10: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_08001C14:
    // 0x08001C14: b           L_08001C2C
    // 0x08001C18: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_08001C2C;
    // 0x08001C18: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x08001C1C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_08001C20:
    // 0x08001C20: nop

    // 0x08001C24: bltz        $a2, L_08001C14
    if (SIGNED(ctx->r6) < 0) {
        // 0x08001C28: nop
    
            goto L_08001C14;
    }
    // 0x08001C28: nop

L_08001C2C:
    // 0x08001C2C: lh          $t0, 0xA0($s1)
    ctx->r8 = MEM_H(ctx->r17, 0XA0);
    // 0x08001C30: lh          $t1, 0xA2($s1)
    ctx->r9 = MEM_H(ctx->r17, 0XA2);
    // 0x08001C34: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08001C38: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08001C3C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08001C40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C44: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001C48: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08001C4C: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x08001C50: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x08001C54: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001C58: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08001C5C: jalr        $t9
    // 0x08001C60: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001C60: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x08001C64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C68: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001C6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001C74: jalr        $t9
    // 0x08001C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08001C7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001C80: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C84: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001C88: jr          $ra
    // 0x08001C8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08001C8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08001010_6D6F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001014: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001018: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800101C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001020: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08001024: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001028: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800102C: beq         $t7, $zero, L_08001064
    if (ctx->r15 == 0) {
        // 0x08001030: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_08001064;
    }
    // 0x08001030: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001034: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x08001038: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x0800103C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001040: jalr        $v1
    // 0x08001044: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08001044: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x08001048: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x0800104C: addiu       $t8, $v0, -0x28
    ctx->r24 = ADD32(ctx->r2, -0X28);
    // 0x08001050: sh          $t8, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r24;
    // 0x08001054: jalr        $v1
    // 0x08001058: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08001058: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_1:
    // 0x0800105C: addiu       $t9, $v0, -0x28
    ctx->r25 = ADD32(ctx->r2, -0X28);
    // 0x08001060: sh          $t9, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r25;
L_08001064:
    // 0x08001064: lh          $t0, 0xD0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XD0);
    // 0x08001068: lh          $t1, 0xA0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA0);
    // 0x0800106C: lh          $t2, 0xD2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XD2);
    // 0x08001070: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08001074: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x08001078: lh          $t3, 0xA2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA2);
    // 0x0800107C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001080: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x08001084: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001088: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x0800108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001090: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001094: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x08001098: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x0800109C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080010A0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080010A4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x080010A8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080010AC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x080010B0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080010B4: jalr        $t9
    // 0x080010B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x080010BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010C0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080010C4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080010C8: jalr        $t9
    // 0x080010CC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010CC: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_3:
    // 0x080010D0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x080010D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010D8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080010DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080010E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: sh          $v0, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080010EC: sh          $v0, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r2;
    after_4:
    // 0x080010F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080010F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080010F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080010FC: jr          $ra
    // 0x08001100: nop

    TRACE_RETURN()
    return;
    // 0x08001100: nop

;}
RECOMP_FUNC void func_08002898_6D87E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800289C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080028A0: lhu         $v0, 0xDE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XDE);
    // 0x080028A4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x080028A8: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x080028AC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080028B0: mfhi        $v1
    ctx->r3 = hi;
    // 0x080028B4: sltiu       $t6, $v1, 0x1
    ctx->r14 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x080028B8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x080028BC: beq         $t6, $zero, L_080028CC
    if (ctx->r14 == 0) {
        // 0x080028C0: sh          $t7, 0xDE($a0)
        MEM_H(0XDE, ctx->r4) = ctx->r15;
            goto L_080028CC;
    }
    // 0x080028C0: sh          $t7, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r15;
    // 0x080028C4: jal         0x0800281C
    // 0x080028C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_0800281C_6D876C(rdram, ctx);
        goto after_0;
    // 0x080028C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_080028CC:
    // 0x080028CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080028D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080028D4: jr          $ra
    // 0x080028D8: nop

    TRACE_RETURN()
    return;
    // 0x080028D8: nop

;}
RECOMP_FUNC void func_08003948_6D9898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003948: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800394C: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08003950: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08003954: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08003958: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800395C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08003960: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x08003964: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003968: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x0800396C: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08003970: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08003974: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08003978: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0800397C: jalr        $v0
    // 0x08003980: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08003980: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x08003984: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F70) << 16);
    // 0x08003988: ldc1        $f6, 0x3F70($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F70));
    // 0x0800398C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08003990: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08003994: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08003998: lh          $t8, 0xD0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD0);
    // 0x0800399C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080039A0: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080039A4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080039A8: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x080039AC: lhu         $t9, -0x33D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X33D0);
    // 0x080039B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080039B4: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x080039B8: mflo        $a0
    ctx->r4 = lo;
    // 0x080039BC: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x080039C0: jalr        $v0
    // 0x080039C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080039C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x080039C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080039CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080039D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080039D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080039D8: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x080039DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080039E0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x080039E4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x080039E8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080039EC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x080039F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080039F4: bgez        $t1, L_08003A08
    if (SIGNED(ctx->r9) >= 0) {
        // 0x080039F8: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_08003A08;
    }
    // 0x080039F8: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x080039FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003A00: nop

    // 0x08003A04: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08003A08:
    // 0x08003A08: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08003A0C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08003A10: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08003A14: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08003A18: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08003A1C: nop

    // 0x08003A20: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08003A24: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08003A28: nop

    // 0x08003A2C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08003A30: beql        $t3, $zero, L_08003A80
    if (ctx->r11 == 0) {
        // 0x08003A34: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_08003A80;
    }
    goto skip_0;
    // 0x08003A34: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x08003A38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003A3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08003A40: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08003A44: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x08003A48: nop

    // 0x08003A4C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08003A50: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x08003A54: nop

    // 0x08003A58: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x08003A5C: bne         $t3, $zero, L_08003A74
    if (ctx->r11 != 0) {
        // 0x08003A60: nop
    
            goto L_08003A74;
    }
    // 0x08003A60: nop

    // 0x08003A64: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x08003A68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003A6C: b           L_08003A8C
    // 0x08003A70: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_08003A8C;
    // 0x08003A70: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_08003A74:
    // 0x08003A74: b           L_08003A8C
    // 0x08003A78: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_08003A8C;
    // 0x08003A78: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x08003A7C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_08003A80:
    // 0x08003A80: nop

    // 0x08003A84: bltz        $t3, L_08003A74
    if (SIGNED(ctx->r11) < 0) {
        // 0x08003A88: nop
    
            goto L_08003A74;
    }
    // 0x08003A88: nop

L_08003A8C:
    // 0x08003A8C: sh          $t3, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r11;
    // 0x08003A90: lhu         $t5, -0x33D0($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X33D0);
    // 0x08003A94: lh          $t4, 0xD2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD2);
    // 0x08003A98: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x08003A9C: bgez        $t5, L_08003AAC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08003AA0: sra         $t6, $t5, 1
        ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
            goto L_08003AAC;
    }
    // 0x08003AA0: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x08003AA4: addiu       $at, $t5, 0x1
    ctx->r1 = ADD32(ctx->r13, 0X1);
    // 0x08003AA8: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_08003AAC:
    // 0x08003AAC: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003AB0: mflo        $a0
    ctx->r4 = lo;
    // 0x08003AB4: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x08003AB8: jalr        $v0
    // 0x08003ABC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08003ABC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x08003AC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003AC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003AC8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08003ACC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003AD0: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x08003AD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08003AD8: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08003ADC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x08003AE0: nop

    // 0x08003AE4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08003AE8: bgez        $t8, L_08003AFC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08003AEC: sub.s       $f6, $f8, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_08003AFC;
    }
    // 0x08003AEC: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08003AF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003AF4: nop

    // 0x08003AF8: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_08003AFC:
    // 0x08003AFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003B00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003B04: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08003B08: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08003B0C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08003B10: nop

    // 0x08003B14: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08003B18: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08003B1C: nop

    // 0x08003B20: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08003B24: beql        $t0, $zero, L_08003B74
    if (ctx->r8 == 0) {
        // 0x08003B28: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_08003B74;
    }
    goto skip_1;
    // 0x08003B28: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x08003B2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003B30: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08003B34: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08003B38: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08003B3C: nop

    // 0x08003B40: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08003B44: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08003B48: nop

    // 0x08003B4C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08003B50: bne         $t0, $zero, L_08003B68
    if (ctx->r8 != 0) {
        // 0x08003B54: nop
    
            goto L_08003B68;
    }
    // 0x08003B54: nop

    // 0x08003B58: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08003B5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003B60: b           L_08003B80
    // 0x08003B64: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08003B80;
    // 0x08003B64: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08003B68:
    // 0x08003B68: b           L_08003B80
    // 0x08003B6C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08003B80;
    // 0x08003B6C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08003B70: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_08003B74:
    // 0x08003B74: nop

    // 0x08003B78: bltz        $t0, L_08003B68
    if (SIGNED(ctx->r8) < 0) {
        // 0x08003B7C: nop
    
            goto L_08003B68;
    }
    // 0x08003B7C: nop

L_08003B80:
    // 0x08003B80: sh          $t0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r8;
    // 0x08003B84: lh          $t1, 0xD4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XD4);
    // 0x08003B88: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x08003B8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08003B90: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08003B94: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08003B98: mflo        $a0
    ctx->r4 = lo;
    // 0x08003B9C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08003BA0: jalr        $t9
    // 0x08003BA4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003BA4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x08003BA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003BAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003BB0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08003BB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003BB8: lhu         $t5, 0x18($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X18);
    // 0x08003BBC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08003BC0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08003BC4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x08003BC8: nop

    // 0x08003BCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08003BD0: bgez        $t5, L_08003BE4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x08003BD4: sub.s       $f6, $f16, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
            goto L_08003BE4;
    }
    // 0x08003BD4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08003BD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003BDC: nop

    // 0x08003BE0: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08003BE4:
    // 0x08003BE4: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x08003BE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08003BEC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08003BF0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x08003BF4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08003BF8: nop

    // 0x08003BFC: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08003C00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08003C04: nop

    // 0x08003C08: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08003C0C: beql        $t6, $zero, L_08003C5C
    if (ctx->r14 == 0) {
        // 0x08003C10: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_08003C5C;
    }
    goto skip_2;
    // 0x08003C10: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x08003C14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08003C18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08003C1C: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x08003C20: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08003C24: nop

    // 0x08003C28: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x08003C2C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08003C30: nop

    // 0x08003C34: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x08003C38: bne         $t6, $zero, L_08003C50
    if (ctx->r14 != 0) {
        // 0x08003C3C: nop
    
            goto L_08003C50;
    }
    // 0x08003C3C: nop

    // 0x08003C40: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x08003C44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003C48: b           L_08003C68
    // 0x08003C4C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08003C68;
    // 0x08003C4C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08003C50:
    // 0x08003C50: b           L_08003C68
    // 0x08003C54: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08003C68;
    // 0x08003C54: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x08003C58: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_08003C5C:
    // 0x08003C5C: nop

    // 0x08003C60: bltz        $t6, L_08003C50
    if (SIGNED(ctx->r14) < 0) {
        // 0x08003C64: nop
    
            goto L_08003C50;
    }
    // 0x08003C64: nop

L_08003C68:
    // 0x08003C68: sh          $t6, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r14;
    // 0x08003C6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08003C70: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x08003C74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003C78: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08003C80: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x08003C84: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x08003C88: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08003C8C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08003C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C94: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08003C98: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08003C9C: nop

    // 0x08003CA0: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08003CA4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08003CA8: nop

    // 0x08003CAC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08003CB0: beql        $a2, $zero, L_08003D00
    if (ctx->r6 == 0) {
        // 0x08003CB4: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_08003D00;
    }
    goto skip_3;
    // 0x08003CB4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x08003CB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003CBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08003CC0: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x08003CC4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08003CC8: nop

    // 0x08003CCC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08003CD0: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08003CD4: nop

    // 0x08003CD8: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08003CDC: bne         $a2, $zero, L_08003CF4
    if (ctx->r6 != 0) {
        // 0x08003CE0: nop
    
            goto L_08003CF4;
    }
    // 0x08003CE0: nop

    // 0x08003CE4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08003CE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08003CEC: b           L_08003D0C
    // 0x08003CF0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_08003D0C;
    // 0x08003CF0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_08003CF4:
    // 0x08003CF4: b           L_08003D0C
    // 0x08003CF8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_08003D0C;
    // 0x08003CF8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x08003CFC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_08003D00:
    // 0x08003D00: nop

    // 0x08003D04: bltz        $a2, L_08003CF4
    if (SIGNED(ctx->r6) < 0) {
        // 0x08003D08: nop
    
            goto L_08003CF4;
    }
    // 0x08003D08: nop

L_08003D0C:
    // 0x08003D0C: lh          $t0, 0xA0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA0);
    // 0x08003D10: lh          $t1, 0xA2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA2);
    // 0x08003D14: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08003D18: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x08003D1C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x08003D20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D24: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08003D28: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08003D2C: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x08003D30: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x08003D34: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003D38: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08003D3C: jalr        $t9
    // 0x08003D40: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003D40: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x08003D44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003D48: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003D4C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003D50: jr          $ra
    // 0x08003D54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08003D54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08000598_6D64E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800059C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080005A4: jal         0x08000000
    // 0x080005A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x080005A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x080005AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080005B0: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x080005B4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x080005B8: lh          $t8, 0xA0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA0);
    // 0x080005BC: lh          $t9, 0xA2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA2);
    // 0x080005C0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080005C4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x080005C8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x080005CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005D0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080005D4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x080005D8: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x080005DC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080005E0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x080005E4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080005E8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080005EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080005F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x080005F4: jalr        $t9
    // 0x080005F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005F8: nop

    after_1:
    // 0x080005FC: bne         $v0, $zero, L_08000624
    if (ctx->r2 != 0) {
        // 0x08000600: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000624;
    }
    // 0x08000600: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000604: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    // 0x08000608: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800060C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000610: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x08000614: bne         $t2, $zero, L_08000624
    if (ctx->r10 != 0) {
        // 0x08000618: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(26, 0X634) << 16);
            goto L_08000624;
    }
    // 0x08000618: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X634) << 16);
    // 0x0800061C: jalr        $t9
    // 0x08000620: addiu       $a0, $a0, 0x634
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X634));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000620: addiu       $a0, $a0, 0x634
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X634));
    after_2:
L_08000624:
    // 0x08000624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800062C: jr          $ra
    // 0x08000630: nop

    TRACE_RETURN()
    return;
    // 0x08000630: nop

;}
RECOMP_FUNC void func_08002A48_6D8998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002A54: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002A58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002A5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A60: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08002A64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002A68: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002A6C: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x08002A70: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x08002A74: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002A78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002A80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002A84: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002A88: jalr        $t9
    // 0x08002A8C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A8C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002A90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A94: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A98: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2AB4) << 16);
    // 0x08002A9C: jalr        $t9
    // 0x08002AA0: addiu       $a0, $a0, 0x2AB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2AB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AA0: addiu       $a0, $a0, 0x2AB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2AB4));
    after_1:
    // 0x08002AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AAC: jr          $ra
    // 0x08002AB0: nop

    TRACE_RETURN()
    return;
    // 0x08002AB0: nop

;}
RECOMP_FUNC void func_08002570_6D84C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800257C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002580: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002588: jalr        $t9
    // 0x0800258C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800258C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08002590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002598: jr          $ra
    // 0x0800259C: nop

    TRACE_RETURN()
    return;
    // 0x0800259C: nop

;}
RECOMP_FUNC void func_0800055C_6D64AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000568: jal         0x08000000
    // 0x0800056C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x0800056C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000570: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000574: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000578: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800057C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000580: jalr        $t9
    // 0x08000584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08000588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800058C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000590: jr          $ra
    // 0x08000594: nop

    TRACE_RETURN()
    return;
    // 0x08000594: nop

;}
RECOMP_FUNC void func_08000F2C_6D6E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000F34: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000F40: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000F44: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000F48: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F50: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x08000F54: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x08000F58: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08000F5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000F60: bc1f        L_08000F74
    if (!c1cs) {
        // 0x08000F64: addiu       $a2, $zero, 0x50
        ctx->r6 = ADD32(0, 0X50);
            goto L_08000F74;
    }
    // 0x08000F64: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x08000F68: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000F6C: b           L_08000F78
    // 0x08000F70: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_08000F78;
    // 0x08000F70: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_08000F74:
    // 0x08000F74: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_08000F78:
    // 0x08000F78: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x08000F7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F80: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08000F84: bc1fl       L_08000FBC
    if (!c1cs) {
        // 0x08000F88: lwc1        $f8, 0x10($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
            goto L_08000FBC;
    }
    goto skip_0;
    // 0x08000F88: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x08000F8C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000F90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F94: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x08000F98: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x08000F9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000FA0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08000FA4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08000FA8: jalr        $t9
    // 0x08000FAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08000FB0: b           L_08000FC8
    // 0x08000FB4: nop

        goto L_08000FC8;
    // 0x08000FB4: nop

    // 0x08000FB8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
L_08000FBC:
    // 0x08000FBC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x08000FC0: jalr        $t9
    // 0x08000FC4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FC4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
L_08000FC8:
    // 0x08000FC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FCC: addiu       $t9, $t9, -0x25E4
    ctx->r25 = ADD32(ctx->r25, -0X25E4);
    // 0x08000FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000FD4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x08000FD8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x08000FDC: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    // 0x08000FE0: jalr        $t9
    // 0x08000FE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000FE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FEC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000FF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FF8: jalr        $t9
    // 0x08000FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08001000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001008: jr          $ra
    // 0x0800100C: nop

    TRACE_RETURN()
    return;
    // 0x0800100C: nop

;}
RECOMP_FUNC void func_08002E50_6D8DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002E54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002E58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002E5C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08002E60: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08002E64: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002E68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002E6C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002E70: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x08002E74: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002E78: jal         0x08002854
    // 0x08002E7C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    func_08002854_6D87A4(rdram, ctx);
        goto after_0;
    // 0x08002E7C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002E80: lhu         $t7, 0xD4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XD4);
    // 0x08002E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002E8C: beq         $t7, $zero, L_08002EA4
    if (ctx->r15 == 0) {
        // 0x08002E90: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_08002EA4;
    }
    // 0x08002E90: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002E94: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x08002E98: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x08002E9C: b           L_08002EB0
    // 0x08002EA0: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
        goto L_08002EB0;
    // 0x08002EA0: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
L_08002EA4:
    // 0x08002EA4: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x08002EA8: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x08002EAC: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
L_08002EB0:
    // 0x08002EB0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002EB4: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002EB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002EBC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08002EC0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08002EC4: beq         $v1, $zero, L_08002F28
    if (ctx->r3 == 0) {
        // 0x08002EC8: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_08002F28;
    }
    // 0x08002EC8: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08002ECC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002ED0: jalr        $t9
    // 0x08002ED4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002ED4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08002ED8: lhu         $t5, 0xD0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD0);
    // 0x08002EDC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x08002EE0: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x08002EE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002EE8: addiu       $t6, $t5, 0x200
    ctx->r14 = ADD32(ctx->r13, 0X200);
    // 0x08002EEC: sb          $t3, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r11;
    // 0x08002EF0: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x08002EF4: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08002EF8: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08002EFC: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08002F00: sh          $t7, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r15;
    // 0x08002F04: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x08002F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F0C: jalr        $t9
    // 0x08002F10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002F10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x08002F14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2F5C) << 16);
    // 0x08002F20: jalr        $t9
    // 0x08002F24: addiu       $a0, $a0, 0x2F5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2F5C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002F24: addiu       $a0, $a0, 0x2F5C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2F5C));
    after_3:
L_08002F28:
    // 0x08002F28: lhu         $t8, 0xD2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD2);
    // 0x08002F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002F34: beq         $t8, $zero, L_08002F48
    if (ctx->r24 == 0) {
        // 0x08002F38: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002F48;
    }
    // 0x08002F38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F3C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002F40: jalr        $t9
    // 0x08002F44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002F44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_08002F48:
    // 0x08002F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002F4C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08002F50: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002F54: jr          $ra
    // 0x08002F58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08002F58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08002AB4_6D8A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002AB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002ABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002AC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002AC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002AC8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08002ACC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002AD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002AD4: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x08002AD8: jalr        $t9
    // 0x08002ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08002AE0: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x08002AE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AE8: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08002AEC: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x08002AF0: bne         $t8, $zero, L_08002B54
    if (ctx->r24 != 0) {
        // 0x08002AF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08002B54;
    }
    // 0x08002AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002AF8: jalr        $t9
    // 0x08002AFC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AFC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_1:
    // 0x08002B00: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08002B04: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x08002B08: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08002B0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08002B10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002B14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B18: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08002B1C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002B20: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002B24: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08002B28: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08002B2C: jalr        $t9
    // 0x08002B30: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002B30: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    after_2:
    // 0x08002B34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08002B38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B3C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002B4C: jalr        $t9
    // 0x08002B50: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002B50: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    after_3:
L_08002B54:
    // 0x08002B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002B58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002B5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002B60: jr          $ra
    // 0x08002B64: nop

    TRACE_RETURN()
    return;
    // 0x08002B64: nop

;}
RECOMP_FUNC void func_080012E0_6D7230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080012E4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080012E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080012F0: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080012F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080012F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080012FC: jalr        $v0
    // 0x08001300: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001300: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08001304: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08001308: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x0800130C: sh          $v0, 0xD0($t6)
    MEM_H(0XD0, ctx->r14) = ctx->r2;
    // 0x08001310: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08001314: jalr        $t9
    // 0x08001318: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001318: nop

    after_1:
    // 0x0800131C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08001320: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08001324: sh          $v0, 0xD2($t7)
    MEM_H(0XD2, ctx->r15) = ctx->r2;
    // 0x08001328: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x0800132C: jalr        $t9
    // 0x08001330: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001330: nop

    after_2:
    // 0x08001334: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08001338: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800133C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001340: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X1360) << 16);
    // 0x08001344: addiu       $a0, $a0, 0x1360
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X1360));
    // 0x08001348: jalr        $t9
    // 0x0800134C: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800134C: sh          $v0, 0xD4($t8)
    MEM_H(0XD4, ctx->r24) = ctx->r2;
    after_3:
    // 0x08001350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001358: jr          $ra
    // 0x0800135C: nop

    TRACE_RETURN()
    return;
    // 0x0800135C: nop

;}
RECOMP_FUNC void func_080001E8_6D6138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001F4: jal         0x08000000
    // 0x080001F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08000000_6D5F50(rdram, ctx);
        goto after_0;
    // 0x080001F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080001FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08000200: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000204: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08000208: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x0800020C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2BC) << 16);
    // 0x08000210: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000214: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x08000218: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x0800021C: lbu         $t8, 0x9A($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X9A);
    // 0x08000220: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x08000224: addiu       $a0, $a0, 0x2BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2BC));
    // 0x08000228: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x0800022C: bgez        $t8, L_08000240
    if (SIGNED(ctx->r24) >= 0) {
        // 0x08000230: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08000240;
    }
    // 0x08000230: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000234: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000238: nop

    // 0x0800023C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_08000240:
    // 0x08000240: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000244: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000248: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800024C: lui         $at, 0x280
    ctx->r1 = S32(0X280 << 16);
    // 0x08000250: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x08000254: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x08000258: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x0800025C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x08000260: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08000264: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x08000268: bne         $v0, $zero, L_080002AC
    if (ctx->r2 != 0) {
        // 0x0800026C: sh          $t9, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r25;
            goto L_080002AC;
    }
    // 0x0800026C: sh          $t9, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r25;
    // 0x08000270: lw          $t0, 0x60($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X60);
    // 0x08000274: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x08000278: sh          $t2, 0xD0($a2)
    MEM_H(0XD0, ctx->r6) = ctx->r10;
    // 0x0800027C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08000280: sw          $t1, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r9;
    // 0x08000284: bgez        $t3, L_0800029C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08000288: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_0800029C;
    }
    // 0x08000288: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x0800028C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000290: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000294: nop

    // 0x08000298: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_0800029C:
    // 0x0800029C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002A4: jalr        $t9
    // 0x080002A8: swc1        $f6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002A8: swc1        $f6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f6.u32l;
    after_1:
L_080002AC:
    // 0x080002AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002B4: jr          $ra
    // 0x080002B8: nop

    TRACE_RETURN()
    return;
    // 0x080002B8: nop

;}
RECOMP_FUNC void func_08002974_6D88C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002974: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002978: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800297C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002984: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002988: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x0800298C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3E00) << 16);
    // 0x08002990: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002994: addiu       $a1, $a1, 0x3E00
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3E00));
    // 0x08002998: jalr        $t9
    // 0x0800299C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800299C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x080029A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x080029A4: addiu       $v1, $v1, 0x7360
    ctx->r3 = ADD32(ctx->r3, 0X7360);
    // 0x080029A8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x080029AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029B0: addiu       $a1, $zero, 0x10F
    ctx->r5 = ADD32(0, 0X10F);
    // 0x080029B4: jalr        $v1
    // 0x080029B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080029B8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x080029BC: beq         $v0, $zero, L_080029CC
    if (ctx->r2 == 0) {
        // 0x080029C0: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_080029CC;
    }
    // 0x080029C0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x080029C4: sw          $s0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r16;
    // 0x080029C8: sb          $zero, 0xD4($v0)
    MEM_B(0XD4, ctx->r2) = 0;
L_080029CC:
    // 0x080029CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080029D0: addiu       $a1, $zero, 0x10F
    ctx->r5 = ADD32(0, 0X10F);
    // 0x080029D4: jalr        $v1
    // 0x080029D8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x080029D8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x080029DC: beq         $v0, $zero, L_080029F0
    if (ctx->r2 == 0) {
        // 0x080029E0: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_080029F0;
    }
    // 0x080029E0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x080029E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080029E8: sw          $s0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r16;
    // 0x080029EC: sb          $t6, 0xD4($v0)
    MEM_B(0XD4, ctx->r2) = ctx->r14;
L_080029F0:
    // 0x080029F0: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x080029F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080029F8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080029FC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002A00: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x08002A04: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08002A08: sb          $t0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r8;
    // 0x08002A0C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002A18: jalr        $t9
    // 0x08002A1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x08002A20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2C18) << 16);
    // 0x08002A2C: jalr        $t9
    // 0x08002A30: addiu       $a0, $a0, 0x2C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2C18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002A30: addiu       $a0, $a0, 0x2C18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2C18));
    after_4:
    // 0x08002A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002A38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002A40: jr          $ra
    // 0x08002A44: nop

    TRACE_RETURN()
    return;
    // 0x08002A44: nop

;}
RECOMP_FUNC void func_08002470_6D83C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002478: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800247C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002484: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002488: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800248C: bne         $v0, $zero, L_080024A0
    if (ctx->r2 != 0) {
        // 0x08002490: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080024A0;
    }
    // 0x08002490: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002494: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002498: jalr        $t9
    // 0x0800249C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800249C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_080024A0:
    // 0x080024A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080024A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080024A8: jr          $ra
    // 0x080024AC: nop

    TRACE_RETURN()
    return;
    // 0x080024AC: nop

;}
RECOMP_FUNC void func_08002854_6D87A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800285C: lhu         $v0, 0xDE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XDE);
    // 0x08002860: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x08002864: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x08002868: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x0800286C: mfhi        $v1
    ctx->r3 = hi;
    // 0x08002870: sltiu       $t6, $v1, 0x1
    ctx->r14 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08002874: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08002878: beq         $t6, $zero, L_08002888
    if (ctx->r14 == 0) {
        // 0x0800287C: sh          $t7, 0xDE($a0)
        MEM_H(0XDE, ctx->r4) = ctx->r15;
            goto L_08002888;
    }
    // 0x0800287C: sh          $t7, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r15;
    // 0x08002880: jal         0x0800281C
    // 0x08002884: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_0800281C_6D876C(rdram, ctx);
        goto after_0;
    // 0x08002884: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_08002888:
    // 0x08002888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800288C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002890: jr          $ra
    // 0x08002894: nop

    TRACE_RETURN()
    return;
    // 0x08002894: nop

;}
RECOMP_FUNC void func_08000C18_6D6B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C1C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(26, 0X7C0) << 16);
    // 0x08000C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C24: addiu       $t9, $t9, 0x7C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(26, 0X7C0));
    // 0x08000C28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000C2C: jalr        $t9
    // 0x08000C30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000C34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C38: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000C44: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000C50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0XC74) << 16);
    // 0x08000C5C: jalr        $t9
    // 0x08000C60: addiu       $a0, $a0, 0xC74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XC74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C60: addiu       $a0, $a0, 0xC74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XC74));
    after_2:
    // 0x08000C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C6C: jr          $ra
    // 0x08000C70: nop

    TRACE_RETURN()
    return;
    // 0x08000C70: nop

;}
