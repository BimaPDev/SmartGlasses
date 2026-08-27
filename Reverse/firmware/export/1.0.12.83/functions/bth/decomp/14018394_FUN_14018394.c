/* FUN_14018394 @ 0x14018394 */

void FUN_14018394(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

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
  short *psVar10;
  ushort uVar11;
  short *psVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  short *psVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined2 *puVar22;
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
  
  local_2c = *DAT_140184b0;
  iVar18 = param_1[1];
  iVar16 = iVar18;
  if (iVar18 < 0) {
    iVar16 = SignedSaturate(-iVar18,0x20);
    SignedDoesSaturate(iVar16,0x20);
  }
  uVar27 = *param_1 >> 0x10;
  iVar8 = SignedSaturate(uVar27 * 0x8000,0x20);
  SignedDoesSaturate(iVar8,0x20);
  uVar1 = SignedSaturate((*param_1 >> 1) - iVar8,0x20);
  SignedDoesSaturate(uVar1,0x20);
  if ((int)uVar27 < 1) goto LAB_14018b44;
  if ((int)uVar27 < 0x3fff) {
    FUN_14016938();
  }
  else {
    uVar24 = DAT_140184b4 / uVar27;
    if (uVar24 == 0x8000) {
      uVar24 = 0x7fff;
    }
    iVar8 = SignedSaturate(uVar24 * uVar27 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar26 = SignedSaturate(uVar24 * (int)(short)uVar1 * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar26 = SignedSaturate(0x7fffffff - iVar8,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar8 = SignedSaturate((iVar26 >> 0x10) * 0x8000,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar2 = SignedSaturate((iVar26 >> 1) - iVar8,0x20);
    SignedDoesSaturate(uVar2,0x20);
    iVar8 = SignedSaturate(uVar24 * (iVar26 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar26 = SignedSaturate(uVar24 * (int)(short)uVar2 * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar25 = iVar8 >> 0x10;
    iVar26 = SignedSaturate(iVar25 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar2 = SignedSaturate((iVar8 >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar2,0x20);
    iVar8 = iVar16 >> 0x10;
    iVar26 = SignedSaturate(iVar8 << 0xf,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar3 = SignedSaturate((iVar16 >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar3,0x20);
    iVar16 = SignedSaturate(iVar8 * iVar25 * 2,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar8 = SignedSaturate(iVar8 * (short)uVar2 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar16 = SignedSaturate(iVar16 + iVar8,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar8 = SignedSaturate(iVar25 * (short)uVar3 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar24 = SignedSaturate(iVar16 + iVar8,0x20);
    SignedDoesSaturate(uVar24,0x20);
    uVar15 = uVar24 ^ uVar24 << 1;
    if (((uVar15 == 0) || ((LZCOUNT(uVar15) & 0x1eU) == 0)) && (uVar24 != 0)) {
      if ((int)uVar24 < 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 0x7fffffff;
      }
      iVar16 = SignedSaturate(iVar16 * 2,0x20);
      SignedDoesSaturate(iVar16,0x20);
    }
    else {
      iVar16 = uVar24 << 2;
    }
    if (0 < iVar18) {
      iVar16 = SignedSaturate(-iVar16,0x20);
      SignedDoesSaturate(iVar16,0x20);
    }
    iVar26 = iVar16 >> 0x10;
    iVar8 = SignedSaturate(iVar26 * 0x8000,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar2 = SignedSaturate((iVar16 >> 1) - iVar8,0x20);
    SignedDoesSaturate(uVar2,0x20);
    iVar25 = iVar16 >> 0x14;
    local_ba[0]._0_2_ = (short)(iVar16 >> 0x14);
    iVar8 = SignedSaturate(iVar25 * 0x8000,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar3 = SignedSaturate((iVar16 >> 5) - iVar8,0x20);
    SignedDoesSaturate(uVar3,0x20);
    local_96[0]._0_2_ = (short)uVar3;
    iVar16 = SignedSaturate(iVar26 * iVar26 * 2,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar26 = iVar26 * (short)uVar2;
    iVar8 = SignedSaturate(iVar26 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar16 = SignedSaturate(iVar16 + iVar8,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar8 = SignedSaturate(iVar26 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar16 = SignedSaturate(iVar16 + iVar8,0x20);
    SignedDoesSaturate(iVar16,0x20);
    if (iVar16 < 0) {
      iVar16 = SignedSaturate(-iVar16,0x20);
      SignedDoesSaturate(iVar16,0x20);
    }
    iVar8 = SignedSaturate(0x7fffffff - iVar16,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar26 = iVar8 >> 0x10;
    iVar16 = SignedSaturate(iVar26 * 0x8000,0x20);
    SignedDoesSaturate(iVar16,0x20);
    uVar2 = SignedSaturate((iVar8 >> 1) - iVar16,0x20);
    SignedDoesSaturate(uVar2,0x20);
    iVar16 = SignedSaturate(iVar26 * uVar27 * 2,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar8 = SignedSaturate(uVar27 * (int)(short)uVar2 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar16 = SignedSaturate(iVar16 + iVar8,0x20);
    SignedDoesSaturate(iVar16,0x20);
    iVar8 = SignedSaturate(iVar26 * (short)uVar1 * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    iVar8 = SignedSaturate((iVar8 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar8,0x20);
    uVar27 = SignedSaturate(iVar16 + iVar8,0x20);
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
    iVar16 = SignedSaturate(local_ec * 0x8000,0x20);
    SignedDoesSaturate(iVar16,0x20);
    uVar1 = SignedSaturate(((int)uVar27 >> 1) - iVar16,0x20);
    SignedDoesSaturate(uVar1,0x20);
    sVar5 = (short)uVar1;
    if ((int)param_4 < 2) {
      *(undefined2 *)param_2 = 0x1000;
      if (param_4 == 1) goto LAB_140189da;
    }
    else {
      uVar27 = 2;
      bVar7 = false;
      iVar16 = iVar18 >> 0x10;
      do {
        local_e8 = (int)sVar5;
        iVar8 = SignedSaturate(iVar16 << 0xf,0x20);
        SignedDoesSaturate(iVar8,0x20);
        uVar1 = SignedSaturate((iVar18 >> 1) - iVar8,0x20);
        SignedDoesSaturate(uVar1,0x20);
        iVar25 = uVar27 + 0x7fffffff;
        psVar12 = asStack_be + iVar25;
        psVar10 = asStack_9a + iVar25;
        iVar8 = SignedSaturate(iVar16 * asStack_be[uVar27 + 0x80000000] * 2,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar26 = SignedSaturate(iVar16 * asStack_9a[uVar27 + 0x80000000] * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar26 = SignedSaturate((int)(short)uVar1 * (int)asStack_be[uVar27 + 0x80000000] * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        uVar24 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(uVar24,0x20);
        if (2 < (int)uVar27) {
          piVar28 = param_1 + 1;
          psVar19 = psVar10;
          psVar17 = psVar12;
          do {
            piVar28 = piVar28 + 1;
            iVar26 = *piVar28 >> 0x10;
            iVar8 = SignedSaturate(iVar26 * 0x8000,0x20);
            SignedDoesSaturate(iVar8,0x20);
            uVar1 = SignedSaturate((*piVar28 >> 1) - iVar8,0x20);
            SignedDoesSaturate(uVar1,0x20);
            iVar8 = SignedSaturate(iVar26 * *psVar17 * 2,0x20);
            SignedDoesSaturate(iVar8,0x20);
            iVar26 = SignedSaturate(iVar26 * *psVar19 * 2,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
            SignedDoesSaturate(iVar8,0x20);
            iVar26 = SignedSaturate((int)(short)uVar1 * (int)*psVar17 * 2,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
            SignedDoesSaturate(iVar8,0x20);
            uVar24 = SignedSaturate(uVar24 + iVar8,0x20);
            SignedDoesSaturate(uVar24,0x20);
            psVar19 = psVar19 + -1;
            psVar17 = psVar17 + -1;
          } while (piVar28 != param_1 + (uVar27 - 3 & 0xffff) + 2);
        }
        uVar15 = uVar24 ^ uVar24 << 1;
        if (((uVar15 == 0) || ((LZCOUNT(uVar15) & 0x1cU) == 0)) && (uVar24 != 0)) {
          if ((int)uVar24 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = 0x7fffffff;
          }
          iVar8 = SignedSaturate(iVar8 * 2,0x20);
          SignedDoesSaturate(iVar8,0x20);
          iVar8 = SignedSaturate(iVar8 + param_1[uVar27],0x20);
          SignedDoesSaturate(iVar8,0x20);
        }
        else {
          iVar8 = SignedSaturate(uVar24 * 0x10 + param_1[uVar27],0x20);
          SignedDoesSaturate(iVar8,0x20);
        }
        iVar26 = iVar8;
        if (iVar8 < 0) {
          iVar26 = SignedSaturate(-iVar8,0x20);
          SignedDoesSaturate(iVar26,0x20);
        }
        if ((int)local_ec < 1) goto LAB_14018b44;
        if ((int)local_ec < 0x3fff) {
                    /* WARNING: Subroutine does not return */
          FUN_1401d020(DAT_14018b60,0x312,DAT_14018b5c,DAT_14018b58);
        }
        uVar24 = DAT_140189ec / local_ec;
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
        iVar9 = iVar23 >> 0x10;
        iVar29 = SignedSaturate(iVar9 * 0x8000,0x20);
        SignedDoesSaturate(iVar29,0x20);
        uVar1 = SignedSaturate((iVar23 >> 1) - iVar29,0x20);
        SignedDoesSaturate(uVar1,0x20);
        iVar29 = iVar26 >> 0x10;
        iVar23 = SignedSaturate(iVar29 * 0x8000,0x20);
        SignedDoesSaturate(iVar23,0x20);
        uVar2 = SignedSaturate((iVar26 >> 1) - iVar23,0x20);
        SignedDoesSaturate(uVar2,0x20);
        iVar26 = SignedSaturate(iVar29 * iVar9 * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar23 = SignedSaturate(iVar29 * (short)uVar1 * 2,0x20);
        SignedDoesSaturate(iVar23,0x20);
        iVar23 = SignedSaturate((iVar23 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar23,0x20);
        iVar26 = SignedSaturate(iVar26 + iVar23,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar23 = SignedSaturate(iVar9 * (short)uVar2 * 2,0x20);
        SignedDoesSaturate(iVar23,0x20);
        iVar23 = SignedSaturate((iVar23 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar23,0x20);
        uVar24 = SignedSaturate(iVar26 + iVar23,0x20);
        SignedDoesSaturate(uVar24,0x20);
        uVar15 = uVar24 ^ uVar24 << 1;
        if (((uVar15 == 0) || ((LZCOUNT(uVar15) & 0x1eU) == 0)) && (uVar24 != 0)) {
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
        if (0 < iVar8) {
          uVar24 = SignedSaturate(-uVar24,0x20);
          SignedDoesSaturate(uVar24,0x20);
        }
        if ((int)local_f0 < 1) {
          uVar15 = local_f0;
          if ((int)local_f0 < -0x3f) {
            uVar15 = 0xffffffc1;
          }
          iVar8 = (int)uVar24 >> (-uVar15 & 0xff);
        }
        else {
          uVar15 = uVar24 ^ uVar24 << 1;
          if (((uVar15 == 0) || (LZCOUNT(uVar15) < (int)local_f0)) && (uVar24 != 0)) {
            if ((int)uVar24 < 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = 0x7fffffff;
            }
            iVar8 = SignedSaturate(iVar8 * 2,0x20);
            SignedDoesSaturate(iVar8,0x20);
          }
          else {
            iVar8 = uVar24 << (local_f0 & 0xff);
          }
        }
        iVar23 = iVar8 >> 0x10;
        iVar26 = SignedSaturate(iVar23 * 0x8000,0x20);
        SignedDoesSaturate(iVar26,0x20);
        uVar1 = SignedSaturate((iVar8 >> 1) - iVar26,0x20);
        SignedDoesSaturate(uVar1,0x20);
        sVar6 = (short)((uint)iVar8 >> 0x10);
        sVar5 = sVar6;
        if (iVar23 < 0) {
          sVar5 = SignedSaturate(-sVar6,0x10);
          SignedSaturate(-(sVar6 >> 0xf),0x10);
        }
        iVar26 = SignedSaturate(sVar5 * 0x10000 - DAT_140189f0,0x20);
        SignedDoesSaturate(iVar26,0x20);
        if (0xffff < iVar26) {
          bVar7 = true;
        }
        if (1 < (int)uVar27) {
          psVar30 = asStack_be + 1;
          psVar17 = asStack_9a + 1;
          psVar31 = &sStack_74;
          psVar19 = &sStack_50;
          while( true ) {
            iVar26 = SignedSaturate(iVar23 * psVar12[1] * 2,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar29 = SignedSaturate(iVar23 * psVar10[1] * 2,0x20);
            SignedDoesSaturate(iVar29,0x20);
            iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar29,0x20);
            iVar26 = SignedSaturate(iVar26 + iVar29,0x20);
            SignedDoesSaturate(iVar26,0x20);
            iVar29 = SignedSaturate((int)psVar12[1] * (int)(short)uVar1 * 2,0x20);
            SignedDoesSaturate(iVar29,0x20);
            iVar29 = SignedSaturate((iVar29 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar29,0x20);
            iVar26 = SignedSaturate(iVar26 + iVar29,0x20);
            SignedDoesSaturate(iVar26,0x20);
            psVar17 = psVar17 + 1;
            iVar29 = SignedSaturate(*psVar17 * 2,0x20);
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
            psVar19 = psVar19 + 1;
            *psVar19 = (short)uVar2;
            if (psVar10 == asStack_9a + iVar25 + (1 - (uVar27 - 1 & 0xffff))) break;
            psVar12 = psVar12 + -1;
            psVar10 = psVar10 + -1;
          }
        }
        (&sStack_74)[uVar27] = sVar6 >> 4;
        iVar26 = SignedSaturate((iVar8 >> 0x14) * 0x8000,0x20);
        SignedDoesSaturate(iVar26,0x20);
        uVar2 = SignedSaturate((iVar8 >> 5) - iVar26,0x20);
        SignedDoesSaturate(uVar2,0x20);
        (&sStack_50)[uVar27] = (short)uVar2;
        iVar8 = SignedSaturate(iVar23 * iVar23 * 2,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar23 = (short)uVar1 * iVar23;
        iVar26 = SignedSaturate(iVar23 * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar26 = SignedSaturate(iVar23 * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(iVar8,0x20);
        if (iVar8 < 0) {
          iVar8 = SignedSaturate(-iVar8,0x20);
          SignedDoesSaturate(iVar8,0x20);
        }
        iVar26 = SignedSaturate(0x7fffffff - iVar8,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar25 = iVar26 >> 0x10;
        iVar8 = SignedSaturate(iVar25 * 0x8000,0x20);
        SignedDoesSaturate(iVar8,0x20);
        uVar1 = SignedSaturate((iVar26 >> 1) - iVar8,0x20);
        SignedDoesSaturate(uVar1,0x20);
        iVar8 = SignedSaturate(local_ec * iVar25 * 2,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar26 = SignedSaturate((int)(short)uVar1 * (int)(short)local_ec * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar8 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(iVar8,0x20);
        iVar26 = SignedSaturate(iVar25 * local_e8 * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        iVar26 = SignedSaturate((iVar26 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar26,0x20);
        uVar24 = SignedSaturate(iVar8 + iVar26,0x20);
        SignedDoesSaturate(uVar24,0x20);
        uVar15 = uVar24 ^ uVar24 << 1;
        iVar8 = 0;
        if (uVar15 != 0) {
          iVar8 = LZCOUNT(uVar15);
          uVar24 = uVar24 << iVar8;
          iVar8 = iVar8 << 0x10;
        }
        local_ec = (int)uVar24 >> 0x10;
        iVar26 = SignedSaturate(local_ec * 0x8000,0x20);
        SignedDoesSaturate(iVar26,0x20);
        uVar1 = SignedSaturate(((int)uVar24 >> 1) - iVar26,0x20);
        SignedDoesSaturate(uVar1,0x20);
        sVar5 = (short)uVar1;
        iVar8 = SignedSaturate(local_f0 * 0x10000 + iVar8,0x20);
        SignedDoesSaturate(iVar8,0x20);
        local_f0 = iVar8 >> 0x10;
        if (0 < (int)uVar27) {
          uVar15 = uVar27 & 0xffff;
          uVar24 = uVar15 - 1 & 0xffff;
          if ((uVar27 == 0x7fff) || (uVar24 < 5)) {
            psVar10 = asStack_be + 1;
            psVar12 = asStack_9a + 1;
            psVar19 = &sStack_74;
            psVar17 = &sStack_50;
            do {
              psVar19 = psVar19 + 1;
              psVar10 = psVar10 + 1;
              *psVar10 = *psVar19;
              psVar17 = psVar17 + 1;
              psVar12 = psVar12 + 1;
              *psVar12 = *psVar17;
            } while ((short *)((int)&local_72 + uVar24 * 2) != psVar19);
          }
          else {
            uVar11 = 0;
            iVar8 = 0;
            do {
              uVar11 = uVar11 + 1;
              *(undefined4 *)((int)local_ba + iVar8) = *(undefined4 *)((int)&local_72 + iVar8);
              *(undefined4 *)((int)local_96 + iVar8) = *(undefined4 *)((int)&local_4e + iVar8);
              iVar8 = iVar8 + 4;
            } while ((uint)uVar11 < uVar15 >> 1);
            iVar8 = (int)(short)((short)(uVar27 & 0xfffe) + 1);
            if ((uVar27 & 0xfffe) != uVar15) {
              asStack_be[iVar8 + 1] = (&sStack_74)[iVar8];
              asStack_9a[iVar8 + 1] = (&sStack_50)[iVar8];
            }
          }
        }
        uVar27 = (uint)(short)((short)uVar27 + 1);
      } while ((int)uVar27 <= (int)param_4);
      if (bVar7) {
        param_4 = param_4 & 0xffff;
        if ((param_2 == (undefined4 *)((int)param_3 + 2)) || (param_4 < 10)) {
          puVar22 = (undefined2 *)((int)param_3 + -2);
          puVar14 = (undefined2 *)((int)param_2 + -2);
          do {
            puVar22 = puVar22 + 1;
            puVar14 = puVar14 + 1;
            *puVar14 = *puVar22;
          } while ((undefined2 *)((int)param_3 + param_4 * 2) != puVar22);
        }
        else {
          param_4 = param_4 + 1;
          puVar13 = param_3;
          puVar20 = param_2;
          do {
            puVar21 = puVar20 + 1;
            *puVar20 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar20 = puVar21;
          } while (puVar21 != param_2 + ((param_4 & 0xffff) >> 1));
          iVar16 = (int)(short)(param_4 & 0xfffe);
          if ((param_4 & 0xfffe) != (param_4 & 0xffff)) {
            *(undefined2 *)((int)param_2 + iVar16 * 2) = *(undefined2 *)((int)param_3 + iVar16 * 2);
          }
        }
      }
      else {
        iVar25 = (int)(short)local_ba[0];
        *(undefined2 *)param_2 = 0x1000;
LAB_140189da:
        iVar16 = 1;
        iVar18 = 2;
        sVar5 = (short)local_96[0];
        while( true ) {
          iVar8 = SignedSaturate(sVar5 * 2,0x20);
          SignedDoesSaturate(iVar8,0x20);
          uVar27 = SignedSaturate(iVar25 * 0x10000 + iVar8,0x20);
          SignedDoesSaturate(uVar27,0x20);
          uVar24 = uVar27 ^ uVar27 << 1;
          iVar8 = uVar27 << 1;
          if (((uVar24 == 0) || (LZCOUNT(uVar24) == 0)) && (uVar27 != 0)) {
            if ((int)uVar27 < 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = 0x7fffffff;
            }
            iVar8 = SignedSaturate(iVar8 * 2,0x20);
            SignedDoesSaturate(iVar8,0x20);
          }
          uVar1 = SignedSaturate(iVar8 + 0x8000,0x20);
          SignedDoesSaturate(uVar1,0x20);
          iVar16 = (int)(short)((short)iVar16 + 1);
          uVar4 = (undefined2)((uint)uVar1 >> 0x10);
          *(undefined2 *)((int)param_2 + iVar18) = uVar4;
          *(undefined2 *)((int)param_3 + iVar18) = uVar4;
          if ((int)param_4 < iVar16) break;
          iVar25 = (int)asStack_be[iVar16 + 1];
          sVar5 = asStack_9a[iVar16 + 1];
          iVar18 = iVar16 << 1;
        }
      }
    }
    if (*DAT_14018b54 == local_2c) {
      return;
    }
  }
  FUN_1401cfd0();
LAB_14018b44:
                    /* WARNING: Subroutine does not return */
  FUN_1401d020(DAT_14018b60,0x310,DAT_14018b5c,DAT_14018b64);
}

