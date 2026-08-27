/* FUN_1402cba0 @ 0x1402cba0 */

void FUN_1402cba0(uint param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  byte *extraout_r1;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 unaff_lr;
  undefined8 uVar15;
  short local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  pbVar10 = DAT_1402ce60;
  local_2c = *DAT_1402ce5c;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402ce90,param_1);
  }
  if (DAT_1402ce60[param_1 * 0xc + 4] == 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402ce8c,param_1);
  }
  if (-1 < *(int *)(*(int *)(DAT_1402ce60 + param_1 * 0xc) + 0x48) << 0x1e) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402ce88,param_1);
  }
  uVar11 = param_3 + 0xffe;
  iVar12 = (int)((ulonglong)DAT_1402ce64 * (ulonglong)uVar11 >> 0x20);
  uVar13 = iVar12 + (uVar11 - iVar12 >> 1) >> 0xb;
  if ((param_4 == 0) && (param_5 != (uint *)0x0)) {
    if (uVar13 == 1) {
      uVar13 = 0;
    }
    *param_5 = uVar13;
    uVar8 = 0;
    goto LAB_1402ccac;
  }
  if (uVar11 < 0xfff) {
LAB_1402ccf8:
    uVar8 = 0;
  }
  else {
    if (uVar11 < 0x1ffe) {
      if (param_5 != (uint *)0x0) goto LAB_1402cc26;
    }
    else {
      if ((param_4 == 0) || (param_5 == (uint *)0x0)) {
        uVar8 = 0xffffffff;
        goto LAB_1402ccac;
      }
      if (*param_5 < uVar13) {
        uVar8 = 0xfffffffe;
        goto LAB_1402ccac;
      }
LAB_1402cc26:
      uVar11 = uVar13;
      if (uVar13 == 1) {
        uVar11 = 0;
      }
      *param_5 = uVar11;
    }
    uVar11 = DAT_1402ce70;
    puVar5 = DAT_1402ce6c;
    pbVar4 = DAT_1402ce68;
    bVar1 = pbVar10[param_1 * 0xc + 8];
    iVar12 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      iVar12 = getBasePriority();
    }
    if (iVar12 != 0x40) {
      bVar2 = *DAT_1402ce68;
      *DAT_1402ce6c = 0x1402cc4a;
      puVar5[1] = unaff_lr;
      uVar7 = bVar2 + 1;
      *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)uVar11 * (ulonglong)uVar7 >> 0x23) * -10;
      *(undefined4 *)(DAT_1402ce74 + (uint)bVar2 * 4) = unaff_lr;
    }
    iVar6 = DAT_1402ce94;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x40);
    }
    if (*(char *)(DAT_1402ce94 + param_1) != -1) {
      if (iVar12 == 0) {
        *DAT_1402ce6c = 0xffffffff;
      }
      pbVar10 = DAT_1402ce78;
      bVar1 = *DAT_1402ce78;
      *(undefined4 *)(DAT_1402ce7c + (uint)bVar1 * 4) = unaff_lr;
      uVar11 = bVar1 + 1;
      *pbVar10 = (char)uVar11 +
                 (char)(uint)((ulonglong)DAT_1402ce70 * (ulonglong)uVar11 >> 0x23) * -10;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar12);
      }
      uVar8 = 1;
      goto LAB_1402ccac;
    }
    iVar9 = FUN_14028770(bVar1,0);
    *(char *)(iVar6 + param_1) = (char)iVar9;
    if (iVar9 == 0xff) {
      if (iVar12 == 0) {
        *DAT_1402ce6c = 0xffffffff;
      }
      pbVar10 = DAT_1402ce78;
      bVar1 = *DAT_1402ce78;
      *(undefined4 *)(DAT_1402ce7c + (uint)bVar1 * 4) = unaff_lr;
      uVar11 = bVar1 + 1;
      *pbVar10 = (char)uVar11 +
                 (char)(uint)((ulonglong)DAT_1402ce70 * (ulonglong)uVar11 >> 0x23) * -10;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar12);
      }
      uVar8 = 2;
      goto LAB_1402ccac;
    }
    if (iVar12 == 0) {
      *DAT_1402ce6c = 0xffffffff;
    }
    pbVar10 = DAT_1402ce78;
    uVar11 = DAT_1402ce70;
    bVar2 = *DAT_1402ce78;
    *(undefined4 *)(DAT_1402ce7c + (uint)bVar2 * 4) = unaff_lr;
    uVar7 = bVar2 + 1;
    *pbVar10 = (char)uVar7 + (char)(uint)((ulonglong)uVar11 * (ulonglong)uVar7 >> 0x23) * -10;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar12);
    }
    iVar12 = 0;
    *(int *)(DAT_1402ce80 + param_1 * 4) = param_3;
    local_4c = (short)param_3;
    local_34 = DAT_1402ce84;
    local_40 = (uint)bVar1 << 0x10;
    local_40 = CONCAT31(local_40._1_3_,1);
    local_44 = 0x2040000;
    local_48._0_2_ = (ushort)*(byte *)(iVar6 + param_1);
    local_48 = CONCAT22(local_4c,(ushort)local_48);
    local_38 = 0;
    local_30 = 0;
    local_3c = param_2;
    if (uVar13 == 1) {
      uVar15 = FUN_14028650(&local_48);
joined_r0x1402cdf8:
      pbVar10 = (byte *)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 == 0) goto LAB_1402ccf8;
    }
    else {
      iVar9 = param_4;
      iVar14 = param_4;
      if (uVar13 != 1) {
        do {
          iVar14 = iVar9 + 0x10;
          local_48 = CONCAT22(0xfff,(ushort)local_48);
          iVar12 = iVar12 + 1;
          iVar9 = FUN_14028228(iVar9,&local_48,iVar14,0);
          if (iVar9 != 0) goto LAB_1402cdde;
          local_3c = local_3c + 0xfff;
          iVar9 = iVar14;
        } while (iVar12 != uVar13 - 1);
        local_4c = local_4c + (short)iVar12 * -0xfff;
      }
      local_48 = CONCAT22(local_4c,(ushort)local_48);
      iVar12 = FUN_14028228(iVar14,&local_48,0,1);
      if (iVar12 == 0) {
        uVar15 = FUN_14028648(param_4,&local_48);
        goto joined_r0x1402cdf8;
      }
    }
LAB_1402cdde:
    FUN_14028888(*(undefined1 *)(iVar6 + param_1));
    uVar8 = 3;
    *(undefined1 *)(iVar6 + param_1) = 0xff;
    pbVar10 = extraout_r1;
  }
LAB_1402ccac:
  if ((*DAT_1402ce5c ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar8,pbVar10,*DAT_1402ce5c ^ local_2c,0);
  }
  return;
}

