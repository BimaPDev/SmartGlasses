/* FUN_1012f3ec @ 0x1012f3ec */

void FUN_1012f3ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 * param_3) / 1000;
  *(int *)(param_1 + 0x14) = iVar1;
  if (param_2 != 0) {
    iVar1 = 0x8000000 / iVar1;
    *(int *)(param_1 + 0x18) = iVar1;
    *(int *)(param_1 + 0x1c) = 0x8000000 - iVar1;
  }
  return;
}

