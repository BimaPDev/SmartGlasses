/* FUN_10088488 @ 0x10088488 */

void FUN_10088488(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  short sVar18;
  uint uVar19;
  byte bVar20;
  int iVar21;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int local_2c;
  
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x28) == 0)) {
    return;
  }
  iVar16 = *(int *)(param_1 + 0x4c);
  if (iVar16 != 0) goto LAB_10088848;
  piVar8 = (int *)FUN_10087650();
  uVar19 = (uint)*(byte *)(*piVar8 + 0x18);
  iVar17 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x28);
  bVar1 = false;
  bVar20 = 0;
  bVar4 = false;
  for (; iVar17 != 0; iVar17 = FUN_10126fae(iVar17)) {
    sVar18 = 0;
    iVar21 = 0x100;
    local_38 = 0;
    uStack_34 = 0;
    iVar10 = iVar17;
    do {
      sVar7 = FUN_1012691c(iVar10,0,0x6e);
      sVar18 = sVar7 + sVar18;
      iVar9 = FUN_1012691c(iVar10,0,0x6d);
      iVar21 = iVar21 * iVar9 >> 8;
      iVar10 = FUN_10126fae(iVar10);
    } while (iVar10 != 0);
    local_30 = *(uint *)(param_1 + 0x2c);
    local_2c = *(int *)(param_1 + 0x30);
    if ((sVar18 != 0) || (iVar21 != 0x100)) {
      FUN_10093448(&local_30,(int)-sVar18,0x10000 / iVar21,&local_38);
    }
    iVar21 = local_2c;
    if (local_2c < 0) {
      iVar21 = -local_2c;
    }
    if (iVar21 < (int)((local_30 ^ (int)local_30 >> 0x1f) - ((int)local_30 >> 0x1f))) {
      bVar1 = true;
    }
    else {
      bVar4 = true;
    }
    iVar21 = FUN_10124cb8(iVar17,0x10);
    if (iVar21 != 0) {
      uVar14 = FUN_10125fd0(iVar17);
      bVar2 = bVar1;
      if ((uVar14 & 1) == 0) {
        bVar2 = false;
      }
      bVar3 = bVar1;
      if ((uVar14 & 2) == 0) {
        bVar3 = false;
      }
      bVar5 = bVar4;
      if ((uVar14 & 4) == 0) {
        bVar5 = false;
      }
      bVar6 = bVar4;
      if ((uVar14 & 8) == 0) {
        bVar6 = false;
      }
      iVar21 = thunk_FUN_10126008(iVar17);
      iVar10 = FUN_10089f60(iVar17);
      iVar9 = FUN_1008a000(iVar17);
      iVar11 = FUN_1008a0c0(iVar17);
      if ((0 < iVar21) || (0 < iVar10)) {
        if ((bVar5) && ((int)uVar19 <= local_2c)) {
          bVar20 = 0xc;
          iVar16 = iVar17;
        }
        else if ((bVar6) && (local_2c <= (int)-uVar19)) {
          bVar20 = 0xc;
          iVar16 = iVar17;
        }
      }
      if ((0 < iVar9) || (0 < iVar11)) {
        if ((bVar2) && ((int)uVar19 <= (int)local_30)) {
          bVar20 = 3;
          iVar16 = iVar17;
        }
        else if ((bVar3) && ((int)local_30 <= (int)-uVar19)) {
          bVar20 = 3;
          iVar16 = iVar17;
        }
      }
      if (iVar21 < 1) {
        bVar5 = false;
      }
      if (iVar10 < 1) {
        bVar6 = false;
      }
      if (iVar9 < 1) {
        if (0 < iVar11) goto LAB_10088664;
LAB_10088670:
        if (((!bVar5) || (local_2c < (int)uVar19)) && ((!bVar6 || ((int)-uVar19 < local_2c))))
        goto LAB_1008855a;
      }
      else {
        if (iVar11 < 1) {
          if (!bVar2) goto LAB_10088670;
          bVar3 = false;
        }
        else if (!bVar2) goto LAB_10088664;
        if ((int)local_30 < (int)uVar19) {
LAB_10088664:
          if ((!bVar3) || ((int)-uVar19 < (int)local_30)) goto LAB_10088670;
        }
      }
      if (bVar1) {
        bVar15 = 3;
      }
      else {
        bVar15 = 0xc;
      }
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf0 | bVar15;
      break;
    }
LAB_1008855a:
    iVar21 = FUN_10124cb8(iVar17,0x100);
    if (((iVar21 == 0) && (bVar1)) ||
       ((iVar21 = FUN_10124cb8(iVar17,0x200), iVar21 == 0 && (bVar4)))) break;
  }
  if (iVar16 == 0) {
    return;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf0 | bVar20;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x4c) = iVar16;
  iVar17 = FUN_10124cb8(iVar16,0x80);
  if (iVar17 == 0) {
    FUN_1012a82e(param_1 + 0x54,DAT_10088958,DAT_10088958,0x1fffffff,0x1fffffff);
LAB_10088818:
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x54) = DAT_10088958;
    }
    if (*(int *)(param_1 + 0x5c) == 0) goto LAB_1008878e;
  }
  else {
    iVar17 = FUN_10125ff0(iVar16);
    if (iVar17 == 2) {
      uVar12 = FUN_10088388(iVar16,*(undefined4 *)(iVar16 + 0x20),0x1fffffff,0);
      iVar17 = *(int *)(iVar16 + 0x20);
      *(undefined4 *)(param_1 + 0x58) = uVar12;
LAB_100886ce:
      uVar12 = FUN_10088388(iVar16,DAT_10088958,iVar17,0);
      *(undefined4 *)(param_1 + 0x60) = uVar12;
    }
    else {
      if (iVar17 == 3) {
        iVar17 = *(int *)(iVar16 + 0x18) +
                 ((*(int *)(iVar16 + 0x20) + 1) - *(int *)(iVar16 + 0x18)) / 2;
        uVar12 = FUN_10088388(iVar16,iVar17 + 1,0x1fffffff,0);
        *(undefined4 *)(param_1 + 0x58) = uVar12;
        iVar17 = iVar17 + -1;
        goto LAB_100886ce;
      }
      if (iVar17 == 1) {
        uVar12 = FUN_10088388(iVar16,*(int *)(iVar16 + 0x18) + 1,0x1fffffff,0);
        iVar17 = *(int *)(iVar16 + 0x18);
        *(undefined4 *)(param_1 + 0x58) = uVar12;
        iVar17 = iVar17 + -1;
        goto LAB_100886ce;
      }
      *(undefined4 *)(param_1 + 0x58) = DAT_10088958;
      *(undefined4 *)(param_1 + 0x60) = 0x1fffffff;
    }
    iVar17 = FUN_10125fe2(iVar16);
    if (iVar17 == 2) {
      uVar12 = FUN_10088288(iVar16,*(undefined4 *)(iVar16 + 0x1c),0x1fffffff,0);
      iVar17 = *(int *)(iVar16 + 0x1c);
      *(undefined4 *)(param_1 + 0x54) = uVar12;
LAB_100886fe:
      uVar12 = FUN_10088288(iVar16,DAT_10088958,iVar17,0);
      *(undefined4 *)(param_1 + 0x5c) = uVar12;
      goto LAB_10088818;
    }
    if (iVar17 == 3) {
      iVar17 = *(int *)(iVar16 + 0x14) +
               ((*(int *)(iVar16 + 0x1c) + 1) - *(int *)(iVar16 + 0x14)) / 2;
      uVar12 = FUN_10088288(iVar16,iVar17 + 1,0x1fffffff,0);
      *(undefined4 *)(param_1 + 0x54) = uVar12;
      iVar17 = iVar17 + -1;
      goto LAB_100886fe;
    }
    if (iVar17 == 1) {
      uVar12 = FUN_10088288(iVar16,*(undefined4 *)(iVar16 + 0x14),0x1fffffff,0);
      iVar17 = *(int *)(iVar16 + 0x14);
      *(undefined4 *)(param_1 + 0x54) = uVar12;
      goto LAB_100886fe;
    }
    *(undefined4 *)(param_1 + 0x54) = DAT_10088958;
LAB_1008878e:
    *(undefined4 *)(param_1 + 0x5c) = 0x1fffffff;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = DAT_10088958;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x1fffffff;
  }
  FUN_10086f50(iVar16,9,0);
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1e) < 0) {
    return;
  }
