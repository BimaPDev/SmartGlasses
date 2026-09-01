/* FUN_100a7dfc @ 0x100a7dfc */

uint FUN_100a7dfc(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*DAT_100a7e20 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar4 = FUN_100a7d8c();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = (uint)uVar4;
    cVar1 = **(char **)(iVar3 + 0x14);
    if ((cVar1 == '\x04') || (cVar1 == '\x18')) {
      uVar2 = (uint)*(byte *)(iVar3 + 0x2b);
    }
  }
  return uVar2;
}

