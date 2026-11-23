#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80003328_3F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000332C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003330: jal         0x8000B364
    // 0x80003334: nop

    func_8000B364_BF64(rdram, ctx);
        goto after_0;
    // 0x80003334: nop

    after_0:
    // 0x80003338: jal         0x8000383C
    // 0x8000333C: nop

    func_8000383C_443C(rdram, ctx);
        goto after_1;
    // 0x8000333C: nop

    after_1:
    // 0x80003340: jal         0x80003728
    // 0x80003344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80003344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_2:
    // 0x80003348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000334C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003350: jr          $ra
    // 0x80003354: nop

    TRACE_RETURN()
    return;
    // 0x80003354: nop

;}
RECOMP_FUNC void func_80007DA8_89A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007DA8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80007DAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80007DB0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80007DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007DB8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80007DBC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80007DC0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80007DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007DC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80007DCC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80007DD0: sw          $a0, 0x5F38($at)
    MEM_W(0X5F38, ctx->r1) = ctx->r4;
    // 0x80007DD4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80007DD8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x80007DDC: addu        $a1, $v0, $t9
    ctx->r5 = ADD32(ctx->r2, ctx->r25);
    // 0x80007DE0: ori         $at, $at, 0x5D18
    ctx->r1 = ctx->r1 | 0X5D18;
    // 0x80007DE4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80007DE8: jal         0x80007970
    // 0x80007DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80007970_8570(rdram, ctx);
        goto after_0;
    // 0x80007DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80007DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007DF8: jr          $ra
    // 0x80007DFC: nop

    TRACE_RETURN()
    return;
    // 0x80007DFC: nop

;}
RECOMP_FUNC void func_8000C60C_D20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C60C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C610: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C614: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C618: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C61C: beq         $v0, $zero, L_8000C638
    if (ctx->r2 == 0) {
        // 0x8000C620: nop
    
            goto L_8000C638;
    }
    // 0x8000C620: nop

    // 0x8000C624: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C628: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C62C: ori         $t1, $t9, 0x10
    ctx->r9 = ctx->r25 | 0X10;
    // 0x8000C630: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C634: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_8000C638:
    // 0x8000C638: jr          $ra
    // 0x8000C63C: nop

    TRACE_RETURN()
    return;
    // 0x8000C63C: nop

;}
RECOMP_FUNC void func_80002138_2D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002138: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8000213C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80002140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002144: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80002148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000214C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80002150: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80002154: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80002158: beq         $at, $zero, L_8000235C
    if (ctx->r1 == 0) {
        // 0x8000215C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8000235C;
    }
    // 0x8000215C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80002160: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80002164: addu        $at, $at, $t7
    gpr jr_addend_8000216C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80002168: lw          $t7, -0x57CC($at)
    ctx->r15 = ADD32(ctx->r1, -0X57CC);
    // 0x8000216C: jr          $t7
    // 0x80002170: nop

    switch (jr_addend_8000216C >> 2) {
        case 0: goto L_80002174; break;
        case 1: goto L_800021BC; break;
        case 2: goto L_80002244; break;
        case 3: goto L_80002288; break;
        case 4: goto L_80002354; break;
        default: switch_error(__func__, 0x8000216C, 0x8007A834);
    }
    // 0x80002170: nop

L_80002174:
    // 0x80002174: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002178: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    // 0x8000217C: jal         0x80001C00
    // 0x80002180: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80002180: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x80002184: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x80002188: beq         $v1, $zero, L_8000219C
    if (ctx->r3 == 0) {
        // 0x8000218C: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8000219C;
    }
L_8000218C:
    // 0x8000218C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80002190: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x80002194: bne         $t8, $zero, L_8000218C
    if (ctx->r24 != 0) {
        // 0x80002198: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8000218C;
    }
    // 0x80002198: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8000219C:
    // 0x8000219C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800021A0: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x800021A4: addiu       $t9, $v1, 0x7FFF
    ctx->r25 = ADD32(ctx->r3, 0X7FFF);
    // 0x800021A8: lbu         $t9, 0x2DD7($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2DD7);
    // 0x800021AC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x800021B0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800021B4: b           L_8000235C
    // 0x800021B8: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
        goto L_8000235C;
    // 0x800021B8: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
L_800021BC:
    // 0x800021BC: jal         0x80004240
    // 0x800021C0: nop

    func_80004240_4E40(rdram, ctx);
        goto after_1;
    // 0x800021C0: nop

    after_1:
    // 0x800021C4: jal         0x80013940
    // 0x800021C8: nop

    func_80013940_14540(rdram, ctx);
        goto after_2;
    // 0x800021C8: nop

    after_2:
    // 0x800021CC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800021D0: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x800021D4: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x800021D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800021DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800021E0: lhu         $t2, -0x4F86($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X4F86);
    // 0x800021E4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x800021E8: addiu       $t4, $v1, 0x7FFF
    ctx->r12 = ADD32(ctx->r3, 0X7FFF);
    // 0x800021EC: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x800021F0: beq         $t3, $zero, L_80002234
    if (ctx->r11 == 0) {
        // 0x800021F4: nop
    
            goto L_80002234;
    }
    // 0x800021F4: nop

    // 0x800021F8: lhu         $t4, 0x2E15($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2E15);
    // 0x800021FC: bne         $t4, $zero, L_80002234
    if (ctx->r12 != 0) {
        // 0x80002200: nop
    
            goto L_80002234;
    }
    // 0x80002200: nop

    // 0x80002204: jal         0x801CB9C8
    // 0x80002208: nop

    func_801CB9C8_6A9E88(rdram, ctx);
        goto after_3;
    // 0x80002208: nop

    after_3:
    // 0x8000220C: beq         $v0, $zero, L_80002224
    if (ctx->r2 == 0) {
        // 0x80002210: nop
    
            goto L_80002224;
    }
    // 0x80002210: nop

    // 0x80002214: jal         0x8000378C
    // 0x80002218: nop

    func_8000378C_438C(rdram, ctx);
        goto after_4;
    // 0x80002218: nop

    after_4:
    // 0x8000221C: b           L_80002360
    // 0x80002220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002360;
    // 0x80002220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002224:
    // 0x80002224: jal         0x80003678
    // 0x80002228: nop

    func_80003678_4278(rdram, ctx);
        goto after_5;
    // 0x80002228: nop

    after_5:
    // 0x8000222C: b           L_80002360
    // 0x80002230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002360;
    // 0x80002230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002234:
    // 0x80002234: jal         0x8000378C
    // 0x80002238: nop

    func_8000378C_438C(rdram, ctx);
        goto after_6;
    // 0x80002238: nop

    after_6:
    // 0x8000223C: b           L_80002360
    // 0x80002240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002360;
    // 0x80002240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002244:
    // 0x80002244: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002248: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8000224C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002250: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80002254: sh          $t5, 0x2DC9($at)
    MEM_H(0X2DC9, ctx->r1) = ctx->r13;
    // 0x80002258: jal         0x800141C4
    // 0x8000225C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800141C4_14DC4(rdram, ctx);
        goto after_7;
    // 0x8000225C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x80002260: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80002264: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80002268: jal         0x801CBB70
    // 0x8000226C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801CBB70_6AA030(rdram, ctx);
        goto after_8;
    // 0x8000226C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80002270: beql        $v0, $zero, L_80002360
    if (ctx->r2 == 0) {
        // 0x80002274: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002360;
    }
    goto skip_0;
    // 0x80002274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002278: jal         0x80003678
    // 0x8000227C: nop

    func_80003678_4278(rdram, ctx);
        goto after_9;
    // 0x8000227C: nop

    after_9:
    // 0x80002280: b           L_80002360
    // 0x80002284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002360;
    // 0x80002284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002288:
    // 0x80002288: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8000228C: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002290: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002294: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80002298: sh          $t6, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r14;
    // 0x8000229C: jal         0x800231E0
    // 0x800022A0: sh          $zero, 0x2DC9($at)
    MEM_H(0X2DC9, ctx->r1) = 0;
    func_800231E0_23DE0(rdram, ctx);
        goto after_10;
    // 0x800022A0: sh          $zero, 0x2DC9($at)
    MEM_H(0X2DC9, ctx->r1) = 0;
    after_10:
    // 0x800022A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800022A8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x800022AC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x800022B0: sh          $v0, 0x2E15($at)
    MEM_H(0X2E15, ctx->r1) = ctx->r2;
    // 0x800022B4: addiu       $t7, $v1, 0x7FFF
    ctx->r15 = ADD32(ctx->r3, 0X7FFF);
    // 0x800022B8: lhu         $t7, 0x2E15($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2E15);
    // 0x800022BC: bne         $t7, $zero, L_80002300
    if (ctx->r15 != 0) {
        // 0x800022C0: nop
    
            goto L_80002300;
    }
    // 0x800022C0: nop

    // 0x800022C4: jal         0x800232EC
    // 0x800022C8: nop

    func_800232EC_23EEC(rdram, ctx);
        goto after_11;
    // 0x800022C8: nop

    after_11:
    // 0x800022CC: bne         $v0, $zero, L_80002300
    if (ctx->r2 != 0) {
        // 0x800022D0: nop
    
            goto L_80002300;
    }
    // 0x800022D0: nop

    // 0x800022D4: jal         0x80023410
    // 0x800022D8: nop

    func_80023410_24010(rdram, ctx);
        goto after_12;
    // 0x800022D8: nop

    after_12:
    // 0x800022DC: bne         $v0, $zero, L_80002300
    if (ctx->r2 != 0) {
        // 0x800022E0: nop
    
            goto L_80002300;
    }
    // 0x800022E0: nop

    // 0x800022E4: jal         0x80023480
    // 0x800022E8: nop

    func_80023480_24080(rdram, ctx);
        goto after_13;
    // 0x800022E8: nop

    after_13:
    // 0x800022EC: bne         $v0, $zero, L_80002300
    if (ctx->r2 != 0) {
        // 0x800022F0: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80002300;
    }
    // 0x800022F0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800022F4: jal         0x80023560
    // 0x800022F8: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    func_80023560_24160(rdram, ctx);
        goto after_14;
    // 0x800022F8: addiu       $a0, $a0, -0x33E8
    ctx->r4 = ADD32(ctx->r4, -0X33E8);
    after_14:
    // 0x800022FC: beq         $v0, $zero, L_8000232C
    if (ctx->r2 == 0) {
        // 0x80002300: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8000232C;
    }
L_80002300:
    // 0x80002300: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002304: addiu       $v0, $v0, -0x33E8
    ctx->r2 = ADD32(ctx->r2, -0X33E8);
    // 0x80002308: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000230C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_80002310:
    // 0x80002310: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80002314: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80002318: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8000231C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80002320: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80002324: bne         $v1, $a0, L_80002310
    if (ctx->r3 != ctx->r4) {
        // 0x80002328: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80002310;
    }
    // 0x80002328: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8000232C:
    // 0x8000232C: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
    // 0x80002330: beq         $v1, $zero, L_80002344
    if (ctx->r3 == 0) {
        // 0x80002334: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80002344;
    }
L_80002334:
    // 0x80002334: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80002338: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8000233C: bne         $t8, $zero, L_80002334
    if (ctx->r24 != 0) {
        // 0x80002340: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_80002334;
    }
    // 0x80002340: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80002344:
    // 0x80002344: jal         0x80003678
    // 0x80002348: nop

    func_80003678_4278(rdram, ctx);
        goto after_15;
    // 0x80002348: nop

    after_15:
    // 0x8000234C: b           L_80002360
    // 0x80002350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002360;
    // 0x80002350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002354:
    // 0x80002354: jal         0x8000378C
    // 0x80002358: nop

    func_8000378C_438C(rdram, ctx);
        goto after_16;
    // 0x80002358: nop

    after_16:
L_8000235C:
    // 0x8000235C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002360:
    // 0x80002360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002364: jr          $ra
    // 0x80002368: nop

    TRACE_RETURN()
    return;
    // 0x80002368: nop

;}
RECOMP_FUNC void func_8003DB0C_3E70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DB0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003DB10: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8003DB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003DB18: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8003DB1C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DB20: jal         0x8003DE48
    // 0x8003DB24: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_0;
    // 0x8003DB24: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003DB28: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8003DB2C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8003DB30: ori         $at, $at, 0x7FF7
    ctx->r1 = ctx->r1 | 0X7FF7;
    // 0x8003DB34: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003DB38: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003DB3C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DB40: addu        $t6, $v1, $at
    ctx->r14 = ADD32(ctx->r3, ctx->r1);
    // 0x8003DB44: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x8003DB48: beq         $at, $zero, L_8003DBD8
    if (ctx->r1 == 0) {
        // 0x8003DB4C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8003DBD8;
    }
    // 0x8003DB4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003DB50: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003DB54: addu        $at, $at, $t6
    gpr jr_addend_8003DB5C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8003DB58: lw          $t6, -0x2FD4($at)
    ctx->r14 = ADD32(ctx->r1, -0X2FD4);
    // 0x8003DB5C: jr          $t6
    // 0x8003DB60: nop

    switch (jr_addend_8003DB5C >> 2) {
        case 0: goto L_8003DB64; break;
        case 1: goto L_8003DBD8; break;
        case 2: goto L_8003DBD8; break;
        case 3: goto L_8003DBD8; break;
        case 4: goto L_8003DBD8; break;
        case 5: goto L_8003DBD8; break;
        case 6: goto L_8003DBD8; break;
        case 7: goto L_8003DBD8; break;
        case 8: goto L_8003DBD8; break;
        case 9: goto L_8003DBD8; break;
        case 10: goto L_8003DB74; break;
        case 11: goto L_8003DB8C; break;
        case 12: goto L_8003DBA4; break;
        case 13: goto L_8003DBCC; break;
        case 14: goto L_8003DBCC; break;
        default: switch_error(__func__, 0x8003DB5C, 0x8007D02C);
    }
    // 0x8003DB60: nop

L_8003DB64:
    // 0x8003DB64: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003DB68: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DB6C: b           L_8003DBD8
    // 0x8003DB70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_8003DBD8;
    // 0x8003DB70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8003DB74:
    // 0x8003DB74: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003DB78: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8003DB7C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DB80: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003DB84: b           L_8003DBD8
    // 0x8003DB88: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
        goto L_8003DBD8;
    // 0x8003DB88: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
L_8003DB8C:
    // 0x8003DB8C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8003DB90: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x8003DB94: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DB98: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8003DB9C: b           L_8003DBD8
    // 0x8003DBA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_8003DBD8;
    // 0x8003DBA0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_8003DBA4:
    // 0x8003DBA4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8003DBA8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8003DBAC: jal         0x8003DE48
    // 0x8003DBB0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_1;
    // 0x8003DBB0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x8003DBB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8003DBB8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DBBC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8003DBC0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DBC4: b           L_8003DBD8
    // 0x8003DBC8: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_8003DBD8;
    // 0x8003DBC8: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_8003DBCC:
    // 0x8003DBCC: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x8003DBD0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8003DBD4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_8003DBD8:
    // 0x8003DBD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003DBDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003DBE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8003DBE4: jr          $ra
    // 0x8003DBE8: nop

    TRACE_RETURN()
    return;
    // 0x8003DBE8: nop

;}
RECOMP_FUNC void func_8003DF98_3EB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DF98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003DF9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003DFA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003DFA4: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x8003DFA8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8003DFAC: addiu       $t7, $t6, 0x47
    ctx->r15 = ADD32(ctx->r14, 0X47);
    // 0x8003DFB0: sltiu       $at, $t7, 0x28
    ctx->r1 = ctx->r15 < 0X28 ? 1 : 0;
    // 0x8003DFB4: beq         $at, $zero, L_8003E190
    if (ctx->r1 == 0) {
        // 0x8003DFB8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8003E190;
    }
    // 0x8003DFB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003DFBC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8003DFC0: addu        $at, $at, $t7
    gpr jr_addend_8003DFC8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8003DFC4: lw          $t7, -0x2F98($at)
    ctx->r15 = ADD32(ctx->r1, -0X2F98);
    // 0x8003DFC8: jr          $t7
    // 0x8003DFCC: nop

    switch (jr_addend_8003DFC8 >> 2) {
        case 0: goto L_8003E028; break;
        case 1: goto L_8003E018; break;
        case 2: goto L_8003E190; break;
        case 3: goto L_8003E190; break;
        case 4: goto L_8003E190; break;
        case 5: goto L_8003E190; break;
        case 6: goto L_8003E190; break;
        case 7: goto L_8003E190; break;
        case 8: goto L_8003E004; break;
        case 9: goto L_8003DFF0; break;
        case 10: goto L_8003DFE0; break;
        case 11: goto L_8003DFD0; break;
        case 12: goto L_8003E190; break;
        case 13: goto L_8003E190; break;
        case 14: goto L_8003E17C; break;
        case 15: goto L_8003E158; break;
        case 16: goto L_8003E144; break;
        case 17: goto L_8003E120; break;
        case 18: goto L_8003E108; break;
        case 19: goto L_8003E0F0; break;
        case 20: goto L_8003E0DC; break;
        case 21: goto L_8003E0C8; break;
        case 22: goto L_8003E190; break;
        case 23: goto L_8003E190; break;
        case 24: goto L_8003E190; break;
        case 25: goto L_8003E190; break;
        case 26: goto L_8003E190; break;
        case 27: goto L_8003E190; break;
        case 28: goto L_8003E190; break;
        case 29: goto L_8003E190; break;
        case 30: goto L_8003E190; break;
        case 31: goto L_8003E190; break;
        case 32: goto L_8003E190; break;
        case 33: goto L_8003E190; break;
        case 34: goto L_8003E0B0; break;
        case 35: goto L_8003E098; break;
        case 36: goto L_8003E080; break;
        case 37: goto L_8003E068; break;
        case 38: goto L_8003E050; break;
        case 39: goto L_8003E038; break;
        default: switch_error(__func__, 0x8003DFC8, 0x8007D068);
    }
    // 0x8003DFCC: nop

