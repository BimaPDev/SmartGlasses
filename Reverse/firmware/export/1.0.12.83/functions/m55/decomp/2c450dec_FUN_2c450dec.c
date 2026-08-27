/* FUN_2c450dec @ 0x2c450dec */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c450dec(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int extraout_r3;
  int iVar4;
  int iVar5;
  int *unaff_r5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_r6;
  undefined4 *puVar8;
  int unaff_r7;
  int *piVar9;
  uint uVar10;
  undefined4 *unaff_r10;
  undefined1 *puVar11;
  char cVar12;
  bool bVar13;
  char cVar14;
  undefined4 *puVar15;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 extraout_s1;
  undefined8 in_d29;
  
  bVar13 = param_1 == unaff_r7;
  coprocessor_function2(0,0xf,4,in_cr0,in_cr12,in_cr8);
  puVar11 = &stack0x00000090;
  piVar9 = *(int **)(unaff_r6 + 0xc);
  *unaff_r5 = param_3;
  unaff_r5[1] = (int)&stack0x00000040;
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = piVar9[2];
  *(short *)(piVar9[3] + *piVar9) = (short)(unaff_r5 + 2);
  *(char *)(iVar4 + 0xe) = (char)(unaff_r5 + 2);
  puVar2 = (undefined4 *)(int)*(char *)(param_2 + param_3);
  while( true ) {
    uVar3 = *puVar2;
    iVar4 = puVar2[1];
    piVar9 = (int *)puVar2[2];
    iVar5 = puVar2[3];
    uVar10 = puVar2[6];
    puVar2 = puVar2 + 7;
    if (!bVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      *(int *)(puVar11 + 0xb8) = iVar5;
      piVar6 = (int *)(uVar10 >> 0xd);
      *piVar9 = iVar4;
      iVar4 = *(int *)(puVar11 + 0x3a0);
      cVar14 = SBORROW4(iVar4,0x9e);
      cVar12 = iVar4 + -0x9e < 0;
      bVar13 = iVar4 == 0x9e;
      uVar3 = func_0x2c96ca32(puVar2,uVar3);
      iVar4 = piVar6[1];
      puVar8 = (undefined4 *)piVar6[4];
      iVar5 = piVar6[5];
      if (bVar13 || cVar12 != cVar14) break;
      *(undefined4 **)(puVar11 + 0x370) = puVar8;
      *(short *)(iVar5 + 0x2c) = (short)iVar4;
      bVar1 = *(byte *)(iVar4 + 0x17);
      puVar2 = *(undefined4 **)(extraout_r3 + 0x23);
      coprocessor_moveto(8,7,5,iVar5,in_cr3,in_cr0);
      *puVar2 = extraout_r1;
      puVar2[1] = iVar4;
      puVar2[2] = (int *)(extraout_r3 + -0x11);
      puVar2[3] = (uint)bVar1;
      puVar2[4] = iVar5;
      *(byte *)((int)puVar8 + iVar5) = bVar1;
      *puVar8 = 0;
      puVar2 = *(undefined4 **)(extraout_r3 + -0x11);
      iVar5 = *(int *)(extraout_r3 + -0xd);
      uVar7 = *(undefined4 *)(extraout_r3 + -9);
      uVar10 = iVar5 + iVar4;
      puVar8[1] = puVar2;
      puVar8[2] = uVar7;
      puVar8[3] = uVar10;
      *(char *)((int)puVar2 + 0x1f) = (char)puVar8 + '\x10';
      piVar9 = (int *)0xa1;
      FloatCompareGT(CONCAT44(extraout_s1,uVar3),in_d29,2);
      *(short *)(uVar10 + iVar5) = (short)iVar5;
      iVar4 = iVar4 - iVar5;
      uVar3 = 0x9d;
      iVar5 = uVar10 * 0x80;
    }
    puVar2 = (undefined4 *)(*piVar6 + -0xf5);
    *(int *)(puVar11 + -4) = piVar6[3];
    *(int *)(puVar11 + -8) = iVar4;
    puVar15 = (undefined4 *)(puVar11 + -0xc);
    *puVar15 = extraout_r1;
    iVar4 = -(int)puVar2 + 0xd1a3;
    bVar13 = iVar4 == 0;
    uVar10 = (uint)bRam000000d7;
    *(int *)(puVar11 + 0xbc) = extraout_r3;
    if (0xffffff5c < -(int)puVar2 + 0xd100U && !bVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(puVar11 + 0x120) = uVar10;
    if (iVar4 < 0) break;
    puVar11 = puVar11 + -0x98;
    coprocessor_loadlong(5,in_cr14,puVar15);
  }
  *(undefined4 **)(iVar4 + extraout_r3) = puVar8;
  iVar5 = _DAT_2c451318;
  uVar10 = (uint)*(byte *)(uVar10 + 0x12);
  *(int *)(puVar11 + 0x1e0) = iVar4;
  *(uint *)(_DAT_2c451318 + *(short *)(((int)puVar2 >> 0x10) + 0xd6U + _DAT_2c451318)) = uVar10;
  if ((uint)((int)puVar2 >> 0x10) < 0xffffff2a) {
    *(short *)(uVar10 + iVar4) = (short)extraout_r3;
    func_0x2cdaa7de();
    *(undefined4 *)(puVar11 + 0x1a4) = extraout_r2;
    iVar5 = iVar4 * 0x80 >> 0x15;
    if ((iVar4 * 0x80 >> 0x14 & 1U) == 0 || iVar5 == 0) {
      *(short *)(iVar5 + iVar4) = (short)extraout_r2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *(int *)(puVar11 + 0x1cc);
  *(undefined4 **)(puVar11 + 0x1b4) = puVar2;
  puVar11[iVar5 + 0x168] = (char)iVar5;
  *(int *)(extraout_r3 + 0x7c) = (int)puVar2 >> 7;
  uVar3 = _LAB_2c4513f0;
  if (iVar4 * 2 != 0) {
    *(undefined4 *)(puVar11 + -0x10) = 0xae;
    *(int *)(puVar11 + -0x14) = iVar4 * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined4 *)(int)(char)puVar11[0x216];
  uVar7 = *unaff_r10;
  *puVar2 = 0xae;
  puVar2[1] = uVar3;
  puVar2[2] = uVar7;
  puVar2[3] = puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

