/* FUN_2c4dfd60 @ 0x2c4dfd60 */

int FUN_2c4dfd60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != 0 || param_4 != 0) {
    for (iVar1 = 1; iVar1 < *(int *)(param_1 + 0xc); iVar1 = iVar1 + 1) {
      if (param_4 == *(int *)(*(int *)(param_1 + 8) + iVar1 * 8 + 4) &&
          param_3 == *(int *)(*(int *)(param_1 + 8) + iVar1 * 8)) {
        return iVar1;
      }
    }
  }
  return 0;
}

