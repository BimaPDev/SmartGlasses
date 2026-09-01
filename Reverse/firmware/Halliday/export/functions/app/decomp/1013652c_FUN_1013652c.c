/* FUN_1013652c @ 0x1013652c */

uint FUN_1013652c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d4630();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (*(byte *)(iVar1 + 0x39) & 3) >> 1;
  }
  return uVar2;
}

