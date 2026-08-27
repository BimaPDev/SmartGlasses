/* FUN_2c5da60c @ 0x2c5da60c */

void FUN_2c5da60c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != iVar3) {
    FUN_2c5da3f8(iVar3,iVar2,(0x1f - LZCOUNT(iVar2 - iVar3 >> 2)) * 2,0);
    if (iVar2 - iVar3 < 0x41) {
      FUN_2c5da298(iVar3,iVar2,0);
      return;
    }
    iVar1 = iVar3 + 0x40;
    FUN_2c5da298(iVar3,iVar1,0);
    for (; iVar2 != iVar1; iVar1 = iVar1 + 4) {
      FUN_2c5da1fc(iVar1,0);
    }
  }
  return;
}

