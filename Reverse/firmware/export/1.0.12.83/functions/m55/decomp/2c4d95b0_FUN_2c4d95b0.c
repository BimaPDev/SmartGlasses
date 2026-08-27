/* FUN_2c4d95b0 @ 0x2c4d95b0 */

void FUN_2c4d95b0(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_2;
  iVar5 = *param_3;
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = param_6;
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar1 = param_6 - iVar3 >> 1;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined4 *)(param_1 + 4) = param_5;
    *(int *)(param_1 + 0xc) = iVar1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar2 = iVar4 - iVar3 >> 1;
    iVar1 = *(int *)(param_1 + 0xc) + iVar2;
    iVar2 = iVar5 - iVar2;
    if ((iVar1 < 1) || ((0 < iVar2 && (iVar3 < iVar4)))) {
      *param_2 = iVar4;
      *param_3 = iVar2;
      return;
    }
  }
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 0x10) = iVar3;
  *(undefined4 *)(param_1 + 4) = param_5;
  *param_2 = iVar3;
  *param_3 = iVar5;
  return;
}

