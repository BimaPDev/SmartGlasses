/* FUN_1008cbec @ 0x1008cbec */

void FUN_1008cbec(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  FUN_1012787a(param_1,0x38,param_3,param_4,param_4);
  iVar2 = param_3;
  iVar6 = param_2;
  if (param_3 == param_5) {
    if (param_6 == 3) {
      param_5 = param_5 + -1;
      iVar2 = param_3 + -1;
    }
  }
  else if (param_5 < param_3) {
    iVar2 = param_5;
    param_5 = param_3;
    iVar6 = param_4;
    param_4 = param_2;
  }
  param_1[4] = param_4;
  param_1[5] = param_5;
  uVar7 = param_5 - iVar2;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc | param_6 & 3;
  uVar5 = DAT_1008ccf8;
  uVar4 = param_4 - iVar6;
  bVar1 = (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) <
          (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe | bVar1;
  param_1[2] = iVar6;
  param_1[3] = iVar2;
  param_1[7] = iVar6;
  param_1[8] = iVar2;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((int)((uint)bVar1 << 0x1f) < 0) {
    if (uVar4 != 0) {
      param_1[10] = (int)(uVar7 * (0x100000 / (int)uVar4)) >> 10;
    }
    if (uVar7 != 0) {
      param_1[9] = (int)((0x100000 / (int)uVar7) * uVar4) >> 10;
    }
    uVar5 = param_1[10];
  }
  else {
    if (uVar7 != 0) {
      param_1[9] = (int)(uVar4 * (0x100000 / (int)uVar7)) >> 10;
    }
    if (uVar4 != 0) {
      param_1[10] = (int)(uVar7 * (0x100000 / (int)uVar4)) >> 10;
    }
    uVar5 = param_1[9];
  }
  param_1[0xb] = uVar5;
  bVar3 = *(byte *)(param_1 + 6) & 3;
  iVar2 = param_1[0xb];
  if ((*(byte *)(param_1 + 6) & 3) == 0) goto LAB_1008cc92;
  if (bVar3 != 1) {
    if (bVar3 == 2) {
      if (iVar2 < 1) {
LAB_1008cc92:
        bVar3 = *(byte *)(param_1 + 0xd) & 0xfd;
        goto LAB_1008cc96;
      }
    }
    else if (0 < iVar2) goto LAB_1008cc92;
  }
  bVar3 = *(byte *)(param_1 + 0xd) | 2;
LAB_1008cc96:
  *(byte *)(param_1 + 0xd) = bVar3;
  iVar6 = iVar2 >> 2;
  if (iVar2 < 0) {
    iVar6 = -iVar6;
  }
  param_1[0xc] = iVar6;
  return;
}

