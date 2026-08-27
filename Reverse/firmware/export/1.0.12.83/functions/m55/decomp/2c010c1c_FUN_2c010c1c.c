/* FUN_2c010c1c @ 0x2c010c1c */

void FUN_2c010c1c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  puVar2 = DAT_2c010d1c;
  local_14 = *DAT_2c010d14;
  if (param_2 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = (uint)(param_2 == 1);
  }
  if (param_1 - 0x50U < 2) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      param_3 = 0x2c010c78;
      *DAT_2c010d1c = 0x2c010c78;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x3a,&local_16,param_3,0x40);
    if (param_1 == 0x50) {
      local_16 = local_16 & 0xfcff | (ushort)(uVar4 << 8);
    }
    else {
      local_16 = local_16 & 0xfffc | (ushort)uVar4;
    }
    FUN_2c008f74(0x3a);
    if (iVar3 == 0) {
      *DAT_2c010d1c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
  }
  else if ((*DAT_2c010d18 - 1 < 2) && (param_1 == 0x52)) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      param_3 = 0x2c010cc2;
      *DAT_2c010d1c = 0x2c010cc2;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x127,&local_16,param_3,0x40);
    local_16 = local_16 & 0xff3f | (ushort)(uVar4 << 6);
    FUN_2c008f74(0x127);
    if (iVar3 == 0) {
      *DAT_2c010d1c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
  }
  if (*DAT_2c010d14 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

