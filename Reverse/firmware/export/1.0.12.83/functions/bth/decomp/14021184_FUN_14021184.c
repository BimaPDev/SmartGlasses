/* FUN_14021184 @ 0x14021184 */

void FUN_14021184(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_2;
  iVar3 = *param_3;
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = param_6;
    iVar1 = param_6 - iVar2 >> 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = param_5;
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0xc) = iVar1;
    iVar4 = iVar2;
    iVar5 = iVar3;
    if (iVar1 < 1) goto LAB_140211d8;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar5 = iVar4 - iVar2 >> 1;
    iVar1 = *(int *)(param_1 + 0xc) + iVar5;
    iVar5 = iVar3 - iVar5;
    if (iVar1 < 1) goto LAB_140211ae;
  }
  if ((iVar5 < 1) || (iVar4 <= iVar2)) {
LAB_140211d8:
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined4 *)(param_1 + 4) = param_5;
    *param_2 = iVar2;
    *param_3 = iVar3;
    return;
  }
LAB_140211ae:
  *param_2 = iVar4;
  *param_3 = iVar5;
  return;
}

