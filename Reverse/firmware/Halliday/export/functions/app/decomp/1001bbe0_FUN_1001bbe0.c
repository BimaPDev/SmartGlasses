/* FUN_1001bbe0 @ 0x1001bbe0 */

void FUN_1001bbe0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *extraout_r2;
  byte *pbVar7;
  int iVar8;
  uint extraout_r3;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  
  iVar8 = *DAT_1001bc60;
  pbVar5 = param_2 + 1;
  pbVar7 = param_1 + 1;
  uVar9 = (uint)*param_1;
  if ((uint)*param_2 <= (uint)*param_1) {
    uVar9 = (uint)*param_2;
  }
  while ((int)(pbVar7 + ~(uint)param_1) < (int)uVar9) {
    bVar11 = *pbVar5 <= *pbVar7;
    bVar10 = *pbVar7 == *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar7 = pbVar7 + 1;
    if (!bVar10) goto LAB_1001bc36;
  }
  pbVar5 = param_2 + 0x16;
  uVar9 = (uint)param_1[0x15];
  if ((uint)param_2[0x15] <= (uint)param_1[0x15]) {
    uVar9 = (uint)param_2[0x15];
  }
  iVar3 = -0x16 - (int)param_1;
  pbVar7 = param_1 + 0x16;
  do {
    uVar12 = CONCAT44(pbVar5,iVar3);
    if ((int)(pbVar7 + iVar3) < (int)uVar9) goto LAB_1001bc48;
    uVar4 = 0;
    while( true ) {
      if (*DAT_1001bc60 == iVar8) {
        return;
      }
      uVar12 = FUN_1013cdc0(uVar4);
      pbVar7 = extraout_r2;
      uVar9 = extraout_r3;
LAB_1001bc48:
      pbVar6 = (byte *)((ulonglong)uVar12 >> 0x20);
      iVar3 = (int)uVar12;
      bVar1 = *pbVar7;
      pbVar5 = pbVar6 + 1;
      bVar2 = *pbVar6;
      bVar11 = bVar2 <= bVar1;
      bVar10 = false;
      pbVar7 = pbVar7 + 1;
      if (bVar1 == bVar2) break;
LAB_1001bc36:
      if (!bVar11 || bVar10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 1;
      }
    }
  } while( true );
}

