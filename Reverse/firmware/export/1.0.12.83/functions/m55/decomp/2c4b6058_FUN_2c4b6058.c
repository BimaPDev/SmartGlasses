/* FUN_2c4b6058 @ 0x2c4b6058 */

void FUN_2c4b6058(ushort param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  puVar2 = DAT_2c4b6100;
  local_14 = *DAT_2c4b60fc;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4b6100 = 0x2c4b6072;
    puVar2[1] = unaff_lr;
  }
  puVar3 = DAT_2c4b6104;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar4 = *DAT_2c4b6104;
  if (param_2 == 0) {
    uVar4 = uVar4 & ~param_1;
    *DAT_2c4b6104 = uVar4;
  }
  else {
    *DAT_2c4b6104 = param_1 | uVar4;
  }
  if (iVar5 == 0) {
    *DAT_2c4b6100 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (uVar4 == 0) {
    FUN_2c673e88(0x1053,&local_16);
    if (*puVar3 != 0) {
      local_16 = local_16 | 0x7f00;
    }
    else {
      local_16 = local_16 & 0x80ff;
    }
    FUN_2c4b6f70(*puVar3 != 0);
    FUN_2c673d68(0x1053,local_16);
  }
  if (*DAT_2c4b60fc == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

