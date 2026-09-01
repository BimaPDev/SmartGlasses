/* FUN_10125e56 @ 0x10125e56 */

void FUN_10125e56(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 8);
  *param_2 = iVar4;
  param_2[1] = iVar1;
  param_2[2] = iVar3;
  param_2[3] = iVar5;
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x18);
    *param_2 = iVar4 - iVar2;
    param_2[2] = iVar3 + iVar2;
    param_2[1] = iVar1 - iVar2;
    param_2[3] = iVar2 + iVar5;
  }
  return;
}

