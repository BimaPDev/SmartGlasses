/* FUN_2c023048 @ 0x2c023048 */

void FUN_2c023048(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  ushort uVar12;
  short *psVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  short *psVar16;
  undefined2 *puVar17;
  uint uVar18;
  int iVar19;
  short *psVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  int iVar29;
  short *psVar30;
  short *psVar31;
  short asStack_100bc [18];
  short asStack_10098 [32724];
  uint local_f0;
  uint local_ec;
  int local_e8;
  short asStack_be [2];
  undefined4 local_ba [8];
  short asStack_9a [2];
  undefined4 local_96 [8];
  short sStack_74;
  undefined4 local_72;
  short sStack_50;
  undefined4 local_4e;
  int local_2c;
  
  local_2c = *DAT_2c023164;
  iVar8 = param_1[1];
  iVar19 = iVar8;
  if (iVar8 < 0) {
    iVar19 = SignedSaturate(-iVar8,0x20);
    SignedDoesSaturate(iVar19,0x20);
  }
  uVar27 = *param_1 >> 0x10;
  iVar9 = SignedSaturate(uVar27 * 0x8000,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar1 = SignedSaturate((*param_1 >> 1) - iVar9,0x20);
  SignedDoesSaturate(uVar1,0x20);
  if ((int)uVar27 < 1) {
LAB_2c0237ec:
                    /* WARNING: Subroutine does not return */
    FUN_2c027d9c(DAT_2c023814,0x310,DAT_2c023810,DAT_2c02380c);
  }
  if ((int)uVar27 < 0x3fff) {
    FUN_2c0215f8();
    goto LAB_2c0237e8;
  }
  uVar24 = DAT_2c023168 / uVar27;
  if (uVar24 == 0x8000) {
    uVar24 = 0x7fff;
  }
  iVar9 = SignedSaturate(uVar24 * uVar27 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar26 = SignedSaturate(uVar24 * (int)(short)uVar1 * 2,0x20);
  SignedDoesSaturate(iVar26,0x20);
  iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar26,0x20);
  iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar26 = SignedSaturate(0x7fffffff - iVar9,0x20);
  SignedDoesSaturate(iVar26,0x20);
  iVar9 = SignedSaturate((iVar26 >> 0x10) * 0x8000,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar2 = SignedSaturate((iVar26 >> 1) - iVar9,0x20);
  SignedDoesSaturate(uVar2,0x20);
  iVar9 = SignedSaturate(uVar24 * (iVar26 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar26 = SignedSaturate(uVar24 * (int)(short)uVar2 * 2,0x20);
  SignedDoesSaturate(iVar26,0x20);
  iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar26,0x20);
  iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar25 = iVar9 >> 0x10;
  iVar26 = SignedSaturate(iVar25 * 0x8000,0x20);
  SignedDoesSaturate(iVar26,0x20);
  uVar2 = SignedSaturate((iVar9 >> 1) - iVar26,0x20);
  SignedDoesSaturate(uVar2,0x20);
  iVar9 = iVar19 >> 0x10;
  iVar26 = SignedSaturate(iVar9 << 0xf,0x20);
  SignedDoesSaturate(iVar26,0x20);
  uVar3 = SignedSaturate((iVar19 >> 1) - iVar26,0x20);
  SignedDoesSaturate(uVar3,0x20);
  iVar19 = SignedSaturate(iVar9 * iVar25 * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar9 = SignedSaturate(iVar9 * (short)uVar2 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar19 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar9 = SignedSaturate(iVar25 * (short)uVar3 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar24 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(uVar24,0x20);
  uVar18 = uVar24 ^ uVar24 << 1;
  if (((uVar18 == 0) || ((LZCOUNT(uVar18) & 0x1eU) == 0)) && (uVar24 != 0)) {
    if ((int)uVar24 < 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = 0x7fffffff;
    }
    iVar19 = SignedSaturate(iVar19 * 2,0x20);
    SignedDoesSaturate(iVar19,0x20);
  }
  else {
    iVar19 = uVar24 << 2;
  }
  if (0 < iVar8) {
    iVar19 = SignedSaturate(-iVar19,0x20);
    SignedDoesSaturate(iVar19,0x20);
  }
  iVar26 = iVar19 >> 0x10;
  iVar9 = SignedSaturate(iVar26 * 0x8000,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar2 = SignedSaturate((iVar19 >> 1) - iVar9,0x20);
  SignedDoesSaturate(uVar2,0x20);
  iVar25 = iVar19 >> 0x14;
  local_ba[0]._0_2_ = (short)(iVar19 >> 0x14);
  iVar9 = SignedSaturate(iVar25 * 0x8000,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar3 = SignedSaturate((iVar19 >> 5) - iVar9,0x20);
  SignedDoesSaturate(uVar3,0x20);
  local_96[0]._0_2_ = (short)uVar3;
  iVar19 = SignedSaturate(iVar26 * iVar26 * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar26 = iVar26 * (short)uVar2;
  iVar9 = SignedSaturate(iVar26 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar19 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar9 = SignedSaturate(iVar26 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar19 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(iVar19,0x20);
  if (iVar19 < 0) {
    iVar19 = SignedSaturate(-iVar19,0x20);
    SignedDoesSaturate(iVar19,0x20);
  }
  iVar9 = SignedSaturate(0x7fffffff - iVar19,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar26 = iVar9 >> 0x10;
  iVar19 = SignedSaturate(iVar26 * 0x8000,0x20);
  SignedDoesSaturate(iVar19,0x20);
  uVar2 = SignedSaturate((iVar9 >> 1) - iVar19,0x20);
  SignedDoesSaturate(uVar2,0x20);
  iVar19 = SignedSaturate(iVar26 * uVar27 * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar9 = SignedSaturate(uVar27 * (int)(short)uVar2 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar19 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar9 = SignedSaturate(iVar26 * (short)uVar1 * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  iVar9 = SignedSaturate((iVar9 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar9,0x20);
  uVar27 = SignedSaturate(iVar19 + iVar9,0x20);
  SignedDoesSaturate(uVar27,0x20);
  uVar24 = uVar27 ^ uVar27 << 1;
  if (uVar24 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = LZCOUNT(uVar24);
    uVar27 = uVar27 << local_f0;
  }
  local_ec = (int)uVar27 >> 0x10;
  iVar19 = SignedSaturate(local_ec * 0x8000,0x20);
  SignedDoesSaturate(iVar19,0x20);
  uVar1 = SignedSaturate(((int)uVar27 >> 1) - iVar19,0x20);
  SignedDoesSaturate(uVar1,0x20);
  sVar5 = (short)uVar1;
  if ((int)param_4 < 2) {
    *(undefined2 *)param_2 = 0x1000;
    if (param_4 == 1) goto LAB_2c023690;
  }
  else {
    iVar19 = iVar8 >> 0x10;
    uVar27 = 2;
    bVar7 = false;
    do {
      local_e8 = (int)sVar5;
      iVar9 = SignedSaturate(iVar19 << 0xf,0x20);
      SignedDoesSaturate(iVar9,0x20);
      uVar1 = SignedSaturate((iVar8 >> 1) - iVar9,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar25 = uVar27 + 0x7fffffff;
      psVar13 = asStack_be + iVar25;
      psVar11 = asStack_9a + iVar25;
      iVar9 = SignedSaturate(iVar19 * asStack_be[uVar27 + 0x80000000] * 2,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar26 = SignedSaturate(iVar19 * asStack_9a[uVar27 + 0x80000000] * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar26 = SignedSaturate((int)(short)uVar1 * (int)asStack_be[uVar27 + 0x80000000] * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      uVar24 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(uVar24,0x20);
      if (2 < (int)uVar27) {
        piVar28 = param_1 + 1;
        psVar20 = psVar11;
        psVar16 = psVar13;
        do {
          piVar28 = piVar28 + 1;
          iVar26 = *piVar28 >> 0x10;
          iVar9 = SignedSaturate(iVar26 * 0x8000,0x20);
          SignedDoesSaturate(iVar9,0x20);
          uVar1 = SignedSaturate((*piVar28 >> 1) - iVar9,0x20);
          SignedDoesSaturate(uVar1,0x20);
          iVar9 = SignedSaturate(iVar26 * *psVar16 * 2,0x20);
          SignedDoesSaturate(iVar9,0x20);
          iVar26 = SignedSaturate(iVar26 * *psVar20 * 2,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
          SignedDoesSaturate(iVar9,0x20);
          iVar26 = SignedSaturate((int)(short)uVar1 * (int)*psVar16 * 2,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
          SignedDoesSaturate(iVar9,0x20);
          uVar24 = SignedSaturate(uVar24 + iVar9,0x20);
          SignedDoesSaturate(uVar24,0x20);
          psVar20 = psVar20 + -1;
          psVar16 = psVar16 + -1;
        } while (piVar28 != param_1 + (uVar27 - 3 & 0xffff) + 2);
      }
      uVar18 = uVar24 ^ uVar24 << 1;
      if (((uVar18 == 0) || ((LZCOUNT(uVar18) & 0x1cU) == 0)) && (uVar24 != 0)) {
        if ((int)uVar24 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = 0x7fffffff;
        }
        iVar9 = SignedSaturate(iVar9 * 2,0x20);
        SignedDoesSaturate(iVar9,0x20);
        iVar9 = SignedSaturate(iVar9 + param_1[uVar27],0x20);
        SignedDoesSaturate(iVar9,0x20);
      }
      else {
        iVar9 = SignedSaturate(uVar24 * 0x10 + param_1[uVar27],0x20);
        SignedDoesSaturate(iVar9,0x20);
      }
      iVar26 = iVar9;
      if (iVar9 < 0) {
        iVar26 = SignedSaturate(-iVar9,0x20);
        SignedDoesSaturate(iVar26,0x20);
      }
      if ((int)local_ec < 1) goto LAB_2c0237ec;
      if ((int)local_ec < 0x3fff) {
                    /* WARNING: Subroutine does not return */
        FUN_2c027d9c(DAT_2c023814,0x312,DAT_2c023810,DAT_2c023818);
      }
      uVar24 = DAT_2c0236a0 / local_ec;
      if (uVar24 == 0x8000) {
        uVar24 = 0x7fff;
      }
      iVar23 = SignedSaturate(uVar24 * local_ec * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar29 = SignedSaturate(uVar24 * local_e8 * 2,0x20);
      SignedDoesSaturate(iVar29,0x20);
      iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar29,0x20);
      iVar23 = SignedSaturate(iVar23 + iVar29,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar29 = SignedSaturate(0x7fffffff - iVar23,0x20);
      SignedDoesSaturate(iVar29,0x20);
      iVar23 = SignedSaturate((iVar29 >> 0x10) * 0x8000,0x20);
      SignedDoesSaturate(iVar23,0x20);
      uVar1 = SignedSaturate((iVar29 >> 1) - iVar23,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar23 = SignedSaturate(uVar24 * (iVar29 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar29 = SignedSaturate(uVar24 * (int)(short)uVar1 * 2,0x20);
      SignedDoesSaturate(iVar29,0x20);
      iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar29,0x20);
      iVar23 = SignedSaturate(iVar23 + iVar29,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar10 = iVar23 >> 0x10;
      iVar29 = SignedSaturate(iVar10 * 0x8000,0x20);
      SignedDoesSaturate(iVar29,0x20);
      uVar1 = SignedSaturate((iVar23 >> 1) - iVar29,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar29 = iVar26 >> 0x10;
      iVar23 = SignedSaturate(iVar29 * 0x8000,0x20);
      SignedDoesSaturate(iVar23,0x20);
      uVar2 = SignedSaturate((iVar26 >> 1) - iVar23,0x20);
      SignedDoesSaturate(uVar2,0x20);
      iVar26 = SignedSaturate(iVar29 * iVar10 * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar23 = SignedSaturate(iVar29 * (short)uVar1 * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar23 = SignedSaturate((iVar23 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar26 = SignedSaturate(iVar26 + iVar23,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar23 = SignedSaturate(iVar10 * (short)uVar2 * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      iVar23 = SignedSaturate((iVar23 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar23,0x20);
      uVar24 = SignedSaturate(iVar26 + iVar23,0x20);
      SignedDoesSaturate(uVar24,0x20);
      uVar18 = uVar24 ^ uVar24 << 1;
      if (((uVar18 == 0) || ((LZCOUNT(uVar18) & 0x1eU) == 0)) && (uVar24 != 0)) {
        if ((int)uVar24 < 0) {
          iVar26 = 0;
        }
        else {
          iVar26 = 0x7fffffff;
        }
        uVar24 = SignedSaturate(iVar26 * 2,0x20);
        SignedDoesSaturate(uVar24,0x20);
      }
      else {
        uVar24 = uVar24 << 2;
      }
      if (0 < iVar9) {
        uVar24 = SignedSaturate(-uVar24,0x20);
        SignedDoesSaturate(uVar24,0x20);
      }
      if ((int)local_f0 < 1) {
        uVar18 = local_f0;
        if ((int)local_f0 < -0x3f) {
          uVar18 = 0xffffffc1;
        }
        iVar9 = (int)uVar24 >> (-uVar18 & 0xff);
      }
      else {
        uVar18 = uVar24 ^ uVar24 << 1;
        if (((uVar18 == 0) || (LZCOUNT(uVar18) < (int)local_f0)) && (uVar24 != 0)) {
          if ((int)uVar24 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0x7fffffff;
          }
          iVar9 = SignedSaturate(iVar9 * 2,0x20);
          SignedDoesSaturate(iVar9,0x20);
        }
        else {
          iVar9 = uVar24 << (local_f0 & 0xff);
        }
      }
      iVar23 = iVar9 >> 0x10;
      iVar26 = SignedSaturate(iVar23 * 0x8000,0x20);
      SignedDoesSaturate(iVar26,0x20);
      uVar1 = SignedSaturate((iVar9 >> 1) - iVar26,0x20);
      SignedDoesSaturate(uVar1,0x20);
      sVar6 = (short)((uint)iVar9 >> 0x10);
      sVar5 = sVar6;
      if (iVar23 < 0) {
        sVar5 = SignedSaturate(-sVar6,0x10);
        SignedSaturate(-(sVar6 >> 0xf),0x10);
      }
      iVar26 = SignedSaturate(sVar5 * 0x10000 - DAT_2c0236a4,0x20);
      SignedDoesSaturate(iVar26,0x20);
      if (0xffff < iVar26) {
        bVar7 = true;
      }
      if (1 < (int)uVar27) {
        psVar30 = asStack_be + 1;
        psVar16 = asStack_9a + 1;
        psVar31 = &sStack_74;
        psVar20 = &sStack_50;
        while( true ) {
          iVar26 = SignedSaturate(iVar23 * psVar13[1] * 2,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar29 = SignedSaturate(iVar23 * psVar11[1] * 2,0x20);
          SignedDoesSaturate(iVar29,0x20);
          iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar29,0x20);
          iVar26 = SignedSaturate(iVar26 + iVar29,0x20);
          SignedDoesSaturate(iVar26,0x20);
          iVar29 = SignedSaturate((int)psVar13[1] * (int)(short)uVar1 * 2,0x20);
          SignedDoesSaturate(iVar29,0x20);
          iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar29,0x20);
          iVar26 = SignedSaturate(iVar26 + iVar29,0x20);
          SignedDoesSaturate(iVar26,0x20);
          psVar16 = psVar16 + 1;
          iVar29 = SignedSaturate(*psVar16 * 2,0x20);
          SignedDoesSaturate(iVar29,0x20);
          psVar30 = psVar30 + 1;
          iVar29 = SignedSaturate(*psVar30 * 0x10000 + iVar29,0x20);
          SignedDoesSaturate(iVar29,0x20);
          iVar26 = SignedSaturate(iVar26 + iVar29,0x20);
          SignedDoesSaturate(iVar26,0x20);
          psVar31 = psVar31 + 1;
          *psVar31 = (short)((uint)iVar26 >> 0x10);
          iVar29 = SignedSaturate((iVar26 >> 0x10) * 0x8000,0x20);
          SignedDoesSaturate(iVar29,0x20);
          uVar2 = SignedSaturate((iVar26 >> 1) - iVar29,0x20);
          SignedDoesSaturate(uVar2,0x20);
          psVar20 = psVar20 + 1;
          *psVar20 = (short)uVar2;
          if (psVar11 == asStack_9a + iVar25 + (1 - (uVar27 - 1 & 0xffff))) break;
          psVar13 = psVar13 + -1;
          psVar11 = psVar11 + -1;
        }
      }
      (&sStack_74)[uVar27] = sVar6 >> 4;
      iVar26 = SignedSaturate((iVar9 >> 0x14) * 0x8000,0x20);
      SignedDoesSaturate(iVar26,0x20);
      uVar2 = SignedSaturate((iVar9 >> 5) - iVar26,0x20);
      SignedDoesSaturate(uVar2,0x20);
      (&sStack_50)[uVar27] = (short)uVar2;
      iVar9 = SignedSaturate(iVar23 * iVar23 * 2,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar23 = (short)uVar1 * iVar23;
      iVar26 = SignedSaturate(iVar23 * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar26 = SignedSaturate(iVar23 * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(iVar9,0x20);
      if (iVar9 < 0) {
        iVar9 = SignedSaturate(-iVar9,0x20);
        SignedDoesSaturate(iVar9,0x20);
      }
      iVar26 = SignedSaturate(0x7fffffff - iVar9,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar25 = iVar26 >> 0x10;
      iVar9 = SignedSaturate(iVar25 * 0x8000,0x20);
      SignedDoesSaturate(iVar9,0x20);
      uVar1 = SignedSaturate((iVar26 >> 1) - iVar9,0x20);
      SignedDoesSaturate(uVar1,0x20);
      iVar9 = SignedSaturate(local_ec * iVar25 * 2,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar26 = SignedSaturate((int)(short)uVar1 * (int)(short)local_ec * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar9 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar26 = SignedSaturate(iVar25 * local_e8 * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
      uVar24 = SignedSaturate(iVar9 + iVar26,0x20);
      SignedDoesSaturate(uVar24,0x20);
      uVar18 = uVar24 ^ uVar24 << 1;
      iVar9 = 0;
      if (uVar18 != 0) {
        iVar9 = LZCOUNT(uVar18);
        uVar24 = uVar24 << iVar9;
        iVar9 = iVar9 << 0x10;
      }
      local_ec = (int)uVar24 >> 0x10;
      iVar26 = SignedSaturate(local_ec * 0x8000,0x20);
      SignedDoesSaturate(iVar26,0x20);
      uVar1 = SignedSaturate(((int)uVar24 >> 1) - iVar26,0x20);
      SignedDoesSaturate(uVar1,0x20);
      sVar5 = (short)uVar1;
      iVar9 = SignedSaturate(local_f0 * 0x10000 + iVar9,0x20);
      SignedDoesSaturate(iVar9,0x20);
      local_f0 = iVar9 >> 0x10;
      if (0 < (int)uVar27) {
        uVar18 = uVar27 & 0xffff;
        uVar24 = uVar18 - 1 & 0xffff;
        if ((uVar27 == 0x7fff) || (uVar24 < 5)) {
          psVar11 = asStack_be + 1;
          psVar13 = &sStack_50;
          psVar20 = &sStack_74;
          psVar16 = asStack_9a + 1;
          do {
            psVar20 = psVar20 + 1;
            psVar11 = psVar11 + 1;
            *psVar11 = *psVar20;
            psVar13 = psVar13 + 1;
            psVar16 = psVar16 + 1;
            *psVar16 = *psVar13;
          } while ((short *)((int)&local_72 + uVar24 * 2) != psVar20);
        }
        else {
          uVar12 = 0;
          iVar9 = 0;
          do {
            uVar12 = uVar12 + 1;
            *(undefined4 *)((int)local_ba + iVar9) = *(undefined4 *)((int)&local_72 + iVar9);
            *(undefined4 *)((int)local_96 + iVar9) = *(undefined4 *)((int)&local_4e + iVar9);
            iVar9 = iVar9 + 4;
          } while ((uint)uVar12 < uVar18 >> 1);
          iVar9 = (int)(short)((short)(uVar27 & 0xfffe) + 1);
          if ((uVar27 & 0xfffe) != uVar18) {
            asStack_be[iVar9 + 1] = (&sStack_74)[iVar9];
            asStack_9a[iVar9 + 1] = (&sStack_50)[iVar9];
          }
        }
      }
      uVar27 = (uint)(short)((short)uVar27 + 1);
    } while ((int)uVar27 <= (int)param_4);
    if (bVar7) {
      param_4 = param_4 & 0xffff;
      if ((param_2 == (undefined4 *)((int)param_3 + 2)) || (param_4 < 10)) {
        puVar17 = (undefined2 *)((int)param_3 + -2);
        puVar15 = (undefined2 *)((int)param_2 + -2);
        do {
          puVar17 = puVar17 + 1;
          puVar15 = puVar15 + 1;
          *puVar15 = *puVar17;
        } while ((undefined2 *)((int)param_3 + param_4 * 2) != puVar17);
      }
      else {
        param_4 = param_4 + 1;
        puVar14 = param_3;
        puVar21 = param_2;
        do {
          puVar22 = puVar21 + 1;
          *puVar21 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar22;
        } while (puVar22 != param_2 + ((param_4 & 0xffff) >> 1));
        iVar19 = (int)(short)(param_4 & 0xfffe);
        if ((param_4 & 0xfffe) != (param_4 & 0xffff)) {
          *(undefined2 *)((int)param_2 + iVar19 * 2) = *(undefined2 *)((int)param_3 + iVar19 * 2);
        }
      }
    }
    else {
      iVar25 = (int)(short)local_ba[0];
      *(undefined2 *)param_2 = 0x1000;
LAB_2c023690:
      iVar8 = 1;
      iVar19 = 2;
      sVar5 = (short)local_96[0];
      while( true ) {
        iVar9 = SignedSaturate(sVar5 * 2,0x20);
        SignedDoesSaturate(iVar9,0x20);
        uVar27 = SignedSaturate(iVar25 * 0x10000 + iVar9,0x20);
        SignedDoesSaturate(uVar27,0x20);
        uVar24 = uVar27 ^ uVar27 << 1;
        iVar9 = uVar27 << 1;
        if (((uVar24 == 0) || (LZCOUNT(uVar24) == 0)) && (uVar27 != 0)) {
          if ((int)uVar27 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = 0x7fffffff;
          }
          iVar9 = SignedSaturate(iVar9 * 2,0x20);
          SignedDoesSaturate(iVar9,0x20);
        }
        uVar1 = SignedSaturate(iVar9 + 0x8000,0x20);
        SignedDoesSaturate(uVar1,0x20);
        iVar8 = (int)(short)((short)iVar8 + 1);
        uVar4 = (undefined2)((uint)uVar1 >> 0x10);
        *(undefined2 *)((int)param_2 + iVar19) = uVar4;
        *(undefined2 *)((int)param_3 + iVar19) = uVar4;
        if ((int)param_4 < iVar8) break;
        iVar19 = iVar8 << 1;
        iVar25 = (int)asStack_be[iVar8 + 1];
        sVar5 = asStack_9a[iVar8 + 1];
      }
    }
  }
  if (*DAT_2c023808 == local_2c) {
    return;
  }
LAB_2c0237e8:
                    /* WARNING: Subroutine does not return */
  FUN_2c00b2e8();
}

