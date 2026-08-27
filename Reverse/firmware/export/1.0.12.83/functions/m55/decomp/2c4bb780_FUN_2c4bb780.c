/* FUN_2c4bb780 @ 0x2c4bb780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bb780(uint param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *extraout_r1;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined4 unaff_lr;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar9 = _LAB_2c4bb9a4;
  uStack_2c = *_LAB_2c4bb9a0;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb9c0,param_1);
  }
  if (*(char *)(_LAB_2c4bb9a4 + param_1 * 0xc + 4) == 'H') {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb9bc,param_1);
  }
  if (-1 < *(int *)(*(int *)(_LAB_2c4bb9a4 + param_1 * 0xc) + 0x48) << 0x1e) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bb9b8,param_1);
  }
  uVar4 = param_3 + 0xffe;
  iVar7 = (int)((ulonglong)_LAB_2c4bb9a8 * (ulonglong)uVar4 >> 0x20);
  uVar8 = iVar7 + (uVar4 - iVar7 >> 1) >> 0xb;
  if ((param_5 != (uint *)0x0) && (param_4 == 0)) {
    uVar5 = 0;
    if (uVar8 == 1) {
      uVar8 = 0;
    }
    *param_5 = uVar8;
    goto LAB_2c4bb7ee;
  }
  if (uVar4 < 0xfff) {
LAB_2c4bb8a2:
    uVar5 = 0;
  }
  else {
    if (uVar4 < 0x1ffe) {
      if (param_5 != (uint *)0x0) goto LAB_2c4bb828;
    }
    else {
      if ((param_5 == (uint *)0x0) || (param_4 == 0)) {
        uVar5 = 0xffffffff;
        goto LAB_2c4bb7ee;
      }
      if (*param_5 < uVar8) {
        uVar5 = 0xfffffffe;
        goto LAB_2c4bb7ee;
      }
LAB_2c4bb828:
      uVar4 = uVar8;
      if (uVar8 == 1) {
        uVar4 = 0;
      }
      *param_5 = uVar4;
    }
    puVar3 = _LAB_2c4bb9ac;
    bVar1 = *(byte *)(iVar9 + param_1 * 0xc + 8);
    iVar9 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      param_5 = (uint *)0x2c4bb84a;
      *_LAB_2c4bb9ac = 0x2c4bb84a;
      puVar3[1] = unaff_lr;
    }
    iVar7 = _LAB_2c4bb9c4;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (*(char *)(_LAB_2c4bb9c4 + param_1) != -1) {
      if (iVar9 == 0) {
        *_LAB_2c4bb9ac = 0xffffffff;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar9);
      }
      uVar5 = 1;
      goto LAB_2c4bb7ee;
    }
    uVar12 = func_0x2c4beebc(bVar1,0);
    param_5 = (uint *)((ulonglong)uVar12 >> 0x20);
    *(char *)(iVar7 + param_1) = (char)uVar12;
    if ((int)uVar12 == 0xff) {
      if (iVar9 == 0) {
        *_LAB_2c4bb9ac = 0xffffffff;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar9);
      }
      uVar5 = 2;
      goto LAB_2c4bb7ee;
    }
    if (iVar9 == 0) {
      *_LAB_2c4bb9ac = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar9);
    }
    iVar9 = 0;
    *(int *)(_LAB_2c4bb9b0 + param_1 * 4) = param_3;
    uStack_34 = _LAB_2c4bb9b4;
    uStack_44 = 0x2040000;
    iStack_40 = (uint)bVar1 << 0x10;
    sVar10 = (short)param_3;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48._0_2_ = (ushort)*(byte *)(iVar7 + param_1);
    uStack_48 = CONCAT22(sVar10,(ushort)uStack_48);
    iStack_40 = CONCAT31(iStack_40._1_3_,1);
    iStack_3c = param_2;
    if (uVar8 == 1) {
      uVar12 = FUN_2c4bed94(&uStack_48);
joined_r0x2c4bb95a:
      param_5 = (uint *)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 == 0) goto LAB_2c4bb8a2;
    }
    else {
      iVar6 = param_4;
      iVar11 = param_4;
      if (uVar8 != 1) {
        do {
          iVar11 = iVar6 + 0x10;
          uStack_48 = CONCAT22(0xfff,(ushort)uStack_48);
          iVar9 = iVar9 + 1;
          iVar6 = FUN_2c4be910(iVar6,&uStack_48,iVar11,0);
          if (iVar6 != 0) goto LAB_2c4bb940;
          iStack_3c = iStack_3c + 0xfff;
          iVar6 = iVar11;
        } while (iVar9 != uVar8 - 1);
        sVar10 = sVar10 + (short)iVar9 * -0xfff;
      }
      uStack_48 = CONCAT22(sVar10,(ushort)uStack_48);
      iVar9 = FUN_2c4be910(iVar11,&uStack_48,0,1);
      if (iVar9 == 0) {
        uVar12 = FUN_2c4bed8c(param_4,&uStack_48);
        goto joined_r0x2c4bb95a;
      }
    }
LAB_2c4bb940:
    FUN_2c4beffc(*(undefined1 *)(iVar7 + param_1));
    uVar5 = 3;
    *(undefined1 *)(iVar7 + param_1) = 0xff;
    param_5 = extraout_r1;
  }
LAB_2c4bb7ee:
  if ((*_LAB_2c4bb9a0 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar5,param_5,*_LAB_2c4bb9a0 ^ uStack_2c,0);
  }
  return;
}

