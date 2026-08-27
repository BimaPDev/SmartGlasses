/* FUN_2c0109b8 @ 0x2c0109b8 */

void FUN_2c0109b8(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 unaff_lr;
  ushort local_18;
  ushort local_16;
  int local_14;
  
  puVar3 = DAT_2c010c18;
  local_14 = *DAT_2c010c10;
  if (1 < param_1 - 0x50U) {
    if ((*DAT_2c010c14 - 1 < 2) && (param_1 == 0x52)) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 != 0x40) {
        param_3 = 0x2c010ae4;
        *DAT_2c010c18 = 0x2c010ae4;
        puVar3[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c008e4c(0x127,&local_18,param_3,0x40);
      if (param_2 == 0) {
        local_18 = local_18 | 0x124;
      }
      else {
        local_18 = local_18 & 0xffdb | 0x100;
      }
      FUN_2c008f74(0x127);
      if (iVar5 == 0) {
        *DAT_2c010c18 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar5);
      }
    }
    goto LAB_2c0109e0;
  }
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    param_3 = 0x2c010a00;
    *DAT_2c010c18 = 0x2c010a00;
    puVar3[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c008e4c(0x3a,&local_18,param_3,0x40);
  FUN_2c008e4c(0x39,&local_16);
  pbVar2 = DAT_2c010c14;
  if (param_1 == 0x50) {
    if (param_2 == 0) {
      local_18 = local_18 | 0x2800;
      if ((*DAT_2c010c14 == 0) || (*DAT_2c010c14 == 3)) {
        uVar4 = 0x200;
      }
      else {
        uVar4 = 0x2000;
      }
      local_16 = uVar4 | local_16;
      FUN_2c008f74(0x3a);
      FUN_2c008f74(0x39,local_16);
      if ((*pbVar2 == 0) || (*pbVar2 == 3)) {
        FUN_2c008e4c(0x6f,&local_18);
        local_18 = local_18 | 0x42;
        goto LAB_2c010bce;
      }
    }
    else {
      local_18 = local_18 & 0xdfff | 0x800;
      if ((*DAT_2c010c14 == 0) || (*DAT_2c010c14 == 3)) {
        uVar4 = 0xfdff;
      }
      else {
        uVar4 = 0xdfff;
      }
      local_16 = uVar4 & local_16;
      FUN_2c008f74(0x3a);
      FUN_2c008f74(0x39,local_16);
      if ((*pbVar2 == 0) || (*pbVar2 == 3)) {
        FUN_2c008e4c(0x6f,&local_18);
        local_18 = local_18 & 0xffbf | 2;
        goto LAB_2c010bce;
      }
    }
  }
  else if (param_2 == 0) {
    local_18 = local_18 | 0x28;
    if ((*DAT_2c010c14 == 0) || (*DAT_2c010c14 == 3)) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0x1000;
    }
    local_16 = uVar4 | local_16;
    FUN_2c008f74(0x3a);
    FUN_2c008f74(0x39,local_16);
    if ((*pbVar2 == 0) || (*pbVar2 == 3)) {
      FUN_2c008e4c(0x6f,&local_18);
      local_18 = local_18 | 0x84;
LAB_2c010bce:
      FUN_2c008f74(0x6f);
    }
  }
  else {
    local_18 = local_18 & 0xffdf | 8;
    if ((*DAT_2c010c14 == 0) || (*DAT_2c010c14 == 3)) {
      uVar4 = 0xfeff;
    }
    else {
      uVar4 = 0xefff;
    }
    local_16 = uVar4 & local_16;
    FUN_2c008f74(0x3a);
    FUN_2c008f74(0x39,local_16);
    if ((*pbVar2 == 0) || (*pbVar2 == 3)) {
      FUN_2c008e4c(0x6f,&local_18);
      local_18 = local_18 & 0xff7f | 4;
      goto LAB_2c010bce;
    }
  }
  if (iVar5 == 0) {
    *DAT_2c010c18 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
LAB_2c0109e0:
  if (*DAT_2c010c10 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

