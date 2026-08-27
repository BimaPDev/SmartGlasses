/* FUN_2c64cdb4 @ 0x2c64cdb4 */

void FUN_2c64cdb4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = param_2;
  param_1[1] = iVar1;
  **(int **)(param_2 + 4) = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  return;
}

