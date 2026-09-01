/* FUN_1012d284 @ 0x1012d284 */

uint FUN_1012d284(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((uint)(param_1[1] - *param_1) < param_3) {
    param_3 = 0;
  }
  else if (param_2 != 0) {
    iVar3 = param_1[6];
    iVar5 = param_1[2];
    uVar4 = iVar5 - iVar3;
    iVar1 = param_1[4] + iVar3;
    uVar2 = param_3;
    if (uVar4 < param_3) {
      param_2 = FUN_1011ea40(param_2,iVar1,uVar4);
      iVar1 = param_1[4];
      param_2 = param_2 + uVar4;
      uVar2 = (param_3 + iVar3) - iVar5;
    }
    FUN_1011ea40(param_2,iVar1,uVar2);
  }
  return param_3;
}