L_8003DFD0:
    // 0x8003DFD0: jal         0x8000C3EC
    // 0x8003DFD4: nop

    func_8000C3EC_CFEC(rdram, ctx);
        goto after_0;
    // 0x8003DFD4: nop

    after_0:
    // 0x8003DFD8: b           L_8003E194
    // 0x8003DFDC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003DFDC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003DFE0:
    // 0x8003DFE0: jal         0x8003E1A8
    // 0x8003DFE4: nop

    func_8003E1A8_3EDA8(rdram, ctx);
        goto after_1;
    // 0x8003DFE4: nop

    after_1:
    // 0x8003DFE8: b           L_8003E194
    // 0x8003DFEC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003DFEC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003DFF0:
    // 0x8003DFF0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8003DFF4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003DFF8: sw          $t8, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r24;
    // 0x8003DFFC: b           L_8003E194
    // 0x8003E000: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E000: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E004:
    // 0x8003E004: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E008: jal         0x8000D2C0
    // 0x8003E00C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000D2C0_DEC0(rdram, ctx);
        goto after_2;
    // 0x8003E00C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_2:
    // 0x8003E010: b           L_8003E194
    // 0x8003E014: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E014: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E018:
    // 0x8003E018: jal         0x8003E548
    // 0x8003E01C: nop

    func_8003E548_3F148(rdram, ctx);
        goto after_3;
    // 0x8003E01C: nop

    after_3:
    // 0x8003E020: b           L_8003E194
    // 0x8003E024: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E024: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E028:
    // 0x8003E028: jal         0x8003E5B8
    // 0x8003E02C: nop

    func_8003E5B8_3F1B8(rdram, ctx);
        goto after_4;
    // 0x8003E02C: nop

    after_4:
    // 0x8003E030: b           L_8003E194
    // 0x8003E034: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E034: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E038:
    // 0x8003E038: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E03C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E040: jal         0x8000C53C
    // 0x8003E044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8000C53C_D13C(rdram, ctx);
        goto after_5;
    // 0x8003E044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8003E048: b           L_8003E194
    // 0x8003E04C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E04C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E050:
    // 0x8003E050: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E054: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E058: jal         0x8000C53C
    // 0x8003E05C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8000C53C_D13C(rdram, ctx);
        goto after_6;
    // 0x8003E05C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x8003E060: b           L_8003E194
    // 0x8003E064: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E064: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E068:
    // 0x8003E068: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E06C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E070: jal         0x8000C53C
    // 0x8003E074: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8000C53C_D13C(rdram, ctx);
        goto after_7;
    // 0x8003E074: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
    // 0x8003E078: b           L_8003E194
    // 0x8003E07C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E07C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E080:
    // 0x8003E080: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E084: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E088: jal         0x8000C53C
    // 0x8003E08C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8000C53C_D13C(rdram, ctx);
        goto after_8;
    // 0x8003E08C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_8:
    // 0x8003E090: b           L_8003E194
    // 0x8003E094: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E094: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E098:
    // 0x8003E098: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E09C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E0A0: jal         0x8000C53C
    // 0x8003E0A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8000C53C_D13C(rdram, ctx);
        goto after_9;
    // 0x8003E0A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x8003E0A8: b           L_8003E194
    // 0x8003E0AC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E0AC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E0B0:
    // 0x8003E0B0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E0B4: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E0B8: jal         0x8000C53C
    // 0x8003E0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8000C53C_D13C(rdram, ctx);
        goto after_10;
    // 0x8003E0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8003E0C0: b           L_8003E194
    // 0x8003E0C4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E0C4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E0C8:
    // 0x8003E0C8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E0CC: jal         0x8000C454
    // 0x8003E0D0: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C454_D054(rdram, ctx);
        goto after_11;
    // 0x8003E0D0: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_11:
    // 0x8003E0D4: b           L_8003E194
    // 0x8003E0D8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E0D8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E0DC:
    // 0x8003E0DC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E0E0: jal         0x8000C488
    // 0x8003E0E4: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C488_D088(rdram, ctx);
        goto after_12;
    // 0x8003E0E4: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_12:
    // 0x8003E0E8: b           L_8003E194
    // 0x8003E0EC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E0EC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E0F0:
    // 0x8003E0F0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E0F4: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E0F8: jal         0x8000C430
    // 0x8003E0FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8000C430_D030(rdram, ctx);
        goto after_13;
    // 0x8003E0FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_13:
    // 0x8003E100: b           L_8003E194
    // 0x8003E104: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E104: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E108:
    // 0x8003E108: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E10C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E110: jal         0x8000C430
    // 0x8003E114: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8000C430_D030(rdram, ctx);
        goto after_14;
    // 0x8003E114: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_14:
    // 0x8003E118: b           L_8003E194
    // 0x8003E11C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E11C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E120:
    // 0x8003E120: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E124: jal         0x8000C570
    // 0x8003E128: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C570_D170(rdram, ctx);
        goto after_15;
    // 0x8003E128: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_15:
    // 0x8003E12C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E130: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E134: jal         0x8000C568
    // 0x8003E138: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8000C568_D168(rdram, ctx);
        goto after_16;
    // 0x8003E138: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_16:
    // 0x8003E13C: b           L_8003E194
    // 0x8003E140: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E140: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E144:
    // 0x8003E144: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E148: jal         0x8000C5A4
    // 0x8003E14C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C5A4_D1A4(rdram, ctx);
        goto after_17;
    // 0x8003E14C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_17:
    // 0x8003E150: b           L_8003E194
    // 0x8003E154: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E154: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E158:
    // 0x8003E158: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E15C: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    // 0x8003E160: jal         0x8000C5E4
    // 0x8003E164: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8000C5E4_D1E4(rdram, ctx);
        goto after_18;
    // 0x8003E164: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_18:
    // 0x8003E168: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E16C: jal         0x8000C60C
    // 0x8003E170: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C60C_D20C(rdram, ctx);
        goto after_19;
    // 0x8003E170: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_19:
    // 0x8003E174: b           L_8003E194
    // 0x8003E178: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E178: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E17C:
    // 0x8003E17C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E180: jal         0x8000C640
    // 0x8003E184: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C640_D240(rdram, ctx);
        goto after_20;
    // 0x8003E184: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_20:
    // 0x8003E188: b           L_8003E194
    // 0x8003E18C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_8003E194;
    // 0x8003E18C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E190:
    // 0x8003E190: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8003E194:
    // 0x8003E194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E198: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8003E19C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E1A0: jr          $ra
    // 0x8003E1A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003E1A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800380C8_38CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800380C8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800380CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800380D0: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x800380D4: addiu       $s3, $s3, -0x22C8
    ctx->r19 = ADD32(ctx->r19, -0X22C8);
    // 0x800380D8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800380DC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800380E0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800380E4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800380E8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800380EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800380F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800380F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800380F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800380FC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80038100: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80038104: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80038108: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003810C: addiu       $a0, $a0, -0x5610
    ctx->r4 = ADD32(ctx->r4, -0X5610);
    // 0x80038110: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80038114: jal         0x80006F3C
    // 0x80038118: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80006F3C_7B3C(rdram, ctx);
        goto after_0;
    // 0x80038118: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x8003811C: lui         $fp, 0x8007
    ctx->r30 = S32(0X8007 << 16);
    // 0x80038120: lui         $s7, 0x8017
    ctx->r23 = S32(0X8017 << 16);
    // 0x80038124: addiu       $s7, $s7, -0x2490
    ctx->r23 = ADD32(ctx->r23, -0X2490);
    // 0x80038128: addiu       $fp, $fp, -0x1DD0
    ctx->r30 = ADD32(ctx->r30, -0X1DD0);
    // 0x8003812C: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
    // 0x80038130: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80038134: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80038138: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x8003813C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80038140:
    // 0x80038140: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80038144: jal         0x80040110
    // 0x80038148: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80038148: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x8003814C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80038150: lh          $v1, 0x0($t6)
    ctx->r3 = MEM_H(ctx->r14, 0X0);
    // 0x80038154: beql        $v1, $s4, L_80038178
    if (ctx->r3 == ctx->r20) {
        // 0x80038158: lw          $t7, 0x0($fp)
        ctx->r15 = MEM_W(ctx->r30, 0X0);
            goto L_80038178;
    }
    goto skip_0;
    // 0x80038158: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    skip_0:
    // 0x8003815C: beq         $v1, $s5, L_800381CC
    if (ctx->r3 == ctx->r21) {
        // 0x80038160: nop
    
            goto L_800381CC;
    }
    // 0x80038160: nop

    // 0x80038164: beql        $v1, $s6, L_800381CC
    if (ctx->r3 == ctx->r22) {
        // 0x80038168: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_800381CC;
    }
    goto skip_1;
    // 0x80038168: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_1:
    // 0x8003816C: b           L_800381CC
    // 0x80038170: nop

        goto L_800381CC;
    // 0x80038170: nop

    // 0x80038174: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
L_80038178:
    // 0x80038178: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003817C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80038180: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80038184: mfhi        $t8
    ctx->r24 = hi;
    // 0x80038188: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003818C: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x80038190: jal         0x80038210
    // 0x80038194: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_80038210_38E10(rdram, ctx);
        goto after_2;
    // 0x80038194: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_2:
    // 0x80038198: beq         $v0, $zero, L_800381CC
    if (ctx->r2 == 0) {
        // 0x8003819C: lui         $a0, 0x8017
        ctx->r4 = S32(0X8017 << 16);
            goto L_800381CC;
    }
    // 0x8003819C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800381A0: addiu       $a0, $a0, -0x21B0
    ctx->r4 = ADD32(ctx->r4, -0X21B0);
    // 0x800381A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800381A8: jal         0x80040110
    // 0x800381AC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800381AC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x800381B0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800381B4: jal         0x800383C4
    // 0x800381B8: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    func_800383C4_38FC4(rdram, ctx);
        goto after_4;
    // 0x800381B8: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_4:
    // 0x800381BC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800381C0: b           L_800381CC
    // 0x800381C4: lw          $s1, 0x4($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X4);
        goto L_800381CC;
    // 0x800381C4: lw          $s1, 0x4($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X4);
    // 0x800381C8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800381CC:
    // 0x800381CC: beql        $s0, $zero, L_80038140
    if (ctx->r16 == 0) {
        // 0x800381D0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80038140;
    }
    goto skip_2;
    // 0x800381D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_2:
    // 0x800381D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800381D8: jal         0x80047644
    // 0x800381DC: addiu       $a0, $a0, -0x2098
    ctx->r4 = ADD32(ctx->r4, -0X2098);
    alClose(rdram, ctx);
        goto after_5;
    // 0x800381DC: addiu       $a0, $a0, -0x2098
    ctx->r4 = ADD32(ctx->r4, -0X2098);
    after_5:
    // 0x800381E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800381E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800381E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800381EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800381F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800381F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800381F8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800381FC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80038200: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80038204: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80038208: jr          $ra
    // 0x8003820C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8003820C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8000B364_BF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B364: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8000B368: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000B36C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B374: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B378: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000B37C: sh          $t6, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r14;
    // 0x8000B380: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B384: lhu         $t7, 0x2DF3($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2DF3);
    // 0x8000B388: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B38C: sh          $t7, 0x2DFD($at)
    MEM_H(0X2DFD, ctx->r1) = ctx->r15;
    // 0x8000B390: lhu         $t8, 0x2FE1($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2FE1);
    // 0x8000B394: jal         0x8000B3E4
    // 0x8000B398: sh          $t8, 0x2DF3($at)
    MEM_H(0X2DF3, ctx->r1) = ctx->r24;
    func_8000B3E4_BFE4(rdram, ctx);
        goto after_0;
    // 0x8000B398: sh          $t8, 0x2DF3($at)
    MEM_H(0X2DF3, ctx->r1) = ctx->r24;
    after_0:
    // 0x8000B39C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8000B3A0: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8000B3A4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8000B3A8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8000B3AC: sh          $t9, 0x2E25($at)
    MEM_H(0X2E25, ctx->r1) = ctx->r25;
    // 0x8000B3B0: jal         0x800214E4
    // 0x8000B3B4: sb          $zero, 0x2E0D($at)
    MEM_B(0X2E0D, ctx->r1) = 0;
    func_800214E4_220E4(rdram, ctx);
        goto after_1;
    // 0x8000B3B4: sb          $zero, 0x2E0D($at)
    MEM_B(0X2E0D, ctx->r1) = 0;
    after_1:
    // 0x8000B3B8: jal         0x8000B4A0
    // 0x8000B3BC: nop

    func_8000B4A0_C0A0(rdram, ctx);
        goto after_2;
    // 0x8000B3BC: nop

    after_2:
    // 0x8000B3C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000B3C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8000B3C8: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x8000B3CC: jal         0x80037B10
    // 0x8000B3D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037B10_38710(rdram, ctx);
        goto after_3;
    // 0x8000B3D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8000B3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B3D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B3DC: jr          $ra
    // 0x8000B3E0: nop

    TRACE_RETURN()
    return;
    // 0x8000B3E0: nop

;}
RECOMP_FUNC void func_8001B6A4_1C2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B6A4: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8001B6A8: addiu       $v0, $v0, -0x4958
    ctx->r2 = ADD32(ctx->r2, -0X4958);
    // 0x8001B6AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001B6B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001B6B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001B6B8: sb          $a0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r4;
    // 0x8001B6BC: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x8001B6C0: sb          $a1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r5;
    // 0x8001B6C4: sb          $a1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r5;
    // 0x8001B6C8: sb          $a2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r6;
    // 0x8001B6CC: jr          $ra
    // 0x8001B6D0: sb          $a2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x8001B6D0: sb          $a2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void _bcopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BB00: beq         $a2, $zero, L_8004BB6C
    if (ctx->r6 == 0) {
        // 0x8004BB04: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8004BB6C;
    }
    // 0x8004BB04: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8004BB08: beq         $a0, $a1, L_8004BB6C
    if (ctx->r4 == ctx->r5) {
        // 0x8004BB0C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8004BB6C;
    }
    // 0x8004BB0C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004BB10: bnel        $at, $zero, L_8004BB34
    if (ctx->r1 != 0) {
        // 0x8004BB14: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8004BB34;
    }
    goto skip_0;
    // 0x8004BB14: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x8004BB18: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x8004BB1C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004BB20: beql        $at, $zero, L_8004BB34
    if (ctx->r1 == 0) {
        // 0x8004BB24: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8004BB34;
    }
    goto skip_1;
    // 0x8004BB24: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x8004BB28: b           L_8004BC98
    // 0x8004BB2C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_8004BC98;
    // 0x8004BB2C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8004BB30: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8004BB34:
    // 0x8004BB34: bne         $at, $zero, L_8004BB4C
    if (ctx->r1 != 0) {
        // 0x8004BB38: nop
    
            goto L_8004BB4C;
    }
    // 0x8004BB38: nop

    // 0x8004BB3C: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8004BB40: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8004BB44: beq         $v0, $v1, L_8004BB74
    if (ctx->r2 == ctx->r3) {
        // 0x8004BB48: nop
    
            goto L_8004BB74;
    }
    // 0x8004BB48: nop

L_8004BB4C:
    // 0x8004BB4C: beq         $a2, $zero, L_8004BB6C
    if (ctx->r6 == 0) {
        // 0x8004BB50: nop
    
            goto L_8004BB6C;
    }
    // 0x8004BB50: nop

    // 0x8004BB54: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_8004BB58:
    // 0x8004BB58: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004BB5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8004BB60: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004BB64: bne         $a0, $v1, L_8004BB58
    if (ctx->r4 != ctx->r3) {
        // 0x8004BB68: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_8004BB58;
    }
    // 0x8004BB68: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_8004BB6C:
    // 0x8004BB6C: jr          $ra
    // 0x8004BB70: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    TRACE_RETURN()
    return;
    // 0x8004BB70: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8004BB74:
    // 0x8004BB74: beq         $v0, $zero, L_8004BBD8
    if (ctx->r2 == 0) {
        // 0x8004BB78: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8004BBD8;
    }
    // 0x8004BB78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004BB7C: beq         $v0, $at, L_8004BBBC
    if (ctx->r2 == ctx->r1) {
        // 0x8004BB80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004BBBC;
    }
    // 0x8004BB80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004BB84: beql        $v0, $at, L_8004BBA8
    if (ctx->r2 == ctx->r1) {
        // 0x8004BB88: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_8004BBA8;
    }
    goto skip_2;
    // 0x8004BB88: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x8004BB8C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004BB90: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8004BB94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004BB98: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8004BB9C: b           L_8004BBD8
    // 0x8004BBA0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_8004BBD8;
    // 0x8004BBA0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x8004BBA4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_8004BBA8:
    // 0x8004BBA8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8004BBAC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8004BBB0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x8004BBB4: b           L_8004BBD8
    // 0x8004BBB8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_8004BBD8;
    // 0x8004BBB8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_8004BBBC:
    // 0x8004BBBC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004BBC0: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x8004BBC4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8004BBC8: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8004BBCC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x8004BBD0: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x8004BBD4: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_8004BBD8:
    // 0x8004BBD8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8004BBDC: bnel        $at, $zero, L_8004BC38
    if (ctx->r1 != 0) {
        // 0x8004BBE0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8004BC38;
    }
    goto skip_3;
    // 0x8004BBE0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x8004BBE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8004BBE8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8004BBEC: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8004BBF0: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8004BBF4: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x8004BBF8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8004BBFC: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x8004BC00: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x8004BC04: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8004BC08: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8004BC0C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x8004BC10: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x8004BC14: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x8004BC18: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x8004BC1C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x8004BC20: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x8004BC24: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x8004BC28: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x8004BC2C: b           L_8004BBD8
    // 0x8004BC30: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_8004BBD8;
    // 0x8004BC30: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_8004BC34:
    // 0x8004BC34: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8004BC38:
    // 0x8004BC38: bnel        $at, $zero, L_8004BC74
    if (ctx->r1 != 0) {
        // 0x8004BC3C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8004BC74;
    }
    goto skip_4;
    // 0x8004BC3C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x8004BC40: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8004BC44: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8004BC48: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8004BC4C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x8004BC50: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8004BC54: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8004BC58: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8004BC5C: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x8004BC60: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x8004BC64: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x8004BC68: b           L_8004BC34
    // 0x8004BC6C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_8004BC34;
    // 0x8004BC6C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_8004BC70:
    // 0x8004BC70: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_8004BC74:
    // 0x8004BC74: bne         $at, $zero, L_8004BB4C
    if (ctx->r1 != 0) {
        // 0x8004BC78: nop
    
            goto L_8004BB4C;
    }
    // 0x8004BC78: nop

    // 0x8004BC7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8004BC80: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8004BC84: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8004BC88: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8004BC8C: b           L_8004BC70
    // 0x8004BC90: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_8004BC70;
    // 0x8004BC90: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x8004BC94: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8004BC98:
    // 0x8004BC98: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8004BC9C: bne         $at, $zero, L_8004BCB4
    if (ctx->r1 != 0) {
        // 0x8004BCA0: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_8004BCB4;
    }
    // 0x8004BCA0: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8004BCA4: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8004BCA8: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8004BCAC: beq         $v0, $v1, L_8004BCE4
    if (ctx->r2 == ctx->r3) {
        // 0x8004BCB0: nop
    
            goto L_8004BCE4;
    }
    // 0x8004BCB0: nop

