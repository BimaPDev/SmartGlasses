/* FUN_10127e26 @ 0x10127e26 */

undefined4 FUN_10127e26(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  int iVar6;
  int extraout_r3;
  int extraout_r3_00;
  byte *extraout_r3_01;
  byte *extraout_r3_02;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  bVar1 = *(byte *)(param_5 + 0x1c);
  iVar13 = *(int *)(param_5 + 0xc);
  iVar12 = *(int *)(param_5 + 0x14);
  if ((bVar1 & 1) == 0) {
    if ((int)param_3 < iVar13) {
      return 0;
    }
    if (iVar12 < (int)param_3) {
      return 0;
    }
  }
  else {
    if ((int)param_3 < iVar13) {
      return 1;
    }
    if (iVar12 < (int)param_3) {
      return 1;
    }
  }
  iVar14 = *(int *)(param_5 + 8);
  iVar4 = *(int *)(param_5 + 0x18);
  iVar10 = *(int *)(param_5 + 0x10);
  uVar7 = iVar14 - param_2;
  if (((param_2 < iVar4 + iVar14) || (iVar6 = param_2 + param_4, iVar10 - iVar4 < iVar6)) &&
     ((iVar6 = iVar4 + iVar13, (int)param_3 < iVar6 || (iVar12 - iVar4 < (int)param_3)))) {
    if ((int)(param_3 - iVar13) < iVar4) {
      iVar6 = iVar6 + ~param_3;
    }
    else {
      iVar6 = (iVar6 + -1 + (param_3 - iVar13)) - iVar12;
    }
    iVar12 = *(int *)(param_5 + 0x20);
    iVar13 = (iVar6 + 1) * 2 + -2;
    uVar9 = (uint)*(ushort *)(*(int *)(iVar12 + 0xc) + (iVar6 + 1) * 2);
    uVar3 = (uint)*(ushort *)(*(int *)(iVar12 + 0xc) + iVar13);
    uVar11 = (uint)*(ushort *)(*(int *)(iVar12 + 8) + iVar13);
    uVar8 = (uVar7 + iVar4) - uVar11;
    iVar6 = uVar9 - uVar3;
    uVar11 = (((iVar10 + 1 + uVar7) - iVar14) - iVar4) + uVar11;
    iVar13 = uVar8 - 1;
    pbVar5 = (byte *)(*(int *)(iVar12 + 4) + uVar9);
    iVar12 = iVar13;
    uVar7 = uVar11;
    if ((bVar1 & 1) == 0) {
      for (; iVar13 - iVar12 < iVar6; iVar12 = iVar12 + -1) {
        pbVar5 = pbVar5 + -1;
        bVar1 = *pbVar5;
        if ((-1 < (int)uVar7) && ((int)uVar7 < (int)param_4)) {
          uVar2 = FUN_10127860(bVar1,*(undefined1 *)(param_1 + uVar7));
          *(undefined1 *)(param_1 + uVar7) = uVar2;
          uVar11 = extraout_r2;
          iVar12 = extraout_r3;
        }
        if ((-1 < iVar12) && (iVar12 < (int)param_4)) {
          uVar2 = FUN_10127860(bVar1,*(undefined1 *)(param_1 + iVar12));
          *(undefined1 *)(param_1 + extraout_r3_00) = uVar2;
          uVar11 = extraout_r2_00;
          iVar12 = extraout_r3_00;
        }
        uVar7 = uVar7 + 1;
      }
      if (-1 < iVar6) {
        uVar11 = uVar11 + iVar6;
      }
      if ((int)param_4 <= (int)uVar11) {
        uVar11 = param_4;
      }
      uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
      FUN_1012787a(uVar11 + param_1,param_4 - uVar11);
      uVar3 = uVar3 + (uVar8 - uVar9);
      if ((int)param_4 <= (int)uVar3) {
        uVar3 = param_4;
      }
      param_4 = uVar3 & ~((int)uVar3 >> 0x1f);
      goto LAB_10127eac;
    }
    for (; iVar13 - iVar12 < iVar6; iVar12 = iVar12 + -1) {
      pbVar5 = pbVar5 + -1;
      bVar1 = *pbVar5;
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)param_4)) {
        uVar2 = FUN_10127860(~bVar1,*(undefined1 *)(param_1 + uVar7));
        *(undefined1 *)(param_1 + uVar7) = uVar2;
        uVar11 = extraout_r2_01;
        pbVar5 = extraout_r3_01;
      }
      if ((-1 < iVar12) && (iVar12 < (int)param_4)) {
        uVar2 = FUN_10127860(~bVar1,*(undefined1 *)(param_1 + iVar12));
        *(undefined1 *)(param_1 + iVar12) = uVar2;
        uVar11 = extraout_r2_02;
        pbVar5 = extraout_r3_02;
      }
      uVar7 = uVar7 + 1;
    }
    if ((int)param_4 <= (int)uVar8) {
      uVar8 = param_4;
    }
    uVar7 = uVar8 & ~((int)uVar8 >> 0x1f);
    uVar3 = param_4 - uVar7;
    if ((int)(uVar11 - uVar7) <= (int)(param_4 - uVar7)) {
      uVar3 = uVar11 - uVar7;
    }
    param_4 = uVar3 & ~((int)uVar3 >> 0x1f);
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((int)param_4 < (int)uVar7) {
        return 0;
      }
      if (-1 < (int)uVar7) {
        FUN_1012787a(param_1,uVar7,param_3,iVar6,param_1,param_2,param_3);
      }
      uVar3 = (1 - param_2) + iVar10;
      if ((int)uVar3 < 1) {
        return 0;
      }
      if ((int)param_4 <= (int)uVar3) {
        if (uVar7 != 0) {
          return 2;
        }
        if (param_4 != uVar3) {
          return 2;
        }
        return 1;
      }
      param_4 = param_4 - uVar3;
      param_1 = uVar3 + param_1;
      goto LAB_10127eac;
    }
    uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
    if ((int)param_4 < (int)uVar7) {
      return 2;
    }
    iVar10 = (1 - param_2) + iVar10;
    if ((int)param_4 < iVar10) {
      param_4 = param_4 - uVar7;
    }
    else {
      param_4 = iVar10 - uVar7;
    }
    if ((int)param_4 < 0) {
      return 2;
    }
  }
  param_1 = param_1 + uVar7;
LAB_10127eac:
  FUN_1012787a(param_1,param_4);
  return 2;
}

