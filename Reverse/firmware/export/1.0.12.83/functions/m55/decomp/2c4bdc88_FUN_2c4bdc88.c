/* FUN_2c4bdc88 @ 0x2c4bdc88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bdc88(uint param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int unaff_lr;
  ushort uStack_30;
  ushort uStack_2e;
  int iStack_2c;
  
  iVar12 = _LAB_2c4bdf00;
  puVar3 = _LAB_2c4bdefc;
  iStack_2c = *_LAB_2c4bdeec;
  param_1 = param_1 & *_LAB_2c4bdefc;
  if ((param_1 & 0x7f) != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        uVar13 = uVar10 & 0xff;
        uVar14 = 1 << (uVar10 & 0xff);
        if ((param_1 & 0x1fff & uVar14) != 0) break;
LAB_2c4bdcb8:
        uVar10 = uVar10 + 1;
        if (uVar10 == 7) goto LAB_2c4bdd92;
      }
      FUN_2c673e88(uVar10 + 0x56 & 0xffff,&uStack_2e);
      uVar6 = (1 << *_LAB_2c4bdef0) - 1U & (uint)uStack_2e;
      uStack_2e = (ushort)uVar6;
      uVar7 = FUN_2c4bd9a4(uVar6,uVar13);
      pcVar9 = *(code **)(_LAB_2c4bdef4 + uVar10 * 4);
      param_3 = extraout_r2;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uStack_2e,uVar7);
        param_3 = extraout_r2_00;
      }
      puVar2 = _LAB_2c4bdef8;
      if (1 < *(int *)(iVar12 + uVar10 * 4) + 1U) goto LAB_2c4bdcb8;
      iVar11 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar11 = getBasePriority();
      }
      if (iVar11 != 0x40) {
        *_LAB_2c4bdef8 = 0x2c4bdd1a;
        puVar2[1] = unaff_lr;
        param_3 = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      if (uVar10 != 1) {
        FUN_2c673f18(uVar13,0,param_3,0x40);
      }
      uVar5 = ~(ushort)uVar14;
      FUN_2c673e88(0x26,&uStack_30);
      uStack_30 = uVar5 & uStack_30;
      FUN_2c673d68(0x26);
      *puVar3 = uStack_30;
      FUN_2c673e88(0x27,&uStack_30);
      uStack_30 = uVar5 & uStack_30;
      FUN_2c673d68(0x27);
      FUN_2c4bd788(uVar13,0);
      param_3 = extraout_r2_01;
      if (iVar11 == 0) {
        param_3 = -1;
        *_LAB_2c4bdef8 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar11);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 7);
  }
LAB_2c4bdd92:
  puVar2 = _LAB_2c4bdef8;
  iVar12 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    *_LAB_2c4bdef8 = 0x2c4bdd9e;
    puVar2[1] = unaff_lr;
    param_3 = unaff_lr;
  }
  puVar4 = _LAB_2c4bdf04;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar5 = *_LAB_2c4bdf04;
  if ((uVar5 & 0x7f) == 0) {
    FUN_2c673e88(0x4f,&uStack_30,param_3,0x40);
    uStack_30 = uStack_30 & 0xffdf;
    FUN_2c673d68(0x4f);
    FUN_2c673bf8(uVar5 & 0x7f);
  }
  if (iVar12 == 0) {
    *_LAB_2c4bdef8 = 0xffffffff;
  }
  puVar2 = _LAB_2c4bdef8;
  iVar11 = _LAB_2c4bdef4;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar12);
  }
  if (((param_1 & 0x1e80) != 0) && (*(code **)(_LAB_2c4bdef4 + 0x1c) != (code *)0x0)) {
    if ((param_1 & 0x200) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 2;
    }
    if ((int)(param_1 << 0x15) < 0) {
      uVar10 = uVar10 | 4;
    }
    if ((int)(param_1 << 0x14) < 0) {
      uVar10 = uVar10 | 8;
    }
    if ((int)(param_1 << 0x13) < 0) {
      uVar10 = uVar10 | 0x10;
    }
    if ((int)(param_1 << 0x18) < 0) {
      iVar12 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar12 = getBasePriority();
      }
      iVar8 = param_1 << 0x18;
      if (iVar12 != 0x40) {
        *_LAB_2c4bdef8 = 0x2c4bde0a;
        puVar2[1] = unaff_lr;
        iVar8 = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c673e88(0x26,&uStack_30,iVar8,0x40);
      uStack_30 = uStack_30 & 0xff7f;
      FUN_2c673d68(0x26);
      *puVar3 = uStack_30;
      FUN_2c673e88(0x27,&uStack_30);
      uStack_30 = uStack_30 & 0xff7f;
      FUN_2c673d68(0x27);
      uVar5 = *puVar4 & 0xff7f;
      *puVar4 = uVar5;
      if (uVar5 == 0) {
        FUN_2c4be7f8();
      }
      if (iVar12 == 0) {
        *_LAB_2c4bdef8 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar12);
      }
      FUN_2c673e88(0x5d,&uStack_2e);
      uStack_2e = (short)(1 << *_LAB_2c4bdef0) - 1U & uStack_2e;
      (**(code **)(iVar11 + 0x1c))(uVar10 | 1);
    }
    else {
      uStack_2e = 0xffff;
      (**(code **)(_LAB_2c4bdef4 + 0x1c))(uVar10,0xffff);
    }
  }
  if (*_LAB_2c4bdeec != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

