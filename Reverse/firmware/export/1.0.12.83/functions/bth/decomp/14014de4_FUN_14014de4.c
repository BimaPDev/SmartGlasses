/* FUN_14014de4 @ 0x14014de4 */

void FUN_14014de4(int *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_4;
  param_2 = param_2 + (param_3 - uVar1);
  uVar4 = (uint)(param_1[6] - *param_1) >> 3;
  if (uVar1 <= uVar4) {
    uVar4 = uVar1;
  }
  if (uVar4 != 0) {
    iVar5 = 0;
    iVar2 = param_1[5];
    uVar1 = param_1[1];
    do {
      uVar3 = iVar2 - uVar1;
      if (uVar4 <= iVar2 - uVar1) {
        uVar3 = uVar4;
      }
      func_0x13f43328(param_1[4] + uVar1,param_2,uVar3);
      iVar2 = param_1[5];
      uVar1 = param_1[1] + uVar3 & iVar2 - 1U;
      uVar4 = uVar4 - uVar3;
      *param_1 = *param_1 + uVar3 * 8;
      param_1[1] = uVar1;
      iVar5 = iVar5 + uVar3;
      param_2 = param_2 + uVar3;
    } while (uVar4 != 0);
    uVar1 = *param_4 - iVar5;
  }
  *param_4 = uVar1;
  return;
}

