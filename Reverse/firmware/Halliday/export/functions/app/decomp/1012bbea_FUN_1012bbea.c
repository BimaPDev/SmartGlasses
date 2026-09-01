/* FUN_1012bbea @ 0x1012bbea */

void FUN_1012bbea(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) != param_2) {
    iVar1 = param_2;
    if (*(int *)(param_1 + 0x34) <= param_2) {
      iVar1 = *(int *)(param_1 + 0x34);
    }
    iVar2 = *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x38)) {
      iVar2 = *(int *)(param_1 + 0x38);
    }
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    if (*(int *)(param_1 + 0x2c) != iVar1) {
      FUN_10095d34(param_1,iVar1,param_1 + 0x2c,param_1 + 0x4c,param_3,param_2);
    }
  }
  return;
}

