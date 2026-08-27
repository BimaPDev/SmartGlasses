/* FUN_2c4506de @ 0x2c4506de */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4506de(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_r1;
  uint extraout_r2;
  undefined4 extraout_r2_00;
  int *extraout_r3;
  int extraout_r3_00;
  uint unaff_r4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_r5;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r6;
  undefined4 *puVar11;
  undefined4 unaff_r7;
  uint uVar12;
  undefined4 *unaff_r10;
  undefined4 unaff_lr;
  char in_OV;
  char cVar13;
  bool bVar14;
  char cVar15;
  undefined4 *puVar16;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined4 uVar17;
  undefined4 extraout_s1;
  undefined8 in_d29;
  undefined8 uVar18;
  
  uVar18 = CONCAT44(param_2,param_1);
  while( true ) {
    uVar3 = (uint)uVar18;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int **)((int)register0x00000054 + -0x10) = param_4;
    *(uint *)((int)register0x00000054 + -0x14) = param_3;
    *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar18;
    uVar12 = (int)unaff_r4 >> 0x17;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
    *(int *)((int)register0x00000054 + -0x24) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0x28) = unaff_r4;
    *(int **)((int)register0x00000054 + -0x2c) = param_4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
    *(undefined8 *)register0x00000054 = uVar18;
    if (in_OV != '\0') break;
    unaff_r6 = unaff_r6 + 0xe;
    unaff_r4 = (uint)*(ushort *)(unaff_r5 + 0x28);
    *(short *)(unaff_r5 + 0x22) = (short)(uVar3 ^ param_3);
    unaff_lr = 0x2c4506dd;
    uVar18 = func_0x2c5486c8(uVar3 ^ param_3,(int)((ulonglong)uVar18 >> 0x20),0x2c4506dc);
    in_OV = '\0';
    unaff_r7 = 200;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (uVar12 != 0 && (int)uVar12 < 0 == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = unaff_r4 + 0x69;
  do {
    *(short *)(uVar12 + iVar5) = (short)iVar5;
    iVar5 = param_3 - iVar5;
    piVar4 = param_4 + -1;
    iVar7 = uVar12 << 7;
    while( true ) {
      *(int *)((int)register0x00000054 + 0xb8) = iVar7;
      piVar9 = (int *)(uVar12 >> 0xd);
      *param_4 = iVar5;
      iVar5 = *(int *)((int)register0x00000054 + 0x3a0);
      cVar15 = SBORROW4(iVar5,0x9e);
      cVar13 = iVar5 + -0x9e < 0;
      bVar14 = iVar5 == 0x9e;
      uVar17 = func_0x2c96ca32(uVar3,piVar4);
      iVar2 = *piVar9;
      param_3 = piVar9[1];
      puVar11 = (undefined4 *)piVar9[4];
      iVar5 = piVar9[5];
      if (!bVar14 && cVar13 == cVar15) break;
      puVar8 = (undefined4 *)(iVar2 + -0xf5);
      *(int *)((int)register0x00000054 + -4) = piVar9[3];
      *(uint *)((int)register0x00000054 + -8) = param_3;
      puVar16 = (undefined4 *)((int)register0x00000054 + -0xc);
      *puVar16 = extraout_r1;
      iVar6 = -(int)puVar8 + 0xd1a3;
      uVar3 = (uint)bRam000000d7;
      *(int *)((int)register0x00000054 + 0xbc) = extraout_r3_00;
      if (0xffffff5c < -(int)puVar8 + 0xd100U && iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)((int)register0x00000054 + 0x120) = uVar3;
      if (iVar6 < 0) {
        *(undefined4 **)(iVar6 + extraout_r3_00) = puVar11;
        iVar5 = _DAT_2c451318;
        uVar3 = (uint)*(byte *)(uVar3 + 0x12);
        *(int *)((int)register0x00000054 + 0x1e0) = iVar6;
        *(uint *)(_DAT_2c451318 + *(short *)(((int)puVar8 >> 0x10) + 0xd6U + _DAT_2c451318)) = uVar3
        ;
        if ((uint)((int)puVar8 >> 0x10) < 0xffffff2a) {
          *(short *)(uVar3 + iVar6) = (short)extraout_r3_00;
          func_0x2cdaa7de();
          *(undefined4 *)((int)register0x00000054 + 0x1a4) = extraout_r2_00;
          iVar5 = iVar6 * 0x80 >> 0x15;
          if ((iVar6 * 0x80 >> 0x14 & 1U) == 0 || iVar5 == 0) {
            *(short *)(iVar5 + iVar6) = (short)extraout_r2_00;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar7 = *(int *)((int)register0x00000054 + 0x1cc);
        *(undefined4 **)((int)register0x00000054 + 0x1b4) = puVar8;
        *(char *)((int)register0x00000054 + iVar5 + 0x168) = (char)iVar5;
        *(int *)(extraout_r3_00 + 0x7c) = (int)puVar8 >> 7;
        uVar17 = _LAB_2c4513f0;
        if (iVar7 * 2 != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0xae;
          *(int *)((int)register0x00000054 + -0x14) = iVar7 * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)(int)*(char *)((int)register0x00000054 + 0x216);
        uVar10 = *unaff_r10;
        *puVar11 = 0xae;
        puVar11[1] = uVar17;
        puVar11[2] = uVar10;
        puVar11[3] = puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x98);
      coprocessor_loadlong(5,in_cr14,puVar16);
      piVar4 = (int *)*puVar8;
      iVar5 = *(int *)(iVar2 + -0xf1);
      param_4 = *(int **)(iVar2 + -0xed);
      iVar7 = *(int *)(iVar2 + -0xe9);
      uVar12 = *(uint *)(iVar2 + -0xdd);
      uVar3 = iVar2 - 0xd9;
      if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined4 **)((int)register0x00000054 + 0x370) = puVar11;
    *(short *)(iVar5 + 0x2c) = (short)param_3;
    bVar1 = *(byte *)(param_3 + 0x17);
    puVar8 = *(undefined4 **)(extraout_r3_00 + 0x23);
    coprocessor_moveto(8,7,5,iVar5,in_cr3,in_cr0);
    *puVar8 = extraout_r1;
    puVar8[1] = param_3;
    puVar8[2] = (uint *)(extraout_r3_00 + -0x11);
    puVar8[3] = (uint)bVar1;
    puVar8[4] = iVar5;
    *(byte *)((int)puVar11 + iVar5) = bVar1;
    *puVar11 = 0;
    uVar3 = *(uint *)(extraout_r3_00 + -0x11);
    iVar5 = *(int *)(extraout_r3_00 + -0xd);
    uVar10 = *(undefined4 *)(extraout_r3_00 + -9);
    uVar12 = iVar5 + param_3;
    puVar11[1] = uVar3;
    puVar11[2] = uVar10;
    puVar11[3] = uVar12;
    *(char *)(uVar3 + 0x1f) = (char)puVar11 + '\x10';
    param_4 = (int *)0xa1;
    FloatCompareGT(CONCAT44(extraout_s1,uVar17),in_d29,2);
  } while( true );
}

