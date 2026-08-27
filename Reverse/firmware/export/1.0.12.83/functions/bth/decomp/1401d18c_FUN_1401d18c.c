/* FUN_1401d18c @ 0x1401d18c */

int FUN_1401d18c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1[1];
  uVar5 = 2 - uVar4;
  if ((int)uVar5 < 1) {
    uVar6 = 0;
    uVar5 = *param_1;
  }
  else {
    if (uVar5 == 0x20) {
      uVar6 = 0;
    }
    else {
      uVar6 = *param_1 << (uVar5 & 0xff);
    }
    uVar5 = FUN_1401c128(param_1 + 2);
    *param_1 = uVar5;
    uVar4 = param_1[1] + 0x20;
  }
  uVar9 = 0;
  uVar4 = uVar4 - 2;
  uVar1 = uVar4 & 0xff;
  uVar2 = *(uint *)(DAT_1401d234 + 8);
  iVar7 = 0;
  uVar8 = *(uint *)(DAT_1401d234 + 0x20);
  param_1[1] = uVar4;
  do {
    uVar10 = 8 - uVar4;
    if ((int)uVar10 < 1) {
      uVar10 = 0;
      uVar3 = *param_1;
    }
    else {
      if (uVar10 == 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = *param_1 << (uVar10 & 0xff);
      }
      uVar3 = FUN_1401c128(param_1 + 2);
      *param_1 = uVar3;
      uVar4 = param_1[1] + 0x20;
    }
    uVar4 = uVar4 - 8;
    bVar11 = uVar9 != ((uVar5 >> uVar1 | uVar6) & uVar2 & 0xff);
    param_1[1] = uVar4;
    uVar9 = uVar9 + 1;
    iVar7 = iVar7 * 0x100 + ((uVar3 >> (uVar4 & 0xff) | uVar10) & uVar8 & 0xff);
  } while (bVar11);
  return iVar7;
}

