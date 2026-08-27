/* FUN_2c4d349c @ 0x2c4d349c */

int FUN_2c4d349c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_2 * 4;
  iVar1 = param_2 * 0x2c;
  if ((*(int *)(iVar3 + 0x310) != 0) && (0 < *(int *)(iVar3 + 0x314))) {
    iVar2 = param_1 + iVar1;
    if (*(int *)(iVar2 + 0x60) == 0) {
      iVar1 = iVar1 + 0x44 + param_1;
      FUN_2c4d766c(iVar1,*(undefined4 *)(iVar2 + 0x40));
    }
    else if (*(int *)(iVar2 + 0x40) == 0) {
      iVar1 = iVar1 + 0x44 + param_1;
    }
    else {
      iVar1 = iVar1 + 0x44 + param_1;
      FUN_2c4d7598(iVar1,*(undefined4 *)(iVar2 + 0x3c));
    }
    param_1 = param_2 * 0x2c + param_1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar1 = FUN_2c4d76a8(iVar1);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar3 + 0x314) - (*(int *)(iVar3 + 0x310) - iVar1);
    }
    return iVar1;
  }
  iVar3 = param_1 + iVar1;
  if (*(int *)(iVar3 + 0x60) == 0) {
    iVar1 = iVar1 + 0x44 + param_1;
    FUN_2c4d766c(iVar1,*(undefined4 *)(iVar3 + 0x40));
  }
  else if (*(int *)(iVar3 + 0x40) == 0) {
    iVar1 = iVar1 + 0x44 + param_1;
  }
  else {
    iVar1 = iVar1 + 0x44 + param_1;
    FUN_2c4d7598(iVar1,*(undefined4 *)(iVar3 + 0x3c));
  }
  param_1 = param_2 * 0x2c + param_1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar1 = FUN_2c4d76a8(iVar1);
  return iVar1;
}

