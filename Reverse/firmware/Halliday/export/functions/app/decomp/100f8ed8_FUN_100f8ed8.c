/* FUN_100f8ed8 @ 0x100f8ed8 */

void FUN_100f8ed8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  if (param_3 == 3) {
    iVar2 = *(int *)(iVar4 + 0xc4);
    iVar1 = *(int *)(iVar4 + 0xbc);
    iVar6 = *(int *)(iVar4 + 200);
    iVar5 = *(int *)(iVar4 + 0xc0);
    iVar3 = iVar2;
    if (iVar1 <= iVar2) {
      iVar3 = iVar1;
      iVar1 = iVar2;
    }
    iVar2 = iVar6;
    if (iVar5 <= iVar6) {
      iVar2 = iVar5;
      iVar5 = iVar6;
    }
    iVar6 = *(int *)(iVar4 + 0xb4);
    iVar4 = *(int *)(iVar4 + 0xb8);
    if (iVar1 < iVar6) {
      iVar1 = iVar6;
    }
    if (iVar6 < iVar3) {
      iVar3 = iVar6;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar4 < iVar2) {
      iVar2 = iVar4;
    }
    param_1[1] = param_1[1] - iVar5;
    param_1[2] = param_1[2] - iVar3;
    *param_1 = *param_1 - iVar1;
    param_1[3] = param_1[3] - iVar2;
    return;
  }
  if (param_3 != 4) {
    return;
  }
  iVar2 = *(int *)(iVar4 + 200);
  iVar1 = *(int *)(iVar4 + 0xc0);
  iVar6 = *(int *)(iVar4 + 0xc4);
  iVar5 = *(int *)(iVar4 + 0xbc);
  iVar3 = iVar2;
  if (iVar1 <= iVar2) {
    iVar3 = iVar1;
    iVar1 = iVar2;
  }
  iVar2 = iVar6;
  if (iVar6 < iVar5) {
    iVar2 = iVar5;
    iVar5 = iVar6;
  }
  iVar6 = *(int *)(iVar4 + 0xb8);
  iVar4 = *(int *)(iVar4 + 0xb4);
  if (iVar1 < iVar6) {
    iVar1 = iVar6;
  }
  if (iVar6 < iVar3) {
    iVar3 = iVar6;
  }
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  if (iVar2 < iVar4) {
    iVar2 = iVar4;
  }
  param_1[1] = param_1[1] + iVar5;
  param_1[2] = param_1[2] - iVar3;
  *param_1 = *param_1 - iVar1;
  param_1[3] = param_1[3] + iVar2;
  return;
}

