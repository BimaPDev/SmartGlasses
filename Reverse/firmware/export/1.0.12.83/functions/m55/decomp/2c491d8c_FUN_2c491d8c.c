/* FUN_2c491d8c @ 0x2c491d8c */

void FUN_2c491d8c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  byte *pbVar4;
  
  puVar1 = DAT_2c491dc8;
  iVar2 = FUN_2c485890(*DAT_2c491dc8);
  do {
    iVar3 = FUN_2c4858a8(*puVar1);
    if (iVar2 == iVar3) {
      return;
    }
    pbVar4 = *(byte **)(iVar2 + 4);
    iVar2 = FUN_2c4858c0(iVar2);
  } while (*pbVar4 != param_1);
  FUN_2c485820(*puVar1,pbVar4,extraout_r2,param_4);
  return;
}

