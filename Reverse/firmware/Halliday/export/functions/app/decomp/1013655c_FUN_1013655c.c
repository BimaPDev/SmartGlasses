/* FUN_1013655c @ 0x1013655c */

uint FUN_1013655c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x45) & 0x3f) >> 5;
  }
  return uVar2;
}

