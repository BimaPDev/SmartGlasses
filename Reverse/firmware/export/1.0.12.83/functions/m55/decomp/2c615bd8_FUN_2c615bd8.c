/* FUN_2c615bd8 @ 0x2c615bd8 */

void FUN_2c615bd8(undefined4 param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar5 = FUN_2c602400();
  iVar6 = FUN_2c602414(param_1);
  cVar2 = FUN_2c632620(uVar5);
  puVar7 = (ushort *)FUN_2c615964(iVar6);
  uVar1 = *puVar7;
  uVar15 = (uint)(char)(cVar2 + '\x01');
  *(ushort *)(iVar6 + 0x2c) = uVar1;
  *(undefined1 *)(iVar6 + 0x2f) = 1;
  *(char *)(iVar6 + 0x2e) = cVar2 + '\x01';
  uVar13 = 0;
  FUN_2c635ec0(*(undefined4 *)(iVar6 + 0x24),0x20);
  do {
    uVar8 = uVar13 & 0xffff;
    uVar13 = uVar13 + 1;
    FUN_2c635e10(*(undefined4 *)(iVar6 + 0x24),uVar8,0x20);
    uVar11 = DAT_2c615868;
    uVar8 = DAT_2c615864;
  } while (uVar13 != 7);
  uVar13 = (uint)uVar1;
  iVar3 = FUN_2c6154a4(uVar13,uVar15);
  if (uVar15 < 3) {
    iVar10 = 0xc;
  }
  else {
    iVar10 = 0;
  }
  uVar9 = uVar13 - (uVar15 < 3);
  uVar8 = (uint)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x20);
  uVar8 = (uVar9 + 1 + (uVar9 >> 2) + (uVar8 >> 7) +
          (uint)((ulonglong)DAT_2c61586c * (ulonglong)((iVar10 + uVar15) * 0x1f - 0x3e) >> 0x23)) -
          (uVar8 >> 5);
  iVar10 = (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
  uVar8 = uVar8 + (iVar10 + (uVar8 - iVar10 >> 1) >> 2) * -7;
  uVar9 = iVar3 + uVar8;
  uVar11 = uVar8 & 0xff;
  if (uVar8 < uVar9) {
    iVar3 = 1 - uVar11;
    uVar14 = uVar8;
    iVar10 = iVar6 + (uVar8 + 0x46) * 4;
    do {
      uVar12 = iVar3 + uVar14;
      uVar14 = uVar14 + 1;
      FUN_2c62dbd4(iVar10,4,DAT_2c615870,uVar12 & 0xff);
      iVar10 = iVar10 + 4;
    } while (uVar14 != uVar9);
  }
  else {
    iVar3 = 1 - uVar11;
  }
  iVar10 = FUN_2c6154a4(uVar13,uVar15 - 1);
  uVar5 = DAT_2c615870;
  if (uVar8 != 0) {
    uVar13 = 7;
    iVar4 = iVar6 + 0x118;
    do {
      FUN_2c62dbd4(iVar4,4,uVar5,((iVar10 + iVar3 & 0xffU) - 7) + uVar13 & 0xff);
      uVar15 = uVar13 + 1 & 0xffff;
      FUN_2c635e10(*(undefined4 *)(iVar6 + 0x24),uVar13,0x20);
      uVar13 = uVar15;
      iVar4 = iVar4 + 4;
    } while ((uVar8 + 7 & 0xffff) != uVar15);
  }
  uVar5 = DAT_2c615870;
  if ((int)uVar9 < 0x2a) {
    iVar10 = 1;
    iVar3 = iVar6 + (uVar9 + 0x46) * 4;
    do {
      FUN_2c62dbd4(iVar3,4,uVar5,iVar10);
      iVar3 = iVar3 + 4;
      FUN_2c635e10(*(undefined4 *)(iVar6 + 0x24),uVar9 + 6 + iVar10 & 0xffff,0x20);
      iVar10 = iVar10 + 1;
    } while (iVar6 + 0x1c0 != iVar3);
  }
  FUN_2c6155cc(iVar6);
  iVar3 = FUN_2c635f80(*(undefined4 *)(iVar6 + 0x24));
  if (iVar3 != 0xffff) {
    FUN_2c635dd0(*(undefined4 *)(iVar6 + 0x24),uVar11 + 7 & 0xff);
  }
  FUN_2c607df0(iVar6);
  iVar3 = FUN_2c6041fc(iVar6);
  if (iVar3 != 0) {
    iVar10 = 0;
    do {
      iVar4 = FUN_2c6041dc(iVar6,iVar10);
      iVar10 = iVar10 + 1;
      if (*(int *)(iVar6 + 0x24) != iVar4) {
        FUN_2c602340(iVar4,0x1c,iVar6);
      }
    } while (iVar3 != iVar10);
  }
  return;
}