L_8004BCB4:
    // 0x8004BCB4: beq         $a2, $zero, L_8004BB6C
    if (ctx->r6 == 0) {
        // 0x8004BCB8: nop
    
            goto L_8004BB6C;
    }
    // 0x8004BCB8: nop

    // 0x8004BCBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8004BCC0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8004BCC4: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_8004BCC8:
    // 0x8004BCC8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004BCCC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8004BCD0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8004BCD4: bne         $a0, $v1, L_8004BCC8
    if (ctx->r4 != ctx->r3) {
        // 0x8004BCD8: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_8004BCC8;
    }
    // 0x8004BCD8: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x8004BCDC: jr          $ra
    // 0x8004BCE0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    TRACE_RETURN()
    return;
    // 0x8004BCE0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8004BCE4:
    // 0x8004BCE4: beq         $v0, $zero, L_8004BD48
    if (ctx->r2 == 0) {
        // 0x8004BCE8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8004BD48;
    }
    // 0x8004BCE8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004BCEC: beq         $v0, $at, L_8004BD2C
    if (ctx->r2 == ctx->r1) {
        // 0x8004BCF0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004BD2C;
    }
    // 0x8004BCF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004BCF4: beql        $v0, $at, L_8004BD18
    if (ctx->r2 == ctx->r1) {
        // 0x8004BCF8: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_8004BD18;
    }
    goto skip_5;
    // 0x8004BCF8: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x8004BCFC: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8004BD00: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8004BD04: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8004BD08: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8004BD0C: b           L_8004BD48
    // 0x8004BD10: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_8004BD48;
    // 0x8004BD10: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8004BD14: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_8004BD18:
    // 0x8004BD18: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x8004BD1C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8004BD20: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x8004BD24: b           L_8004BD48
    // 0x8004BD28: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_8004BD48;
    // 0x8004BD28: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8004BD2C:
    // 0x8004BD2C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x8004BD30: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x8004BD34: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x8004BD38: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x8004BD3C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x8004BD40: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8004BD44: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_8004BD48:
    // 0x8004BD48: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8004BD4C: bnel        $at, $zero, L_8004BDA8
    if (ctx->r1 != 0) {
        // 0x8004BD50: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_8004BDA8;
    }
    goto skip_6;
    // 0x8004BD50: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x8004BD54: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8004BD58: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8004BD5C: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8004BD60: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8004BD64: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x8004BD68: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x8004BD6C: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x8004BD70: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x8004BD74: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x8004BD78: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x8004BD7C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x8004BD80: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8004BD84: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8004BD88: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x8004BD8C: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x8004BD90: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x8004BD94: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x8004BD98: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x8004BD9C: b           L_8004BD48
    // 0x8004BDA0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_8004BD48;
    // 0x8004BDA0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_8004BDA4:
    // 0x8004BDA4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_8004BDA8:
    // 0x8004BDA8: bnel        $at, $zero, L_8004BDE4
    if (ctx->r1 != 0) {
        // 0x8004BDAC: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_8004BDE4;
    }
    goto skip_7;
    // 0x8004BDAC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x8004BDB0: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8004BDB4: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8004BDB8: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8004BDBC: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x8004BDC0: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8004BDC4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x8004BDC8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8004BDCC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8004BDD0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8004BDD4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x8004BDD8: b           L_8004BDA4
    // 0x8004BDDC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_8004BDA4;
    // 0x8004BDDC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_8004BDE0:
    // 0x8004BDE0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_8004BDE4:
    // 0x8004BDE4: bne         $at, $zero, L_8004BCB4
    if (ctx->r1 != 0) {
        // 0x8004BDE8: nop
    
            goto L_8004BCB4;
    }
    // 0x8004BDE8: nop

    // 0x8004BDEC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x8004BDF0: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8004BDF4: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x8004BDF8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8004BDFC: b           L_8004BDE0
    // 0x8004BE00: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_8004BDE0;
    // 0x8004BE00: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_800238D0_244D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800238D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800238D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800238D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800238DC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800238E0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800238E4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800238E8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800238EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800238F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800238F4: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x800238F8: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x800238FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80023900: addiu       $s3, $s3, -0x717C
    ctx->r19 = ADD32(ctx->r19, -0X717C);
    // 0x80023904: lw          $s1, -0x717C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X717C);
    // 0x80023908: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002390C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80023910: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80023914: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80023918: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8002391C: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
L_80023920:
    // 0x80023920: addu        $a2, $s1, $s2
    ctx->r6 = ADD32(ctx->r17, ctx->r18);
    // 0x80023924: addiu       $a2, $a2, 0x1B0
    ctx->r6 = ADD32(ctx->r6, 0X1B0);
    // 0x80023928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8002392C: jal         0x80044E70
    // 0x80023930: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x80023930: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80023934: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80023938: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8002393C: sb          $v0, 0x3B0($t7)
    MEM_B(0X3B0, ctx->r15) = ctx->r2;
    // 0x80023940: lw          $s1, 0x0($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X0);
    // 0x80023944: addu        $t8, $s1, $s0
    ctx->r24 = ADD32(ctx->r17, ctx->r16);
    // 0x80023948: lbu         $v1, 0x3B0($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X3B0);
    // 0x8002394C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80023950: beql        $s4, $v1, L_8002396C
    if (ctx->r20 == ctx->r3) {
        // 0x80023954: sw          $v1, 0x3FC($s1)
        MEM_W(0X3FC, ctx->r17) = ctx->r3;
            goto L_8002396C;
    }
    goto skip_0;
    // 0x80023954: sw          $v1, 0x3FC($s1)
    MEM_W(0X3FC, ctx->r17) = ctx->r3;
    skip_0:
    // 0x80023958: beql        $s5, $v1, L_8002396C
    if (ctx->r21 == ctx->r3) {
        // 0x8002395C: sw          $v1, 0x3FC($s1)
        MEM_W(0X3FC, ctx->r17) = ctx->r3;
            goto L_8002396C;
    }
    goto skip_1;
    // 0x8002395C: sw          $v1, 0x3FC($s1)
    MEM_W(0X3FC, ctx->r17) = ctx->r3;
    skip_1:
    // 0x80023960: bne         $s6, $v1, L_80023978
    if (ctx->r22 != ctx->r3) {
        // 0x80023964: nop
    
            goto L_80023978;
    }
    // 0x80023964: nop

    // 0x80023968: sw          $v1, 0x3FC($s1)
    MEM_W(0X3FC, ctx->r17) = ctx->r3;
L_8002396C:
    // 0x8002396C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80023970: b           L_8002398C
    // 0x80023974: lw          $v0, 0x3FC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X3FC);
        goto L_8002398C;
    // 0x80023974: lw          $v0, 0x3FC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X3FC);
L_80023978:
    // 0x80023978: bne         $s0, $s7, L_80023920
    if (ctx->r16 != ctx->r23) {
        // 0x8002397C: addiu       $s2, $s2, 0x20
        ctx->r18 = ADD32(ctx->r18, 0X20);
            goto L_80023920;
    }
    // 0x8002397C: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x80023980: sw          $zero, 0x3FC($s1)
    MEM_W(0X3FC, ctx->r17) = 0;
    // 0x80023984: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80023988: lw          $v0, 0x3FC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X3FC);
L_8002398C:
    // 0x8002398C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80023990: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80023994: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80023998: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002399C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800239A0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800239A4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800239A8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800239AC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800239B0: jr          $ra
    // 0x800239B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800239B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800232EC_23EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800232EC: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800232F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800232F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800232F8: addiu       $v0, $v0, -0x717C
    ctx->r2 = ADD32(ctx->r2, -0X717C);
    // 0x800232FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023300: addiu       $t7, $t6, -0x7588
    ctx->r15 = ADD32(ctx->r14, -0X7588);
    // 0x80023304: addiu       $t8, $t8, -0x75F8
    ctx->r24 = ADD32(ctx->r24, -0X75F8);
    // 0x80023308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002330C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80023310: addiu       $t0, $t8, 0x60
    ctx->r8 = ADD32(ctx->r24, 0X60);
L_80023314:
    // 0x80023314: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80023318: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8002331C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80023320: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80023324: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80023328: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002332C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80023330: bne         $t8, $t0, L_80023314
    if (ctx->r24 != ctx->r8) {
        // 0x80023334: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80023314;
    }
    // 0x80023334: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80023338: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8002333C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80023340: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80023344: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80023348: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x8002334C: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    // 0x80023350: jal         0x800441C0
    // 0x80023354: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    osPfsIsPlug_recomp(rdram, ctx);
        goto after_0;
    // 0x80023354: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    after_0:
    // 0x80023358: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002335C: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023360: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80023364: sw          $v0, 0x3FC($t1)
    MEM_W(0X3FC, ctx->r9) = ctx->r2;
    // 0x80023368: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8002336C: jal         0x80023ADC
    // 0x80023370: lw          $a0, 0x3FC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3FC);
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x80023370: lw          $a0, 0x3FC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3FC);
    after_1:
    // 0x80023374: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80023378: lw          $t3, -0x717C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X717C);
    // 0x8002337C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023380: lw          $v0, 0x3FC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X3FC);
    // 0x80023384: jr          $ra
    // 0x80023388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80023388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void _saveBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051A40: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80051A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051A48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051A4C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80051A50: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80051A54: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80051A58: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80051A5C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80051A60: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80051A64: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80051A68: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80051A6C: beq         $at, $zero, L_80051A78
    if (ctx->r1 == 0) {
        // 0x80051A70: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80051A78;
    }
    // 0x80051A70: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80051A74: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80051A78:
    // 0x80051A78: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80051A7C: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80051A80: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80051A84: beq         $at, $zero, L_80051B78
    if (ctx->r1 == 0) {
        // 0x80051A88: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80051B78;
    }
    // 0x80051A88: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80051A8C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80051A90: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80051A94: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80051A98: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80051A9C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80051AA0: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x80051AA4: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x80051AA8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80051AAC: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80051AB0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80051AB4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80051AB8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80051ABC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x80051AC0: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80051AC4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80051AC8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80051ACC: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80051AD0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80051AD4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80051AD8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80051ADC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051AE0: jal         0x80047710
    // 0x80051AE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80051AE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80051AE8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80051AEC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80051AF0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80051AF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80051AF8: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80051AFC: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80051B00: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051B04: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80051B08: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80051B0C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80051B10: subu        $t7, $a3, $t1
    ctx->r15 = SUB32(ctx->r7, ctx->r9);
    // 0x80051B14: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80051B18: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80051B1C: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80051B20: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80051B24: andi        $t7, $t9, 0xFFFF
    ctx->r15 = ctx->r25 & 0XFFFF;
    // 0x80051B28: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80051B2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051B30: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80051B34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80051B38: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80051B3C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80051B40: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80051B44: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80051B48: jal         0x80047710
    // 0x80051B4C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80051B4C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80051B50: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80051B54: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80051B58: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051B5C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80051B60: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80051B64: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80051B68: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80051B6C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80051B70: b           L_80051BB4
    // 0x80051B74: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80051BB4;
    // 0x80051B74: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80051B78:
    // 0x80051B78: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80051B7C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80051B80: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80051B84: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80051B88: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80051B8C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80051B90: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80051B94: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80051B98: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80051B9C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80051BA0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80051BA4: jal         0x80047710
    // 0x80051BA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80051BA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80051BAC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80051BB0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80051BB4:
    // 0x80051BB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051BB8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80051BBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051BC0: jr          $ra
    // 0x80051BC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80051BC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80012AD8_136D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012AD8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80012ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012AE0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80012AE4: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80012AE8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80012AEC: ldc1        $f16, -0x4E70($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E70);
    // 0x80012AF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80012AF4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80012AF8: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80012AFC: nop

    // 0x80012B00: bc1f        L_80012B78
    if (!c1cs) {
        // 0x80012B04: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80012B78;
    }
    // 0x80012B04: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012B08: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80012B0C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80012B10: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012B14: nop

    // 0x80012B18: bc1fl       L_80012B30
    if (!c1cs) {
        // 0x80012B1C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012B30;
    }
    goto skip_0;
    // 0x80012B1C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x80012B20: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012B24: b           L_80012B30
    // 0x80012B28: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012B30;
    // 0x80012B28: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012B2C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012B30:
    // 0x80012B30: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80012B34: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012B38: nop

    // 0x80012B3C: bc1fl       L_80012B58
    if (!c1cs) {
        // 0x80012B40: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012B58;
    }
    goto skip_1;
    // 0x80012B40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x80012B44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80012B48: swc1        $f12, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f12.u32l;
    // 0x80012B4C: b           L_80012B78
    // 0x80012B50: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
        goto L_80012B78;
    // 0x80012B50: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80012B54: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012B58:
    // 0x80012B58: nop

    // 0x80012B5C: bc1fl       L_80012B74
    if (!c1cs) {
        // 0x80012B60: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012B74;
    }
    goto skip_2;
    // 0x80012B60: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_2:
    // 0x80012B64: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012B68: b           L_80012B78
    // 0x80012B6C: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
        goto L_80012B78;
    // 0x80012B6C: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80012B70: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80012B74:
    // 0x80012B74: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_80012B78:
    // 0x80012B78: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012B7C: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80012B80: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80012B84: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80012B88: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80012B8C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80012B90: nop

    // 0x80012B94: bc1fl       L_80012C08
    if (!c1cs) {
        // 0x80012B98: lwc1        $f14, 0x18($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
            goto L_80012C08;
    }
    goto skip_3;
    // 0x80012B98: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    skip_3:
    // 0x80012B9C: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80012BA0: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80012BA4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012BA8: nop

    // 0x80012BAC: bc1fl       L_80012BC4
    if (!c1cs) {
        // 0x80012BB0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012BC4;
    }
    goto skip_4;
    // 0x80012BB0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_4:
    // 0x80012BB4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012BB8: b           L_80012BC4
    // 0x80012BBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012BC4;
    // 0x80012BBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012BC0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012BC4:
    // 0x80012BC4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012BC8: nop

    // 0x80012BCC: bc1fl       L_80012BE4
    if (!c1cs) {
        // 0x80012BD0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012BE4;
    }
    goto skip_5;
    // 0x80012BD0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_5:
    // 0x80012BD4: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x80012BD8: b           L_80012C04
    // 0x80012BDC: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
        goto L_80012C04;
    // 0x80012BDC: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x80012BE0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012BE4:
    // 0x80012BE4: nop

    // 0x80012BE8: bc1fl       L_80012C00
    if (!c1cs) {
        // 0x80012BEC: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012C00;
    }
    goto skip_6;
    // 0x80012BEC: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x80012BF0: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012BF4: b           L_80012C04
    // 0x80012BF8: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
        goto L_80012C04;
    // 0x80012BF8: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x80012BFC: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80012C00:
    // 0x80012C00: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
L_80012C04:
    // 0x80012C04: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
L_80012C08:
    // 0x80012C08: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80012C0C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80012C10: nop

    // 0x80012C14: bc1fl       L_80012C88
    if (!c1cs) {
        // 0x80012C18: lwc1        $f14, 0x30($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
            goto L_80012C88;
    }
    goto skip_7;
    // 0x80012C18: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    skip_7:
    // 0x80012C1C: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80012C20: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80012C24: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012C28: nop

    // 0x80012C2C: bc1fl       L_80012C44
    if (!c1cs) {
        // 0x80012C30: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012C44;
    }
    goto skip_8;
    // 0x80012C30: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_8:
    // 0x80012C34: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012C38: b           L_80012C44
    // 0x80012C3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012C44;
    // 0x80012C3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012C40: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012C44:
    // 0x80012C44: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012C48: nop

    // 0x80012C4C: bc1fl       L_80012C64
    if (!c1cs) {
        // 0x80012C50: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012C64;
    }
    goto skip_9;
    // 0x80012C50: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_9:
    // 0x80012C54: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x80012C58: b           L_80012C84
    // 0x80012C5C: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
        goto L_80012C84;
    // 0x80012C5C: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x80012C60: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012C64:
    // 0x80012C64: nop

    // 0x80012C68: bc1fl       L_80012C80
    if (!c1cs) {
        // 0x80012C6C: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012C80;
    }
    goto skip_10;
    // 0x80012C6C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_10:
    // 0x80012C70: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012C74: b           L_80012C84
    // 0x80012C78: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
        goto L_80012C84;
    // 0x80012C78: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x80012C7C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80012C80:
    // 0x80012C80: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
L_80012C84:
    // 0x80012C84: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
L_80012C88:
    // 0x80012C88: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80012C8C: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80012C90: nop

    // 0x80012C94: bc1fl       L_80012D08
    if (!c1cs) {
        // 0x80012C98: lwc1        $f14, 0x3C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X3C);
            goto L_80012D08;
    }
    goto skip_11;
    // 0x80012C98: lwc1        $f14, 0x3C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X3C);
    skip_11:
    // 0x80012C9C: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80012CA0: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80012CA4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012CA8: nop

    // 0x80012CAC: bc1fl       L_80012CC4
    if (!c1cs) {
        // 0x80012CB0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012CC4;
    }
    goto skip_12;
    // 0x80012CB0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_12:
    // 0x80012CB4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012CB8: b           L_80012CC4
    // 0x80012CBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012CC4;
    // 0x80012CBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012CC0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012CC4:
    // 0x80012CC4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012CC8: nop

    // 0x80012CCC: bc1fl       L_80012CE4
    if (!c1cs) {
        // 0x80012CD0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012CE4;
    }
    goto skip_13;
    // 0x80012CD0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_13:
    // 0x80012CD4: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x80012CD8: b           L_80012D04
    // 0x80012CDC: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
        goto L_80012D04;
    // 0x80012CDC: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    // 0x80012CE0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012CE4:
    // 0x80012CE4: nop

    // 0x80012CE8: bc1fl       L_80012D00
    if (!c1cs) {
        // 0x80012CEC: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012D00;
    }
    goto skip_14;
    // 0x80012CEC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_14:
    // 0x80012CF0: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012CF4: b           L_80012D04
    // 0x80012CF8: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
        goto L_80012D04;
    // 0x80012CF8: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x80012CFC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80012D00:
    // 0x80012D00: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
