/* FUN_1012d3ee @ 0x1012d3ee */

uint FUN_1012d3ee(int *param_1,undefined4 param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_1[2];
  uVar1 = (*param_1 + iVar2) - param_1[1];
  if (param_3 <= uVar1) {
    iVar3 = param_1[7];
    uVar4 = iVar2 - iVar3;
    if (uVar4 < param_3) {
      uVar1 = (*param_4)(param_2,param_1[4] + iVar3,uVar4,uVar1,param_4);
      if ((uVar1 == uVar4) &&
         (iVar2 = (*param_4)(param_2,param_1[4],(param_3 + iVar3) - iVar2), iVar2 != 0)) {
        uVar1 = uVar1 + iVar2;
      }
    }
    else {
      uVar1 = (*param_4)(param_2);
    }
    if (0 < (int)uVar1) {
      param_1[1] = param_1[1] + uVar1;
      uVar4 = param_1[7] + uVar1;
      param_1[7] = uVar4;
      if (uVar4 < (uint)param_1[2]) {
        return uVar1;
      }
      param_1[7] = uVar4 - param_1[2];
      return uVar1;
    }
  }
  return 0;
}

