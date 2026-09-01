/* FUN_1012e1d0 @ 0x1012e1d0 */

int FUN_1012e1d0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = param_3 * param_2;
  if ((int)param_4[1] < iVar3) {
    if (0x5ff < iVar3) {
      return -1;
    }
    puVar4 = param_4 + 5;
    puVar5 = (undefined4 *)*param_4;
    iVar2 = iVar3;
    while ((int)param_4[1] < iVar2) {
      if ((int)param_4[1] < 0) {
        return -0x66;
      }
      FUN_1011ea40(param_1,param_4[2] + (int)puVar4);
      param_1 = param_1 + param_4[1];
      iVar2 = iVar2 - param_4[1];
      param_4[1] = 0;
      param_4[2] = 0;
      iVar1 = (*(code *)*puVar5)(puVar4,1,0x200,puVar5);
      if (iVar1 < 0) {
        return -0x67;
      }
      if (iVar1 == 0) break;
      param_4[1] = iVar1;
      if (iVar2 <= iVar1) {
        if (iVar2 < 0) {
          return -0x68;
        }
        FUN_1011ea40(param_1,param_4[2] + (int)puVar4,iVar2);
        param_4[1] = param_4[1] - iVar2;
        param_4[2] = iVar2 + param_4[2];
        iVar2 = 0;
      }
    }
  }
  else {
    if (iVar3 < 0) {
      return -0x65;
    }
    iVar2 = 0;
    FUN_1011ea40(param_1,(int)param_4 + param_4[2] + 0x14,iVar3,param_4[2],param_1,param_2,param_3);
    param_4[1] = param_4[1] - iVar3;
    param_4[2] = param_4[2] + iVar3;
  }
  param_4[3] = param_4[3] + (iVar3 - iVar2);
  if (iVar2 != 0) {
    param_3 = (iVar3 - iVar2) / param_2;
  }
  return param_3;
}

