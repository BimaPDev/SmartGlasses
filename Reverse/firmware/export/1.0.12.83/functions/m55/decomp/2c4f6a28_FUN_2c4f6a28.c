/* FUN_2c4f6a28 @ 0x2c4f6a28 */

void FUN_2c4f6a28(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 unaff_lr;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  puVar2 = DAT_2c4f6ab4;
  local_14 = *DAT_2c4f6ab0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4f6ab4 = 0x2c4f6a50;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c673da8(param_1,2,&local_24,&local_1c,&local_20,&local_18);
  iVar3 = local_1c;
  FUN_2c674668(&local_26,local_24,local_1c);
  FUN_2c674668((int)&local_26 + iVar3,local_20,local_18);
  if (iVar4 == 0) {
    *DAT_2c4f6ab4 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  if ((*DAT_2c4f6ab0 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_26,extraout_r1,*DAT_2c4f6ab0 ^ local_14,0);
}

