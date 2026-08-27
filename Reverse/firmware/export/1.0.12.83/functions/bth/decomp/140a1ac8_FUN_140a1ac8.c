/* FUN_140a1ac8 @ 0x140a1ac8 */

void FUN_140a1ac8(uint param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  uint *local_30;
  int local_2c;
  
  local_2c = *DAT_140a1dc4;
  local_30 = (uint *)0x0;
  FUN_140a2d2c();
  FUN_140a2e68(&local_30,0x1000);
  puVar4 = local_30;
  pbVar2 = DAT_140a1dcc;
  if (local_30 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a1dec,DAT_140a1ddc,0x404);
  }
  if (*DAT_140a1dc8 == '\0') {
    *local_30 = (uint)*DAT_140a1dcc << 0x10 | 0xba80;
    if (*pbVar2 == 1) {
      uVar8 = FUN_140390bc();
      uVar9 = FUN_140dd3a4();
      puVar10 = (uint *)FUN_14039098();
      puVar11 = (uint *)FUN_140390b4();
      puVar4[2] = 0;
      puVar4[3] = 0;
      FUN_140e5278(puVar4 + 4,uVar8,uVar9);
      iVar7 = FUN_140e5848();
      puVar16 = (undefined1 *)((int)puVar10 + -1);
      do {
        FUN_140dc044(iVar7);
        uVar5 = FUN_140dc0a0();
        puVar16 = puVar16 + 1;
        *puVar16 = uVar5;
        iVar13 = FUN_140dc0a0();
        iVar7 = iVar7 + iVar13;
      } while ((undefined1 *)((int)puVar10 + 5) != puVar16);
      iVar7 = FUN_140e5848();
      puVar16 = (undefined1 *)((int)puVar11 + -1);
      do {
        FUN_140dc044(iVar7);
        uVar5 = FUN_140dc0a0();
        puVar16 = puVar16 + 1;
        *puVar16 = uVar5;
        iVar13 = FUN_140dc0a0();
        iVar7 = iVar7 + iVar13;
      } while ((undefined1 *)((int)puVar11 + 5) != puVar16);
      puVar4[0x43] = *puVar10;
      *(short *)(puVar4 + 0x44) = (short)puVar10[1];
      uVar9 = DAT_140a1de8;
      puVar4[0x45] = *puVar11;
      uVar6 = puVar11[1];
      puVar4[0x49] = param_1;
      *(short *)(puVar4 + 0x46) = (short)uVar6;
      puVar4[0x47] = 0;
      *(undefined2 *)(puVar4 + 0x48) = 0;
      uVar6 = FUN_140a2edc(0,puVar4 + 2,0x120);
      uVar8 = DAT_140a1ddc;
      puVar4[1] = uVar6;
      FUN_1402a6e8(4,0x424,DAT_140a1de4,DAT_140a1de0,uVar9,uVar8,uVar6);
    }
    else {
      uVar8 = FUN_140390bc();
      uVar9 = FUN_140dd3a4();
      puVar10 = (uint *)FUN_14039098();
      puVar11 = (uint *)FUN_140390b4();
      puVar4[0x4d] = 0;
      puVar4[0x4e] = 0;
      FUN_140e5278(puVar4 + 0x4f,uVar8,uVar9);
      puVar12 = (uint *)FUN_140390d4();
      uVar6 = puVar12[1];
      uVar14 = puVar12[2];
      uVar15 = puVar12[3];
      puVar4[0x95] = *puVar12;
      puVar4[0x96] = uVar6;
      puVar4[0x97] = uVar14;
      puVar4[0x98] = uVar15;
      uVar6 = puVar12[5];
      uVar14 = puVar12[6];
      uVar15 = puVar12[7];
      puVar4[0x99] = puVar12[4];
      puVar4[0x9a] = uVar6;
      puVar4[0x9b] = uVar14;
      puVar4[0x9c] = uVar15;
      iVar7 = FUN_140e5848();
      puVar16 = (undefined1 *)((int)puVar10 + -1);
      do {
        FUN_140dc044(iVar7);
        uVar5 = FUN_140dc0a0();
        puVar16 = puVar16 + 1;
        *puVar16 = uVar5;
        iVar13 = FUN_140dc0a0();
        iVar7 = iVar7 + iVar13;
      } while ((undefined1 *)((int)puVar10 + 5) != puVar16);
      iVar7 = FUN_140e5848();
      puVar16 = (undefined1 *)((int)puVar11 + -1);
      do {
        FUN_140dc044(iVar7);
        uVar5 = FUN_140dc0a0();
        puVar16 = puVar16 + 1;
        *puVar16 = uVar5;
        iVar13 = FUN_140dc0a0();
        iVar7 = iVar7 + iVar13;
      } while ((undefined1 *)((int)puVar11 + 5) != puVar16);
      puVar4[0x8e] = *puVar10;
      uVar8 = DAT_140a1dd8;
      *(short *)(puVar4 + 0x8f) = (short)puVar10[1];
      puVar4[0x90] = *puVar11;
      uVar6 = puVar11[1];
      puVar4[0x94] = param_1;
      *(short *)(puVar4 + 0x91) = (short)uVar6;
      puVar4[0x4b] = 0x140;
      puVar4[0x92] = 0;
      *(undefined2 *)(puVar4 + 0x93) = 0;
      uVar6 = FUN_140a2edc(0,puVar4 + 0x4d);
      uVar9 = DAT_140a1ddc;
      puVar4[0x4c] = uVar6;
      FUN_1402a6e8(4,0x445,DAT_140a1de4,DAT_140a1de0,uVar8,uVar9,uVar6);
    }
  }
  else if (*DAT_140a1dcc == 1) {
    FUN_140e5278(local_30,DAT_140a1dd0,0x1000);
    puVar4[0x49] = param_1;
    uVar6 = FUN_140a2edc(0,puVar4 + 2,0x120);
    puVar4[1] = uVar6;
  }
  else {
    FUN_140e5278(local_30,DAT_140a1dd0,0x1000);
    puVar4[0x94] = param_1;
    uVar6 = FUN_140a2edc(0,puVar4 + 0x4d,puVar4[0x4b]);
    puVar4[0x4c] = uVar6;
  }
  puVar3 = DAT_140a1dd4;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = isIRQinterruptsEnabled();
  }
  if ((uVar6 & 1) == 0) {
    *DAT_140a1dd4 = 0x140a1b38;
    puVar3[1] = unaff_lr;
    disableIRQinterrupts();
  }
  FUN_140e58e8();
  FUN_140e58a8();
  iVar7 = FUN_140e53c8(0xc,DAT_140a1dd0,0x1000,0);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a1df4,DAT_140a1df0,iVar7);
  }
  iVar7 = FUN_140e50a8(0xc,DAT_140a1dd0,local_30,0x1000,0);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a1df8,DAT_140a1df0,iVar7);
  }
  FUN_140e5458();
  if ((uVar6 & 1) == 0) {
    *DAT_140a1dd4 = 0xffffffff;
    enableIRQinterrupts();
  }
  if (*DAT_140a1dc4 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

