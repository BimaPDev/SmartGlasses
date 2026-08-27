/* FUN_2c450600 @ 0x2c450600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c450d44) overlaps instruction at (ram,0x2c450d42)
    */
/* WARNING: Removing unreachable block (ram,0x2c450df0) */
/* WARNING: Removing unreachable block (ram,0x2c450784) */
/* WARNING: Removing unreachable block (ram,0x2c450868) */
/* WARNING: Removing unreachable block (ram,0x2c450878) */
/* WARNING: Removing unreachable block (ram,0x2c450892) */
/* WARNING: Removing unreachable block (ram,0x2c4508a8) */
/* WARNING: Removing unreachable block (ram,0x2c4508c6) */
/* WARNING: Removing unreachable block (ram,0x2c45090a) */
/* WARNING: Removing unreachable block (ram,0x2c4508cc) */
/* WARNING: Removing unreachable block (ram,0x2c4508d2) */
/* WARNING: Removing unreachable block (ram,0x2c450da8) */
/* WARNING: Removing unreachable block (ram,0x2c450748) */
/* WARNING: Removing unreachable block (ram,0x2c4507ce) */
/* WARNING: Removing unreachable block (ram,0x2c450758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c450600(uint param_1,int param_2,int param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int extraout_r1;
  undefined4 uVar11;
  undefined4 extraout_r1_00;
  int extraout_r2;
  undefined4 extraout_r2_00;
  int iVar12;
  uint uVar13;
  int extraout_r3;
  int unaff_r4;
  uint *puVar14;
  int *unaff_r5;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int unaff_r7;
  int *piVar20;
  uint uVar21;
  undefined4 *unaff_r10;
  undefined2 *in_r12;
  undefined1 *puVar22;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined2 *puVar26;
  undefined4 *puVar27;
  longlong lVar28;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined4 extraout_s1;
  undefined8 in_d29;
  undefined4 in_stack_0000019c;
  int in_stack_00000348;
  uint *in_stack_0000038c;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  code *pcStack_8;
  
  puVar14 = &uStack_14;
  uStack_14 = param_1;
  iStack_10 = param_2;
  iStack_c = param_3;
  pcStack_8 = UNRECOVERED_JUMPTABLE;
  if (in_OV == '\0') {
                    /* WARNING: Could not recover jumptable at 0x2c450584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR != false) {
    *(short *)(param_2 + 2) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar24 = SCARRY4(param_1,0xbe);
  iVar9 = param_1 + 0xbe;
  iVar18 = 0x2c450894;
  *(int *)((int)unaff_r5 + iVar9) = unaff_r7;
  *(char *)(param_3 + 0x18) = (char)unaff_r4;
  uVar21 = uRam2c4508e4;
  if (iVar9 == 0) {
    piVar20 = (int *)(uint)*(ushort *)((param_1 - (int)unaff_r5) + 0x26);
    *(short *)(UNRECOVERED_JUMPTABLE + 0x18) = (short)param_3;
    *(short *)(UNRECOVERED_JUMPTABLE + 4) = (short)UNRECOVERED_JUMPTABLE;
    iVar12 = unaff_r4 << 0x1b;
    puVar1 = (undefined2 *)0x370;
    puVar2 = (undefined2 *)0x380;
    puVar3 = (undefined2 *)0x390;
    puVar4 = (undefined2 *)0x3a0;
    lVar28 = 4;
    iVar9 = 0;
    while( true ) {
      *puVar1 = *in_r12;
      puVar26 = in_r12 + 1;
      *puVar2 = *puVar26;
      puVar26 = puVar26 + 1;
      *puVar3 = *puVar26;
      puVar26 = puVar26 + 1;
      *puVar4 = *puVar26;
      in_r12 = puVar26 + 1;
      lVar28 = lVar28 + -1;
      if (lVar28 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(short *)(iVar9 + iVar18) = (short)iVar9;
    *(int **)((int)puVar14 + -4) = unaff_r5;
    *(int *)((int)puVar14 + -8) = iVar12;
    *(int *)((int)puVar14 + -0xc) = iVar9;
    *piVar20 = iVar9;
    piVar20[1] = iVar12;
    piVar20[2] = unaff_r4;
    piVar20[3] = unaff_r7;
    *(ushort *)((int)piVar20 + 0x26) = ~(ushort)iVar18;
    *(char *)(unaff_r4 + 4) = (char)unaff_r7;
    *(short *)((int)unaff_r5 + 0x12) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((int)unaff_r5 + (int)UNRECOVERED_JUMPTABLE) = param_3;
  *(short *)(unaff_r5 + 8) = (short)uVar21;
  *(short *)((byte)UNRECOVERED_JUMPTABLE[iVar9] + 0x34) = (short)iVar9;
  if (param_1 < 0xffffff42) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-0xbf < (int)param_1) {
    *(ushort *)(UNRECOVERED_JUMPTABLE + 0x30) = (ushort)(uVar21 >> 0x1e);
    *(int **)(param_1 + 0x74) = unaff_r5;
    *(undefined4 **)(param_1 + 0x78) = unaff_r10;
    *(short *)(((uint)UNRECOVERED_JUMPTABLE >> 0x18) + 0x1c) = (short)unaff_r5;
    uVar8 = *in_stack_0000038c;
    uVar17 = in_stack_0000038c[5];
    puVar14 = (uint *)(uint)*(ushort *)(in_stack_0000038c[3] + 0x2a);
    iVar18 = (int)in_stack_0000038c[3] >> 0xc;
    uVar13 = uVar17 >> 10;
    iVar9 = (int)in_stack_0000038c[2] >> 7;
    if ((iVar9 < 0 != SBORROW4(uVar21 >> 0x1e,0xd3)) && (iVar9 = 0x2c450f98, iVar18 == 0x9e)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(uVar8,0x2c450f98,0);
    }
    *(int *)(uVar17 + iVar18) = iVar9;
    *(uint *)(uVar13 + (int)puVar14) = uVar8 >> 0x12;
    *puVar14 = uVar8;
    puVar14[1] = uVar13;
    puVar14[2] = (uint)puVar14;
    puVar14[3] = (int)puVar14 << 0x19;
    uVar7 = *(undefined2 *)(uVar17 * 0x4000 + -0xb4);
    *(uint **)(uVar13 + 0x20) = puVar14;
    *(undefined2 *)(in_stack_00000348 + 0xe) = uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x2d2948ec();
  if (cVar24 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xb6,0x2c43da9e);
    (*pcVar5)();
  }
  bVar23 = puVar14 == (uint *)0xfffffd6a;
  puVar22 = &stack0x00000088;
  piVar20 = *(int **)(uVar21 + 0xc);
  *unaff_r5 = extraout_r2;
  unaff_r5[1] = (int)&stack0x00000038;
  if (extraout_r1 != 0) {
    iVar9 = piVar20[2];
    *(short *)(piVar20[3] + *piVar20) = (short)(unaff_r5 + 2);
    *(char *)(iVar9 + 0xe) = (char)(unaff_r5 + 2);
    puVar10 = (undefined4 *)(int)*(char *)(extraout_r1 + extraout_r2);
    while( true ) {
      uVar11 = *puVar10;
      iVar9 = puVar10[1];
      piVar20 = (int *)puVar10[2];
      iVar18 = puVar10[3];
      uVar21 = puVar10[6];
      puVar10 = puVar10 + 7;
      if (!bVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      while( true ) {
        *(int *)(puVar22 + 0xb8) = iVar18;
        piVar15 = (int *)(uVar21 >> 0xd);
        *piVar20 = iVar9;
        iVar9 = *(int *)(puVar22 + 0x3a0);
        cVar25 = SBORROW4(iVar9,0x9e);
        cVar24 = iVar9 + -0x9e < 0;
        bVar23 = iVar9 == 0x9e;
        uVar11 = func_0x2c96ca32(puVar10,uVar11);
        iVar9 = piVar15[1];
        puVar19 = (undefined4 *)piVar15[4];
        iVar18 = piVar15[5];
        if (bVar23 || cVar24 != cVar25) break;
        *(undefined4 **)(puVar22 + 0x370) = puVar19;
        *(short *)(iVar18 + 0x2c) = (short)iVar9;
        bVar6 = *(byte *)(iVar9 + 0x17);
        puVar10 = *(undefined4 **)(extraout_r3 + 0x23);
        coprocessor_moveto(8,7,5,iVar18,in_cr3,in_cr0);
        *puVar10 = extraout_r1_00;
        puVar10[1] = iVar9;
        puVar10[2] = (int *)(extraout_r3 + -0x11);
        puVar10[3] = (uint)bVar6;
        puVar10[4] = iVar18;
        *(byte *)((int)puVar19 + iVar18) = bVar6;
        *puVar19 = 0;
        puVar10 = *(undefined4 **)(extraout_r3 + -0x11);
        iVar18 = *(int *)(extraout_r3 + -0xd);
        uVar16 = *(undefined4 *)(extraout_r3 + -9);
        uVar21 = iVar18 + iVar9;
        puVar19[1] = puVar10;
        puVar19[2] = uVar16;
        puVar19[3] = uVar21;
        *(char *)((int)puVar10 + 0x1f) = (char)puVar19 + '\x10';
        piVar20 = (int *)0xa1;
        FloatCompareGT(CONCAT44(extraout_s1,uVar11),in_d29,2);
        *(short *)(uVar21 + iVar18) = (short)iVar18;
        iVar9 = iVar9 - iVar18;
        uVar11 = 0x9d;
        iVar18 = uVar21 * 0x80;
      }
      puVar10 = (undefined4 *)(*piVar15 + -0xf5);
      *(int *)(puVar22 + -4) = piVar15[3];
      *(int *)(puVar22 + -8) = iVar9;
      puVar27 = (undefined4 *)(puVar22 + -0xc);
      *puVar27 = extraout_r1_00;
      iVar9 = -(int)puVar10 + 0xd1a3;
      bVar23 = iVar9 == 0;
      uVar21 = (uint)bRam000000d7;
      *(int *)(puVar22 + 0xbc) = extraout_r3;
      if (0xffffff5c < -(int)puVar10 + 0xd100U && !bVar23) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)(puVar22 + 0x120) = uVar21;
      if (iVar9 < 0) break;
      puVar22 = puVar22 + -0x98;
      coprocessor_loadlong(5,in_cr14,puVar27);
    }
    *(undefined4 **)(iVar9 + extraout_r3) = puVar19;
    iVar18 = _DAT_2c451318;
    uVar21 = (uint)*(byte *)(uVar21 + 0x12);
    *(int *)(puVar22 + 0x1e0) = iVar9;
    *(uint *)(_DAT_2c451318 + *(short *)(((int)puVar10 >> 0x10) + 0xd6U + _DAT_2c451318)) = uVar21;
    if ((uint)((int)puVar10 >> 0x10) < 0xffffff2a) {
      *(short *)(uVar21 + iVar9) = (short)extraout_r3;
      func_0x2cdaa7de();
      *(undefined4 *)(puVar22 + 0x1a4) = extraout_r2_00;
      iVar18 = iVar9 * 0x80 >> 0x15;
      if ((iVar9 * 0x80 >> 0x14 & 1U) == 0 || iVar18 == 0) {
        *(short *)(iVar18 + iVar9) = (short)extraout_r2_00;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar9 = *(int *)(puVar22 + 0x1cc);
    *(undefined4 **)(puVar22 + 0x1b4) = puVar10;
    puVar22[iVar18 + 0x168] = (char)iVar18;
    *(int *)(extraout_r3 + 0x7c) = (int)puVar10 >> 7;
    uVar11 = _LAB_2c4513f0;
    if (iVar9 * 2 == 0) {
      puVar10 = (undefined4 *)(int)(char)puVar22[0x216];
      uVar16 = *unaff_r10;
      *puVar10 = 0xae;
      puVar10[1] = uVar11;
      puVar10[2] = uVar16;
      puVar10[3] = puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(puVar22 + -0x10) = 0xae;
    *(int *)(puVar22 + -0x14) = iVar9 * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