L_80012D04:
    // 0x80012D04: lwc1        $f14, 0x3C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X3C);
L_80012D08:
    // 0x80012D08: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80012D0C: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80012D10: nop

    // 0x80012D14: bc1fl       L_80012D88
    if (!c1cs) {
        // 0x80012D18: lwc1        $f14, 0x48($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
            goto L_80012D88;
    }
    goto skip_15;
    // 0x80012D18: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
    skip_15:
    // 0x80012D1C: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80012D20: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80012D24: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012D28: nop

    // 0x80012D2C: bc1fl       L_80012D44
    if (!c1cs) {
        // 0x80012D30: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012D44;
    }
    goto skip_16;
    // 0x80012D30: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_16:
    // 0x80012D34: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012D38: b           L_80012D44
    // 0x80012D3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012D44;
    // 0x80012D3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012D40: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012D44:
    // 0x80012D44: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012D48: nop

    // 0x80012D4C: bc1fl       L_80012D64
    if (!c1cs) {
        // 0x80012D50: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012D64;
    }
    goto skip_17;
    // 0x80012D50: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_17:
    // 0x80012D54: swc1        $f12, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f12.u32l;
    // 0x80012D58: b           L_80012D84
    // 0x80012D5C: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
        goto L_80012D84;
    // 0x80012D5C: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x80012D60: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012D64:
    // 0x80012D64: nop

    // 0x80012D68: bc1fl       L_80012D80
    if (!c1cs) {
        // 0x80012D6C: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012D80;
    }
    goto skip_18;
    // 0x80012D6C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_18:
    // 0x80012D70: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012D74: b           L_80012D84
    // 0x80012D78: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
        goto L_80012D84;
    // 0x80012D78: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x80012D7C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80012D80:
    // 0x80012D80: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
L_80012D84:
    // 0x80012D84: lwc1        $f14, 0x48($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X48);
L_80012D88:
    // 0x80012D88: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80012D8C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80012D90: nop

    // 0x80012D94: bc1fl       L_80012E08
    if (!c1cs) {
        // 0x80012D98: lwc1        $f14, 0x54($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
            goto L_80012E08;
    }
    goto skip_19;
    // 0x80012D98: lwc1        $f14, 0x54($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
    skip_19:
    // 0x80012D9C: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80012DA0: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80012DA4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012DA8: nop

    // 0x80012DAC: bc1fl       L_80012DC4
    if (!c1cs) {
        // 0x80012DB0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012DC4;
    }
    goto skip_20;
    // 0x80012DB0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_20:
    // 0x80012DB4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012DB8: b           L_80012DC4
    // 0x80012DBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012DC4;
    // 0x80012DBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012DC0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012DC4:
    // 0x80012DC4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012DC8: nop

    // 0x80012DCC: bc1fl       L_80012DE4
    if (!c1cs) {
        // 0x80012DD0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012DE4;
    }
    goto skip_21;
    // 0x80012DD0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_21:
    // 0x80012DD4: swc1        $f12, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f12.u32l;
    // 0x80012DD8: b           L_80012E04
    // 0x80012DDC: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
        goto L_80012E04;
    // 0x80012DDC: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
    // 0x80012DE0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012DE4:
    // 0x80012DE4: nop

    // 0x80012DE8: bc1fl       L_80012E00
    if (!c1cs) {
        // 0x80012DEC: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012E00;
    }
    goto skip_22;
    // 0x80012DEC: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_22:
    // 0x80012DF0: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012DF4: b           L_80012E04
    // 0x80012DF8: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
        goto L_80012E04;
    // 0x80012DF8: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x80012DFC: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80012E00:
    // 0x80012E00: swc1        $f8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f8.u32l;
L_80012E04:
    // 0x80012E04: lwc1        $f14, 0x54($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X54);
L_80012E08:
    // 0x80012E08: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80012E0C: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80012E10: nop

    // 0x80012E14: bc1fl       L_80012E88
    if (!c1cs) {
        // 0x80012E18: lwc1        $f14, 0x60($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X60);
            goto L_80012E88;
    }
    goto skip_23;
    // 0x80012E18: lwc1        $f14, 0x60($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X60);
    skip_23:
    // 0x80012E1C: lwc1        $f12, 0x50($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80012E20: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80012E24: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012E28: nop

    // 0x80012E2C: bc1fl       L_80012E44
    if (!c1cs) {
        // 0x80012E30: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012E44;
    }
    goto skip_24;
    // 0x80012E30: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_24:
    // 0x80012E34: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012E38: b           L_80012E44
    // 0x80012E3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012E44;
    // 0x80012E3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012E40: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012E44:
    // 0x80012E44: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012E48: nop

    // 0x80012E4C: bc1fl       L_80012E64
    if (!c1cs) {
        // 0x80012E50: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012E64;
    }
    goto skip_25;
    // 0x80012E50: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_25:
    // 0x80012E54: swc1        $f12, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f12.u32l;
    // 0x80012E58: b           L_80012E84
    // 0x80012E5C: swc1        $f18, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f18.u32l;
        goto L_80012E84;
    // 0x80012E5C: swc1        $f18, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f18.u32l;
    // 0x80012E60: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012E64:
    // 0x80012E64: nop

    // 0x80012E68: bc1fl       L_80012E80
    if (!c1cs) {
        // 0x80012E6C: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012E80;
    }
    goto skip_26;
    // 0x80012E6C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_26:
    // 0x80012E70: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012E74: b           L_80012E84
    // 0x80012E78: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
        goto L_80012E84;
    // 0x80012E78: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
    // 0x80012E7C: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80012E80:
    // 0x80012E80: swc1        $f6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f6.u32l;
L_80012E84:
    // 0x80012E84: lwc1        $f14, 0x60($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X60);
L_80012E88:
    // 0x80012E88: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80012E8C: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80012E90: nop

    // 0x80012E94: bc1fl       L_80012F08
    if (!c1cs) {
        // 0x80012E98: lwc1        $f14, 0x6C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X6C);
            goto L_80012F08;
    }
    goto skip_27;
    // 0x80012E98: lwc1        $f14, 0x6C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X6C);
    skip_27:
    // 0x80012E9C: lwc1        $f12, 0x5C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80012EA0: lwc1        $f2, 0x58($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80012EA4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012EA8: nop

    // 0x80012EAC: bc1fl       L_80012EC4
    if (!c1cs) {
        // 0x80012EB0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012EC4;
    }
    goto skip_28;
    // 0x80012EB0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_28:
    // 0x80012EB4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012EB8: b           L_80012EC4
    // 0x80012EBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012EC4;
    // 0x80012EBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012EC0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012EC4:
    // 0x80012EC4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012EC8: nop

    // 0x80012ECC: bc1fl       L_80012EE4
    if (!c1cs) {
        // 0x80012ED0: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012EE4;
    }
    goto skip_29;
    // 0x80012ED0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_29:
    // 0x80012ED4: swc1        $f12, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f12.u32l;
    // 0x80012ED8: b           L_80012F04
    // 0x80012EDC: swc1        $f18, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f18.u32l;
        goto L_80012F04;
    // 0x80012EDC: swc1        $f18, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f18.u32l;
    // 0x80012EE0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012EE4:
    // 0x80012EE4: nop

    // 0x80012EE8: bc1fl       L_80012F00
    if (!c1cs) {
        // 0x80012EEC: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012F00;
    }
    goto skip_30;
    // 0x80012EEC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_30:
    // 0x80012EF0: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012EF4: b           L_80012F04
    // 0x80012EF8: swc1        $f10, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f10.u32l;
        goto L_80012F04;
    // 0x80012EF8: swc1        $f10, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f10.u32l;
    // 0x80012EFC: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80012F00:
    // 0x80012F00: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
L_80012F04:
    // 0x80012F04: lwc1        $f14, 0x6C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X6C);
L_80012F08:
    // 0x80012F08: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80012F0C: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80012F10: nop

    // 0x80012F14: bc1fl       L_80012F88
    if (!c1cs) {
        // 0x80012F18: lwc1        $f4, 0x4($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80012F88;
    }
    goto skip_31;
    // 0x80012F18: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    skip_31:
    // 0x80012F1C: lwc1        $f12, 0x68($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X68);
    // 0x80012F20: lwc1        $f2, 0x64($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80012F24: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012F28: nop

    // 0x80012F2C: bc1fl       L_80012F44
    if (!c1cs) {
        // 0x80012F30: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80012F44;
    }
    goto skip_32;
    // 0x80012F30: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_32:
    // 0x80012F34: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012F38: b           L_80012F44
    // 0x80012F3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012F44;
    // 0x80012F3C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012F40: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80012F44:
    // 0x80012F44: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012F48: nop

    // 0x80012F4C: bc1fl       L_80012F64
    if (!c1cs) {
        // 0x80012F50: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80012F64;
    }
    goto skip_33;
    // 0x80012F50: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_33:
    // 0x80012F54: swc1        $f12, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f12.u32l;
    // 0x80012F58: b           L_80012F84
    // 0x80012F5C: swc1        $f18, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f18.u32l;
        goto L_80012F84;
    // 0x80012F5C: swc1        $f18, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->f18.u32l;
    // 0x80012F60: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80012F64:
    // 0x80012F64: nop

    // 0x80012F68: bc1fl       L_80012F80
    if (!c1cs) {
        // 0x80012F6C: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012F80;
    }
    goto skip_34;
    // 0x80012F6C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_34:
    // 0x80012F70: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80012F74: b           L_80012F84
    // 0x80012F78: swc1        $f8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f8.u32l;
        goto L_80012F84;
    // 0x80012F78: swc1        $f8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f8.u32l;
    // 0x80012F7C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80012F80:
    // 0x80012F80: swc1        $f10, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f10.u32l;
L_80012F84:
    // 0x80012F84: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
L_80012F88:
    // 0x80012F88: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80012F8C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80012F90: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80012F94: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80012F98: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80012F9C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80012FA0: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80012FA4: bc1f        L_80012FB4
    if (!c1cs) {
        // 0x80012FA8: swc1        $f8, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
            goto L_80012FB4;
    }
    // 0x80012FA8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80012FAC: b           L_80012FB4
    // 0x80012FB0: neg.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = -ctx->f10.fl;
        goto L_80012FB4;
    // 0x80012FB0: neg.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = -ctx->f10.fl;
L_80012FB4:
    // 0x80012FB4: ldc1        $f2, -0x4E68($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X4E68);
    // 0x80012FB8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80012FBC: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80012FC0: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x80012FC4: nop

    // 0x80012FC8: bc1f        L_80013040
    if (!c1cs) {
        // 0x80012FCC: nop
    
            goto L_80013040;
    }
    // 0x80012FCC: nop

    // 0x80012FD0: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x80012FD4: nop

    // 0x80012FD8: bc1fl       L_80012FEC
    if (!c1cs) {
        // 0x80012FDC: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80012FEC;
    }
    goto skip_35;
    // 0x80012FDC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_35:
    // 0x80012FE0: b           L_80012FEC
    // 0x80012FE4: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_80012FEC;
    // 0x80012FE4: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x80012FE8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80012FEC:
    // 0x80012FEC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80012FF0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80012FF4: c.lt.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d < ctx->f2.d;
    // 0x80012FF8: nop

    // 0x80012FFC: bc1f        L_80013040
    if (!c1cs) {
        // 0x80013000: nop
    
            goto L_80013040;
    }
    // 0x80013000: nop

    // 0x80013004: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x80013008: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001300C: bc1fl       L_80013020
    if (!c1cs) {
        // 0x80013010: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80013020;
    }
    goto skip_36;
    // 0x80013010: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_36:
    // 0x80013014: b           L_80013020
    // 0x80013018: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_80013020;
    // 0x80013018: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x8001301C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80013020:
    // 0x80013020: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80013024: c.lt.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d < ctx->f2.d;
    // 0x80013028: nop

    // 0x8001302C: bc1f        L_80013040
    if (!c1cs) {
        // 0x80013030: nop
    
            goto L_80013040;
    }
    // 0x80013030: nop

    // 0x80013034: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80013038: nop

    // 0x8001303C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
L_80013040:
    // 0x80013040: jal         0x8001D394
    // 0x80013044: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x80013044: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x80013048: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x8001304C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013050: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80013054: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80013058: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001305C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80013060: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80013064: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80013068: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8001306C: nop

    // 0x80013070: sb          $t7, 0x70($v0)
    MEM_B(0X70, ctx->r2) = ctx->r15;
    // 0x80013074: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80013078: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001307C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80013080: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80013084: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80013088: sb          $t9, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r25;
    // 0x8001308C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80013090: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80013094: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80013098: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8001309C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800130A0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800130A4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800130A8: sb          $t1, 0x72($v0)
    MEM_B(0X72, ctx->r2) = ctx->r9;
    // 0x800130AC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800130B0: nop

    // 0x800130B4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x800130B8: beql        $t3, $zero, L_80013108
    if (ctx->r11 == 0) {
        // 0x800130BC: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_80013108;
    }
    goto skip_37;
    // 0x800130BC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_37:
    // 0x800130C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800130C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800130C8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800130CC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800130D0: nop

    // 0x800130D4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800130D8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800130DC: nop

    // 0x800130E0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x800130E4: bne         $t3, $zero, L_800130FC
    if (ctx->r11 != 0) {
        // 0x800130E8: nop
    
            goto L_800130FC;
    }
    // 0x800130E8: nop

    // 0x800130EC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800130F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800130F4: b           L_80013114
    // 0x800130F8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80013114;
    // 0x800130F8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_800130FC:
    // 0x800130FC: b           L_80013114
    // 0x80013100: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80013114;
    // 0x80013100: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80013104: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_80013108:
    // 0x80013108: nop

    // 0x8001310C: bltz        $t3, L_800130FC
    if (SIGNED(ctx->r11) < 0) {
        // 0x80013110: nop
    
            goto L_800130FC;
    }
    // 0x80013110: nop

L_80013114:
    // 0x80013114: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80013118: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8001311C: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80013120: sb          $t3, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r11;
    // 0x80013124: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80013128: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8001312C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80013130: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80013134: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80013138: nop

    // 0x8001313C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80013140: beql        $t5, $zero, L_80013190
    if (ctx->r13 == 0) {
        // 0x80013144: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_80013190;
    }
    goto skip_38;
    // 0x80013144: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_38:
    // 0x80013148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001314C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80013150: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80013154: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80013158: nop

    // 0x8001315C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80013160: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80013164: nop

    // 0x80013168: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8001316C: bne         $t5, $zero, L_80013184
    if (ctx->r13 != 0) {
        // 0x80013170: nop
    
            goto L_80013184;
    }
    // 0x80013170: nop

    // 0x80013174: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80013178: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001317C: b           L_8001319C
    // 0x80013180: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8001319C;
    // 0x80013180: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80013184:
    // 0x80013184: b           L_8001319C
    // 0x80013188: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8001319C;
    // 0x80013188: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8001318C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_80013190:
    // 0x80013190: nop

    // 0x80013194: bltz        $t5, L_80013184
    if (SIGNED(ctx->r13) < 0) {
        // 0x80013198: nop
    
            goto L_80013184;
    }
    // 0x80013198: nop

L_8001319C:
    // 0x8001319C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800131A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800131A4: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x800131A8: sb          $t5, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r13;
    // 0x800131AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800131B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800131B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800131B8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800131BC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800131C0: nop

    // 0x800131C4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800131C8: beql        $t7, $zero, L_80013218
    if (ctx->r15 == 0) {
        // 0x800131CC: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_80013218;
    }
    goto skip_39;
    // 0x800131CC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_39:
    // 0x800131D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800131D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800131D8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800131DC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800131E0: nop

    // 0x800131E4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800131E8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800131EC: nop

    // 0x800131F0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x800131F4: bne         $t7, $zero, L_8001320C
    if (ctx->r15 != 0) {
        // 0x800131F8: nop
    
            goto L_8001320C;
    }
    // 0x800131F8: nop

    // 0x800131FC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80013200: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80013204: b           L_80013224
    // 0x80013208: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80013224;
    // 0x80013208: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8001320C:
    // 0x8001320C: b           L_80013224
    // 0x80013210: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80013224;
    // 0x80013210: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80013214: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_80013218:
    // 0x80013218: nop

    // 0x8001321C: bltz        $t7, L_8001320C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80013220: nop
    
            goto L_8001320C;
    }
    // 0x80013220: nop

L_80013224:
    // 0x80013224: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80013228: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8001322C: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80013230: sb          $t7, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r15;
    // 0x80013234: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80013238: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001323C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80013240: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80013244: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80013248: nop

    // 0x8001324C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80013250: beql        $t9, $zero, L_800132A0
    if (ctx->r25 == 0) {
        // 0x80013254: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_800132A0;
    }
    goto skip_40;
    // 0x80013254: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_40:
    // 0x80013258: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001325C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80013260: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80013264: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80013268: nop

    // 0x8001326C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80013270: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80013274: nop

    // 0x80013278: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8001327C: bne         $t9, $zero, L_80013294
    if (ctx->r25 != 0) {
        // 0x80013280: nop
    
            goto L_80013294;
    }
    // 0x80013280: nop

    // 0x80013284: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80013288: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001328C: b           L_800132AC
    // 0x80013290: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_800132AC;
    // 0x80013290: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80013294:
    // 0x80013294: b           L_800132AC
    // 0x80013298: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_800132AC;
    // 0x80013298: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8001329C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_800132A0:
    // 0x800132A0: nop

    // 0x800132A4: bltz        $t9, L_80013294
    if (SIGNED(ctx->r25) < 0) {
        // 0x800132A8: nop
    
            goto L_80013294;
    }
    // 0x800132A8: nop

