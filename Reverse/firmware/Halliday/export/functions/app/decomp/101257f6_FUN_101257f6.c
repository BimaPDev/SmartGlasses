/* FUN_101257f6 @ 0x101257f6 */

void FUN_101257f6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_101254a6();
  *param_2 = *(int *)(param_1 + 0x14);
  param_2[1] = *(int *)(param_1 + 0x18);
  param_2[2] = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  param_2[3] = iVar2;
  FUN_1012a862(param_2,-iVar1,-iVar1,iVar2,param_4);
  iVar1 = FUN_101254be(param_1);
  *param_2 = iVar1 + *param_2;
  iVar1 = FUN_101254b2(param_1);
  param_2[2] = param_2[2] - iVar1;
  iVar1 = FUN_101254d6(param_1);
  param_2[1] = iVar1 + param_2[1];
  iVar1 = FUN_101254ca(param_1);
  param_2[3] = param_2[3] - iVar1;
  return;
}

