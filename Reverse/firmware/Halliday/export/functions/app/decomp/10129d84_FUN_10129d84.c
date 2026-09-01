/* FUN_10129d84 @ 0x10129d84 */

void FUN_10129d84(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((*(int *)(param_1 + 0x1c) == 0) && (iVar2 == 0x100)) {
    *param_4 = param_2 << 8;
    param_3 = param_3 << 8;
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x28);
    param_3 = param_3 - *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar3 = *(int *)(param_1 + 0x14) * param_2 - *(int *)(param_1 + 0x10) * param_3;
      if (iVar2 == 0x100) {
        *param_4 = iVar1 + (iVar3 >> 2);
        iVar2 = *(int *)(param_1 + 0x24) +
                (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3 >> 2);
      }
      else {
        *param_4 = iVar1 + (iVar3 * iVar2 >> 10);
        iVar2 = *(int *)(param_1 + 0x24) +
                ((*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3) *
                 *(int *)(param_1 + 0x18) >> 10);
      }
      *param_5 = iVar2;
      return;
    }
    *param_4 = iVar2 * param_2 + iVar1;
    param_3 = *(int *)(param_1 + 0x18) * param_3 + *(int *)(param_1 + 0x24);
  }
  *param_5 = param_3;
  return;
}