L_800132AC:
    // 0x800132AC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800132B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800132B4: lwc1        $f4, 0x58($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X58);
    // 0x800132B8: sb          $t9, 0x76($v0)
    MEM_B(0X76, ctx->r2) = ctx->r25;
    // 0x800132BC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800132C0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800132C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800132C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800132CC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800132D0: nop

    // 0x800132D4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x800132D8: beql        $t1, $zero, L_80013328
    if (ctx->r9 == 0) {
        // 0x800132DC: mfc1        $t1, $f6
        ctx->r9 = (int32_t)ctx->f6.u32l;
            goto L_80013328;
    }
    goto skip_41;
    // 0x800132DC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    skip_41:
    // 0x800132E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800132E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800132E8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800132EC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800132F0: nop

    // 0x800132F4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800132F8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800132FC: nop

    // 0x80013300: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80013304: bne         $t1, $zero, L_8001331C
    if (ctx->r9 != 0) {
        // 0x80013308: nop
    
            goto L_8001331C;
    }
    // 0x80013308: nop

    // 0x8001330C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80013310: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80013314: b           L_80013334
    // 0x80013318: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80013334;
    // 0x80013318: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8001331C:
    // 0x8001331C: b           L_80013334
    // 0x80013320: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80013334;
    // 0x80013320: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80013324: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
L_80013328:
    // 0x80013328: nop

    // 0x8001332C: bltz        $t1, L_8001331C
    if (SIGNED(ctx->r9) < 0) {
        // 0x80013330: nop
    
            goto L_8001331C;
    }
    // 0x80013330: nop

L_80013334:
    // 0x80013334: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80013338: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8001333C: lwc1        $f8, 0x64($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X64);
    // 0x80013340: sb          $t1, 0x77($v0)
    MEM_B(0X77, ctx->r2) = ctx->r9;
    // 0x80013344: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80013348: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8001334C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80013350: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80013354: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80013358: nop

    // 0x8001335C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80013360: beql        $t3, $zero, L_800133B0
    if (ctx->r11 == 0) {
        // 0x80013364: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_800133B0;
    }
    goto skip_42;
    // 0x80013364: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_42:
    // 0x80013368: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001336C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80013370: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80013374: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80013378: nop

    // 0x8001337C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80013380: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80013384: nop

    // 0x80013388: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8001338C: bne         $t3, $zero, L_800133A4
    if (ctx->r11 != 0) {
        // 0x80013390: nop
    
            goto L_800133A4;
    }
    // 0x80013390: nop

    // 0x80013394: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80013398: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001339C: b           L_800133BC
    // 0x800133A0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_800133BC;
    // 0x800133A0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_800133A4:
    // 0x800133A4: b           L_800133BC
    // 0x800133A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_800133BC;
    // 0x800133A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800133AC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_800133B0:
    // 0x800133B0: nop

    // 0x800133B4: bltz        $t3, L_800133A4
    if (SIGNED(ctx->r11) < 0) {
        // 0x800133B8: nop
    
            goto L_800133A4;
    }
    // 0x800133B8: nop

L_800133BC:
    // 0x800133BC: sb          $t3, 0x78($v0)
    MEM_B(0X78, ctx->r2) = ctx->r11;
    // 0x800133C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800133C4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800133C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800133CC: jr          $ra
    // 0x800133D0: nop

    TRACE_RETURN()
    return;
    // 0x800133D0: nop

;}
RECOMP_FUNC void func_8003CB2C_3D72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CB2C: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003CB30: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003CB34: lw          $t7, 0x1728($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1728);
    // 0x8003CB38: lw          $t6, 0x172C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X172C);
    // 0x8003CB3C: sw          $t6, 0x6C($t7)
    MEM_W(0X6C, ctx->r15) = ctx->r14;
    // 0x8003CB40: jr          $ra
    // 0x8003CB44: nop

    TRACE_RETURN()
    return;
    // 0x8003CB44: nop

;}
RECOMP_FUNC void func_8000B640_C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000B644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B648: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B64C: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x8000B650: jal         0x800041E0
    // 0x8000B654: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    func_800041E0_4DE0(rdram, ctx);
        goto after_0;
    // 0x8000B654: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    after_0:
    // 0x8000B658: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000B65C: addiu       $a0, $a0, -0x39F8
    ctx->r4 = ADD32(ctx->r4, -0X39F8);
    // 0x8000B660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000B664: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8000B668: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8000B66C: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x8000B670: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000B674: addiu       $t9, $zero, 0x1D1
    ctx->r25 = ADD32(0, 0X1D1);
    // 0x8000B678: addiu       $t0, $zero, -0x2
    ctx->r8 = ADD32(0, -0X2);
    // 0x8000B67C: addiu       $t1, $zero, -0x28
    ctx->r9 = ADD32(0, -0X28);
    // 0x8000B680: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8000B684: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x8000B688: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
    // 0x8000B68C: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
    // 0x8000B690: sw          $v1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r3;
    // 0x8000B694: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x8000B698: sw          $t7, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r15;
    // 0x8000B69C: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x8000B6A0: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x8000B6A4: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    // 0x8000B6A8: sw          $v0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r2;
    // 0x8000B6AC: sb          $t8, 0x206($a0)
    MEM_B(0X206, ctx->r4) = ctx->r24;
    // 0x8000B6B0: sh          $t9, 0x204($a0)
    MEM_H(0X204, ctx->r4) = ctx->r25;
    // 0x8000B6B4: sh          $t0, 0x20A($a0)
    MEM_H(0X20A, ctx->r4) = ctx->r8;
    // 0x8000B6B8: sh          $t1, 0x20C($a0)
    MEM_H(0X20C, ctx->r4) = ctx->r9;
    // 0x8000B6BC: sh          $t2, 0x20E($a0)
    MEM_H(0X20E, ctx->r4) = ctx->r10;
    // 0x8000B6C0: sh          $zero, 0x210($a0)
    MEM_H(0X210, ctx->r4) = 0;
    // 0x8000B6C4: addiu       $a1, $a1, -0x36F0
    ctx->r5 = ADD32(ctx->r5, -0X36F0);
    // 0x8000B6C8: jal         0x80004208
    // 0x8000B6CC: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    func_80004208_4E08(rdram, ctx);
        goto after_1;
    // 0x8000B6CC: addiu       $a2, $zero, 0x304
    ctx->r6 = ADD32(0, 0X304);
    after_1:
    // 0x8000B6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000B6D8: jr          $ra
    // 0x8000B6DC: nop

    TRACE_RETURN()
    return;
    // 0x8000B6DC: nop

;}
RECOMP_FUNC void func_80037B10_38710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037B18: jal         0x80037B78
    // 0x80037B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80037B78_38778(rdram, ctx);
        goto after_0;
    // 0x80037B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80037B20: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80037B24: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80037B28: addiu       $t8, $t8, -0x2510
    ctx->r24 = ADD32(ctx->r24, -0X2510);
    // 0x80037B2C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80037B30: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80037B34: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80037B38: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80037B3C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80037B40: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80037B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037B4C: jr          $ra
    // 0x80037B50: nop

    TRACE_RETURN()
    return;
    // 0x80037B50: nop

;}
RECOMP_FUNC void func_80010E9C_11A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010E9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80010EA0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80010EA4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80010EA8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80010EAC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80010EB0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80010EB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80010EB8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80010EBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80010EC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80010EC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80010EC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80010ECC: lbu         $s2, 0x0($a3)
    ctx->r18 = MEM_BU(ctx->r7, 0X0);
    // 0x80010ED0: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80010ED4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80010ED8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80010EDC: addiu       $s3, $a2, 0x1
    ctx->r19 = ADD32(ctx->r6, 0X1);
    // 0x80010EE0: beq         $s2, $zero, L_800110D8
    if (ctx->r18 == 0) {
        // 0x80010EE4: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_800110D8;
    }
    // 0x80010EE4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x80010EE8: lui         $fp, 0x8006
    ctx->r30 = S32(0X8006 << 16);
    // 0x80010EEC: lui         $s7, 0x8006
    ctx->r23 = S32(0X8006 << 16);
    // 0x80010EF0: lui         $s5, 0x8006
    ctx->r21 = S32(0X8006 << 16);
    // 0x80010EF4: lui         $s4, 0x8006
    ctx->r20 = S32(0X8006 << 16);
    // 0x80010EF8: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80010EFC: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
    // 0x80010F00: addiu       $s4, $s4, 0x3920
    ctx->r20 = ADD32(ctx->r20, 0X3920);
    // 0x80010F04: addiu       $s5, $s5, 0x3928
    ctx->r21 = ADD32(ctx->r21, 0X3928);
    // 0x80010F08: addiu       $s7, $s7, 0x391C
    ctx->r23 = ADD32(ctx->r23, 0X391C);
    // 0x80010F0C: addiu       $fp, $fp, -0x44F0
    ctx->r30 = ADD32(ctx->r30, -0X44F0);
L_80010F10:
    // 0x80010F10: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80010F14: bne         $at, $zero, L_80010F30
    if (ctx->r1 != 0) {
        // 0x80010F18: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80010F30;
    }
    // 0x80010F18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80010F1C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80010F20: beql        $v1, $at, L_80010FDC
    if (ctx->r3 == ctx->r1) {
        // 0x80010F24: lw          $t8, 0x0($s7)
        ctx->r24 = MEM_W(ctx->r23, 0X0);
            goto L_80010FDC;
    }
    goto skip_0;
    // 0x80010F24: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    skip_0:
    // 0x80010F28: b           L_80010F58
    // 0x80010F2C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
        goto L_80010F58;
    // 0x80010F2C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80010F30:
    // 0x80010F30: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80010F34: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x80010F38: beq         $at, $zero, L_80010F54
    if (ctx->r1 == 0) {
        // 0x80010F3C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80010F54;
    }
    // 0x80010F3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80010F40: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80010F44: addu        $at, $at, $t6
    gpr jr_addend_80010F4C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80010F48: lw          $t6, -0x5010($at)
    ctx->r14 = ADD32(ctx->r1, -0X5010);
    // 0x80010F4C: jr          $t6
    // 0x80010F50: nop

    switch (jr_addend_80010F4C >> 2) {
        case 0: goto L_80011024; break;
        case 1: goto L_8001103C; break;
        case 2: goto L_8001105C; break;
        case 3: goto L_80011080; break;
        case 4: goto L_800110A4; break;
        default: switch_error(__func__, 0x80010F4C, 0x8007AFF0);
    }
    // 0x80010F50: nop

L_80010F54:
    // 0x80010F54: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80010F58:
    // 0x80010F58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80010F5C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80010F60: jal         0x80010C6C
    // 0x80010F64: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    func_80010C6C_1186C(rdram, ctx);
        goto after_0;
    // 0x80010F64: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    after_0:
    // 0x80010F68: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80010F6C: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80010F70: lbu         $t3, 0x0($fp)
    ctx->r11 = MEM_BU(ctx->r30, 0X0);
    // 0x80010F74: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x80010F78: lbu         $t1, -0x20($t9)
    ctx->r9 = MEM_BU(ctx->r25, -0X20);
    // 0x80010F7C: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80010F80: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
    // 0x80010F84: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80010F88: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80010F8C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80010F90: mflo        $t2
    ctx->r10 = lo;
    // 0x80010F94: nop

    // 0x80010F98: nop

    // 0x80010F9C: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x80010FA0: mflo        $t4
    ctx->r12 = lo;
    // 0x80010FA4: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x80010FA8: bne         $t3, $zero, L_80010FB4
    if (ctx->r11 != 0) {
        // 0x80010FAC: nop
    
            goto L_80010FB4;
    }
    // 0x80010FAC: nop

    // 0x80010FB0: break       7
    do_break(2147553200);
L_80010FB4:
    // 0x80010FB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80010FB8: bne         $t3, $at, L_80010FCC
    if (ctx->r11 != ctx->r1) {
        // 0x80010FBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80010FCC;
    }
    // 0x80010FBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80010FC0: bne         $t2, $at, L_80010FCC
    if (ctx->r10 != ctx->r1) {
        // 0x80010FC4: nop
    
            goto L_80010FCC;
    }
    // 0x80010FC4: nop

    // 0x80010FC8: break       6
    do_break(2147553224);
L_80010FCC:
    // 0x80010FCC: addu        $s1, $t5, $t6
    ctx->r17 = ADD32(ctx->r13, ctx->r14);
    // 0x80010FD0: b           L_800110CC
    // 0x80010FD4: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
        goto L_800110CC;
    // 0x80010FD4: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
    // 0x80010FD8: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
L_80010FDC:
    // 0x80010FDC: lbu         $t7, 0x0($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X0);
    // 0x80010FE0: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80010FE4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80010FE8: div         $zero, $t9, $t7
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r15)));
    // 0x80010FEC: mflo        $t1
    ctx->r9 = lo;
    // 0x80010FF0: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x80010FF4: bne         $t7, $zero, L_80011000
    if (ctx->r15 != 0) {
        // 0x80010FF8: nop
    
            goto L_80011000;
    }
    // 0x80010FF8: nop

    // 0x80010FFC: break       7
    do_break(2147553276);
L_80011000:
    // 0x80011000: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011004: bne         $t7, $at, L_80011018
    if (ctx->r15 != ctx->r1) {
        // 0x80011008: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80011018;
    }
    // 0x80011008: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001100C: bne         $t9, $at, L_80011018
    if (ctx->r25 != ctx->r1) {
        // 0x80011010: nop
    
            goto L_80011018;
    }
    // 0x80011010: nop

    // 0x80011014: break       6
    do_break(2147553300);
L_80011018:
    // 0x80011018: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x8001101C: b           L_800110CC
    // 0x80011020: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
        goto L_800110CC;
    // 0x80011020: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
L_80011024:
    // 0x80011024: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x80011028: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x8001102C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80011030: addu        $t5, $s3, $t4
    ctx->r13 = ADD32(ctx->r19, ctx->r12);
    // 0x80011034: b           L_800110C8
    // 0x80011038: addu        $s3, $t5, $t6
    ctx->r19 = ADD32(ctx->r13, ctx->r14);
        goto L_800110C8;
    // 0x80011038: addu        $s3, $t5, $t6
    ctx->r19 = ADD32(ctx->r13, ctx->r14);
L_8001103C:
    // 0x8001103C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80011040: jal         0x800109A4
    // 0x80011044: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    func_800109A4_115A4(rdram, ctx);
        goto after_1;
    // 0x80011044: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    after_1:
    // 0x80011048: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x8001104C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80011050: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80011054: b           L_800110C8
    // 0x80011058: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
        goto L_800110C8;
    // 0x80011058: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
L_8001105C:
    // 0x8001105C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x80011060: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80011064: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80011068: jal         0x80010980
    // 0x8001106C: lw          $a3, 0x0($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X0);
    func_80010980_11580(rdram, ctx);
        goto after_2;
    // 0x8001106C: lw          $a3, 0x0($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X0);
    after_2:
    // 0x80011070: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80011074: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80011078: b           L_800110C8
    // 0x8001107C: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
        goto L_800110C8;
    // 0x8001107C: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
L_80011080:
    // 0x80011080: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80011084: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80011088: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8001108C: jal         0x80010980
    // 0x80011090: lw          $a3, 0x0($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X0);
    func_80010980_11580(rdram, ctx);
        goto after_3;
    // 0x80011090: lw          $a3, 0x0($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X0);
    after_3:
    // 0x80011094: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80011098: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001109C: b           L_800110C8
    // 0x800110A0: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
        goto L_800110C8;
    // 0x800110A0: addiu       $t0, $t0, 0x3924
    ctx->r8 = ADD32(ctx->r8, 0X3924);
L_800110A4:
    // 0x800110A4: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800110A8: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x800110AC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800110B0: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x800110B4: bgez        $t7, L_800110C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800110B8: sra         $t1, $t7, 1
        ctx->r9 = S32(SIGNED(ctx->r15) >> 1);
            goto L_800110C4;
    }
    // 0x800110B8: sra         $t1, $t7, 1
    ctx->r9 = S32(SIGNED(ctx->r15) >> 1);
    // 0x800110BC: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x800110C0: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_800110C4:
    // 0x800110C4: addu        $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
L_800110C8:
    // 0x800110C8: lbu         $s2, 0x1($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X1);
L_800110CC:
    // 0x800110CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800110D0: bne         $s2, $zero, L_80010F10
    if (ctx->r18 != 0) {
        // 0x800110D4: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_80010F10;
    }
    // 0x800110D4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_800110D8:
    // 0x800110D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800110DC: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x800110E0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800110E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800110E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800110EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800110F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800110F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800110F8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800110FC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80011100: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80011104: jr          $ra
    // 0x80011108: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80011108: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80047850_48450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047850: jr          $ra
    // 0x80047854: nop

    TRACE_RETURN()
    return;
    // 0x80047854: nop

;}
RECOMP_FUNC void func_800148C0_154C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800148C0: beq         $a2, $zero, L_800148E0
    if (ctx->r6 == 0) {
        // 0x800148C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800148E0;
    }
    // 0x800148C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800148C8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_800148CC:
    // 0x800148CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800148D0: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x800148D4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800148D8: bne         $at, $zero, L_800148CC
    if (ctx->r1 != 0) {
        // 0x800148DC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800148CC;
    }
    // 0x800148DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800148E0:
    // 0x800148E0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x800148E4: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x800148E8: jr          $ra
    // 0x800148EC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x800148EC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8000D66C_E26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D66C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D674: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x8000D678: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8000D67C: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    // 0x8000D680: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8000D684: bnel        $t7, $zero, L_8000D69C
    if (ctx->r15 != 0) {
        // 0x8000D688: lw          $t0, 0x10($a1)
        ctx->r8 = MEM_W(ctx->r5, 0X10);
            goto L_8000D69C;
    }
    goto skip_0;
    // 0x8000D688: lw          $t0, 0x10($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X10);
    skip_0:
    // 0x8000D68C: jal         0x80038BC8
    // 0x8000D690: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x8000D690: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000D694: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000D698: lw          $t0, 0x10($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X10);
L_8000D69C:
    // 0x8000D69C: lw          $t1, 0x14($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X14);
    // 0x8000D6A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000D6A4: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x8000D6A8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8000D6AC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8000D6B0: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x8000D6B4: sh          $t8, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r24;
    // 0x8000D6B8: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    // 0x8000D6BC: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x8000D6C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D6C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D6C8: jr          $ra
    // 0x8000D6CC: nop

    TRACE_RETURN()
    return;
    // 0x8000D6CC: nop

