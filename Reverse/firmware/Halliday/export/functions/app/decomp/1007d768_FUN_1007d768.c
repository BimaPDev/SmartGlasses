/* FUN_1007d768 @ 0x1007d768 */

void FUN_1007d768(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  
  iVar4 = DAT_1007d8f0;
  cVar2 = *(char *)(DAT_1007d8f0 + 0x141);
  if (((int)((uint)*(byte *)(DAT_1007d8f0 + 0x13c) << 0x1c) < 0) &&
     ((sVar3 = *(short *)(DAT_1007d8f0 + 0x15c), sVar3 == 0 ||
      (*(short *)(DAT_1007d8f0 + 0x15c) = sVar3 + -1, sVar3 == 1)))) {
    uVar12 = (DAT_1007d8f8 - DAT_1007d8f4) * 0x20 & 0xff00;
    FUN_100a5b78(uVar12 | 0x38c0031,DAT_1007d900,DAT_1007d8fc);
    FUN_1007a33c(1);
    *(byte *)(iVar4 + 0x13c) = *(byte *)(iVar4 + 0x13c) & 0xf7;
    uVar10 = FUN_1007abc8();
    uVar5 = FUN_1007a694();
    FUN_1007d5e8(uVar10,uVar5);
    if (*(char *)(iVar4 + 0x13f) == '\x01') {
      if ((*(byte *)(iVar4 + 9) < 5) || (*(int *)(iVar4 + 0x1c8) != 0)) {
        *(byte *)(iVar4 + 0x143) = *(byte *)(iVar4 + 9);
        bVar9 = *(byte *)(iVar4 + 0x13e) & 0xfe;
      }
      else {
        FUN_100a5b78(DAT_1007d904 | uVar12,DAT_1007d900,DAT_1007d908);
        *(undefined1 *)(iVar4 + 0x143) = 4;
        bVar9 = *(byte *)(iVar4 + 0x13e) | 1;
      }
      *(byte *)(iVar4 + 0x13e) = bVar9;
    }
  }
  else {
    uVar10 = 0xffffffff;
  }
  switch(*(undefined1 *)(iVar4 + 0x141)) {
  case 0:
    FUN_1007c1ec(0);
    FUN_1007cd14(uVar10);
    break;
  case 1:
    FUN_1007c1ec(0);
    FUN_1007ce0c(uVar10);
    break;
  case 2:
    FUN_1007c1ec(1);
    FUN_1007ce80(uVar10);
    break;
  case 3:
    FUN_1007c1ec(0);
    FUN_1007cfb4(uVar10);
    break;
  case 4:
    FUN_1007b3f0();
    iVar11 = FUN_1011feca();
    FUN_1007c1ec(iVar11 != 0);
    FUN_1007d200(uVar10);
    break;
  case 5:
    FUN_1007c1ec(0);
    FUN_1007d55c(uVar10);
  }
  if (*(char *)(iVar4 + 0x141) != cVar2) {
    iVar11 = DAT_1007d8f8 - DAT_1007d8f4;
    uVar10 = FUN_1007a86c(cVar2);
    uVar8 = FUN_1007a86c(*(undefined1 *)(iVar4 + 0x141));
    uVar12 = iVar11 * 0x20 & 0xff00;
    FUN_100a5b78(uVar12 | 0x3e40032,DAT_1007d900,DAT_1007d90c,uVar10,uVar8);
    *(undefined2 *)(iVar4 + 0x158) = 0;
    if ((cVar2 != '\x04') && (*(char *)(iVar4 + 0x141) == '\x04')) {
      uVar10 = FUN_1011fee8();
      *(undefined4 *)(iVar4 + 0x1d8) = uVar10;
      FUN_100a5b78(DAT_1007d910 | uVar12,DAT_1007d900,DAT_1007d914,uVar10,uVar8);
    }
  }
  iVar11 = FUN_1007addc();
  iVar4 = DAT_1007c8e8;
  if (*(char *)(DAT_1007c8e8 + 0x145) != '\0') {
    if (-1 < *(int *)(DAT_1007c8e8 + 0x1d0) << 0x15) {
      FUN_100a5b78(DAT_1007c8f4 | (DAT_1007c8f0 - DAT_1007c8ec) * 0x20 & 0xff00U,DAT_1007c8fc,
                   DAT_1007c8f8);
      return;
    }
    bVar1 = *(byte *)(DAT_1007c8e8 + 0x146);
    uVar12 = (uint)*(byte *)(DAT_1007c8e8 + 0x142);
    bVar9 = *(byte *)(iVar11 + 2);
    if (bVar1 < 100) {
      iVar6 = FUN_1007c5fc(*(undefined1 *)(iVar11 + 1));
      uVar7 = FUN_1007c690((int)(iVar6 * (uint)bVar1) / 100);
      if (((int)uVar7 < (int)(uint)*(byte *)(iVar11 + 1)) &&
         ((*(int *)(iVar4 + 0x1c8) == 0 || (*(char *)(iVar4 + 0x146) == '\0')))) {
        uVar12 = uVar7;
      }
      if (*(byte *)(iVar4 + 0x147) < 0x20) {
        bVar9 = *(byte *)(iVar4 + 0x147);
      }
    }
    FUN_1007c414(uVar12,bVar9);
    *(undefined1 *)(iVar4 + 0x145) = 0;
  }
  return;
}

