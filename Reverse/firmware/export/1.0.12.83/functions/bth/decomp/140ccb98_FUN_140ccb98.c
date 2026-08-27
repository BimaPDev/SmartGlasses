/* FUN_140ccb98 @ 0x140ccb98 */

void FUN_140ccb98(int param_1,undefined1 param_2,byte *param_3,int param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;
  
  iVar3 = 0;
  uVar5 = 0;
  while( true ) {
    bVar1 = param_3[uVar5];
    iVar7 = (int)param_6 - (int)param_5;
    pbVar2 = param_3 + uVar5;
    if ((iVar7 <= (int)(uint)bVar1) || ((char)bVar1 < '\x01')) break;
    param_6 = param_6 + -(uint)bVar1;
    if (uVar5 < param_4 - 1U) {
      uVar5 = uVar5 + 1;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  puVar6 = (undefined1 *)(param_1 + -1);
  for (; param_5 != param_6; param_5 = param_5 + 1) {
    puVar6 = puVar6 + 1;
    *puVar6 = *param_5;
  }
  puVar6 = (undefined1 *)(param_1 + iVar7);
  while (bVar9 = iVar3 != 0, iVar3 = iVar3 + -1, bVar9) {
    *puVar6 = param_2;
    bVar1 = *pbVar2;
    puVar8 = param_6 + bVar1;
    puVar4 = puVar6;
    for (; param_6 != puVar8; param_6 = param_6 + 1) {
      puVar4 = puVar4 + 1;
      *puVar4 = *param_6;
    }
    puVar6 = puVar6 + bVar1 + 1;
  }
  while (pbVar2 != param_3) {
    *puVar6 = param_2;
    pbVar2 = pbVar2 + -1;
    bVar1 = *pbVar2;
    puVar8 = param_6 + bVar1;
    puVar4 = puVar6;
    for (; param_6 != puVar8; param_6 = param_6 + 1) {
      puVar4 = puVar4 + 1;
      *puVar4 = *param_6;
    }
    puVar6 = puVar6 + bVar1 + 1;
  }
  return;
}