;}
RECOMP_FUNC void func_8000F468_10068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000F46C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000F470: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F474: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000F478: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000F47C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8000F480: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000F484: or          $t6, $a2, $zero
    ctx->r14 = ctx->r6 | 0;
    // 0x8000F488: lw          $a1, 0x8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X8);
    // 0x8000F48C: lw          $a2, 0xC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XC);
    // 0x8000F490: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x8000F494: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x8000F498: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x8000F49C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8000F4A0: jal         0x8001CC38
    // 0x8000F4A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8001CC38_1D838(rdram, ctx);
        goto after_0;
    // 0x8000F4A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8000F4A8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000F4AC: nop

    // 0x8000F4B0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8000F4B4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000F4B8: bc1fl       L_8000F520
    if (!c1cs) {
        // 0x8000F4BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F520;
    }
    goto skip_0;
    // 0x8000F4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8000F4C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F4C4: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000F4C8: bc1tl       L_8000F520
    if (c1cs) {
        // 0x8000F4CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F520;
    }
    goto skip_1;
    // 0x8000F4CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8000F4D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000F4D4: nop

    // 0x8000F4D8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8000F4DC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000F4E0: bc1tl       L_8000F520
    if (c1cs) {
        // 0x8000F4E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F520;
    }
    goto skip_2;
    // 0x8000F4E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x8000F4E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F4EC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8000F4F0: bc1tl       L_8000F520
    if (c1cs) {
        // 0x8000F4F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F520;
    }
    goto skip_3;
    // 0x8000F4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8000F4F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000F4FC: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000F500: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F504: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8000F508: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8000F50C: bc1tl       L_8000F520
    if (c1cs) {
        // 0x8000F510: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000F520;
    }
    goto skip_4;
    // 0x8000F510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x8000F514: jal         0x8000F420
    // 0x8000F518: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_8000F420_10020(rdram, ctx);
        goto after_1;
    // 0x8000F518: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8000F51C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000F520:
    // 0x8000F520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000F524: jr          $ra
    // 0x8000F528: nop

    TRACE_RETURN()
    return;
    // 0x8000F528: nop

;}
RECOMP_FUNC void func_8003EACC_3F6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EAD4: jal         0x8003EA14
    // 0x8003EAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EA14_3F614(rdram, ctx);
        goto after_0;
    // 0x8003EAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EADC: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8003EAE0: andi        $t6, $v1, 0x800
    ctx->r14 = ctx->r3 & 0X800;
    // 0x8003EAE4: beq         $t6, $zero, L_8003EB00
    if (ctx->r14 == 0) {
        // 0x8003EAE8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8003EB00;
    }
    // 0x8003EAE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003EAEC: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8003EAF0: beql        $t7, $zero, L_8003EB24
    if (ctx->r15 == 0) {
        // 0x8003EAF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003EB24;
    }
    goto skip_0;
    // 0x8003EAF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8003EAF8: b           L_8003EB24
    // 0x8003EAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003EB24;
    // 0x8003EAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003EB00:
    // 0x8003EB00: andi        $t8, $v1, 0x400
    ctx->r24 = ctx->r3 & 0X400;
    // 0x8003EB04: beql        $t8, $zero, L_8003EB24
    if (ctx->r24 == 0) {
        // 0x8003EB08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003EB24;
    }
    goto skip_1;
    // 0x8003EB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8003EB0C: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x8003EB10: beql        $t9, $zero, L_8003EB24
    if (ctx->r25 == 0) {
        // 0x8003EB14: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003EB24;
    }
    goto skip_2;
    // 0x8003EB14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x8003EB18: b           L_8003EB24
    // 0x8003EB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003EB24;
    // 0x8003EB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003EB20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003EB24:
    // 0x8003EB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EB2C: jr          $ra
    // 0x8003EB30: nop

    TRACE_RETURN()
    return;
    // 0x8003EB30: nop

;}
RECOMP_FUNC void func_80010980_11580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80010980: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80010984: sw          $a0, 0x391C($at)
    MEM_W(0X391C, ctx->r1) = ctx->r4;
    // 0x80010988: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x8001098C: sw          $a1, 0x3920($at)
    MEM_W(0X3920, ctx->r1) = ctx->r5;
    // 0x80010990: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80010994: sw          $a2, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->r6;
    // 0x80010998: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x8001099C: jr          $ra
    // 0x800109A0: sw          $a3, 0x3928($at)
    MEM_W(0X3928, ctx->r1) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x800109A0: sw          $a3, 0x3928($at)
    MEM_W(0X3928, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_80035D00_36900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035D00: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80035D04: addiu       $t6, $t6, -0x7838
    ctx->r14 = ADD32(ctx->r14, -0X7838);
    // 0x80035D08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035D0C: lui         $t0, 0xB
    ctx->r8 = S32(0XB << 16);
    // 0x80035D10: lui         $a2, 0xB
    ctx->r6 = S32(0XB << 16);
    // 0x80035D14: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80035D18: sw          $t6, -0x252C($at)
    MEM_W(-0X252C, ctx->r1) = ctx->r14;
    // 0x80035D1C: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80035D20: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80035D24: ori         $t0, $t0, 0xBB4C
    ctx->r8 = ctx->r8 | 0XBB4C;
    // 0x80035D28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80035D2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035D30: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    // 0x80035D34: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
L_80035D38:
    // 0x80035D38: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035D3C: mflo        $t7
    ctx->r15 = lo;
    // 0x80035D40: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80035D44: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80035D48: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035D4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80035D50: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80035D54: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80035D58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80035D5C: mflo        $t1
    ctx->r9 = lo;
    // 0x80035D60: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80035D64: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80035D68: bne         $at, $zero, L_80035D38
    if (ctx->r1 != 0) {
        // 0x80035D6C: sw          $t9, 0x3B08($t3)
        MEM_W(0X3B08, ctx->r11) = ctx->r25;
            goto L_80035D38;
    }
    // 0x80035D6C: sw          $t9, 0x3B08($t3)
    MEM_W(0X3B08, ctx->r11) = ctx->r25;
    // 0x80035D70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035D74: sh          $zero, -0x251E($at)
    MEM_H(-0X251E, ctx->r1) = 0;
    // 0x80035D78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80035D7C: jr          $ra
    // 0x80035D80: sw          $zero, -0x7A88($at)
    MEM_W(-0X7A88, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80035D80: sw          $zero, -0x7A88($at)
    MEM_W(-0X7A88, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8001965C_1A25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001965C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80019660: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80019664: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019668: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001966C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x80019670: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x80019674: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x80019678: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8001967C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x80019680: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x80019684: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x80019688: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8001968C: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x80019690: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x80019694: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x80019698: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x8001969C: jr          $ra
    // 0x800196A0: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x800196A0: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80002718_3318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002718: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8000271C: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x80002720: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80002724: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x80002728: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8000272C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002734: addu        $a1, $v1, $a3
    ctx->r5 = ADD32(ctx->r3, ctx->r7);
    // 0x80002738: lbu         $a0, 0x2DD6($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2DD6);
    // 0x8000273C: sltiu       $at, $a0, 0x6
    ctx->r1 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x80002740: beq         $at, $zero, L_80002928
    if (ctx->r1 == 0) {
        // 0x80002744: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_80002928;
    }
    // 0x80002744: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80002748: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000274C: addu        $at, $at, $t6
    gpr jr_addend_80002754 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80002750: lw          $t6, -0x57A0($at)
    ctx->r14 = ADD32(ctx->r1, -0X57A0);
    // 0x80002754: jr          $t6
    // 0x80002758: nop

    switch (jr_addend_80002754 >> 2) {
        case 0: goto L_8000275C; break;
        case 1: goto L_800027D4; break;
        case 2: goto L_800027E8; break;
        case 3: goto L_80002840; break;
        case 4: goto L_80002850; break;
        case 5: goto L_80002860; break;
        default: switch_error(__func__, 0x80002754, 0x8007A860);
    }
    // 0x80002758: nop

L_8000275C:
    // 0x8000275C: jal         0x8000383C
    // 0x80002760: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80002760: nop

    after_0:
    // 0x80002764: jal         0x80004910
    // 0x80002768: nop

    func_80004910_5510(rdram, ctx);
        goto after_1;
    // 0x80002768: nop

    after_1:
    // 0x8000276C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80002770: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80002774: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x80002778: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8000277C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80002780: lbu         $t8, -0x522A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X522A);
    // 0x80002784: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002788: bne         $t8, $zero, L_800027C0
    if (ctx->r24 != 0) {
        // 0x8000278C: nop
    
            goto L_800027C0;
    }
    // 0x8000278C: nop

    // 0x80002790: jal         0x80001C00
    // 0x80002794: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    func_80001C00_2800(rdram, ctx);
        goto after_2;
    // 0x80002794: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    after_2:
    // 0x80002798: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8000279C: addiu       $a1, $a1, -0x2D60
    ctx->r5 = ADD32(ctx->r5, -0X2D60);
    // 0x800027A0: jal         0x80001C00
    // 0x800027A4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80001C00_2800(rdram, ctx);
        goto after_3;
    // 0x800027A4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_3:
    // 0x800027A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800027AC: beq         $v0, $zero, L_800027C0
    if (ctx->r2 == 0) {
        // 0x800027B0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_800027C0;
    }
L_800027B0:
    // 0x800027B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800027B4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800027B8: bne         $t9, $zero, L_800027B0
    if (ctx->r25 != 0) {
        // 0x800027BC: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_800027B0;
    }
    // 0x800027BC: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_800027C0:
    // 0x800027C0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800027C4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x800027C8: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x800027CC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800027D0: lbu         $a0, -0x522A($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X522A);
L_800027D4:
    // 0x800027D4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800027D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800027DC: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x800027E0: b           L_80002928
    // 0x800027E4: sb          $t0, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r8;
        goto L_80002928;
    // 0x800027E4: sb          $t0, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r8;
L_800027E8:
    // 0x800027E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800027EC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800027F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800027F4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800027F8: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x800027FC: sb          $t1, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r9;
    // 0x80002800: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x80002804: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80002808: sh          $zero, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = 0;
    // 0x8000280C: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x80002810: jal         0x8003488C
    // 0x80002814: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    func_8003488C_3548C(rdram, ctx);
        goto after_4;
    // 0x80002814: addiu       $a0, $a0, -0x2D60
    ctx->r4 = ADD32(ctx->r4, -0X2D60);
    after_4:
    // 0x80002818: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000281C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x80002820: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x80002824: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002828: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x8000282C: lbu         $t2, -0x522A($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X522A);
    // 0x80002830: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80002834: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80002838: b           L_80002928
    // 0x8000283C: sb          $t3, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r11;
        goto L_80002928;
    // 0x8000283C: sb          $t3, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r11;
L_80002840:
    // 0x80002840: jal         0x800038E4
    // 0x80002844: nop

    func_800038E4_44E4(rdram, ctx);
        goto after_5;
    // 0x80002844: nop

    after_5:
    // 0x80002848: b           L_8000292C
    // 0x8000284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000292C;
    // 0x8000284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002850:
    // 0x80002850: jal         0x8000394C
    // 0x80002854: nop

    func_8000394C_454C(rdram, ctx);
        goto after_6;
    // 0x80002854: nop

    after_6:
    // 0x80002858: b           L_8000292C
    // 0x8000285C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000292C;
    // 0x8000285C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002860:
    // 0x80002860: lbu         $t4, 0x301D($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X301D);
    // 0x80002864: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002868: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8000286C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80002870: sb          $t5, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r13;
    // 0x80002874: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80002878: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x8000287C: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x80002880: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x80002884: lbu         $t8, 0x301D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X301D);
    // 0x80002888: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8000288C: bnel        $t8, $zero, L_8000292C
    if (ctx->r24 != 0) {
        // 0x80002890: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000292C;
    }
    goto skip_0;
    // 0x80002890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002894: jal         0x8000383C
    // 0x80002898: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    func_8000383C_443C(rdram, ctx);
        goto after_7;
    // 0x80002898: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    after_7:
    // 0x8000289C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800028A0: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x800028A4: addiu       $v0, $a1, 0x7FFF
    ctx->r2 = ADD32(ctx->r5, 0X7FFF);
    // 0x800028A8: lbu         $v0, 0x2DD6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DD6);
    // 0x800028AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800028B0: addiu       $t9, $a1, 0x7FFF
    ctx->r25 = ADD32(ctx->r5, 0X7FFF);
    // 0x800028B4: bnel        $v0, $at, L_800028FC
    if (ctx->r2 != ctx->r1) {
        // 0x800028B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800028FC;
    }
    goto skip_1;
    // 0x800028B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x800028BC: lhu         $t9, 0x2E19($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X2E19);
    // 0x800028C0: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x800028C4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x800028C8: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x800028CC: beq         $t0, $zero, L_800028E8
    if (ctx->r8 == 0) {
        // 0x800028D0: nop
    
            goto L_800028E8;
    }
    // 0x800028D0: nop

    // 0x800028D4: jal         0x80003728
    // 0x800028D8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80003728_4328(rdram, ctx);
        goto after_8;
    // 0x800028D8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x800028DC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800028E0: b           L_800028F8
    // 0x800028E4: lbu         $v0, 0x7A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7A95);
        goto L_800028F8;
    // 0x800028E4: lbu         $v0, 0x7A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7A95);
L_800028E8:
    // 0x800028E8: jal         0x80003728
    // 0x800028EC: sb          $zero, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = 0;
    func_80003728_4328(rdram, ctx);
        goto after_9;
    // 0x800028EC: sb          $zero, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = 0;
    after_9:
    // 0x800028F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800028F4: lbu         $v0, 0x7A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7A95);
L_800028F8:
    // 0x800028F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_800028FC:
    // 0x800028FC: bnel        $v0, $at, L_80002918
    if (ctx->r2 != ctx->r1) {
        // 0x80002900: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80002918;
    }
    goto skip_2;
    // 0x80002900: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_2:
    // 0x80002904: jal         0x80003728
    // 0x80002908: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80003728_4328(rdram, ctx);
        goto after_10;
    // 0x80002908: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x8000290C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80002910: lbu         $v0, 0x7A95($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7A95);
    // 0x80002914: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_80002918:
    // 0x80002918: bnel        $v0, $at, L_8000292C
    if (ctx->r2 != ctx->r1) {
        // 0x8000291C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000292C;
    }
    goto skip_3;
    // 0x8000291C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80002920: jal         0x80003728
    // 0x80002924: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80003728_4328(rdram, ctx);
        goto after_11;
    // 0x80002924: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_11:
L_80002928:
    // 0x80002928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000292C:
    // 0x8000292C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002930: jr          $ra
    // 0x80002934: nop

    TRACE_RETURN()
    return;
    // 0x80002934: nop

;}
RECOMP_FUNC void func_8003E5EC_3F1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E5F4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E5F8: jal         0x8000C314
    // 0x8003E5FC: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C314_CF14(rdram, ctx);
        goto after_0;
    // 0x8003E5FC: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_0:
    // 0x8003E600: bne         $v0, $zero, L_8003E610
    if (ctx->r2 != 0) {
        // 0x8003E604: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8003E610;
    }
    // 0x8003E604: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003E608: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E60C: sw          $t6, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r14;
L_8003E610:
    // 0x8003E610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E618: jr          $ra
    // 0x8003E61C: nop

    TRACE_RETURN()
    return;
    // 0x8003E61C: nop

;}
RECOMP_FUNC void func_80024008_24C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80024008: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8002400C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80024010: addiu       $v0, $v0, -0x70A4
    ctx->r2 = ADD32(ctx->r2, -0X70A4);
    // 0x80024014: addiu       $v1, $v1, -0x7108
    ctx->r3 = ADD32(ctx->r3, -0X7108);
L_80024018:
    // 0x80024018: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8002401C: sb          $zero, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = 0;
    // 0x80024020: sb          $zero, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = 0;
    // 0x80024024: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x80024028: bne         $v1, $v0, L_80024018
    if (ctx->r3 != ctx->r2) {
        // 0x8002402C: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80024018;
    }
    // 0x8002402C: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x80024030: jr          $ra
    // 0x80024034: nop

    TRACE_RETURN()
    return;
    // 0x80024034: nop

;}
RECOMP_FUNC void func_8000C314_CF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C314: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C318: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C31C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C320: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C324: beql        $v0, $zero, L_8000C398
    if (ctx->r2 == 0) {
        // 0x8000C328: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000C398;
    }
    goto skip_0;
    // 0x8000C328: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8000C32C: lh          $a0, 0x30($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X30);
    // 0x8000C330: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C334: bnel        $a0, $at, L_8000C348
    if (ctx->r4 != ctx->r1) {
        // 0x8000C338: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000C348;
    }
    goto skip_1;
    // 0x8000C338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x8000C33C: jr          $ra
    // 0x8000C340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8000C340: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000C344: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8000C348:
    // 0x8000C348: bnel        $a0, $at, L_8000C35C
    if (ctx->r4 != ctx->r1) {
        // 0x8000C34C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000C35C;
    }
    goto skip_2;
    // 0x8000C34C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_2:
    // 0x8000C350: jr          $ra
    // 0x8000C354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8000C354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000C358: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8000C35C:
    // 0x8000C35C: bnel        $a0, $at, L_8000C370
    if (ctx->r4 != ctx->r1) {
        // 0x8000C360: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8000C370;
    }
    goto skip_3;
    // 0x8000C360: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_3:
    // 0x8000C364: jr          $ra
    // 0x8000C368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8000C368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000C36C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8000C370:
    // 0x8000C370: bnel        $a0, $at, L_8000C384
    if (ctx->r4 != ctx->r1) {
        // 0x8000C374: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8000C384;
    }
    goto skip_4;
    // 0x8000C374: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_4:
    // 0x8000C378: jr          $ra
    // 0x8000C37C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    TRACE_RETURN()
    return;
    // 0x8000C37C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8000C380: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_8000C384:
    // 0x8000C384: bnel        $a0, $at, L_8000C398
    if (ctx->r4 != ctx->r1) {
        // 0x8000C388: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000C398;
    }
    goto skip_5;
    // 0x8000C388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x8000C38C: jr          $ra
    // 0x8000C390: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    TRACE_RETURN()
    return;
    // 0x8000C390: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8000C394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000C398:
    // 0x8000C398: jr          $ra
    // 0x8000C39C: nop

    TRACE_RETURN()
    return;
    // 0x8000C39C: nop

