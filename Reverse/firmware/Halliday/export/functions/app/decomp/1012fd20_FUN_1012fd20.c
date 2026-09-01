/* FUN_1012fd20 @ 0x1012fd20 */

undefined4 FUN_1012fd20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 == 0) {
      uVar2 = 0xffffff80;
    }
    else {
      iVar1 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
      if (iVar1 == 0) {
        FUN_101300ac(iVar3,0,0);
        uVar2 = 5;
        iVar3 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar2 = 2;
      }
      FUN_101300ac(iVar3,uVar2,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 8;
  return 0;
}

