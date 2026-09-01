/* FUN_1011b56c @ 0x1011b56c */

int FUN_1011b56c(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0xe;
  }
  else if ((uint)param_1[6] < param_1[4] + param_1[2] + param_3) {
    iVar1 = -0xc;
  }
  else {
    uVar2 = 0;
    while( true ) {
      iVar1 = param_1[2];
      uVar4 = param_3 - uVar2;
      uVar3 = param_1[1] - iVar1;
      if (uVar4 < uVar3) break;
      FUN_1011ea40(iVar1 + *param_1,param_2 + uVar2,uVar3);
      param_1[2] = param_1[1];
      iVar1 = FUN_1005bb44(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = uVar2 + uVar3;
    }
    if (uVar2 < param_3) {
      FUN_1011ea40(iVar1 + *param_1,param_2 + uVar2,uVar4);
      param_1[2] = param_1[2] + uVar4;
    }
    if (param_4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      if (param_1[2] != 0) {
        iVar1 = FUN_1005bb44(param_1);
        return iVar1;
      }
    }
  }
  return iVar1;
}

