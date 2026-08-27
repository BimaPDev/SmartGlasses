/* FUN_2c4f699c @ 0x2c4f699c */

void FUN_2c4f699c(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int iVar5;
  int iVar6;
  undefined4 unaff_lr;
  undefined8 uVar7;
  ushort local_1e;
  uint local_1c;
  
  puVar2 = DAT_2c4f6a24;
  local_1c = *DAT_2c4f6a20;
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  iVar5 = param_3;
  if (iVar6 != 0x40) {
    iVar5 = 0x2c4f69bc;
    *DAT_2c4f6a24 = 0x2c4f69bc;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar4 = param_2;
  if (param_3 != 0) {
    local_1e = (ushort)param_3;
    uVar7 = FUN_2c673ef8(param_1,param_2,iVar5,0x40);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)(local_1e + 1) < (int)uVar7) {
      FUN_2c674238(param_1,&local_1e);
      FUN_2c674238(param_1,param_2,param_3);
      uVar3 = 0;
      uVar4 = extraout_r1;
      goto LAB_2c4f69e0;
    }
  }
  uVar3 = 0xffffffff;
LAB_2c4f69e0:
  if (iVar6 == 0) {
    *DAT_2c4f6a24 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
  if ((*DAT_2c4f6a20 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,uVar4,*DAT_2c4f6a20 ^ local_1c,0);
}

