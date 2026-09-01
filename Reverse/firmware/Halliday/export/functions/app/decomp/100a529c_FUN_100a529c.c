/* FUN_100a529c @ 0x100a529c */

int FUN_100a529c(byte *param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar2 = (uint)*param_1;
  bVar14 = (uint)(DAT_100a551c - DAT_100a5518) >> 3 <= uVar2;
  iVar5 = DAT_100a5518;
  if (bVar14) {
    iVar5 = 0;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 2);
  if (!bVar14) {
    iVar5 = *(int *)(iVar5 + uVar2 * 8);
  }
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar2 = (uint)*(byte *)(DAT_100a5520 + (param_1[1] & 0xf));
  iVar3 = FUN_10119ddc(param_2,param_3,DAT_100a5524,*(undefined4 *)(param_1 + 4),iVar5,uVar2,uVar7,
                       uVar6);
  uVar11 = DAT_100a552c;
  bVar9 = param_1[1] & 0xf0;
  if (bVar9 == 0x10) {
    iVar5 = FUN_10119ddc(param_2 + iVar3,param_3 - iVar3,DAT_100a5528,param_1 + 0x10,iVar5,uVar2,
                         uVar7,uVar6);
    return iVar3 + iVar5;
  }
  if (bVar9 == 0x20) {
    iVar10 = 0;
    uVar12 = 0;
    uVar1 = *(ushort *)(param_1 + 0x8c);
    uVar13 = (uint)uVar1;
    param_2 = param_2 + iVar3;
    param_3 = param_3 - iVar3;
    param_1 = param_1 + 0xb;
    while ((int)uVar12 < (int)uVar13) {
      param_1 = param_1 + 1;
      iVar4 = FUN_10119ddc(param_2 + iVar10,param_3 - iVar10,DAT_100a5530,*param_1,iVar5,uVar2,uVar7
                           ,uVar6);
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + iVar4;
      uVar8 = uVar11;
      if (((uVar12 & 0xf) != 0) && (uVar8 = DAT_100a5534, uVar13 == uVar12)) break;
      iVar4 = FUN_10119ddc(param_2 + iVar10,param_3 - iVar10,uVar8);
      iVar10 = iVar10 + iVar4;
    }
    if ((uVar13 != 0) && ((uVar1 & 0xf) != 0)) {
      iVar5 = FUN_10119ddc(param_2 + iVar10,param_3 - iVar10,DAT_100a552c);
      iVar10 = iVar10 + iVar5;
    }
    return iVar3 + iVar10;
  }
  if (bVar9 != 0x30) {
    return iVar3;
  }
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  param_2 = param_2 + iVar3;
  uVar12 = param_3 - iVar3;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar2 = FUN_1011ea10(uVar11);
    if (uVar12 <= uVar2) {
      uVar2 = uVar12;
    }
    FUN_1011e9f8(param_2,uVar11,uVar2);
    break;
  case 1:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),iVar5,uVar2,uVar7,
                         uVar6);
    break;
  case 2:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),uVar2,uVar7,uVar6);
    break;
  case 3:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),uVar7,uVar6
                        );
    break;
  case 4:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20),uVar6);
    break;
  case 5:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    break;
  case 6:
    FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28));
  case 7:
    FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  case 8:
    FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30));
  case 9:
    FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  case 10:
    uVar2 = FUN_10119ddc(param_2,uVar12,uVar11,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38));
    break;
  default:
    uVar2 = 0;
    goto LAB_100a53a8;
  }
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
LAB_100a53a8:
  if (uVar2 < uVar12 - 3) {
    *(undefined1 *)(param_2 + uVar2) = 0xd;
    *(undefined1 *)(param_2 + uVar2 + 1) = 10;
    *(undefined1 *)(param_2 + uVar2 + 2) = 0;
    uVar2 = uVar2 + 3;
  }
  else {
    *(undefined1 *)(param_2 + (uVar12 - 3)) = 0xd;
    *(undefined1 *)(param_2 + uVar12 + -2) = 10;
    *(undefined1 *)(param_2 + uVar12 + -1) = 0;
  }
  return iVar3 + uVar2;
}

