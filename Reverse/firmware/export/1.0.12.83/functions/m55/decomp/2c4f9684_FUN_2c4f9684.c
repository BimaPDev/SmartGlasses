/* FUN_2c4f9684 @ 0x2c4f9684 */

void FUN_2c4f9684(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[10] == 0) {
    iVar1 = param_1[1];
    param_1[5] = param_1[5] - iVar1;
    param_1[6] = param_1[6] - iVar1 & param_1[9] - 1;
    param_1[2] = param_1[2] + iVar1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_2c4f959c(param_1 + 2,*param_1,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

