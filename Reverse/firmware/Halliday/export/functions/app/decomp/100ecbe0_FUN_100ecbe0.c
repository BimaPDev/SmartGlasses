/* FUN_100ecbe0 @ 0x100ecbe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100ecbe0(int param_1,int *param_2,uint param_3)

{
  short sVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 *puVar17;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_100a5b78(DAT_100ecec8 | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100eced0,
                 DAT_100ececc);
    return 0xffffffff;
  }
  FUN_1011dbf4(DAT_100eced4,0xffffffff);
  iVar6 = DAT_100eced8;
  iVar10 = *param_2;
  piVar16 = *(int **)(DAT_100eced8 + 4);
  for (piVar8 = piVar16; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[0xf]) {
    if ((param_1 == *piVar8) && (piVar8[1] == *(int *)(iVar10 + 0xc))) {
      param_2[2] = piVar8[9];
      if (param_3 == 1) {
        piVar8[3] = piVar8[3] + 1;
      }
      iVar14 = piVar8[8];
      param_2[1] = iVar14;
      if (iVar14 == 0) goto LAB_100ecc2a;
      goto LAB_100ed0de;
    }
  }
  param_2[1] = 0;
LAB_100ecc2a:
  sVar1 = *(short *)(iVar10 + 0x1a);
  uVar13 = (uint)*(ushort *)(iVar10 + 0x14);
  uVar5 = (uint)*(ushort *)(iVar10 + 0x16);
  if (sVar1 == 7) {
    *(undefined2 *)(iVar10 + 0x18) = 2;
LAB_100ecc38:
    iVar14 = (uint)*(ushort *)(iVar10 + 0x18) * uVar5 * uVar13;
  }
  else if (sVar1 == 0xb) {
    iVar14 = (uVar13 + 3 & 0xfffffffc) * (uVar5 + 3 & 0xfffffffc);
  }
  else if (sVar1 == 9) {
    iVar14 = uVar5 * uVar13 + 0x404;
  }
  else if (sVar1 == 0xc) {
    iVar14 = uVar5 * uVar13 + 0x400;
  }
  else {
    if (sVar1 != 10) goto LAB_100ecc38;
    iVar14 = uVar5 * ((int)(uVar13 + 1) >> 1) + 0x40;
  }
  puVar3 = DAT_100ecedc;
  uVar5 = *DAT_100ecedc;
  iVar15 = uVar5 * (((uVar5 - 1) + iVar14) / uVar5);
  if (param_3 < 2) {
    for (; piVar16 != (int *)0x0; piVar16 = (int *)piVar16[0xf]) {
      if ((param_1 == *piVar16) && (piVar16[1] == *(int *)(iVar10 + 0xc))) {
        FUN_100a5b78((DAT_100ed0e8 - DAT_100ed0ec) * 0x20 & 0xff00U | 0x30c0031,DAT_100ed118,
                     DAT_100ed114);
        if (param_3 != 0) {
          piVar16[3] = piVar16[3] + 1;
        }
        iVar6 = piVar16[8];
        goto LAB_100ecc90;
      }
    }
    if (iVar15 - *DAT_100ecef4 == 0) {
      iVar10 = FUN_100eaeac(iVar15,DAT_100ecef8);
      piVar16 = DAT_100ecf20;
      if (iVar10 == 0) {
        FUN_100a5b78(DAT_100ecefc | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100ecf04,
                     DAT_100ecf00);
      }
      else {
        *DAT_100ecf20 = *DAT_100ecf20 + 1;
        piVar8 = (int *)FUN_10138fd6(0,*puVar3,0x40,DAT_100ecef8);
        if (piVar8 != (int *)0x0) {
          piVar8[8] = iVar10;
          piVar8[2] = 0x40;
          goto LAB_100ece48;
        }
        FUN_100eaf40(iVar10);
        iVar6 = DAT_100ecec4;
        *piVar16 = *piVar16 + -1;
        FUN_100a5b78(DAT_100ecf10 | (iVar6 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100ecf04,
                     DAT_100ecf14,DAT_100ecef8,0x2da,iVar15);
      }
    }
    else {
      piVar8 = (int *)FUN_10138fd6(0,uVar5,iVar15 + 0x40,DAT_100ecef8);
      if (piVar8 != (int *)0x0) {
        piVar8[2] = iVar15 + 0x40;
        piVar8[8] = (int)(piVar8 + 0x10);
LAB_100ece48:
        iVar15 = *param_2;
        *piVar8 = param_1;
        iVar10 = *(int *)(iVar15 + 0xc);
        piVar8[3] = param_3;
        piVar8[1] = iVar10;
        piVar8[4] = (uint)*(ushort *)(iVar15 + 0x14);
        piVar8[5] = (uint)*(ushort *)(iVar15 + 0x16);
        uVar2 = *(ushort *)(iVar15 + 0x1a);
        piVar8[6] = (uint)*(ushort *)(iVar15 + 0x18);
        piVar8[7] = (uint)uVar2;
        piVar8[0xf] = *(int *)(iVar6 + 4);
        *(int **)(iVar6 + 4) = piVar8;
        piVar8[9] = param_2[2];
        iVar6 = piVar8[8];
        goto LAB_100ecc90;
      }
      FUN_100a5b78(DAT_100ecf18 | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100ecf04,
                   DAT_100ecf1c,iVar15);
    }
    FUN_100ebda8();
    param_2[1] = 0;
LAB_100ecdd0:
    FUN_100a5b78(DAT_100ecf08 | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100eced0,
                 DAT_100ecf0c);
    FUN_100eafd0();
    return 0xffffffff;
  }
  iVar6 = FUN_100ec224(param_1,param_2,iVar15,param_3);
LAB_100ecc90:
  param_2[1] = iVar6;
  if (iVar6 == 0) goto LAB_100ecdd0;
  iVar6 = FUN_10138fea();
  if (iVar6 != 0) {
    iVar6 = *param_2;
    FUN_100a5b78(DAT_100ecee0 | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100eced0,
                 DAT_100ecee4,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0xc),
                 *(undefined2 *)(iVar6 + 0x14),*(undefined2 *)(iVar6 + 0x16),param_2[1]);
  }
  uVar5 = *(uint *)(*param_2 + 0xc);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar6 = 0;
    uVar13 = *(int *)(param_1 + 0x44) - 1;
    uVar12 = uVar13 >> 1;
    while( true ) {
      iVar10 = uVar12 * 0x1c + *(int *)(param_1 + 0x40);
      if (uVar5 < *(uint *)(iVar10 + 0xc)) {
        uVar13 = uVar12 - 1;
      }
      else {
        if (uVar5 <= *(uint *)(iVar10 + 0x10)) {
          iVar6 = uVar5 - *(uint *)(iVar10 + 0xc);
          iVar15 = *(int *)(*(int *)(iVar10 + 0x14) + iVar6 * 4);
          iVar6 = *(int *)(*(int *)(iVar10 + 0x18) + iVar6 * 4);
          if (0 < (int)uVar12) goto LAB_100ecd16;
          goto LAB_100ecd12;
        }
        iVar6 = uVar12 + 1;
      }
      if ((int)uVar13 < iVar6) break;
      uVar12 = (int)(iVar6 + uVar13) / 2;
    }
  }
  iVar15 = 0;
  iVar6 = iVar15;
LAB_100ecd12:
  iVar10 = param_1 + 0xc;
LAB_100ecd16:
  FUN_1006bd24(iVar10,iVar15,0);
  if (iVar6 < 1) {
    iVar10 = FUN_1006bc84(iVar10,param_2[1],iVar14);
    puVar7 = (undefined1 *)0x0;
    goto LAB_100ed03c;
  }
  puVar7 = (undefined1 *)FUN_10138fca(0,iVar6,DAT_100ecee8);
  if (puVar7 == (undefined1 *)0x0) {
    FUN_100a5b78(DAT_100eceec | (DAT_100ecec4 - DAT_100ecec0) * 0x20 & 0xff00U,DAT_100eced0,
                 DAT_100ecef0);
    FUN_100eafd0();
    FUN_100ebda8();
    return 0xffffffff;
  }
  iVar9 = FUN_1006bc84(iVar10,puVar7,iVar6);
  if (iVar9 < iVar6) {
    FUN_100a5b78((DAT_100ed0e8 - DAT_100ed0ec) * 0x20 & 0xff00U | DAT_100ed0f4,DAT_100ed0f0,
                 DAT_100ed0f8,iVar9);
  }
  else if (iVar9 == iVar6) {
    iVar10 = *param_2;
    if (*(short *)(iVar10 + 0x1a) == 7) {
      iVar9 = FUN_10065ad0(puVar7,iVar6,param_2[1],1,*(undefined2 *)(iVar10 + 0x14),0,0,
                           *(undefined2 *)(iVar10 + 0x14),*(undefined2 *)(iVar10 + 0x16));
    }
    else {
      iVar9 = (*_DAT_00007090)(puVar7,param_2[1],iVar6,iVar14);
    }
  }
  iVar11 = *param_2;
  iVar10 = iVar14;
  if (*(short *)(iVar11 + 0x1a) == 9) {
    if (iVar9 <= (int)((uint)*(ushort *)(iVar11 + 0x14) * (uint)*(ushort *)(iVar11 + 0x16) + 4))
    goto LAB_100ecfba;
  }
  else if (iVar9 < iVar14) {
LAB_100ecfba:
    uVar5 = (DAT_100ed0e8 - DAT_100ed0ec) * 0x20 & 0xff00;
    FUN_100a5b78(uVar5 | DAT_100ed0fc,DAT_100ed0f0,DAT_100ed100,*(undefined4 *)(param_1 + 0x34),
                 iVar15);
    uVar4 = DAT_100ed0f0;
    iVar11 = 0;
    uVar5 = uVar5 | DAT_100ed104;
    puVar17 = puVar7;
    do {
      FUN_100a5b78(uVar5,uVar4,DAT_100ed108,iVar11,*puVar17,puVar17[1],puVar17[2],puVar17[3],
                   puVar17[4],puVar17[5],puVar17[6],puVar17[7]);
      iVar11 = iVar11 + 1;
      iVar10 = iVar9;
      puVar17 = puVar17 + 8;
    } while (iVar11 != 4);
  }
  FUN_10138fd0(0,puVar7);
LAB_100ed03c:
  if (iVar10 < iVar14) {
    iVar9 = *param_2;
    FUN_100a5b78((DAT_100ed0e8 - DAT_100ed0ec) * 0x20 & 0xff00U | DAT_100ed10c,DAT_100ed0f0,
                 DAT_100ed110,iVar10,puVar7,iVar6,*(undefined4 *)(iVar9 + 4),
                 *(undefined4 *)(iVar9 + 0xc),*(undefined2 *)(iVar9 + 0x14),
                 *(undefined2 *)(iVar9 + 0x16),iVar14,param_2[1],iVar15);
  }
  FUN_1011e848(param_2[1],iVar14);
LAB_100ed0de:
  FUN_100eafd0();
  return 0;
}

