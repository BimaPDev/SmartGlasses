/* FUN_2c64f89e @ 0x2c64f89e */

int * FUN_2c64f89e(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + -1;
  if (iVar2 == 1) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

