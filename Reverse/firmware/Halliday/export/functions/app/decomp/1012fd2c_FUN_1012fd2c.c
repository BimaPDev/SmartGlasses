/* FUN_1012fd2c @ 0x1012fd2c */

undefined4 FUN_1012fd2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar2 = 0xffffff80;
    }
    else {
      iVar1 = FUN_1013009e(*(undefined1 *)(param_1 + 0xcb));
      if (iVar1 == 0) {
        FUN_1013013c(extraout_r2,0);
        uVar3 = 5;
        uVar2 = *(undefined4 *)(param_1 + 0x48);
      }
      else {
        uVar3 = 2;
        uVar2 = extraout_r2;
      }
      FUN_1013013c(uVar2,uVar3);
      uVar2 = 0;
    }
    return uVar2;
  }
  *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) & 0xf7;
  return 0;
}

