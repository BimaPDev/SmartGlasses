/* FUN_1011a4de @ 0x1011a4de */

void FUN_1011a4de(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = FUN_1011ea10(param_1[2] + *param_1);
    param_1[2] = iVar1 + param_1[2];
  }
  return;
}

