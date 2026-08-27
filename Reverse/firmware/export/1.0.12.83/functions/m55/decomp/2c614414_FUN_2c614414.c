/* FUN_2c614414 @ 0x2c614414 */

void FUN_2c614414(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 short param_5)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (0x166 < (int)param_4) {
    param_4 = 0x167;
  }
  uVar4 = 0x167;
  if (param_5 < 0x168) {
    uVar4 = (int)param_5;
  }
  param_4 = param_4 & ~((int)param_4 >> 0x1f);
  uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  if ((int)uVar4 < (int)param_4) {
    sVar2 = ((short)uVar4 + 0x168) - (short)param_4;
  }
  else {
    iVar3 = uVar4 - param_4;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar2 = (short)iVar3;
  }
  *(short *)(param_1 + 0x1a) = sVar2;
  uVar1 = DAT_2c61449c;
  *(short *)(param_1 + 3) = (short)param_4;
  *param_1 = uVar1;
  *(short *)(param_1 + 2) = (short)param_2;
  *(short *)((int)param_1 + 10) = (short)param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)((int)param_1 + 0xe) = (short)uVar4;
  FUN_2c6143bc(param_1 + 4);
  FUN_2c6143bc(param_1 + 0xf,param_2,param_3,uVar4);
  return;
}

