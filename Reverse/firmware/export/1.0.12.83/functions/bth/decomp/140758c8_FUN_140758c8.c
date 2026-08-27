/* FUN_140758c8 @ 0x140758c8 */

void FUN_140758c8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  ushort *puVar7;
  int iVar8;
  uint *puVar9;
  ushort *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 unaff_lr;
  int local_b8;
  undefined1 auStack_ac [128];
  int local_2c;
  
  puVar3 = DAT_1407596c;
  iVar14 = 0;
  if (*param_1 != 0) {
    iVar14 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar14 = getBasePriority();
    }
    if (iVar14 != 0x40) {
      *DAT_1407596c = 0x140758de;
      puVar3[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
  }
  puVar15 = (uint *)(param_1 + 5);
  puVar11 = (uint *)(param_1[5] & 0xfffffffc);
  if (puVar11 != (uint *)0x0) {
    if ((int)puVar11 <= (int)puVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x4042,DAT_14075970,puVar11,puVar15);
    }
    for (; puVar11 != (uint *)0x0; puVar11 = (uint *)(*puVar11 & 0xfffffffc)) {
      if ((int)puVar11 <= (int)puVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x4042,DAT_14075970,puVar11,puVar15);
      }
      if (puVar11 <= puVar15) {
        if (*param_1 == 0) goto SUB_140756e4;
        bVar1 = true;
        goto joined_r0x14075946;
      }
      puVar15 = puVar11;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  bVar1 = false;
joined_r0x14075946:
  if (iVar14 == 0) {
    *DAT_1407596c = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar14);
  }
  if (!bVar1) {
    return;
  }
SUB_140756e4:
  puVar3 = DAT_140758a8;
  local_2c = *DAT_1407589c;
  if ((int *)*DAT_14075898 == param_1) {
    iVar13 = DAT_140758bc + -0x2800;
    iVar14 = DAT_140758bc;
  }
  else {
    if ((int *)*DAT_140758a0 != param_1) {
      if (*DAT_1407589c == local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_140758b8,param_1,0);
      }
      goto LAB_14075892;
    }
    iVar13 = DAT_140758a4 + -0x5000;
    iVar14 = DAT_140758a4;
  }
  if (*param_1 == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      local_b8 = getBasePriority();
    }
    if (local_b8 != 0x40) {
      *DAT_140758a8 = 0x14075726;
      puVar3[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
  }
  puVar15 = (uint *)(param_1 + 5);
  puVar10 = (ushort *)(param_1[5] & 0xfffffffc);
  if ((puVar10 != (ushort *)0x0) && ((int)puVar10 <= (int)puVar15)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x4042,DAT_140758b0,puVar10,puVar15);
  }
  puVar9 = (uint *)param_1[4];
  puVar11 = puVar15;
  iVar13 = FUN_140dc344(auStack_ac,0x80,DAT_140758ac,iVar13,param_1,puVar15,puVar10,puVar9,iVar14);
  if (0 < iVar13) {
    FUN_1402a128(auStack_ac);
  }
  uVar5 = DAT_140758c4;
  uVar4 = DAT_140758c0;
  if ((uint *)(param_1[5] & 0xfffffffcU) != (uint *)0x0) {
    iVar13 = 0;
    puVar6 = (uint *)(param_1[5] & 0xfffffffcU);
    puVar12 = puVar15;
    do {
      puVar15 = puVar6;
      if ((int)puVar15 <= (int)puVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x4042,DAT_140758b0,puVar15,puVar12);
      }
      puVar11 = (uint *)((int)puVar15 - (int)puVar12);
      if ((int)(*puVar12 << 0x1f) < 0) {
        puVar10 = (ushort *)puVar12[1];
        puVar9 = puVar15;
        iVar8 = FUN_140dc344(auStack_ac,0x80,uVar5,iVar13,puVar12,puVar11,puVar10,puVar15,iVar14);
      }
      else {
        puVar7 = (ushort *)FUN_140a26a8(puVar12);
        iVar14 = *(int *)(puVar7 + 2);
        puVar10 = puVar7 + 4;
        puVar9 = (uint *)(uint)*puVar7;
        iVar8 = FUN_140dc344(auStack_ac,0x80,uVar4,iVar13,puVar12,puVar11,puVar10,puVar9,iVar14,
                             puVar7[1],puVar15);
      }
      if (0 < iVar8) {
        FUN_1402a128(auStack_ac,iVar8);
      }
      iVar13 = iVar13 + 1;
      puVar6 = (uint *)(*puVar15 & 0xfffffffc);
      puVar12 = puVar15;
    } while ((uint *)(*puVar15 & 0xfffffffc) != (uint *)0x0);
  }
  iVar14 = FUN_140dc344(auStack_ac,0x80,DAT_140758b4,puVar15,8,puVar11,puVar10,puVar9,iVar14);
  if (0 < iVar14) {
    FUN_1402a128(auStack_ac);
  }
  if (*param_1 != 0) {
    if (local_b8 == 0) {
      *DAT_140758a8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(local_b8);
    }
  }
  if (*DAT_1407589c == local_2c) {
    return;
  }
LAB_14075892:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

