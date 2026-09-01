/* FUN_1012e0a2 @ 0x1012e0a2 */

undefined4 FUN_1012e0a2(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_100a9298(param_2);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = iVar3 * 0xc;
      if (param_1 == *(byte *)(iVar1 + 4 + iVar2)) {
        if (iVar1 + iVar2 + 4 != 0) {
          return *(undefined4 *)(iVar1 + iVar2 + 0xc);
        }
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x18);
  }
  return 0;
}

