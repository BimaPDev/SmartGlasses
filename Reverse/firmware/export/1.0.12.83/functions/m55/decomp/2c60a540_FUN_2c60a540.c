/* FUN_2c60a540 @ 0x2c60a540 */

void FUN_2c60a540(undefined4 param_1,int param_2,uint param_3,short *param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  param_2 = param_2 - (param_3 >> 1);
  uVar2 = ~(ushort)param_3 & 1;
  iVar3 = FUN_2c62e208((int)(short)(0x5a - (short)param_1));
  iVar4 = FUN_2c62e208(param_1);
  iVar4 = param_2 * iVar4 >> 7;
  iVar3 = param_2 * iVar3 >> 7;
  sVar5 = (short)(param_3 >> 1);
  if (iVar3 < 1) {
    sVar1 = (short)((uint)(iVar3 + 0x7f) >> 8);
    param_4[2] = (sVar5 - uVar2) + sVar1;
    *param_4 = sVar1 - sVar5;
  }
  else {
    sVar1 = (short)((uint)(iVar3 + -0x7f) >> 8);
    *param_4 = (uVar2 - sVar5) + sVar1;
    param_4[2] = sVar1 + sVar5;
  }
  if (0 < iVar4) {
    sVar1 = (short)((uint)(iVar4 + -0x7f) >> 8);
    param_4[3] = sVar1 + sVar5;
    param_4[1] = (uVar2 + sVar1) - sVar5;
    return;
  }
  sVar1 = (short)((uint)(iVar4 + 0x7f) >> 8);
  param_4[1] = sVar1 - sVar5;
  param_4[3] = (sVar5 + sVar1) - uVar2;
  return;
}

