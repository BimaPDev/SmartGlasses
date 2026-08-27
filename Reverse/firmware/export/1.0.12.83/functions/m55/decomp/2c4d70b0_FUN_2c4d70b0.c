/* FUN_2c4d70b0 @ 0x2c4d70b0 */

void FUN_2c4d70b0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  param_1[2] = (uint)(param_4 != 0);
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    iVar1 = FUN_2c4d6fc4(param_2,param_3,param_3,(uint)(param_4 != 0),param_4);
    if (iVar1 != 0) {
      return;
    }
  }
  *param_1 = DAT_2c4d70e0;
  param_1[1] = 0xf;
  return;
}

