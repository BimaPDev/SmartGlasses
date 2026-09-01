/* FUN_1012c93e @ 0x1012c93e */

void FUN_1012c93e(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (((*(int *)(param_2 + 4) != 0) && (2 < *(byte *)(param_2 + 0x10))) &&
     ((*param_3 != *param_4 || (param_3[1] != param_4[1])))) {
    if (((*(byte *)(param_2 + 0x11) & 3) != 2) && (iVar1 = FUN_1009dbd4(), iVar1 != 0)) {
      local_20 = *param_4;
      iVar2 = *param_3;
      iVar1 = *(int *)(param_2 + 4) / 2;
      local_28 = local_20;
      if (iVar2 < local_20) {
        local_28 = iVar2;
      }
      local_28 = -iVar1 + local_28;
      if (local_20 < iVar2) {
        local_20 = iVar2;
      }
      local_20 = local_20 + iVar1;
      local_1c = param_4[1];
      iVar2 = param_3[1];
      local_24 = local_1c;
      if (iVar2 < local_1c) {
        local_24 = iVar2;
      }
      local_24 = -iVar1 + local_24;
      if (local_1c < iVar2) {
        local_1c = iVar2;
      }
      local_1c = local_1c + iVar1;
      iVar1 = FUN_1012a896(&local_28,&local_28,*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1008cb9c(&local_28);
      if (iVar1 == 0) {
        FUN_1012a87c(&local_28,-**(int **)(param_1 + 4),-(*(int **)(param_1 + 4))[1]);
        local_30 = **(int **)(param_1 + 4);
        local_2c = (*(int **)(param_1 + 4))[1];
        local_38 = *param_3 - local_30;
        local_34 = param_3[1] - local_2c;
        local_30 = *param_4 - local_30;
        local_2c = param_4[1] - local_2c;
        iVar1 = FUN_1009d4c8(&local_38,&local_30,&local_28,param_2);
        if (iVar1 == 1) {
          return;
        }
      }
    }
    FUN_10090120(param_1,param_2,param_3,param_4);
  }
  return;
}

