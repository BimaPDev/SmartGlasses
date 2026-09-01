/* FUN_10056aa0 @ 0x10056aa0 */

void FUN_10056aa0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = (*DAT_10056adc)();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if ((int)uVar1 < 0x20) {
    uVar1 = 1 << (uVar1 & 0xff);
    if (iVar2 == 0) {
      uVar1 = *DAT_10056ae0 & ~uVar1;
    }
    else {
      uVar1 = uVar1 | *DAT_10056ae0;
    }
    *DAT_10056ae0 = uVar1;
  }
  else {
    uVar1 = 1 << (uVar1 - 0x20 & 0xff);
    if (iVar2 == 0) {
      uVar1 = DAT_10056ae0[1] & ~uVar1;
    }
    else {
      uVar1 = uVar1 | DAT_10056ae0[1];
    }
    DAT_10056ae0[1] = uVar1;
  }
  return;
}

