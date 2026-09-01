/* FUN_1012584c @ 0x1012584c */

void FUN_1012584c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_10126fd2();
  for (iVar4 = 0; iVar4 != iVar1; iVar4 = iVar4 + 1) {
    iVar3 = *(int *)(**(int **)(param_1 + 8) + iVar4 * 4);
    if ((param_4 == 0) || (iVar2 = FUN_10124cb8(iVar3,0x40000), iVar2 == 0)) {
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + param_2;
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + param_3;
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + param_2;
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + param_3;
      FUN_1012584c(iVar3,param_2,param_3,0);
    }
  }
  return;
}

