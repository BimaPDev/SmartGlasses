/* FUN_2c5f6a50 @ 0x2c5f6a50 */

void FUN_2c5f6a50(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_2c5f6a74;
  if (param_1 != (int *)0x0) {
    if ((param_1[1] != 0) && (param_1[1] != DAT_2c5f6a74)) {
      (**(code **)(*param_1 + 8))();
    }
    param_1[1] = iVar1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  return;
}

