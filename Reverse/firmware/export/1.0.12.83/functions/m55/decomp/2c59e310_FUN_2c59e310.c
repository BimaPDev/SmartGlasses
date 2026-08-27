/* FUN_2c59e310 @ 0x2c59e310 */

void FUN_2c59e310(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_2c59e29c(param_1 + 0x4c);
  if ((iVar1 == param_1 + 0x50) || (*(int *)(iVar1 + 0x28) < 2)) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (param_4 == 0) {
      iVar2 = FUN_2c59e29c(param_1 + 100,param_2);
      iVar2 = (*(int *)(iVar2 + 0x28) * param_3) / *DAT_2c59e3ec + iVar1;
      if ((iVar1 != iVar2) && (*(int *)(param_1 + 8) != 0)) {
        FUN_2c59d834(param_1,iVar2);
        if (iVar2 - 1U < 99) {
          FUN_2c59c32c(iVar2);
          return;
        }
      }
    }
    else if (param_4 == 1) {
      iVar2 = FUN_2c59e29c(param_1 + 0x7c,param_2);
      iVar3 = *DAT_2c59e3ec;
      iVar4 = (*(int *)(iVar2 + 0x28) * param_3) / iVar3;
      iVar2 = iVar1 + iVar4;
      if (((*(int *)(param_1 + 0x14) != iVar4) && (iVar1 != iVar2)) && (*(int *)(param_1 + 8) != 0))
      {
        if (iVar3 <= iVar2 + 1) {
          iVar2 = iVar3 + -1;
        }
        FUN_2c59d834(param_1,iVar2);
        if (iVar2 - 1U < 99) {
          FUN_2c59c32c(iVar2);
        }
        *(int *)(param_1 + 0x14) = iVar4;
      }
    }
    else if ((param_4 == 2) && (*(int *)(param_1 + 8) != 0)) {
      FUN_2c59d834(param_1,param_3);
      if (iVar1 - 1U < 99) {
        FUN_2c59c32c(iVar1);
        return;
      }
    }
  }
  return;
}

