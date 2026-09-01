/* FUN_1012820e @ 0x1012820e */

void FUN_1012820e(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  param_2 = param_2 - (param_3 >> 1);
  uVar5 = param_3 >> 1;
  iVar1 = FUN_1013d980((int)(short)(0x5a - (short)param_1));
  iVar2 = FUN_1013d980(param_1);
  iVar3 = param_2 * iVar1 >> 7;
  iVar1 = param_2 * iVar2 >> 7;
  uVar4 = ~param_3 & 1;
  if (iVar3 < 1) {
    iVar2 = iVar3 + 0x7f >> 8;
    *param_4 = iVar2 - uVar5;
    iVar2 = (uVar5 - uVar4) + iVar2;
  }
  else {
    iVar2 = iVar3 + -0x7f >> 8;
    *param_4 = (uVar4 - uVar5) + iVar2;
    iVar2 = uVar5 + iVar2;
  }
  param_4[2] = iVar2;
  if (iVar1 < 1) {
    iVar1 = iVar1 + 0x7f >> 8;
    param_4[1] = iVar1 - uVar5;
    iVar1 = (uVar5 - uVar4) + iVar1;
  }
  else {
    iVar1 = iVar1 + -0x7f >> 8;
    param_4[1] = (uVar4 - uVar5) + iVar1;
    iVar1 = uVar5 + iVar1;
  }
  param_4[3] = iVar1;
  return;
}

