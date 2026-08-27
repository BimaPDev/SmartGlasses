/* FUN_2c010e44 @ 0x2c010e44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c010e44(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 unaff_lr;
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  puVar3 = _DAT_2c011018;
  iStack_1c = *_DAT_2c011010;
  if (1 < param_1 - 0x50U) {
    if ((*_DAT_2c011014 - 1 < 2) && (param_1 == 0x52)) {
      iVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar6 = getBasePriority();
      }
      if (iVar6 != 0x40) {
        param_3 = 0x2c010f9a;
        *_DAT_2c011018 = 0x2c010f9a;
        puVar3[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c008e4c(0x123,&uStack_20,param_3,0x40);
      if (param_2 == 0) {
        uStack_20 = uStack_20 | 6;
      }
      else {
        uStack_20 = uStack_20 & 0xfffd | 4;
      }
      FUN_2c008f74(0x123);
      if (iVar6 == 0) {
        *_DAT_2c011018 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar6);
      }
    }
    goto LAB_2c010e6e;
  }
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *_DAT_2c011018 = 0x2c010e8e;
    puVar3[1] = unaff_lr;
  }
  pbVar2 = _DAT_2c011014;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if ((*_DAT_2c011014 == 0) || (*_DAT_2c011014 == 3)) {
    FUN_2c008e4c(0x67,&uStack_1e);
    bVar5 = *pbVar2;
    if (bVar5 != 0) goto LAB_2c010eb6;
LAB_2c010f4a:
    FUN_2c008e4c(0x68,&uStack_20);
    bVar5 = *pbVar2;
    if (param_1 != 0x50) goto LAB_2c010eca;
LAB_2c010f58:
    if ((bVar5 == 0) || (bVar5 == 3)) {
      uVar4 = 0x62;
    }
    else {
      uVar4 = 0x103;
    }
    FUN_2c008f74(uVar4,0xffff);
    uStack_1e = uStack_1e & 0xfeff;
    if (param_2 == 0) {
      uStack_20 = uStack_20 | 0x1400;
    }
    else {
      uStack_20 = uStack_20 & 0xfbff | 0x1000;
    }
  }
  else {
    FUN_2c008e4c(0x108,&uStack_1e);
    bVar5 = *pbVar2;
    if (bVar5 == 0) goto LAB_2c010f4a;
LAB_2c010eb6:
    if (bVar5 == 3) goto LAB_2c010f4a;
    FUN_2c008e4c(0x109,&uStack_20);
    bVar5 = *pbVar2;
    if (param_1 == 0x50) goto LAB_2c010f58;
LAB_2c010eca:
    if ((bVar5 == 0) || (bVar5 == 3)) {
      uVar4 = 99;
    }
    else {
      uVar4 = 0x104;
    }
    FUN_2c008f74(uVar4,0xffff);
    uStack_1e = uStack_1e & 0xfffe;
    if (param_2 == 0) {
      uStack_20 = uStack_20 | 0x2800;
    }
    else {
      uStack_20 = uStack_20 & 0xf7ff | 0x2000;
    }
  }
  if ((*pbVar2 == 0) || (*pbVar2 == 3)) {
    FUN_2c008f74(0x67);
    bVar5 = *pbVar2;
    if (bVar5 != 0) goto LAB_2c010f1a;
LAB_2c010fe4:
    uVar4 = 0x68;
  }
  else {
    FUN_2c008f74(0x108);
    bVar5 = *pbVar2;
    if (bVar5 == 0) goto LAB_2c010fe4;
LAB_2c010f1a:
    if (bVar5 == 3) goto LAB_2c010fe4;
    uVar4 = 0x109;
  }
  FUN_2c008f74(uVar4,uStack_20);
  if (iVar6 == 0) {
    *_DAT_2c011018 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
LAB_2c010e6e:
  if (*_DAT_2c011010 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

