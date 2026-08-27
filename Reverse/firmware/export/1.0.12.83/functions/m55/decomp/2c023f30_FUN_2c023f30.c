/* FUN_2c023f30 @ 0x2c023f30 */

int FUN_2c023f30(undefined2 *param_1,uint *param_2,uint *param_3,ushort *param_4,short *param_5,
                short *param_6,int *param_7,short param_8)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  uint uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  short *psVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int local_4c4;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  int *local_494;
  uint local_490;
  uint local_48c;
  int aiStack_470 [273];
  int local_2c [2];
  short *psVar9;
  
  local_2c[0] = *DAT_2c02426c;
  iVar14 = (int)param_8;
  local_494 = param_7;
  iVar21 = iVar14;
  if (0x9f < iVar14) {
    iVar21 = 0xa0;
  }
  *param_5 = (short)iVar21;
  local_498 = SignedSaturate(iVar14 * 0x10000 + -0x30000,0x20);
  SignedDoesSaturate(local_498,0x20);
  local_498 = local_498 >> 0x10;
  if (local_498 < 0x20) {
    local_498 = 0x20;
  }
  iVar18 = SignedSaturate(iVar14 * 0x10000 + 0x30000,0x20);
  SignedDoesSaturate(iVar18,0x20);
  iVar18 = iVar18 >> 0x10;
  if (0x108 < iVar18) {
    iVar18 = 0x109;
  }
  uVar5 = SignedSaturate(DAT_2c024270 + iVar21 * -0x10000,0x20);
  SignedDoesSaturate(uVar5,0x20);
  iVar11 = local_498 * 0x10000;
  iVar17 = SignedSaturate((DAT_2c024274 & uVar5) + local_498 * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  if (iVar14 < 1) {
    iVar21 = 0;
  }
  else {
    sVar13 = 0;
    uVar5 = 0;
    psVar6 = (short *)((int)param_7 + (iVar17 >> 0x10) * 2);
    do {
      uVar5 = SignedSaturate(uVar5 + ((int)*psVar6 >> 3) * ((int)*psVar6 >> 3),0x20);
      SignedDoesSaturate(uVar5,0x20);
      sVar13 = sVar13 + 1;
      psVar6 = psVar6 + 1;
    } while (sVar13 < iVar21);
    uVar5 = uVar5 ^ uVar5 << 1;
    if (uVar5 == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = LZCOUNT(uVar5) << 0x10;
    }
  }
  uVar5 = SignedSaturate(0x60000 - iVar21,0x20);
  SignedDoesSaturate(uVar5,0x20);
  if ((int)uVar5 < 0x10000) {
    *param_6 = 0;
  }
  else {
    iVar21 = SignedSaturate((uVar5 & 0xffff0000) + 0x10000,0x20);
    SignedDoesSaturate(iVar21,0x20);
    uVar5 = iVar21 >> 0x11;
    *param_6 = (short)(iVar21 >> 0x11);
    psVar6 = (short *)((int)param_7 + -2);
    uVar7 = 0xfffffff0;
    if (-0x10 < (int)uVar5) {
      uVar7 = uVar5;
    }
    piVar15 = aiStack_470;
    uVar28 = uVar5;
    if (0x3e < (int)uVar5) {
      uVar28 = 0x3f;
    }
    do {
      while( true ) {
        psVar6 = psVar6 + 1;
        iVar21 = (int)*psVar6;
        if ((iVar21 == 0) || (-1 < (int)uVar5)) break;
        iVar21 = iVar21 << (-uVar7 & 0xff);
        uVar3 = SignedSaturate(iVar21,0xf);
        SignedDoesSaturate(iVar21,0xf);
        piVar16 = (int *)((int)piVar15 + 2);
        *(short *)piVar15 = (short)uVar3;
        piVar15 = piVar16;
        if (local_2c == piVar16) goto LAB_2c02404a;
      }
      piVar16 = (int *)((int)piVar15 + 2);
      *(short *)piVar15 = (short)(iVar21 >> (uVar28 & 0xff));
      piVar15 = piVar16;
    } while (piVar16 != local_2c);
LAB_2c02404a:
    local_494 = aiStack_470;
  }
  iVar26 = (int)*param_5;
  iVar21 = SignedSaturate(DAT_2c024270 + iVar26 * -0x10000,0x20);
  SignedDoesSaturate(iVar21,0x20);
  iVar21 = iVar21 >> 0x10;
  uVar5 = SignedSaturate(DAT_2c024270 + iVar26 * -0x10000,0x20);
  SignedDoesSaturate(uVar5,0x20);
  iVar14 = SignedSaturate((DAT_2c024274 & uVar5) + local_498 * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar17 = (int)*(short *)((int)local_494 + iVar21 * 2);
  psVar23 = (short *)((int)local_494 + (iVar21 + 1) * 2);
  iVar25 = (int)*(short *)((int)local_494 + (iVar14 >> 0x10) * 2);
  psVar6 = (short *)((int)local_494 + (iVar14 >> 0x10) * 2);
  uVar5 = iVar25 * iVar25;
  local_490 = iVar17 * iVar25;
  if (1 < iVar26) {
    psVar22 = psVar23;
    do {
      psVar6 = psVar6 + 1;
      sVar13 = *psVar6;
      uVar5 = SignedSaturate(uVar5 + (int)sVar13 * (int)sVar13,0x20);
      SignedDoesSaturate(uVar5,0x20);
      psVar8 = psVar22 + 1;
      local_490 = SignedSaturate(local_490 + (int)*psVar22 * (int)sVar13,0x20);
      SignedDoesSaturate(local_490,0x20);
      psVar22 = psVar8;
    } while (psVar8 != (short *)((int)local_494 + (iVar21 + iVar26) * 2));
  }
  local_490 = local_490 | (int)local_490 >> 0x1f;
  uVar7 = local_490 ^ local_490 << 1;
  if ((uVar7 == 0) || (iVar14 = LZCOUNT(uVar7), iVar14 == 0)) {
    local_49c = 0;
    uVar7 = local_490;
  }
  else {
    uVar3 = SignedSaturate(iVar14 << 1,0xf);
    SignedDoesSaturate(iVar14 << 1,0xf);
    local_49c = (int)(short)uVar3;
    uVar7 = local_490 << iVar14;
  }
  local_4a8 = SignedSaturate(((int)uVar7 >> 0x10) * ((int)uVar7 >> 0x10) * 2,0x20);
  SignedDoesSaturate(local_4a8,0x20);
  local_4a8 = local_4a8 >> 0x10;
  uVar7 = uVar5 ^ uVar5 << 1;
  if (uVar7 == 0) {
    local_4a0 = 0;
    uVar7 = uVar5;
  }
  else {
    local_4a0 = LZCOUNT(uVar7);
    uVar7 = uVar5 << local_4a0;
  }
  local_4a4 = (int)uVar7 >> 0x10;
  uVar7 = SignedSaturate(DAT_2c024270 + iVar26 * -0x10000,0x20);
  SignedDoesSaturate(uVar7,0x20);
  iVar25 = (int)(short)(local_498 + 1);
  iVar14 = SignedSaturate((uVar7 & 0xffff0000) + (local_498 + 1) * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  psVar6 = (short *)((int)local_494 + (iVar14 >> 0x10) * 2);
  local_48c = uVar5;
  if (iVar25 <= iVar18) {
    uVar7 = iVar26 - 2U & 0xffff;
    iVar14 = (int)psVar6[1];
    do {
      iVar11 = (int)*psVar6;
      uVar28 = iVar17 * iVar11;
      psVar8 = psVar23;
      psVar22 = psVar6;
      if (1 < iVar26) {
        do {
          psVar9 = psVar8 + 1;
          uVar28 = SignedSaturate(uVar28 + (int)*psVar8 * (int)psVar22[1],0x20);
          SignedDoesSaturate(uVar28,0x20);
          psVar8 = psVar9;
          psVar22 = psVar22 + 1;
        } while (psVar9 != (short *)((int)local_494 + (iVar21 + uVar7 + 2) * 2));
        iVar14 = (int)psVar6[uVar7 + 2];
      }
      iVar14 = SignedSaturate(uVar5 - iVar14 * iVar14,0x20);
      SignedDoesSaturate(iVar14,0x20);
      uVar5 = SignedSaturate(iVar14 + iVar11 * iVar11,0x20);
      SignedDoesSaturate(uVar5,0x20);
      uVar10 = uVar28 ^ uVar28 << 1;
      if ((uVar10 == 0) || (iVar14 = LZCOUNT(uVar10), iVar14 == 0)) {
        local_4c4 = 0;
        iVar14 = SignedSaturate(((int)uVar28 >> 0x10) * ((int)uVar28 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar14,0x20);
        uVar10 = uVar5 ^ uVar5 << 1;
        if (uVar10 != 0) goto LAB_2c0241be;
LAB_2c02439a:
        iVar12 = 0;
        uVar10 = uVar5;
      }
      else {
        iVar12 = (int)(uVar28 << iVar14) >> 0x10;
        uVar3 = SignedSaturate(iVar14 << 1,0xf);
        SignedDoesSaturate(iVar14 << 1,0xf);
        local_4c4 = (int)(short)uVar3;
        iVar14 = SignedSaturate(iVar12 * iVar12 * 2,0x20);
        SignedDoesSaturate(iVar14,0x20);
        uVar10 = uVar5 ^ uVar5 << 1;
        if (uVar10 == 0) goto LAB_2c02439a;
LAB_2c0241be:
        iVar12 = LZCOUNT(uVar10);
        uVar10 = uVar5 << iVar12;
      }
      iVar19 = (int)uVar10 >> 0x10;
      if ((0 < (int)uVar28) && (0 < iVar19)) {
        iVar27 = SignedSaturate((iVar14 >> 0x10) * local_4a4 * 2,0x20);
        SignedDoesSaturate(iVar27,0x20);
        iVar20 = SignedSaturate(local_4a8 * iVar19 * 2,0x20);
        SignedDoesSaturate(iVar20,0x20);
        uVar10 = SignedSaturate(local_4c4 * 0x10000 + local_4a0 * 0x10000,0x20);
        SignedDoesSaturate(uVar10,0x20);
        uVar24 = SignedSaturate(local_49c * 0x10000 + iVar12 * 0x10000,0x20);
        SignedDoesSaturate(uVar24,0x20);
        iVar1 = SignedSaturate((uVar10 & 0xffff0000) - (uVar24 & 0xffff0000),0x20);
        SignedDoesSaturate(iVar1,0x20);
        uVar10 = iVar1 >> 0x10;
        if (iVar1 < 0) {
          if ((int)uVar10 < -0x3f) {
            uVar10 = 0xffffffc1;
          }
          iVar20 = iVar20 >> (-uVar10 & 0xff);
        }
        else {
          if (0x3e < (int)uVar10) {
            uVar10 = 0x3f;
          }
          iVar27 = iVar27 >> (uVar10 & 0xff);
        }
        iVar27 = SignedSaturate(iVar27 - iVar20,0x20);
        SignedDoesSaturate(iVar27,0x20);
        if (0 < iVar27) {
          local_4a8 = (int)(short)((uint)iVar14 >> 0x10);
          local_49c = local_4c4;
          local_4a4 = iVar19;
          local_4a0 = iVar12;
          local_498 = iVar25;
          local_490 = uVar28;
          local_48c = uVar5;
        }
      }
      iVar25 = (int)(short)((short)iVar25 + 1);
      iVar14 = iVar11;
      psVar6 = psVar6 + -1;
    } while (iVar25 <= iVar18);
    iVar11 = local_498 << 0x10;
  }
  uVar5 = SignedSaturate(DAT_2c024270 + iVar26 * -0x10000,0x20);
  SignedDoesSaturate(uVar5,0x20);
  iVar14 = SignedSaturate((DAT_2c024274 & uVar5) - iVar11,0x20);
  SignedDoesSaturate(iVar14,0x20);
  psVar6 = (short *)((int)local_494 + (iVar14 >> 0x10) * 2);
  uVar5 = SignedSaturate(0,0x20);
  SignedDoesSaturate(uVar5,0x20);
  if (0 < iVar26) {
    psVar22 = psVar6 + iVar26;
    do {
      while( true ) {
        psVar8 = psVar6 + 1;
        sVar13 = *psVar6;
        psVar6 = psVar8;
        if (-1 < sVar13) break;
        sVar2 = SignedSaturate(-sVar13,0x10);
        SignedSaturate(-(sVar13 >> 0xf),0x10);
        uVar5 = SignedSaturate(uVar5 + (int)sVar2,0x20);
        SignedDoesSaturate(uVar5,0x20);
        if (psVar8 == psVar22) goto joined_r0x2c024346;
      }
      uVar5 = SignedSaturate(uVar5 + (int)sVar13,0x20);
      SignedDoesSaturate(uVar5,0x20);
    } while (psVar8 != psVar22);
  }
joined_r0x2c024346:
  if (uVar5 == 0) {
    iVar14 = 0;
    iVar21 = 0;
LAB_2c02434a:
    *param_1 = (short)iVar21;
    uVar3 = SignedSaturate(iVar14 * 2,0x20);
    SignedDoesSaturate(uVar3,0x20);
    uVar4 = (ushort)((uint)uVar3 >> 0x10);
    *param_4 = uVar4 & ~((short)uVar4 >> 0xf);
    *param_3 = local_48c;
    *param_2 = local_490;
    if (*DAT_2c0244b8 != local_2c[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00b2e8();
    }
    return local_498;
  }
  uVar7 = SignedSaturate(0,0x20);
  SignedDoesSaturate(uVar7,0x20);
  if (0 < iVar26) {
    while( true ) {
      sVar13 = psVar23[-1];
      if (sVar13 < 0) {
        sVar2 = SignedSaturate(-sVar13,0x10);
        SignedSaturate(-(sVar13 >> 0xf),0x10);
        uVar7 = SignedSaturate(uVar7 + (int)sVar2,0x20);
        SignedDoesSaturate(uVar7,0x20);
      }
      else {
        uVar7 = SignedSaturate(uVar7 + (int)sVar13,0x20);
        SignedDoesSaturate(uVar7,0x20);
      }
      if (psVar23 == (short *)((int)local_494 + (iVar21 + iVar26) * 2)) break;
      psVar23 = psVar23 + 1;
    }
  }
  uVar28 = uVar7 ^ uVar7 << 1;
  if (uVar28 == 0) {
    iVar21 = 0;
    iVar14 = 0;
  }
  else {
    iVar21 = LZCOUNT(uVar28);
    iVar14 = iVar21 << 0x10;
  }
  uVar28 = SignedSaturate(iVar14 + -0x10000,0x20);
  SignedDoesSaturate(uVar28,0x20);
  uVar24 = (int)uVar28 >> 0x10;
  uVar10 = uVar5 ^ uVar5 << 1;
  iVar14 = 0;
  if (uVar10 != 0) {
    iVar14 = LZCOUNT(uVar10);
    uVar5 = uVar5 << iVar14;
  }
  if ((int)uVar24 < 1) {
    uVar10 = 0xffffffc1;
    if (-0x3f < (int)uVar24) {
      uVar10 = uVar24;
    }
    iVar21 = (int)uVar7 >> (-uVar10 & 0xff);
  }
  else if ((iVar21 < (int)uVar24) && (uVar7 != 0)) {
    if ((int)uVar7 < 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = 0x7fffffff;
    }
    iVar21 = SignedSaturate(iVar21 * 2,0x20);
    SignedDoesSaturate(iVar21,0x20);
  }
  else {
    iVar21 = uVar7 << (uVar24 & 0xff);
  }
  iVar21 = iVar21 >> 0x10;
  if (0xffff < (int)uVar5) {
    if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c027d9c(DAT_2c0244cc,0x311,DAT_2c0244c8,DAT_2c0244c4);
    }
    if (iVar21 <= (int)uVar5 >> 0x10) {
      uVar5 = (uint)(iVar21 << 0xf) / (uint)((int)uVar5 >> 0x10);
      if (0x7ffe < (int)uVar5) {
        uVar5 = 0x7fff;
      }
      uVar7 = SignedSaturate(iVar14 * 0x10000 - (uVar28 & DAT_2c0244bc),0x20);
      SignedDoesSaturate(uVar7,0x20);
      iVar21 = SignedSaturate((uVar7 & DAT_2c0244bc) - 0x10000,0x20);
      SignedDoesSaturate(iVar21,0x20);
      uVar7 = iVar21 >> 0x10;
      if (((int)uVar7 < 1) || ((short)uVar5 == 0)) {
        if ((int)uVar7 < -0x3f) {
          uVar7 = 0xffffffc1;
        }
        sVar13 = (short)((int)uVar5 >> (-uVar7 & 0xff));
      }
      else {
        if (0xf < (int)uVar7) {
          uVar7 = 0x10;
        }
        iVar21 = (int)(short)uVar5 << (uVar7 & 0xff);
        uVar3 = SignedSaturate(iVar21,0xf);
        SignedDoesSaturate(iVar21,0xf);
        sVar13 = (short)uVar3;
      }
      iVar21 = (int)sVar13;
      if (local_490 == 0xffffffff) {
        sVar2 = SignedSaturate(-sVar13,0x10);
        SignedSaturate(-(sVar13 >> 0xf),0x10);
        iVar21 = (int)sVar2;
        if (0x3fff < iVar21) {
          iVar21 = 0x4000;
        }
        if (iVar21 < DAT_2c0244c0) {
          iVar21 = DAT_2c0244c0;
        }
        iVar14 = iVar21 * 0x300;
      }
      else {
        if (0x3fff < iVar21) {
          iVar21 = 0x4000;
        }
        if (iVar21 < DAT_2c0244c0) {
          iVar21 = DAT_2c0244c0;
        }
        iVar14 = iVar21 * 0x300;
      }
      goto LAB_2c02434a;
    }
    FUN_2c0215f8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c027d9c(DAT_2c0244cc,0x310,DAT_2c0244c8,DAT_2c0244d0);
}

