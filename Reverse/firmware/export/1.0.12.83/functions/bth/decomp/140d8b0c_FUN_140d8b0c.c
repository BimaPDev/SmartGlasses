/* FUN_140d8b0c @ 0x140d8b0c */

bool FUN_140d8b0c(byte *param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar3 = (byte *)*param_3;
  uVar4 = *(int *)(pbVar3 + -0xc) - 1;
  uVar6 = param_2 - 1U;
  if (uVar4 <= param_2 - 1U) {
    uVar6 = uVar4;
  }
  bVar7 = true;
  pbVar5 = param_1;
  while ((pbVar5 != param_1 + uVar6 && (bVar7 != false))) {
    pbVar1 = pbVar3 + uVar4;
    uVar4 = uVar4 - 1;
    bVar7 = *pbVar1 == *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  bVar2 = param_1[uVar6];
  pbVar5 = pbVar3 + uVar4;
  while ((pbVar5 != pbVar3 && (bVar7 != false))) {
    bVar7 = *pbVar5 == bVar2;
    pbVar5 = pbVar5 + -1;
  }
  if (('\0' < (char)bVar2) && (bVar2 < *pbVar3)) {
    bVar7 = false;
  }
  return bVar7;
}

