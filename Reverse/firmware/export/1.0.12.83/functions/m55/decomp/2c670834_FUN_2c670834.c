/* FUN_2c670834 @ 0x2c670834 */

void FUN_2c670834(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar1 = 0;
  iVar3 = (param_4 + 8) / 9;
  for (iVar2 = 1; iVar2 < iVar3; iVar2 = iVar2 << 1) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_2c6706e0(param_1,iVar1,iVar2,iVar3,param_4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c668484(DAT_2c6708c4,0xce,0,DAT_2c6708c0);
  }
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  if (param_3 < 10) {
    pbVar4 = (byte *)(param_2 + 10);
    param_3 = 9;
  }
  else {
    pbVar4 = (byte *)(param_2 + 9);
    do {
      pbVar5 = pbVar4 + 1;
      iVar1 = FUN_2c6707a4(param_1,iVar1,10,*pbVar4 - 0x30);
      pbVar4 = pbVar5;
    } while (pbVar5 != (byte *)(param_2 + param_3));
    pbVar4 = (byte *)(param_2 + 9) + param_3 + -8;
  }
  param_3 = param_3 - (int)pbVar4;
  for (; (int)(pbVar4 + param_3) < param_4; pbVar4 = pbVar4 + 1) {
    iVar1 = FUN_2c6707a4(param_1,iVar1,10,*pbVar4 - 0x30);
  }
  return;
}