;}
RECOMP_FUNC void func_80014A28_15628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014A28: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80014A2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80014A30: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80014A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80014A38: beq         $t0, $zero, L_80014A54
    if (ctx->r8 == 0) {
        // 0x80014A3C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80014A54;
    }
    // 0x80014A3C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80014A40: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
L_80014A44:
    // 0x80014A44: addiu       $a2, $t0, 0x10
    ctx->r6 = ADD32(ctx->r8, 0X10);
    // 0x80014A48: lw          $t0, 0x8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X8);
    // 0x80014A4C: bnel        $t0, $zero, L_80014A44
    if (ctx->r8 != 0) {
        // 0x80014A50: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_80014A44;
    }
    goto skip_0;
    // 0x80014A50: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    skip_0:
L_80014A54:
    // 0x80014A54: addiu       $t1, $a1, 0x4F
    ctx->r9 = ADD32(ctx->r5, 0X4F);
    // 0x80014A58: srl         $t6, $t1, 6
    ctx->r14 = S32(U32(ctx->r9) >> 6);
    // 0x80014A5C: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x80014A60: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x80014A64: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80014A68: sltu        $at, $t9, $t7
    ctx->r1 = ctx->r25 < ctx->r15 ? 1 : 0;
    // 0x80014A6C: bne         $at, $zero, L_80014A8C
    if (ctx->r1 != 0) {
        // 0x80014A70: or          $t1, $t7, $zero
        ctx->r9 = ctx->r15 | 0;
            goto L_80014A8C;
    }
    // 0x80014A70: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80014A74: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80014A78: subu        $a2, $a1, $t7
    ctx->r6 = SUB32(ctx->r5, ctx->r15);
    // 0x80014A7C: addiu       $t0, $a1, -0x10
    ctx->r8 = ADD32(ctx->r5, -0X10);
    // 0x80014A80: sw          $a2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r6;
    // 0x80014A84: b           L_80014AFC
    // 0x80014A88: sw          $t7, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r15;
        goto L_80014AFC;
    // 0x80014A88: sw          $t7, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r15;
L_80014A8C:
    // 0x80014A8C: bne         $a3, $zero, L_80014A9C
    if (ctx->r7 != 0) {
        // 0x80014A90: nop
    
            goto L_80014A9C;
    }
    // 0x80014A90: nop

    // 0x80014A94: jr          $ra
    // 0x80014A98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80014A98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014A9C:
    // 0x80014A9C: beq         $a3, $zero, L_80014AD4
    if (ctx->r7 == 0) {
        // 0x80014AA0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80014AD4;
    }
    // 0x80014AA0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_80014AA4:
    // 0x80014AA4: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x80014AA8: bne         $a3, $zero, L_80014AB8
    if (ctx->r7 != 0) {
        // 0x80014AAC: addiu       $a2, $a3, 0x10
        ctx->r6 = ADD32(ctx->r7, 0X10);
            goto L_80014AB8;
    }
    // 0x80014AAC: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    // 0x80014AB0: b           L_80014AB8
    // 0x80014AB4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_80014AB8;
    // 0x80014AB4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80014AB8:
    // 0x80014AB8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80014ABC: subu        $t4, $t3, $a2
    ctx->r12 = SUB32(ctx->r11, ctx->r6);
    // 0x80014AC0: sltu        $at, $t4, $t1
    ctx->r1 = ctx->r12 < ctx->r9 ? 1 : 0;
    // 0x80014AC4: beq         $at, $zero, L_80014AD4
    if (ctx->r1 == 0) {
        // 0x80014AC8: nop
    
            goto L_80014AD4;
    }
    // 0x80014AC8: nop

    // 0x80014ACC: bne         $a3, $zero, L_80014AA4
    if (ctx->r7 != 0) {
        // 0x80014AD0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80014AA4;
    }
    // 0x80014AD0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_80014AD4:
    // 0x80014AD4: bnel        $v1, $zero, L_80014AE8
    if (ctx->r3 != 0) {
        // 0x80014AD8: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80014AE8;
    }
    goto skip_1;
    // 0x80014AD8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x80014ADC: jr          $ra
    // 0x80014AE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80014AE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80014AE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80014AE8:
    // 0x80014AE8: addiu       $t0, $v0, -0x10
    ctx->r8 = ADD32(ctx->r2, -0X10);
    // 0x80014AEC: subu        $a2, $v0, $t1
    ctx->r6 = SUB32(ctx->r2, ctx->r9);
    // 0x80014AF0: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
    // 0x80014AF4: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x80014AF8: sw          $t0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r8;
L_80014AFC:
    // 0x80014AFC: bne         $a3, $zero, L_80014B18
    if (ctx->r7 != 0) {
        // 0x80014B00: sltu        $at, $a2, $t0
        ctx->r1 = ctx->r6 < ctx->r8 ? 1 : 0;
            goto L_80014B18;
    }
    // 0x80014B00: sltu        $at, $a2, $t0
    ctx->r1 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x80014B04: lw          $t5, 0x8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X8);
    // 0x80014B08: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x80014B0C: sw          $t5, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r13;
    // 0x80014B10: b           L_80014B28
    // 0x80014B14: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
        goto L_80014B28;
    // 0x80014B14: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
L_80014B18:
    // 0x80014B18: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x80014B1C: sw          $a3, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r7;
    // 0x80014B20: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
    // 0x80014B24: sw          $t0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r8;
L_80014B28:
    // 0x80014B28: beq         $at, $zero, L_80014B68
    if (ctx->r1 == 0) {
        // 0x80014B2C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80014B68;
    }
    // 0x80014B2C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80014B30: subu        $a0, $t0, $a2
    ctx->r4 = SUB32(ctx->r8, ctx->r6);
    // 0x80014B34: andi        $t7, $a0, 0x3
    ctx->r15 = ctx->r4 & 0X3;
    // 0x80014B38: beq         $t7, $zero, L_80014B50
    if (ctx->r15 == 0) {
        // 0x80014B3C: addu        $v1, $t7, $a2
        ctx->r3 = ADD32(ctx->r15, ctx->r6);
            goto L_80014B50;
    }
    // 0x80014B3C: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
L_80014B40:
    // 0x80014B40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80014B44: bne         $v1, $v0, L_80014B40
    if (ctx->r3 != ctx->r2) {
        // 0x80014B48: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_80014B40;
    }
    // 0x80014B48: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x80014B4C: beq         $v0, $t0, L_80014B68
    if (ctx->r2 == ctx->r8) {
        // 0x80014B50: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80014B68;
    }
L_80014B50:
    // 0x80014B50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80014B54: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x80014B58: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x80014B5C: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x80014B60: bne         $v0, $t0, L_80014B50
    if (ctx->r2 != ctx->r8) {
        // 0x80014B64: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_80014B50;
    }
    // 0x80014B64: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
L_80014B68:
    // 0x80014B68: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80014B6C: jr          $ra
    // 0x80014B70: nop

    TRACE_RETURN()
    return;
    // 0x80014B70: nop

;}
RECOMP_FUNC void func_8000C5A4_D1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C5A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C5A8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C5AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C5B0: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C5B4: beq         $v0, $zero, L_8000C5DC
    if (ctx->r2 == 0) {
        // 0x8000C5B8: nop
    
            goto L_8000C5DC;
    }
    // 0x8000C5B8: nop

    // 0x8000C5BC: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C5C0: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C5C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C5C8: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000C5CC: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8000C5D0: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8000C5D4: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C5D8: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
L_8000C5DC:
    // 0x8000C5DC: jr          $ra
    // 0x8000C5E0: nop

    TRACE_RETURN()
    return;
    // 0x8000C5E0: nop

;}
RECOMP_FUNC void func_800126E0_132E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800126E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800126E4: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x800126E8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800126EC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x800126F0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800126F4: swc1        $f12, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f12.u32l;
    // 0x800126F8: swc1        $f14, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f14.u32l;
    // 0x800126FC: bc1fl       L_80012720
    if (!c1cs) {
        // 0x80012700: lwc1        $f10, 0x54($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
            goto L_80012720;
    }
    goto skip_0;
    // 0x80012700: lwc1        $f10, 0x54($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
    skip_0:
    // 0x80012704: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80012708: lwc1        $f6, 0x54($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8001270C: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80012710: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80012714: b           L_80012728
    // 0x80012718: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012728;
    // 0x80012718: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8001271C: lwc1        $f10, 0x54($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X54);
L_80012720:
    // 0x80012720: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80012724: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80012728:
    // 0x80012728: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001272C: lwc1        $f2, 0x5C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80012730: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80012734: div.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80012738: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8001273C: nop

    // 0x80012740: bc1f        L_80012754
    if (!c1cs) {
        // 0x80012744: swc1        $f18, 0x58($v0)
        MEM_W(0X58, ctx->r2) = ctx->f18.u32l;
            goto L_80012754;
    }
    // 0x80012744: swc1        $f18, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f18.u32l;
    // 0x80012748: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8001274C: b           L_80012758
    // 0x80012750: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80012758;
    // 0x80012750: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80012754:
    // 0x80012754: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80012758:
    // 0x80012758: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8001275C: jr          $ra
    // 0x80012760: swc1        $f4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80012760: swc1        $f4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80038938_39538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003893C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038944: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80038948: lbu         $v0, 0x9C8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9C8);
    // 0x8003894C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80038950: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x80038954: beq         $v0, $zero, L_80038984
    if (ctx->r2 == 0) {
        // 0x80038958: nop
    
            goto L_80038984;
    }
    // 0x80038958: nop

    // 0x8003895C: bnel        $v0, $at, L_80038978
    if (ctx->r2 != ctx->r1) {
        // 0x80038960: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80038978;
    }
    goto skip_0;
    // 0x80038960: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x80038964: jal         0x80038A20
    // 0x80038968: nop

    func_80038A20_39620(rdram, ctx);
        goto after_0;
    // 0x80038968: nop

    after_0:
    // 0x8003896C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80038970: lbu         $v0, 0x9C8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9C8);
    // 0x80038974: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
L_80038978:
    // 0x80038978: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003897C: b           L_80038A0C
    // 0x80038980: sb          $t6, 0x9C8($at)
    MEM_B(0X9C8, ctx->r1) = ctx->r14;
        goto L_80038A0C;
    // 0x80038980: sb          $t6, 0x9C8($at)
    MEM_B(0X9C8, ctx->r1) = ctx->r14;
L_80038984:
    // 0x80038984: lhu         $t7, 0xA24($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XA24);
    // 0x80038988: beq         $t7, $zero, L_80038998
    if (ctx->r15 == 0) {
        // 0x8003898C: nop
    
            goto L_80038998;
    }
    // 0x8003898C: nop

    // 0x80038990: jal         0x800396DC
    // 0x80038994: nop

    func_800396DC_3A2DC(rdram, ctx);
        goto after_1;
    // 0x80038994: nop

    after_1:
L_80038998:
    // 0x80038998: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8003899C: lhu         $t8, 0x2974($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2974);
    // 0x800389A0: beq         $t8, $zero, L_800389B0
    if (ctx->r24 == 0) {
        // 0x800389A4: nop
    
            goto L_800389B0;
    }
    // 0x800389A4: nop

    // 0x800389A8: jal         0x80038E20
    // 0x800389AC: nop

    func_80038E20_39A20(rdram, ctx);
        goto after_2;
    // 0x800389AC: nop

    after_2:
L_800389B0:
    // 0x800389B0: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x800389B4: lbu         $t9, 0x9C9($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9C9);
    // 0x800389B8: bne         $t9, $zero, L_800389C8
    if (ctx->r25 != 0) {
        // 0x800389BC: nop
    
            goto L_800389C8;
    }
    // 0x800389BC: nop

    // 0x800389C0: jal         0x80038F68
    // 0x800389C4: nop

    func_80038F68_39B68(rdram, ctx);
        goto after_3;
    // 0x800389C4: nop

    after_3:
L_800389C8:
    // 0x800389C8: jal         0x8003A370
    // 0x800389CC: nop

    func_8003A370_3AF70(rdram, ctx);
        goto after_4;
    // 0x800389CC: nop

    after_4:
    // 0x800389D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800389D4: addiu       $v0, $v0, 0x9CA
    ctx->r2 = ADD32(ctx->r2, 0X9CA);
    // 0x800389D8: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800389DC: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x800389E0: addiu       $v1, $v1, 0x2971
    ctx->r3 = ADD32(ctx->r3, 0X2971);
    // 0x800389E4: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x800389E8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800389EC: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x800389F0: beq         $t2, $zero, L_80038A0C
    if (ctx->r10 == 0) {
        // 0x800389F4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80038A0C;
    }
    // 0x800389F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800389F8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800389FC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80038A00: lbu         $a1, 0x2970($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2970);
    // 0x80038A04: jal         0x8003996C
    // 0x80038A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8003996C_3A56C(rdram, ctx);
        goto after_5;
    // 0x80038A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80038A0C:
    // 0x80038A0C: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x80038A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038A18: jr          $ra
    // 0x80038A1C: nop

    TRACE_RETURN()
    return;
    // 0x80038A1C: nop

;}
RECOMP_FUNC void func_8000F730_10330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000F730: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8000F734: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000F738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F73C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000F740: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000F744: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000F748: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000F74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F750: bc1f        L_8000F75C
    if (!c1cs) {
        // 0x8000F754: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8000F75C;
    }
    // 0x8000F754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000F758: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000F75C:
    // 0x8000F75C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000F760: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8000F764: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000F768: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8000F76C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F770: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8000F774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000F778: bc1fl       L_8000F78C
    if (!c1cs) {
        // 0x8000F77C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8000F78C;
    }
    goto skip_0;
    // 0x8000F77C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x8000F780: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000F784: nop

    // 0x8000F788: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8000F78C:
    // 0x8000F78C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8000F790: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8000F794: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000F798: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x8000F79C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000F7A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000F7A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000F7A8: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8000F7AC: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8000F7B0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000F7B4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000F7B8: nop

    // 0x8000F7BC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000F7C0: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000F7C4: nop

    // 0x8000F7C8: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000F7CC: beql        $a2, $zero, L_8000F81C
    if (ctx->r6 == 0) {
        // 0x8000F7D0: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_8000F81C;
    }
    goto skip_1;
    // 0x8000F7D0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x8000F7D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000F7D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000F7DC: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8000F7E0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000F7E4: nop

    // 0x8000F7E8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000F7EC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000F7F0: nop

    // 0x8000F7F4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000F7F8: bne         $a2, $zero, L_8000F810
    if (ctx->r6 != 0) {
        // 0x8000F7FC: nop
    
            goto L_8000F810;
    }
    // 0x8000F7FC: nop

    // 0x8000F800: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8000F804: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F808: b           L_8000F828
    // 0x8000F80C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8000F828;
    // 0x8000F80C: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_8000F810:
    // 0x8000F810: b           L_8000F828
    // 0x8000F814: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8000F828;
    // 0x8000F814: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8000F818: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_8000F81C:
    // 0x8000F81C: nop

    // 0x8000F820: bltz        $a2, L_8000F810
    if (SIGNED(ctx->r6) < 0) {
        // 0x8000F824: nop
    
            goto L_8000F810;
    }
    // 0x8000F824: nop

L_8000F828:
    // 0x8000F828: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8000F82C: slti        $at, $t8, 0x30
    ctx->r1 = SIGNED(ctx->r24) < 0X30 ? 1 : 0;
    // 0x8000F830: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000F834: bne         $at, $zero, L_8000F914
    if (ctx->r1 != 0) {
        // 0x8000F838: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_8000F914;
    }
    // 0x8000F838: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8000F83C: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000F840: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000F844: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000F848: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000F84C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000F850: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000F854: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000F858: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000F85C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000F860: mul.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000F864: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8000F868: nop

    // 0x8000F86C: bc1fl       L_8000F87C
    if (!c1cs) {
        // 0x8000F870: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_8000F87C;
    }
    goto skip_2;
    // 0x8000F870: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_2:
    // 0x8000F874: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x8000F878: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_8000F87C:
    // 0x8000F87C: nop

    // 0x8000F880: bc1fl       L_8000F890
    if (!c1cs) {
        // 0x8000F884: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_8000F890;
    }
    goto skip_3;
    // 0x8000F884: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_3:
    // 0x8000F888: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8000F88C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_8000F890:
    // 0x8000F890: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000F894: nop

    // 0x8000F898: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8000F89C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000F8A0: nop

    // 0x8000F8A4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000F8A8: beql        $a1, $zero, L_8000F8F8
    if (ctx->r5 == 0) {
        // 0x8000F8AC: mfc1        $a1, $f18
        ctx->r5 = (int32_t)ctx->f18.u32l;
            goto L_8000F8F8;
    }
    goto skip_4;
    // 0x8000F8AC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x8000F8B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000F8B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000F8B8: sub.s       $f18, $f2, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x8000F8BC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000F8C0: nop

    // 0x8000F8C4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000F8C8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000F8CC: nop

    // 0x8000F8D0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000F8D4: bne         $a1, $zero, L_8000F8EC
    if (ctx->r5 != 0) {
        // 0x8000F8D8: nop
    
            goto L_8000F8EC;
    }
    // 0x8000F8D8: nop

    // 0x8000F8DC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8000F8E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F8E4: b           L_8000F904
    // 0x8000F8E8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8000F904;
    // 0x8000F8E8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8000F8EC:
    // 0x8000F8EC: b           L_8000F904
    // 0x8000F8F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8000F904;
    // 0x8000F8F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8000F8F4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
L_8000F8F8:
    // 0x8000F8F8: nop

    // 0x8000F8FC: bltz        $a1, L_8000F8EC
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000F900: nop
    
            goto L_8000F8EC;
    }
    // 0x8000F900: nop

L_8000F904:
    // 0x8000F904: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000F908: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x8000F90C: jal         0x80038C30
    // 0x8000F910: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x8000F910: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
L_8000F914:
    // 0x8000F914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F91C: jr          $ra
    // 0x8000F920: nop

    TRACE_RETURN()
    return;
    // 0x8000F920: nop

