/* FUN_1013653e @ 0x1013653e */

void FUN_1013653e(void)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100d456c();
  iVar1 = (int)uVar3;
  if (iVar1 != 0) {
    if ((int)((ulonglong)uVar3 >> 0x20) == 0) {
      bVar2 = *(byte *)(iVar1 + 0x45) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(iVar1 + 0x45) | 0x20;
    }
    *(byte *)(iVar1 + 0x45) = bVar2;
  }
  return;
}

