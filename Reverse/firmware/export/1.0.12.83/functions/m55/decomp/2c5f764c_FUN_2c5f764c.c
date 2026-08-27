/* FUN_2c5f764c @ 0x2c5f764c */

int * FUN_2c5f764c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)*param_1)(1,0x4c,param_3,*(code **)*param_1,param_4);
  *piVar1 = *param_1;
  *(undefined2 *)(piVar1 + 0xd) = 0xe;
  iVar2 = param_1[4];
  piVar1[0xb] = iVar2;
  piVar1[9] = iVar2;
  piVar1[10] = param_2 + 1 + param_1[7] + param_1[6];
  piVar1[0xc] = param_1[7] + param_3 + 1 + param_1[6];
  iVar2 = (**(code **)(*param_1 + 4))(0,param_5 + 1);
  piVar1[7] = iVar2;
  if (param_4 != 0) {
    FUN_2c674668(iVar2,param_4,param_5);
    iVar2 = piVar1[7];
  }
  *(undefined1 *)(iVar2 + param_5) = 0;
  piVar1[8] = param_5;
  return piVar1;
}

