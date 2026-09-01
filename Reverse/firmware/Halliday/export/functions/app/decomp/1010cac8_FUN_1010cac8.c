/* FUN_1010cac8 @ 0x1010cac8 */

void FUN_1010cac8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_1010cb30;
  if (*(int *)(DAT_1010cb30 + *(int *)(DAT_1010cb30 + 0x6e4) * 4 + 0x6dc) == 0) {
    if (*DAT_1010cb34 != 0) {
      FUN_1010b62c(DAT_1010cb30);
      return;
    }
  }
  else {
    iVar2 = FUN_1013b1e8(DAT_1010cb30,0xa00,1);
    if (((iVar2 == 0) && (iVar2 = FUN_1010c204(), iVar2 == 0)) &&
       (iVar2 = FUN_1010b660(iVar1), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + 0x20) = 1;
      iVar2 = FUN_1010b62c(iVar1,5000);
      if (iVar2 == 0) {
        uVar3 = *(int *)(iVar1 + 0x6e4) + 1U & 1;
        *(uint *)(iVar1 + 0x6e4) = uVar3;
        *(undefined4 *)(iVar1 + (uVar3 + 0x1b6) * 4 + 4) = 0;
      }
    }
  }
  return;
}

