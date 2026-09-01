/* FUN_1011a060 @ 0x1011a060 */

void FUN_1011a060(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  
  iVar7 = *param_1;
  iVar2 = FUN_1011a040(iVar7,*(undefined4 *)(iVar7 + 8));
  FUN_10119dc2(DAT_10054540,iVar7);
  FUN_10119dc2(DAT_10054544);
  uVar1 = DAT_10054550;
  piVar13 = (int *)(iVar7 + 0x10);
  for (uVar9 = 0; (int)uVar9 < iVar2 + 1; uVar9 = uVar9 + 1) {
    iVar10 = *piVar13;
    if (iVar10 != 0) {
      iVar8 = 0;
      uVar11 = 0;
      iVar3 = iVar10;
      do {
        uVar4 = FUN_1011a00e(iVar7);
        if (uVar11 < uVar4) {
          uVar11 = uVar4;
        }
        iVar3 = FUN_10119ff8(iVar7,iVar3,3);
        iVar8 = iVar8 + 1;
      } while (iVar10 != iVar3);
      if (iVar8 != 0) {
        if (*(uint *)(iVar7 + 8) < 0x8000) {
          iVar10 = 4;
        }
        else {
          iVar10 = 8;
        }
        FUN_10119dc2(uVar1,uVar9,(1 << (uVar9 & 0xff)) + -1 + (iVar10 + 8U >> 3),iVar8,uVar11,
                     uVar11 * 8 - iVar10);
      }
    }
    piVar13 = piVar13 + 1;
  }
  FUN_10119dc2(DAT_10054548);
  uVar1 = DAT_10054554;
  uVar9 = 0;
  iVar10 = 0;
  iVar2 = 0;
  while( true ) {
    iVar3 = FUN_10119ff8(iVar7,uVar9,1);
    if (iVar3 << 0x1f < 0) {
      if ((uVar9 != 0) && (uVar11 = *(uint *)(iVar7 + 8), uVar11 != uVar9)) {
        iVar3 = FUN_1011a00e(iVar7,uVar9);
        if (uVar11 < 0x8000) {
          iVar8 = 4;
        }
        else {
          iVar8 = 8;
        }
        iVar10 = (iVar10 + iVar3 * 8) - iVar8;
      }
      uVar12 = 0x2a;
    }
    else {
      iVar3 = FUN_1011a026(iVar7,uVar9);
      if (iVar3 == 0) {
        iVar3 = FUN_1011a00e(iVar7,uVar9);
        if (*(uint *)(iVar7 + 8) < 0x8000) {
          iVar8 = 4;
        }
        else {
          iVar8 = 8;
        }
        iVar2 = (iVar2 + iVar3 * 8) - iVar8;
        uVar12 = 0x2d;
      }
      else {
        uVar12 = 0x2e;
      }
    }
    uVar5 = FUN_1011a00e(iVar7,uVar9);
    iVar3 = FUN_10119ff8(iVar7,uVar9,0);
    uVar6 = FUN_1011a01a(iVar7,uVar9);
    FUN_10119dc2(uVar1,uVar9,uVar12,uVar5,uVar9 - iVar3,uVar6);
    if (*(uint *)(iVar7 + 8) == uVar9) break;
    uVar9 = FUN_1011a01a(iVar7,uVar9);
  }
  if (uVar9 < 0x8000) {
    iVar7 = 4;
  }
  else {
    iVar7 = 8;
  }
  uVar9 = iVar7 + uVar9 * 8;
  iVar7 = uVar9 - (iVar2 + iVar10);
  uVar9 = (iVar7 * 1000 + (uVar9 >> 1)) / uVar9;
  FUN_10119dc2(DAT_1005454c,iVar2,iVar10,iVar7,uVar9 / 10,uVar9 % 10);
  return;
}

