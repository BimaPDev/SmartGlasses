/* FUN_1008ccfc @ 0x1008ccfc */

void FUN_1008ccfc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 uint param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_4;
  if (0x166 < (int)param_4) {
    uVar4 = 0x167;
  }
  uVar3 = 0x167;
  if ((int)param_5 < 0x168) {
    uVar3 = param_5;
  }
  uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
  if ((int)uVar3 < (int)uVar4) {
    sVar1 = ((short)uVar3 + 0x168) - (short)uVar4;
  }
  else {
    iVar2 = uVar3 - uVar4;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    sVar1 = (short)iVar2;
  }
  *(short *)(param_1 + 0x22) = sVar1;
  *param_1 = DAT_1008cd88;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[4] = uVar4;
  param_1[5] = uVar3;
  FUN_1012802a(param_1 + 6,param_2,param_3,(int)(short)uVar4,0xb3 < (int)param_4);
  FUN_1012802a(param_1 + 0x14,param_2,param_3,(int)(short)uVar3);
  return;
}