;}
RECOMP_FUNC void func_800354C0_360C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800354C4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800354C8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800354CC: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800354D0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800354D4: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x800354D8: lhu         $t7, 0x66($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X66);
    // 0x800354DC: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x800354E0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800354E4: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800354E8: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800354EC: lhu         $t9, 0x7A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X7A);
    // 0x800354F0: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x800354F4: lhu         $t1, 0x82($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X82);
    // 0x800354F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800354FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80035500: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035504: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80035508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8003550C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80035510: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80035514: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    // 0x80035518: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8003551C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80035520: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80035524: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80035528: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8003552C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80035530: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80035534: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80035538: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8003553C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80035540: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80035544: jal         0x8003555C
    // 0x80035548: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_8003555C_3615C(rdram, ctx);
        goto after_0;
    // 0x80035548: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_0:
    // 0x8003554C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80035550: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80035554: jr          $ra
    // 0x80035558: nop

    TRACE_RETURN()
    return;
    // 0x80035558: nop

;}
RECOMP_FUNC void func_80004058_4C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80004058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000405C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80004064: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x80004068: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
    // 0x8000406C: jal         0x80003F30
    // 0x80004070: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x80004070: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80004074: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80004078: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8000407C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80004080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004084: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x80004088: nop

    // 0x8000408C: bc1fl       L_800040A0
    if (!c1cs) {
        // 0x80004090: div.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
            goto L_800040A0;
    }
    goto skip_0;
    // 0x80004090: div.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    skip_0:
    // 0x80004094: b           L_800040A0
    // 0x80004098: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_800040A0;
    // 0x80004098: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8000409C: div.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
L_800040A0:
    // 0x800040A0: jr          $ra
    // 0x800040A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800040A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800060D4_6CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800060D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800060D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800060DC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800060E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800060E4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800060E8: lhu         $t3, 0x3A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X3A);
    // 0x800060EC: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x800060F0: lhu         $t5, 0x42($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X42);
    // 0x800060F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800060F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800060FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80006100: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80006104: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80006108: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8000610C: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x80006110: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80006114: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80006118: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8000611C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80006120: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80006124: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80006128: jal         0x8000607C
    // 0x8000612C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_8000607C_6C7C(rdram, ctx);
        goto after_0;
    // 0x8000612C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_0:
    // 0x80006130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80006134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006138: jr          $ra
    // 0x8000613C: nop

    TRACE_RETURN()
    return;
    // 0x8000613C: nop

;}
RECOMP_FUNC void func_800353B4_35FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353B4: jr          $ra
    // 0x800353B8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800353B8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8003C108_3CD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C10C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C110: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    // 0x8003C114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C118: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C11C: lbu         $v1, 0x94($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X94);
    // 0x8003C120: beq         $v1, $zero, L_8003C130
    if (ctx->r3 == 0) {
        // 0x8003C124: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8003C130;
    }
    // 0x8003C124: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8003C128: b           L_8003C174
    // 0x8003C12C: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
        goto L_8003C174;
    // 0x8003C12C: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
L_8003C130:
    // 0x8003C130: lbu         $v1, 0x9F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9F);
    // 0x8003C134: beq         $v1, $zero, L_8003C16C
    if (ctx->r3 == 0) {
        // 0x8003C138: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_8003C16C;
    }
    // 0x8003C138: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8003C13C: sb          $t7, 0x9F($v0)
    MEM_B(0X9F, ctx->r2) = ctx->r15;
    // 0x8003C140: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003C144: lbu         $t8, 0x9F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9F);
    // 0x8003C148: beql        $t8, $zero, L_8003C168
    if (ctx->r24 == 0) {
        // 0x8003C14C: lhu         $t2, 0x9A($v0)
        ctx->r10 = MEM_HU(ctx->r2, 0X9A);
            goto L_8003C168;
    }
    goto skip_0;
    // 0x8003C14C: lhu         $t2, 0x9A($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9A);
    skip_0:
    // 0x8003C150: lhu         $t9, 0x9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9C);
    // 0x8003C154: lhu         $t0, 0xA0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA0);
    // 0x8003C158: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8003C15C: b           L_8003C16C
    // 0x8003C160: sh          $t1, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r9;
        goto L_8003C16C;
    // 0x8003C160: sh          $t1, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r9;
    // 0x8003C164: lhu         $t2, 0x9A($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9A);
L_8003C168:
    // 0x8003C168: sh          $t2, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r10;
L_8003C16C:
    // 0x8003C16C: jal         0x8003C184
    // 0x8003C170: nop

    func_8003C184_3CD84(rdram, ctx);
        goto after_0;
    // 0x8003C170: nop

    after_0:
L_8003C174:
    // 0x8003C174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C17C: jr          $ra
    // 0x8003C180: nop

    TRACE_RETURN()
    return;
    // 0x8003C180: nop

;}
RECOMP_FUNC void func_8000E100_ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E104: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8000E108: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000E10C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000E110: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000E114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E118: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E11C: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x8000E120: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8000E124: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    // 0x8000E128: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8000E12C: bgez        $t6, L_8000E144
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8000E130: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8000E144;
    }
    // 0x8000E130: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000E134: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000E138: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000E13C: nop

    // 0x8000E140: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8000E144:
    // 0x8000E144: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x8000E148: jal         0x80014218
    // 0x8000E14C: sh          $a3, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x8000E14C: sh          $a3, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r7;
    after_0:
    // 0x8000E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E158: jr          $ra
    // 0x8000E15C: nop

    TRACE_RETURN()
    return;
    // 0x8000E15C: nop

;}
RECOMP_FUNC void func_80003E10_4A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003E10: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x80003E14: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80003E18: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80003E1C: slti        $at, $t0, 0x200
    ctx->r1 = SIGNED(ctx->r8) < 0X200 ? 1 : 0;
    // 0x80003E20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80003E24: beq         $at, $zero, L_80003E40
    if (ctx->r1 == 0) {
        // 0x80003E28: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80003E40;
    }
    // 0x80003E28: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80003E2C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80003E30: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003E34: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80003E38: jr          $ra
    // 0x80003E3C: lwc1        $f0, -0x76B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X76B0);
    TRACE_RETURN()
    return;
    // 0x80003E3C: lwc1        $f0, -0x76B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X76B0);
L_80003E40:
    // 0x80003E40: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80003E44: beq         $at, $zero, L_80003E60
    if (ctx->r1 == 0) {
        // 0x80003E48: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_80003E60;
    }
    // 0x80003E48: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80003E4C: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x80003E50: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003E54: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80003E58: jr          $ra
    // 0x80003E5C: lwc1        $f0, -0x66B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66B0);
    TRACE_RETURN()
    return;
    // 0x80003E5C: lwc1        $f0, -0x66B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X66B0);
L_80003E60:
    // 0x80003E60: slti        $at, $v0, 0x600
    ctx->r1 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80003E64: beq         $at, $zero, L_80003E84
    if (ctx->r1 == 0) {
        // 0x80003E68: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_80003E84;
    }
    // 0x80003E68: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80003E6C: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80003E70: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003E74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80003E78: lwc1        $f0, 0x7950($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7950);
    // 0x80003E7C: jr          $ra
    // 0x80003E80: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    TRACE_RETURN()
    return;
    // 0x80003E80: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80003E84:
    // 0x80003E84: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x80003E88: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x80003E8C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80003E90: lwc1        $f0, -0x56B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X56B0);
    // 0x80003E94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80003E98: jr          $ra
    // 0x80003E9C: nop

    TRACE_RETURN()
    return;
    // 0x80003E9C: nop

;}
RECOMP_FUNC void func_8001AABC_1B6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001AABC: or          $t7, $a0, $zero
    ctx->r15 = ctx->r4 | 0;
    // 0x8001AAC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001AAC4: andi        $t8, $t7, 0xBFFF
    ctx->r24 = ctx->r15 & 0XBFFF;
    // 0x8001AAC8: ori         $at, $zero, 0xA001
    ctx->r1 = 0 | 0XA001;
    // 0x8001AACC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001AAD0: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8001AAD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001AAD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001AADC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001AAE0: bne         $at, $zero, L_8001AB00
    if (ctx->r1 != 0) {
        // 0x8001AAE4: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8001AB00;
    }
    // 0x8001AAE4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8001AAE8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001AAEC: ori         $at, $at, 0x5000
    ctx->r1 = ctx->r1 | 0X5000;
    // 0x8001AAF0: addu        $v0, $t8, $at
    ctx->r2 = ADD32(ctx->r24, ctx->r1);
    // 0x8001AAF4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8001AAF8: b           L_8001AC14
    // 0x8001AAFC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
        goto L_8001AC14;
    // 0x8001AAFC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_8001AB00:
    // 0x8001AB00: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
    // 0x8001AB04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001AB08: beq         $t1, $zero, L_8001AB28
    if (ctx->r9 == 0) {
        // 0x8001AB0C: lui         $at, 0x8017
        ctx->r1 = S32(0X8017 << 16);
            goto L_8001AB28;
    }
    // 0x8001AB0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AB10: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8001AB14: andi        $t2, $a0, 0x7FFF
    ctx->r10 = ctx->r4 & 0X7FFF;
    // 0x8001AB18: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001AB1C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8001AB20: b           L_8001AB48
    // 0x8001AB24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8001AB48;
    // 0x8001AB24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8001AB28:
    // 0x8001AB28: lwc1        $f0, -0x7AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7AF0);
    // 0x8001AB2C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001AB30: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x8001AB34: nop

    // 0x8001AB38: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8001AB3C: nop

    // 0x8001AB40: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001AB44: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_8001AB48:
    // 0x8001AB48: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8001AB4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8001AB50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001AB54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AB58: bc1fl       L_8001AB78
    if (!c1cs) {
        // 0x8001AB5C: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_8001AB78;
    }
    goto skip_0;
    // 0x8001AB5C: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x8001AB60: jal         0x8001B2C8
    // 0x8001AB64: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_0;
    // 0x8001AB64: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x8001AB68: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8001AB6C: b           L_8001AC14
    // 0x8001AB70: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
        goto L_8001AC14;
    // 0x8001AB70: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8001AB74: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_8001AB78:
    // 0x8001AB78: lwc1        $f4, -0x7AE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7AE8);
    // 0x8001AB7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001AB80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001AB84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001AB88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001AB8C: addiu       $a2, $sp, 0x2E
    ctx->r6 = ADD32(ctx->r29, 0X2E);
    // 0x8001AB90: addiu       $a3, $s0, 0x1
    ctx->r7 = ADD32(ctx->r16, 0X1);
    // 0x8001AB94: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001AB98: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x8001AB9C: nop

    // 0x8001ABA0: bc1f        L_8001ABD0
    if (!c1cs) {
        // 0x8001ABA4: nop
    
            goto L_8001ABD0;
    }
    // 0x8001ABA4: nop

    // 0x8001ABA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001ABAC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8001ABB0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8001ABB4: jal         0x8001B2C8
    // 0x8001ABB8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_1;
    // 0x8001ABB8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8001ABBC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8001ABC0: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8001ABC4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8001ABC8: b           L_8001ABE4
    // 0x8001ABCC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
        goto L_8001ABE4;
    // 0x8001ABCC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
L_8001ABD0:
    // 0x8001ABD0: jal         0x8001B2C8
    // 0x8001ABD4: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_8001B2C8_1BEC8(rdram, ctx);
        goto after_2;
    // 0x8001ABD4: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8001ABD8: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001ABDC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8001ABE0: lh          $v1, 0x2E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2E);
L_8001ABE4:
    // 0x8001ABE4: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x8001ABE8: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x8001ABEC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8001ABF0: nop

    // 0x8001ABF4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001ABF8: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001ABFC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8001AC00: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8001AC04: nop

    // 0x8001AC08: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x8001AC0C: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8001AC10: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_8001AC14:
    // 0x8001AC14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001AC18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001AC1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001AC20: jr          $ra
    // 0x8001AC24: nop

    TRACE_RETURN()
    return;
    // 0x8001AC24: nop

;}
RECOMP_FUNC void func_8003F6BC_402BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F6C4: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003F6C8: lw          $a2, 0x7740($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7740);
    // 0x8003F6CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F6D0: jal         0x80037C20
    // 0x8003F6D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_0;
    // 0x8003F6D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8003F6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F6E0: jr          $ra
    // 0x8003F6E4: nop

    TRACE_RETURN()
    return;
    // 0x8003F6E4: nop

;}
RECOMP_FUNC void func_80037090_37C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037098: jal         0x80003728
    // 0x8003709C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x8003709C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x800370A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800370A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800370A8: jr          $ra
    // 0x800370AC: nop

    TRACE_RETURN()
    return;
    // 0x800370AC: nop

;}
RECOMP_FUNC void func_80037C20_38820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037C20: beq         $a1, $zero, L_80037C74
    if (ctx->r5 == 0) {
        // 0x80037C24: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80037C74;
    }
    // 0x80037C24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80037C28: beq         $a1, $v1, L_80037C4C
    if (ctx->r5 == ctx->r3) {
        // 0x80037C2C: sll         $t6, $a0, 5
        ctx->r14 = S32(ctx->r4 << 5);
            goto L_80037C4C;
    }
    // 0x80037C2C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x80037C30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80037C34: beq         $a1, $at, L_80037C74
    if (ctx->r5 == ctx->r1) {
        // 0x80037C38: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80037C74;
    }
    // 0x80037C38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80037C3C: beql        $a1, $at, L_80037C78
    if (ctx->r5 == ctx->r1) {
        // 0x80037C40: sll         $t0, $a0, 5
        ctx->r8 = S32(ctx->r4 << 5);
            goto L_80037C78;
    }
    goto skip_0;
    // 0x80037C40: sll         $t0, $a0, 5
    ctx->r8 = S32(ctx->r4 << 5);
    skip_0:
    // 0x80037C44: jr          $ra
    // 0x80037C48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80037C48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80037C4C:
    // 0x80037C4C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80037C50: addiu       $t7, $t7, -0x2510
    ctx->r15 = ADD32(ctx->r15, -0X2510);
    // 0x80037C54: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80037C58: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80037C5C: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x80037C60: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80037C64: sw          $a2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r6;
    // 0x80037C68: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x80037C6C: b           L_80037C90
    // 0x80037C70: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
        goto L_80037C90;
    // 0x80037C70: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
L_80037C74:
    // 0x80037C74: sll         $t0, $a0, 5
    ctx->r8 = S32(ctx->r4 << 5);
L_80037C78:
    // 0x80037C78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80037C7C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80037C80: b           L_80037C90
    // 0x80037C84: sw          $a1, -0x2508($at)
    MEM_W(-0X2508, ctx->r1) = ctx->r5;
        goto L_80037C90;
    // 0x80037C84: sw          $a1, -0x2508($at)
    MEM_W(-0X2508, ctx->r1) = ctx->r5;
    // 0x80037C88: jr          $ra
    // 0x80037C8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    TRACE_RETURN()
    return;
    // 0x80037C8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80037C90:
    // 0x80037C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80037C94: jr          $ra
    // 0x80037C98: nop

    TRACE_RETURN()
    return;
    // 0x80037C98: nop

;}
RECOMP_FUNC void func_8003F660_40260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F660: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F664: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    // 0x8003F668: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8003F66C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F670: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8003F674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F678: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8003F67C: jal         0x80038B98
    // 0x8003F680: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x8003F680: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8003F684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F68C: jr          $ra
    // 0x8003F690: nop

    TRACE_RETURN()
    return;
    // 0x8003F690: nop

;}
RECOMP_FUNC void func_8003C0AC_3CCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C0AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C0B0: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003C0B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C0B8: lbu         $t6, 0x93($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X93);
    // 0x8003C0BC: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
    // 0x8003C0C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C0C4: lbu         $t7, 0x9E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9E);
    // 0x8003C0C8: sb          $t7, 0x9F($v0)
    MEM_B(0X9F, ctx->r2) = ctx->r15;
    // 0x8003C0CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C0D0: lbu         $t8, 0x9E($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9E);
    // 0x8003C0D4: bnel        $t8, $zero, L_8003C0EC
    if (ctx->r24 != 0) {
        // 0x8003C0D8: sh          $zero, 0x9C($v0)
        MEM_H(0X9C, ctx->r2) = 0;
            goto L_8003C0EC;
    }
    goto skip_0;
    // 0x8003C0D8: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
    skip_0:
    // 0x8003C0DC: lhu         $t9, 0x9A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9A);
    // 0x8003C0E0: b           L_8003C0EC
    // 0x8003C0E4: sh          $t9, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r25;
        goto L_8003C0EC;
    // 0x8003C0E4: sh          $t9, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r25;
    // 0x8003C0E8: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
L_8003C0EC:
    // 0x8003C0EC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8003C0F0: sh          $zero, 0x96($t0)
    MEM_H(0X96, ctx->r8) = 0;
    // 0x8003C0F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C0F8: lhu         $t1, 0x96($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X96);
    // 0x8003C0FC: sb          $t1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r9;
    // 0x8003C100: jr          $ra
    // 0x8003C104: nop

    TRACE_RETURN()
    return;
    // 0x8003C104: nop

;}
RECOMP_FUNC void func_8003A228_3AE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A228: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003A22C: lbu         $t6, 0x9DC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9DC);
    // 0x8003A230: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003A234: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A238: beq         $t6, $zero, L_8003A244
    if (ctx->r14 == 0) {
        // 0x8003A23C: nop
    
            goto L_8003A244;
    }
    // 0x8003A23C: nop

    // 0x8003A240: sb          $t7, 0x9DB($at)
    MEM_B(0X9DB, ctx->r1) = ctx->r15;
L_8003A244:
    // 0x8003A244: jr          $ra
    // 0x8003A248: nop

    TRACE_RETURN()
    return;
    // 0x8003A248: nop

;}
RECOMP_FUNC void func_8003E620_3F220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E628: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E62C: jal         0x8000C314
    // 0x8003E630: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    func_8000C314_CF14(rdram, ctx);
        goto after_0;
    // 0x8003E630: lw          $a0, 0x7754($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7754);
    after_0:
    // 0x8003E634: bne         $v0, $zero, L_8003E644
    if (ctx->r2 != 0) {
        // 0x8003E638: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8003E644;
    }
    // 0x8003E638: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003E63C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E640: sw          $t6, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r14;
L_8003E644:
    // 0x8003E644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E64C: jr          $ra
    // 0x8003E650: nop

    TRACE_RETURN()
    return;
    // 0x8003E650: nop

;}
