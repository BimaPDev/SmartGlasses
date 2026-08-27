/* FUN_2c5ebdc4 @ 0x2c5ebdc4 */

uint FUN_2c5ebdc4(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *DAT_2c5ebe0c;
  iVar1 = FUN_2c5e11a4(DAT_2c5ebe10);
  if ((iVar1 == 0) && (iVar1 = FUN_2c5ab4ec(), iVar1 == 0)) {
    iVar1 = FUN_2c5e11a4(DAT_2c5ebe18);
  }
  else {
    uVar2 = uVar2 & *DAT_2c5ebe14;
    iVar1 = FUN_2c5e11a4(DAT_2c5ebe18);
  }
  if ((iVar1 == 0) && (iVar1 = FUN_2c5e11c0(DAT_2c5ebe18), iVar1 == 0)) {
    return uVar2;
  }
  return uVar2 & *DAT_2c5ebe1c;
}

