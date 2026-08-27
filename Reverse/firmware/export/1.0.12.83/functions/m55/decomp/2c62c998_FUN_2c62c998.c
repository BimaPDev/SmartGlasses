/* FUN_2c62c998 @ 0x2c62c998 */

void FUN_2c62c998(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == param_1[1]) {
      iVar1 = *(int *)(param_2 + *param_1 + 4);
      param_1[1] = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + *param_1) = 0;
        return;
      }
      param_1[2] = 0;
      return;
    }
    if (param_2 == param_1[2]) {
      iVar1 = *(int *)(param_2 + *param_1);
      param_1[2] = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + *param_1 + 4) = 0;
        return;
      }
      param_1[1] = 0;
      return;
    }
    iVar3 = *param_1 + 4;
    iVar1 = *(int *)(param_2 + *param_1);
    iVar2 = *(int *)(param_2 + iVar3);
    if (iVar1 != 0) {
      *(int *)(iVar1 + iVar3) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + *param_1) = iVar1;
    }
  }
  return;
}

