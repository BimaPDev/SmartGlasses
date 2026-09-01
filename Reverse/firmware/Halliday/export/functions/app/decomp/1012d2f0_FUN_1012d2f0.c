/* FUN_1012d2f0 @ 0x1012d2f0 */

uint FUN_1012d2f0(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1[2];
  uVar3 = (*param_1 + iVar5) - param_1[1];
  if (uVar3 < param_3) {
    param_3 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar4 = param_1[7];
      uVar6 = iVar5 - iVar4;
      iVar1 = param_1[4] + iVar4;
      uVar2 = param_3;
      if (uVar6 < param_3) {
        FUN_1011ea40(iVar1,param_2,uVar6,uVar3,param_4);
        iVar1 = param_1[4];
        uVar2 = (param_3 + iVar4) - iVar5;
        param_2 = param_2 + uVar6;
        uVar3 = extraout_r3;
      }
      FUN_1011ea40(iVar1,param_2,uVar2,uVar3,param_4);
    }
    param_1[1] = param_1[1] + param_3;
    uVar3 = param_1[7] + param_3;
    param_1[7] = uVar3;
    if ((uint)param_1[2] <= uVar3) {
      param_1[7] = uVar3 - param_1[2];
    }
  }
  return param_3;
}

