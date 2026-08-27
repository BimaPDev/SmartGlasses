/* FUN_2c4b6d30 @ 0x2c4b6d30 */

void FUN_2c4b6d30(byte param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  puVar2 = DAT_2c4b6dbc;
  local_14 = *DAT_2c4b6db8;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    param_3 = 0x2c4b6d4c;
    *DAT_2c4b6dbc = 0x2c4b6d4c;
    puVar2[1] = unaff_lr;
  }
  pbVar3 = DAT_2c4b6dc0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  bVar4 = *DAT_2c4b6dc0;
  if (bVar4 == 0) {
    FUN_2c674148(1,param_2,param_3,0x40);
    if (*DAT_2c4b6dc4 == '\0') {
      FUN_2c673e88(0x400a,&local_16);
      local_16 = local_16 | 0x4000;
      FUN_2c673d68(0x400a);
    }
    bVar4 = *pbVar3;
  }
  *pbVar3 = param_1 | bVar4;
  if (iVar5 == 0) {
    *DAT_2c4b6dbc = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (*DAT_2c4b6db8 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

