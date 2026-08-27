/* FUN_2c010810 @ 0x2c010810 */

void FUN_2c010810(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_2c01089c;
  uVar3 = 0;
  *DAT_2c010898 = param_1;
  puVar2 = DAT_2c0108a0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    uVar3 = 0x2c010830;
    *DAT_2c0108a0 = 0x2c010830;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c008e4c(5,&local_16,uVar3,0x40);
  uVar3 = DAT_2c0108a4;
  if (param_1 == 0) {
    local_16 = local_16 & 0xe7ff;
    FUN_2c008f74(5);
    uVar3 = 0;
  }
  else {
    local_16 = local_16 | 0x1800;
    FUN_2c008f74(5);
  }
  FUN_2c00d6e4(3,uVar3);
  if (iVar4 == 0) {
    *DAT_2c0108a0 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  if (*DAT_2c01089c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

