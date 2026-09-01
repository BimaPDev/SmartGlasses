/* FUN_100ba888 @ 0x100ba888 */

void FUN_100ba888(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar3 = DAT_100baaf4;
  bVar2 = *(byte *)(DAT_100baaf4 + 0x18e);
  if ((bVar2 & 4) == 0) {
    FUN_1011aab8(bVar2 & 4);
  }
  iVar8 = FUN_100566a4();
  if ((bVar2 & 4) == 0) {
    FUN_1011aabe(bVar2 & 4);
  }
  puVar7 = DAT_100bab44;
  piVar6 = DAT_100bab40;
  if (iVar8 == -1) {
    FUN_100a5b78(DAT_100bab00 | (DAT_100baafc - DAT_100baaf8) * 0x20 & 0xff00U,DAT_100bab08,
                 DAT_100bab04,0xffffffff,param_1,param_2,param_3,param_4);
    goto LAB_100ba8ca;
  }
  iVar13 = iVar8 / 10;
  iVar11 = *DAT_100bab14;
  if (iVar8 < -299) {
    if (-0x1e < iVar11) {
      iVar11 = 3;
      goto LAB_100ba9de;
    }
  }
  else if (iVar8 < -99) {
    if ((-10 < iVar11) || ((iVar11 < -0x1d && (iVar13 != -0x1d)))) {
      iVar11 = 2;
      goto LAB_100ba9de;
    }
  }
  else if (iVar8 < 0x6e) {
    if ((10 < iVar11) || ((iVar11 < -9 && (iVar13 != -9)))) {
      iVar11 = 1;
      goto LAB_100ba9de;
    }
  }
  else if (iVar8 < 0x1cc) {
    if ((0x2d < iVar11) || ((iVar11 < 0xb && (iVar13 != 0xb)))) {
      iVar11 = 0;
      goto LAB_100ba9de;
    }
  }
  else if (iVar8 < 0x2c6) {
    if ((0x46 < iVar11) || ((iVar11 < 0x2e && (iVar13 != 0x2e)))) {
      iVar11 = -1;
      goto LAB_100ba9de;
    }
  }
  else if (iVar8 < 0x3f2) {
    if ((100 < iVar11) || ((iVar11 < 0x47 && (iVar13 != 0x47)))) {
      iVar11 = -2;
LAB_100ba9de:
      iVar12 = *DAT_100bab40;
      *DAT_100bab14 = iVar13;
      *puVar7 = iVar11 + iVar12 & 0x1fU | *puVar7 & 0xffffffe0;
      FUN_1011598c(300);
      FUN_100a5b78((DAT_100baafc - DAT_100baaf8) * 0x20 & 0xff00U | DAT_100bab20,DAT_100bab28,
                   DAT_100bab24,iVar13,iVar11,*piVar6,iVar11 + iVar12,*puVar7);
    }
  }
  else if ((iVar11 < 0x65) && (iVar13 != 0x65)) {
    iVar11 = -3;
    goto LAB_100ba9de;
  }
  FUN_1011aab8(0);
  FUN_10083cbc(iVar13);
  FUN_1011aabe(0);
  if ((*(byte *)(iVar3 + 0x18e) & 3) == 0) {
    uVar9 = FUN_1013d02e(iVar8 % 10);
    FUN_100a5b78(DAT_100bab18 | (DAT_100baafc - DAT_100baaf8) * 0x20 & 0xff00U,DAT_100bab08,
                 DAT_100bab1c,iVar13,uVar9);
    *(byte *)(iVar3 + 0x18e) = *(byte *)(iVar3 + 0x18e) & 0xfc | 1;
  }
  else {
    iVar11 = FUN_1013d02e(iVar8 - *(short *)(iVar3 + 400));
    puVar5 = DAT_100bab34;
    if (iVar11 < 0x96) {
      uVar1 = *DAT_100bab34;
      *DAT_100bab34 = uVar1 + 1;
      if (uVar1 < 0x259) {
        if ((int)((uint)*(byte *)(iVar3 + 0x18e) << 0x1d) < 0) goto LAB_100ba8ca;
        uVar9 = FUN_1013d02e(iVar8 % 10);
        iVar8 = DAT_100baafc - DAT_100baaf8;
        uVar10 = DAT_100bab3c;
      }
      else {
        *puVar5 = 0;
        uVar9 = FUN_1013d02e(iVar8 % 10);
        iVar8 = DAT_100baafc - DAT_100baaf8;
        uVar10 = DAT_100bab38;
      }
      FUN_100a5b78(uVar10 | iVar8 * 0x20 & 0xff00U,DAT_100bab08,DAT_100bab1c,iVar13,uVar9);
      goto LAB_100ba8ca;
    }
    uVar9 = FUN_1013d02e(iVar8 % 10);
    FUN_100a5b78(DAT_100bab2c | (DAT_100baafc - DAT_100baaf8) * 0x20 & 0xff00U,DAT_100bab08,
                 DAT_100bab30,iVar13,uVar9);
    FUN_100ba860(1);
    FUN_100ba874();
  }
  *(short *)(iVar3 + 400) = (short)iVar8;
LAB_100ba8ca:
  uVar4 = DAT_100bab10;
  uVar9 = DAT_100bab0c;
  *(byte *)(iVar3 + 0x18e) = *(byte *)(iVar3 + 0x18e) | 4;
  FUN_1011dc20(uVar4,uVar9,1000);
  return;
}

