/* FUN_2c5efe08 @ 0x2c5efe08 */

void FUN_2c5efe08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_2c5efc00(iVar1);
    iVar1 = iVar2;
    param_3 = extraout_r2;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_2c473450(*(undefined4 *)param_1[4],param_1,param_3,param_4);
  return;
}

