/* FUN_2c65e6ee @ 0x2c65e6ee */

int FUN_2c65e6ee(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (iVar1 != -1) {
    iVar1 = *(int *)param_1[2];
    param_1[2] = (int)((int *)param_1[2] + 1);
  }
  return iVar1;
}

