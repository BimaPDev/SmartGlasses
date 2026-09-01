/* FUN_10105a2c @ 0x10105a2c */

void FUN_10105a2c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x12e) == 0) {
    sVar1 = *(short *)(param_1 + 0x130);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 8);
    iVar2 = FUN_100f85ec(param_4,(int)*(short *)(param_1 + 0x12e),*(undefined4 *)(param_1 + 0x238));
    sVar1 = *(short *)(param_1 + 0x130);
    *(int *)(*(int *)(param_2 + 0xc) + param_3 * 8) = iVar2 + iVar3;
  }
  if (sVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_2 + 0xc) + param_3 * 8 + 4);
  iVar2 = FUN_100f85ec(param_4,(int)sVar1,*(undefined4 *)(param_1 + 0x238));
  *(int *)(param_3 * 8 + *(int *)(param_2 + 0xc) + 4) = iVar2 + iVar3;
  return;
}

