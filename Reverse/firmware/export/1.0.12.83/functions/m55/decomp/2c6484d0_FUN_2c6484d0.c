/* FUN_2c6484d0 @ 0x2c6484d0 */

void FUN_2c6484d0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  undefined8 uVar6;
  undefined1 local_15;
  uint local_14;
  
  puVar2 = DAT_2c648568;
  local_14 = *DAT_2c648564;
  uVar4 = 0;
  local_15 = 0;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    uVar4 = 0x2c6484f2;
    *DAT_2c648568 = 0x2c6484f2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar6 = FUN_2c673d58(DAT_2c64856c,param_2,uVar4,0x40);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar5 == 0) {
    *DAT_2c648568 = 0xffffffff;
  }
  puVar2 = DAT_2c648568;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if ((int)uVar6 < 1) {
    uVar3 = 0;
  }
  else {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c648568 = 0x2c648520;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c674208(DAT_2c64856c,&local_15,1,0x40);
    if (iVar5 == 0) {
      *DAT_2c648568 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    uVar4 = extraout_r1;
    uVar3 = local_15;
    if (bVar1) {
      setBasePriority(iVar5);
    }
  }
  if ((*DAT_2c648564 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar3,uVar4,*DAT_2c648564 ^ local_14,0);
  }
  return;
}

