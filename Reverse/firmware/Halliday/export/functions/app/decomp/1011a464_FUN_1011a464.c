/* FUN_1011a464 @ 0x1011a464 */

int FUN_1011a464(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + iVar3);
    if (uVar2 - 0x30 < 10) {
      iVar1 = iVar1 + -0x30;
    }
    else if (uVar2 - 0x41 < 6) {
      iVar1 = iVar1 + -0x37;
    }
    else {
      if (5 < uVar2 - 0x61) {
        return 0;
      }
      iVar1 = iVar1 + -0x57;
    }
    bVar4 = iVar3 != 3;
    iVar1 = uVar2 + iVar1;
    iVar3 = iVar3 + 1;
    if (bVar4) {
      iVar1 = iVar1 * 0x10;
    }
  } while (iVar3 != 4);
  return iVar1;
}

