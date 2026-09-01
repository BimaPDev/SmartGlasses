/* FUN_100f743c @ 0x100f743c */

void FUN_100f743c(undefined1 *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  param_4 = param_4 * param_3;
  iVar5 = (param_4 + 1) - 8 / param_5;
  if (iVar5 < 1) {
    iVar6 = 0;
  }
  else {
    if (param_5 == 2) {
      iVar6 = 0;
      pbVar7 = param_2;
      pbVar11 = param_1 + -1;
      do {
        bVar3 = *pbVar7;
        pbVar8 = pbVar7 + 3;
        pbVar1 = pbVar7 + 1;
        pbVar2 = pbVar7 + 2;
        iVar6 = iVar6 + 4;
        pbVar7 = pbVar7 + 4;
        pbVar11[1] = bVar3 & 0xc0 | *pbVar8 >> 6 | (byte)((int)(uint)*pbVar1 >> 2) & 0x30 |
                     (byte)((int)(uint)*pbVar2 >> 4) & 0xc;
        pbVar8 = pbVar11 + (2 - (int)param_1);
        pbVar11 = pbVar11 + 1;
      } while (iVar6 < iVar5);
    }
    else if (param_5 == 4) {
      iVar6 = 0;
      pbVar7 = param_1 + -1;
      do {
        pbVar11 = param_2 + iVar6;
        iVar4 = iVar6 + 1;
        iVar6 = iVar6 + 2;
        pbVar7[1] = *pbVar11 & 0xf0 | param_2[iVar4] >> 4;
        pbVar8 = pbVar7 + (2 - (int)param_1);
        pbVar7 = pbVar7 + 1;
      } while (iVar6 < iVar5);
    }
    else {
      pbVar8 = (byte *)0x0;
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 8 / param_5;
        pbVar8 = pbVar8 + 1;
      } while (iVar6 < iVar5);
    }
    param_1 = param_1 + (int)pbVar8;
  }
  if (param_4 - iVar6 != 0 && iVar6 <= param_4) {
    if (param_5 == 2) {
      uVar9 = 0;
      uVar10 = 0;
      pbVar7 = param_2 + iVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        uVar10 = (int)(*pbVar7 & 0xc0) >> (uVar9 & 0xff) & 0xffU | uVar10;
        uVar9 = uVar9 + 2;
      } while (param_2 + param_4 + -1 != pbVar7);
      *param_1 = (char)uVar10;
      return;
    }
    if (param_5 == 4) {
      uVar10 = 0;
      uVar9 = 0;
      pbVar7 = param_2 + iVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        uVar9 = (int)(*pbVar7 & 0xf0) >> (uVar10 & 0xff) & 0xffU | uVar9;
        uVar10 = uVar10 + 4;
      } while (pbVar7 != param_2 + param_4 + -1);
      *param_1 = (char)uVar9;
      return;
    }
  }
  *param_1 = 0;
  return;
}

