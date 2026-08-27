/* FUN_2c4b6dc8 @ 0x2c4b6dc8 */

void FUN_2c4b6dc8(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  puVar2 = DAT_2c4b6e58;
  local_14 = *DAT_2c4b6e54;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4b6e58 = 0x2c4b6de4;
    puVar2[1] = unaff_lr;
  }
  pbVar3 = DAT_2c4b6e5c;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  bVar4 = *DAT_2c4b6e5c;
  if (bVar4 == param_1) {
    FUN_2c674148(0);
    if (*DAT_2c4b6e60 == '\0') {
      FUN_2c673e88(0x400a,&local_16);
      local_16 = local_16 & 0xbfff;
      FUN_2c673d68(0x400a);
    }
    bVar4 = *pbVar3;
  }
  *pbVar3 = bVar4 & ~(byte)param_1;
  if (iVar5 == 0) {
    *DAT_2c4b6e58 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (*DAT_2c4b6e54 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

