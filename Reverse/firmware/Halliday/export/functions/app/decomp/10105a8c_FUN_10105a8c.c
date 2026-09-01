/* FUN_10105a8c @ 0x10105a8c */

void FUN_10105a8c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)((int)param_1 + 0x12e) != 0) {
    if (*(int *)(*(int *)(*param_1 + 0x60) + 0x40) == 0x23) {
      iVar2 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 8);
      iVar1 = FUN_100f85ec(param_4,(int)*(short *)((int)param_1 + 0x12e),param_1[0x8e]);
      *(int *)(*(int *)(param_2 + 0x10) + param_3 * 8) = iVar1 + iVar2;
    }
    *(byte *)(*(int *)(param_2 + 0x18) + param_3) =
         *(byte *)(*(int *)(param_2 + 0x18) + param_3) | 8;
  }
  if ((short)param_1[0x4c] == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 8 + 4);
  iVar1 = FUN_100f85ec(param_4,(int)(short)param_1[0x4c],param_1[0x8e]);
  iVar2 = *(int *)(param_2 + 0x18);
  *(int *)(*(int *)(param_2 + 0x10) + param_3 * 8 + 4) = iVar1 + iVar3;
  *(byte *)(iVar2 + param_3) = *(byte *)(iVar2 + param_3) | 0x10;
  return;
}

