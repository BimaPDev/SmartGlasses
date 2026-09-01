/* FUN_100e0ec8 @ 0x100e0ec8 */

void FUN_100e0ec8(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  char cVar9;
  byte *pbVar10;
  byte local_48 [16];
  byte abStack_38 [16];
  byte local_28 [20];
  
  pbVar10 = local_48;
  pbVar8 = param_2 + 0x10;
  pbVar3 = abStack_38;
  do {
    pbVar8 = pbVar8 + -1;
    bVar6 = *pbVar8;
    if (bVar6 < 0xa0) {
      bVar5 = (bVar6 >> 4) + 0x30;
    }
    else {
      bVar5 = (bVar6 >> 4) + 0x57;
    }
    bVar6 = bVar6 & 0xf;
    *pbVar3 = bVar5;
    if (bVar6 < 10) {
      bVar6 = bVar6 + 0x30;
    }
    else {
      bVar6 = bVar6 + 0x57;
    }
    pbVar3[1] = bVar6;
    pbVar3 = pbVar3 + 2;
  } while (pbVar8 != param_2);
  iVar4 = 0;
  pbVar8 = abStack_38;
  pbVar3 = local_48;
  do {
    bVar5 = *pbVar8;
    iVar4 = iVar4 + 1;
    bVar6 = pbVar8[0x10];
    if (bVar5 - 0x61 < 6) {
      cVar7 = bVar5 + 0xa9;
    }
    else {
      cVar7 = bVar5 - 0x30;
    }
    if (bVar6 - 0x61 < 6) {
      cVar9 = bVar6 + 0xa9;
    }
    else {
      cVar9 = bVar6 - 0x30;
    }
    *pbVar3 = cVar7 * '\x10' + cVar9;
    pbVar8 = pbVar8 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 != 0x10);
  iVar4 = 0x10;
  pbVar8 = local_48;
  pbVar3 = DAT_100e0f84;
  do {
    iVar4 = iVar4 + -1;
    *pbVar8 = *pbVar8 ^ *pbVar3;
    pbVar8 = pbVar8 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 != 0);
  do {
    uVar1 = *(undefined4 *)pbVar10;
    uVar2 = *(undefined4 *)(pbVar10 + 4);
    pbVar10 = pbVar10 + 8;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1 = param_1 + 2;
  } while (pbVar10 != abStack_38);
  return;
}

