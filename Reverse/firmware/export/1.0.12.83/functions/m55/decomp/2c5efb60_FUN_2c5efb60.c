/* FUN_2c5efb60 @ 0x2c5efb60 */

void FUN_2c5efb60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c5fee30(*(undefined4 *)(param_1 + 0x2c));
  }
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = param_1 + 0x20;
    if (iVar1 == 0) {
      FUN_2c5ee9ac(iVar2);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x28) = param_2;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        FUN_2c5ee9d4(iVar2);
        return;
      }
    }
    iVar1 = FUN_2c66960c(param_2,iVar1,0x96);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x28) = param_2;
      FUN_2c5ee9d4(iVar2);
      return;
    }
  }
  return;
}

