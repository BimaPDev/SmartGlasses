/* FUN_2c615c0c @ 0x2c615c0c */

void FUN_2c615c0c(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar4 = FUN_2c602400();
  iVar5 = FUN_2c602414(param_1);
  sVar2 = FUN_2c632620(uVar4);
  iVar6 = FUN_2c615964(iVar5);
  cVar1 = *(char *)(iVar6 + 2);
  uVar14 = (uint)cVar1;
  *(ushort *)(iVar5 + 0x2c) = 0x7e7U - sVar2;
  *(undefined1 *)(iVar5 + 0x2f) = 1;
  *(char *)(iVar5 + 0x2e) = cVar1;
  uVar12 = 0;
  FUN_2c635ec0(*(undefined4 *)(iVar5 + 0x24),0x20);
  do {
    uVar7 = uVar12 & 0xffff;
    uVar12 = uVar12 + 1;
    FUN_2c635e10(*(undefined4 *)(iVar5 + 0x24),uVar7,0x20);
    uVar10 = DAT_2c615868;
    uVar7 = DAT_2c615864;
  } while (uVar12 != 7);
  uVar12 = (uint)(ushort)(0x7e7U - sVar2);
  iVar6 = FUN_2c6154a4(uVar12,uVar14);
  if (uVar14 < 3) {
    iVar9 = 0xc;
  }
  else {
    iVar9 = 0;
  }
  uVar8 = uVar12 - (uVar14 < 3);
  uVar7 = (uint)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20);
  uVar7 = (uVar8 + 1 + (uVar8 >> 2) + (uVar7 >> 7) +
          (uint)((ulonglong)DAT_2c61586c * (ulonglong)((iVar9 + uVar14) * 0x1f - 0x3e) >> 0x23)) -
          (uVar7 >> 5);
  iVar9 = (int)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20);
  uVar7 = uVar7 + (iVar9 + (uVar7 - iVar9 >> 1) >> 2) * -7;
  uVar8 = iVar6 + uVar7;
  uVar10 = uVar7 & 0xff;
  if (uVar7 < uVar8) {
    iVar6 = 1 - uVar10;
    uVar13 = uVar7;
    iVar9 = iVar5 + (uVar7 + 0x46) * 4;
    do {
      uVar11 = iVar6 + uVar13;
      uVar13 = uVar13 + 1;
      FUN_2c62dbd4(iVar9,4,DAT_2c615870,uVar11 & 0xff);
      iVar9 = iVar9 + 4;
    } while (uVar13 != uVar8);
  }
  else {
    iVar6 = 1 - uVar10;
  }
  iVar9 = FUN_2c6154a4(uVar12,uVar14 - 1);
  uVar4 = DAT_2c615870;
  if (uVar7 != 0) {
    uVar12 = 7;
    iVar3 = iVar5 + 0x118;
    do {
      FUN_2c62dbd4(iVar3,4,uVar4,((iVar9 + iVar6 & 0xffU) - 7) + uVar12 & 0xff);
      uVar14 = uVar12 + 1 & 0xffff;
      FUN_2c635e10(*(undefined4 *)(iVar5 + 0x24),uVar12,0x20);
      uVar12 = uVar14;
      iVar3 = iVar3 + 4;
    } while ((uVar7 + 7 & 0xffff) != uVar14);
  }
  uVar4 = DAT_2c615870;
  if ((int)uVar8 < 0x2a) {
    iVar9 = 1;
    iVar6 = iVar5 + (uVar8 + 0x46) * 4;
    do {
      FUN_2c62dbd4(iVar6,4,uVar4,iVar9);
      iVar6 = iVar6 + 4;
      FUN_2c635e10(*(undefined4 *)(iVar5 + 0x24),uVar8 + 6 + iVar9 & 0xffff,0x20);
      iVar9 = iVar9 + 1;
    } while (iVar5 + 0x1c0 != iVar6);
  }
  FUN_2c6155cc(iVar5);
  iVar6 = FUN_2c635f80(*(undefined4 *)(iVar5 + 0x24));
  if (iVar6 != 0xffff) {
    FUN_2c635dd0(*(undefined4 *)(iVar5 + 0x24),uVar10 + 7 & 0xff);
  }
  FUN_2c607df0(iVar5);
  iVar6 = FUN_2c6041fc(iVar5);
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      iVar3 = FUN_2c6041dc(iVar5,iVar9);
      iVar9 = iVar9 + 1;
      if (*(int *)(iVar5 + 0x24) != iVar3) {
        FUN_2c602340(iVar3,0x1c,iVar5);
      }
    } while (iVar6 != iVar9);
  }
  return;
}