LAB_10088848:
  iVar21 = 0x100;
  sVar18 = 0;
  iVar17 = iVar16;
  do {
    sVar7 = FUN_1012691c(iVar17,0,0x6e);
    sVar18 = sVar7 + sVar18;
    iVar10 = FUN_1012691c(iVar17,0,0x6d);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar21 = (int)(short)((short)((uint)iVar10 >> 8) * (short)iVar21);
    iVar17 = FUN_10126fae(iVar17);
  } while (iVar17 != 0);
  if ((sVar18 != 0) || (iVar21 != 0x100)) {
    local_30 = 0;
    local_2c = 0;
    FUN_10093448(param_1 + 0x24,(int)-sVar18,(int)(short)(0x10000 / iVar21),&local_30);
  }
  if ((*(byte *)(param_1 + 0x6c) & 0xf) == 3) {
    uVar12 = FUN_1008a0c0();
    uVar13 = FUN_1008a000(iVar16);
    uVar14 = FUN_101247c2(iVar16,*(undefined4 *)(param_1 + 0x24),uVar13,uVar12,3);
    uVar19 = 0;
  }
  else {
    uVar12 = thunk_FUN_10126008(iVar16);
    uVar13 = FUN_10089f60(iVar16);
    uVar19 = FUN_101247c2(iVar16,*(undefined4 *)(param_1 + 0x28),uVar12,uVar13,0xc);
    uVar14 = 0;
  }
  iVar17 = FUN_10125fd0(iVar16);
  if (-1 < iVar17 << 0x1f) {
    uVar14 = uVar14 & (int)uVar14 >> 0x1f;
  }
  if (-1 < iVar17 << 0x1e) {
    uVar14 = uVar14 & ~((int)uVar14 >> 0x1f);
  }
  if (-1 < iVar17 << 0x1d) {
    uVar19 = uVar19 & (int)uVar19 >> 0x1f;
  }
  iVar21 = *(int *)(param_1 + 0x30);
  if (-1 < iVar17 << 0x1c) {
    uVar19 = uVar19 & ~((int)uVar19 >> 0x1f);
  }
  if ((int)(iVar21 + uVar19) < *(int *)(param_1 + 0x58)) {
    uVar19 = *(int *)(param_1 + 0x58) - iVar21;
  }
  if (*(int *)(param_1 + 0x60) < (int)(iVar21 + uVar19)) {
    uVar19 = *(int *)(param_1 + 0x60) - iVar21;
  }
  iVar17 = *(int *)(param_1 + 0x2c);
  if ((int)(iVar17 + uVar14) < *(int *)(param_1 + 0x54)) {
    uVar14 = *(int *)(param_1 + 0x54) - iVar17;
  }
  if (*(int *)(param_1 + 0x5c) < (int)(iVar17 + uVar14)) {
    uVar14 = *(int *)(param_1 + 0x5c) - iVar17;
  }
  FUN_10126016(iVar16,uVar14,uVar19);
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e)) {
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar14;
    *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar19;
  }
  return;
}

