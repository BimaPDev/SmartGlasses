/* FUN_1011dcae @ 0x1011dcae */

void FUN_1011dcae(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = 0;
  iVar1 = DAT_10064b30;
  do {
    if (param_1 == iVar1) {
      *DAT_10064b34 = *DAT_10064b34 & ~(1 << (uVar2 & 0xff));
      return;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x20;
  } while (uVar2 != 0x14);
  return;
}

