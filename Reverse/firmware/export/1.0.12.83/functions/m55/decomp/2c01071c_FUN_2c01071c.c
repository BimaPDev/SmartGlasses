/* FUN_2c01071c @ 0x2c01071c */

void FUN_2c01071c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  int iVar4;
  undefined4 unaff_lr;
  ushort local_16;
  int local_14;
  
  puVar2 = DAT_2c010808;
  local_14 = *DAT_2c010804;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    param_3 = 0x2c010738;
    *DAT_2c010808 = 0x2c010738;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c008e4c(5,&local_16,param_3,0x40);
  local_16 = local_16 & 0xe0ff;
  FUN_2c008f74(5);
  if (iVar4 == 0) {
    *DAT_2c010808 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  FUN_2c008e4c(0x5e,&local_16);
  FUN_2c008f74(0x5e,local_16);
  FUN_2c008e4c(0x52,&local_16);
  if ((*DAT_2c01080c == '\0') || (*DAT_2c01080c == '\x03')) {
    uVar3 = 0x51;
  }
  else {
    uVar3 = 0x52;
  }
  FUN_2c008f74(uVar3,local_16);
  FUN_2c013870(0x10);
  puVar2 = DAT_2c010808;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  uVar3 = extraout_r2;
  if (iVar4 != 0x40) {
    uVar3 = 0x2c0107b2;
    *DAT_2c010808 = 0x2c0107b2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c008e4c(5,&local_16,uVar3,0x40);
  local_16 = local_16 & 0xff00 | 0x708;
  FUN_2c008f74(5);
  if (iVar4 == 0) {
    *DAT_2c010808 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  if (*DAT_2c010804 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

