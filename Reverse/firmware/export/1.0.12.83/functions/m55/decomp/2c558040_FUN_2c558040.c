/* FUN_2c558040 @ 0x2c558040 */

void FUN_2c558040(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1[2]);
  }
  if ((int *)*param_1 != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  iVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = iVar1;
  if ((int *)*param_2 == param_2 + 6) {
    *param_1 = (int)(param_1 + 6);
    param_1[6] = param_2[6];
  }
  else {
    *param_1 = *param_2;
  }
  uVar2 = param_2[1];
  param_1[1] = uVar2;
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  param_1[3] = param_2[3];
  if (iVar1 != 0) {
    *(int **)(*param_1 + (*(uint *)(iVar1 + 4) - uVar2 * (*(uint *)(iVar1 + 4) / uVar2)) * 4) =
         param_1 + 2;
  }
  *param_2 = (int)(param_2 + 6);
  param_2[5] = 0;
  param_2[1] = 1;
  param_2[6] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}

