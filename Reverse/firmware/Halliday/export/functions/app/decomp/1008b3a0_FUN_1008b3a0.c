/* FUN_1008b3a0 @ 0x1008b3a0 */

void FUN_1008b3a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((param_2 != 0) || (param_2 = FUN_10086bac(*DAT_1008b428), param_2 != 0)) {
    FUN_1008b0a0(param_1,param_2);
    iVar1 = FUN_10126fae(param_2);
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = FUN_10126fd2(iVar2);
      bVar4 = false;
      for (iVar3 = 0; iVar3 != iVar1; iVar3 = iVar3 + 1) {
        if (bVar4) {
          FUN_1008b0a0(param_1);
        }
        else {
          bVar4 = param_2 == *(int *)(**(int **)(iVar2 + 8) + iVar3 * 4);
        }
      }
      FUN_10086f50(iVar2,0x17,param_1);
      FUN_10086f50(iVar2,0x18,param_1);
      FUN_10086f50(iVar2,0x19,param_1);
      iVar1 = FUN_10126fae(iVar2);
      param_2 = iVar2;
    }
  }
  return;
}

