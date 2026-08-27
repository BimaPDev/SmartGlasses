/* FUN_2c47ede8 @ 0x2c47ede8 */

void FUN_2c47ede8(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  
  pbVar4 = param_2;
  pbVar7 = param_1;
  do {
    pbVar5 = pbVar4 + 4;
    *pbVar7 = *pbVar4;
    pbVar7[1] = pbVar4[1];
    pbVar7[2] = pbVar4[2];
    pbVar7[3] = pbVar4[3];
    iVar2 = DAT_2c47ee98;
    iVar1 = DAT_2c47ee94;
    pbVar4 = pbVar5;
    pbVar7 = pbVar7 + 4;
  } while (pbVar5 != param_2 + 0x20);
  uVar8 = 8;
  do {
    bVar11 = param_1[0x1c];
    bVar9 = param_1[0x1d];
    uVar10 = (uint)bVar9;
    bVar3 = param_1[0x1e];
    bVar6 = param_1[0x1f];
    if ((uVar8 & 7) == 0) {
      bVar9 = *(byte *)(iVar1 + (uint)bVar3);
      bVar3 = *(byte *)(iVar1 + (uint)bVar6);
      bVar6 = *(byte *)(iVar1 + (uint)bVar11);
      bVar11 = *(byte *)(iVar1 + uVar10) ^ *(byte *)(iVar2 + (uVar8 >> 3));
    }
    else if ((uVar8 & 7) == 4) {
      bVar11 = *(byte *)(iVar1 + (uint)bVar11);
      bVar9 = *(byte *)(iVar1 + uVar10);
      bVar3 = *(byte *)(iVar1 + (uint)bVar3);
      bVar6 = *(byte *)(iVar1 + (uint)bVar6);
    }
    uVar8 = uVar8 + 1;
    param_1[0x20] = bVar11 ^ *param_1;
    param_1[0x21] = bVar9 ^ param_1[1];
    param_1[0x22] = bVar3 ^ param_1[2];
    param_1[0x23] = bVar6 ^ param_1[3];
    param_1 = param_1 + 4;
  } while (uVar8 != 0x3c);
  return;
}

