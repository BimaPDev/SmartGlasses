/* FUN_1011be5a @ 0x1011be5a */

void FUN_1011be5a(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 * 0xa0 + param_2;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    *(undefined4 *)(iVar1 + -4) = 0;
    iVar2 = iVar1 + -4;
    if ((int *)param_1[1] == (int *)0x0) {
      *param_1 = iVar2;
      param_1[1] = iVar2;
    }
    else {
      *(int *)param_1[1] = iVar2;
      param_1[1] = iVar2;
    }
    iVar1 = iVar1 + -0xa0;
  } while (param_2 != iVar1);
  FUN_1013ca1a(param_1 + 2,param_3);
  return;
}

