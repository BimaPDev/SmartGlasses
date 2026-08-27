/* FUN_2c4dda26 @ 0x2c4dda26 */

int * FUN_2c4dda26(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = iVar1;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[2];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[3];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  FUN_2c4df4e6((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,0x800);
  return param_1;
}

