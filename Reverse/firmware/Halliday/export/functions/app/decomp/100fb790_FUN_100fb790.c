/* FUN_100fb790 @ 0x100fb790 */

undefined4 FUN_100fb790(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_3[2];
  iVar1 = *param_2;
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  if (iVar1 < iVar2) {
    param_3[2] = iVar1;
  }
  iVar2 = param_2[1];
  if (param_3[4] < iVar1) {
    param_3[4] = iVar1;
  }
  iVar4 = *param_1;
  if (iVar2 < param_3[3]) {
    param_3[3] = iVar2;
  }
  if (param_3[5] < iVar2) {
    param_3[5] = iVar2;
  }
  if ((iVar4 < iVar3) || (iVar2 = param_3[4], iVar2 < iVar4)) {
    iVar3 = FUN_100f85ec(*param_3 - iVar4,iVar1 - iVar4,(*param_3 - iVar4) + (iVar1 - iVar4),iVar2,
                         param_4);
    iVar4 = iVar4 + iVar3;
    if (iVar4 < param_3[2]) {
      param_3[2] = iVar4;
    }
    if (param_3[4] < iVar4) {
      param_3[4] = iVar4;
    }
  }
  iVar1 = param_1[1];
  iVar3 = param_3[3];
  if ((iVar1 < iVar3) || (iVar3 = param_3[5], iVar3 < iVar1)) {
    iVar3 = FUN_100f85ec(param_3[1] - iVar1,param_2[1] - iVar1,
                         (param_3[1] - iVar1) + (param_2[1] - iVar1),iVar3,param_4);
    iVar3 = iVar3 + iVar1;
    if (iVar3 < param_3[3]) {
      param_3[3] = iVar3;
    }
    if (param_3[5] < iVar3) {
      param_3[5] = iVar3;
    }
  }
  iVar3 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = iVar3;
  return 0;
}

