/* FUN_100fbb34 @ 0x100fbb34 */

void FUN_100fbb34(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1[6] + param_1[4];
  iVar1 = param_1[4] + param_1[2];
  iVar5 = param_1[2] + *param_1;
  param_1[0xc] = param_1[6];
  iVar3 = iVar1 + iVar7;
  iVar1 = iVar1 + iVar5;
  iVar6 = param_1[1] + param_1[3];
  iVar2 = param_1[3] + param_1[5];
  iVar4 = param_1[5] + param_1[7];
  param_1[6] = iVar3 + iVar1 >> 3;
  param_1[4] = iVar1 >> 2;
  iVar1 = iVar6 + iVar2;
  iVar2 = iVar2 + iVar4;
  param_1[10] = iVar7 >> 1;
  param_1[8] = iVar3 >> 2;
  param_1[2] = iVar5 >> 1;
  param_1[0xd] = param_1[7];
  param_1[0xb] = iVar4 >> 1;
  param_1[9] = iVar2 >> 2;
  param_1[7] = iVar2 + iVar1 >> 3;
  param_1[5] = iVar1 >> 2;
  param_1[3] = iVar6 >> 1;
  return;
}

