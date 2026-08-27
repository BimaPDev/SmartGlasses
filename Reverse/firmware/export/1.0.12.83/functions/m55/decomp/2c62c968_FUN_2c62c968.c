/* FUN_2c62c968 @ 0x2c62c968 */

void FUN_2c62c968(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c62c45c(*param_1 + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(*param_1 + iVar1 + 4) = 0;
    iVar2 = param_1[2];
    *(int *)(iVar1 + *param_1) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + *param_1 + 4) = iVar1;
    }
    param_1[2] = iVar1;
    if (param_1[1] == 0) {
      param_1[1] = iVar1;
      return;
    }
  }
  return;
}

