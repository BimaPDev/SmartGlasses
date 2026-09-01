/* FUN_1012c73e @ 0x1012c73e */

undefined4 FUN_1012c73e(int param_1,int *param_2,int *param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined1 auStack_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(byte *)((int)param_2 + 0xf) < 3) {
LAB_1012c750:
    uVar4 = 1;
  }
  else {
    if (((*(byte *)(param_2 + 4) & 0xf) != 2) && (iVar5 = FUN_1009dbd4(), iVar5 != 0)) {
      iVar5 = *param_3;
      iVar1 = param_3[1];
      iVar2 = param_3[2];
      iVar3 = param_3[3];
      if (*param_2 != 0x1000000) {
        FUN_1012809a(&local_48,(param_3[2] + 1) - *param_3,(param_3[3] + 1) - param_3[1],
                     (int)(short)*param_2,*(short *)((int)param_2 + 2),param_2 + 1);
        FUN_1012a87c(&local_48,*param_3,param_3[1]);
        iVar5 = local_48;
        iVar1 = iStack_44;
        iVar2 = local_40;
        iVar3 = iStack_3c;
      }
      iStack_3c = iVar3;
      local_40 = iVar2;
      iStack_44 = iVar1;
      local_48 = iVar5;
      iVar5 = FUN_1012a896(auStack_38,*(undefined4 *)(param_1 + 8),&local_48);
      if (iVar5 == 0) goto LAB_1012c750;
      FUN_1012a87c(auStack_38,-**(int **)(param_1 + 4),-(*(int **)(param_1 + 4))[1]);
      iVar5 = FUN_1008cb9c(auStack_38);
      if (((iVar5 == 0) && (*(byte *)((int)param_2 + 0xe) < 3)) &&
         (((*param_4 & 0x1f) == 0x15 || (uVar6 = FUN_1012a84e(auStack_38), 0x1f < uVar6)))) {
        local_24 = (*(int **)(param_1 + 4))[1];
        local_28 = *param_3 - **(int **)(param_1 + 4);
        iVar5 = (param_3[2] + 1) - *param_3;
        local_20 = local_28 + -1 + iVar5;
        local_1c = param_3[3] - local_24;
        local_24 = param_3[1] - local_24;
        uVar4 = FUN_1009d240(auStack_38,*(undefined4 *)(param_4 + 8),&local_28,iVar5,*param_4 & 0x1f
                             ,param_2);
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

