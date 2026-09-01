/* FUN_1012f3d0 @ 0x1012f3d0 */

void FUN_1012f3d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 * param_3) / 1000;
  *(int *)(param_1 + 8) = iVar1;
  if (param_2 != 0) {
    iVar1 = 0x8000000 / iVar1;
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return;
}

