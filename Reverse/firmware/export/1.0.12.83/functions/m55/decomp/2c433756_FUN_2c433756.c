/* FUN_2c433756 @ 0x2c433756 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c433756(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined8 *extraout_r2;
  undefined8 *puVar9;
  int extraout_r3;
  int *piVar10;
  uint unaff_r4;
  int *piVar11;
  int *piVar12;
  int *unaff_r5;
  undefined4 *puVar13;
  uint unaff_r6;
  uint *puVar14;
  uint uVar15;
  int unaff_r7;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined4 unaff_lr;
  bool bVar20;
  undefined8 uVar21;
  
  iVar16 = _LAB_2c433a7c;
  while( true ) {
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0xc) = param_4;
    *(undefined4 *)((int)register0x00000054 + -0x10) = param_2;
    param_2 = *param_3;
    piVar11 = (int *)0x2c433940;
    if (SCARRY4(unaff_r4,unaff_r6)) break;
    unaff_r4 = 0x2c433933;
    param_3 = puRam2c433927;
    param_4 = uRam2c43392b;
    unaff_r5 = _LAB_2c433a10;
    unaff_r7 = iRam2c43392f;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
  }
  bVar3 = *(byte *)(param_1 + *(char *)(unaff_r7 + param_1));
  *unaff_r5 = param_1;
  unaff_r5[1] = (int)(param_3 + 1);
  unaff_r5[2] = (uint)bVar3;
  unaff_r5[3] = (int)unaff_r5;
  unaff_r5[4] = iVar16;
  piVar10 = piRam2c433890;
  iVar5 = *unaff_r5;
  iVar6 = unaff_r5[1];
  puVar13 = (undefined4 *)unaff_r5[2];
  puVar14 = (uint *)unaff_r5[3];
  iVar16 = unaff_r5[4];
  iVar8 = *(int *)((int)register0x00000054 + 0x168);
  *piRam2c433890 = iVar6;
  piVar10[1] = iVar8;
  piVar10[2] = (int)piVar10;
  piVar10[3] = (int)puVar14;
  if (!CARRY4(unaff_r4,unaff_r6) || unaff_r4 + unaff_r6 == 0) {
    *piVar10 = iVar5;
    piVar10[1] = iVar6;
    piVar10[2] = (int)piVar10;
    piVar10[3] = (int)puVar13;
    piVar10[4] = (int)puVar14;
    uVar18 = _LAB_2c4338d0;
    uVar15 = *(uint *)((int)register0x00000054 + 0x1e8);
    uRam00000588 = 0x588;
    uVar4 = (uint)MemManage;
    *(char *)(uVar15 + (int)puVar14) = (char)puVar13;
    if (_LAB_2c433920 != 0x24) {
      func_0x2cd8d56c(uVar4 & (uint)puVar13,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar14 = uVar4 & (uint)puVar13;
    puVar14[1] = 0;
    puVar14[2] = (uint)piVar10;
    puVar14[3] = uVar18;
    puVar14[4] = 0xd5;
    puVar14[5] = uVar15;
    uRam0000001b = 0;
    *(undefined2 *)((int)puVar14 + *(int *)((int)register0x00000054 + -0x14) + 0x18) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar20 = SCARRY4((int)((int)register0x00000054 + 0x3ac),0xe4);
  puVar17 = (undefined4 *)((int)register0x00000054 + 0x490);
  piVar7 = (int *)((int)register0x00000054 + 0x140);
  puVar1 = (undefined4 *)((int)register0x00000054 + 0x88);
  while( true ) {
    uVar21 = CONCAT44(piVar7,puVar1);
    if (-1 < (int)puVar17) {
      bVar20 = SBORROW4(iVar8,0xb6);
      iVar16 = *(int *)((int)register0x00000054 + -8);
      uVar18 = *(uint *)((int)register0x00000054 + -4);
      puVar19 = (undefined8 *)((ulonglong)_LAB_2c4339b4 >> 0x20);
      *(undefined4 *)(uVar18 + 0x20) = *(undefined4 *)((int)register0x00000054 + -0xc);
      puVar9 = puVar19 + 0x62;
      if (iVar8 < 0xb6) {
        while (iVar5 = (int)uVar21, bVar20) {
          *piVar11 = iVar5;
          piVar11[1] = (int)((ulonglong)uVar21 >> 0x20) + iVar5;
          piVar11[2] = (int)piVar11;
          piVar11[3] = iVar16;
          piVar11[4] = (int)puVar14;
          uVar18 = (uint)*(byte *)(uVar18 + 4);
          uVar21 = func_0x2be18aa8(iVar5,(int)puVar9 + 2,(int)puVar9 + 0x53);
          bVar20 = SCARRY4(extraout_r3,uVar18);
          puVar14 = (uint *)(extraout_r3 + uVar18);
          puVar9 = extraout_r2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return *puVar19;
    }
    *piVar7 = (int)puVar1;
    piVar7[1] = iVar8;
    piVar7[2] = (int)piVar10;
    piVar7[3] = (int)piVar11;
    piVar7[4] = (int)puVar14;
    iVar8 = 0x4f;
    bVar2 = ((int)piVar10 >> 0x1c & 1U) == 0;
    piVar7 = (int *)((int)piVar10 >> 0x1d);
    *(char *)((int)piVar10 + 0xe) = (char)piVar10;
    piVar12 = piVar11;
    if (bVar2) {
      piVar12 = (int *)*piVar11;
      iVar16 = piVar11[1];
      iVar8 = puVar13[0x19];
    }
    if (bVar2) {
      *(char *)(iVar16 + (int)piVar10) = (char)puVar1;
    }
    else {
      bVar20 = SBORROW4((int)piVar12,0x11);
    }
    *(short *)((int)piVar10 + (int)piVar7) = (short)puVar13;
    iVar16 = _LAB_2c433c60;
    piVar10 = (int *)((uint)puVar14 >> 0xd);
    uRam2c43392b._1_3_ = (uint3)((uint)puVar14 >> 0xd);
    iRam2c43392f = (int)puVar13 << 8;
    uRam2c433933 = (undefined1)((uint)puVar13 >> 0x18);
    puRam2c433934 = puVar14;
    if (!bVar20) break;
    piVar11 = (int *)(uint)*(byte *)((int)piVar7 + 0x12);
    iVar8 = iVar8 + 0x53;
    bVar20 = SBORROW4(_DAT_2c433abc,0xfc);
    puVar17 = (undefined4 *)(_DAT_2c433abc + -0xfc);
    *(short *)((int)register0x00000054 + 0x9c) = (short)puVar1;
    *(int *)(_LAB_2c433c60 + 0x50) = _LAB_2c433c60;
    piVar12 = (int *)piVar7[0xc];
    *piVar12 = (int)puVar1;
    piVar12[1] = (int)piVar12;
    piVar12[2] = (int)puVar14;
    puVar13 = (undefined4 *)((int)register0x00000054 + 0x288);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

