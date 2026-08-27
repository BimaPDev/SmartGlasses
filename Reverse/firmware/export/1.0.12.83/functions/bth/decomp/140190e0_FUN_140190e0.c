/* FUN_140190e0 @ 0x140190e0 */

/* WARNING: Control flow encountered bad instruction data */

int FUN_140190e0(undefined2 *param_1,uint *param_2,uint *param_3,ushort *param_4,short *param_5,
                short *param_6,int *param_7,short param_8)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  short *psVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  short *psVar29;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  uint local_494;
  int *local_490;
  uint local_48c;
  int aiStack_470 [273];
  int local_2c [2];
  
  local_2c[0] = *DAT_14019414;
  iVar16 = (int)param_8;
  iVar18 = iVar16;
  if (0x9f < iVar16) {
    iVar18 = 0xa0;
  }
  local_490 = param_7;
  *param_5 = (short)iVar18;
  local_49c = SignedSaturate(iVar16 * 0x10000 + -0x30000,0x20);
  SignedDoesSaturate(local_49c,0x20);
  local_49c = local_49c >> 0x10;
  if (local_49c < 0x20) {
    local_49c = 0x20;
  }
  iVar14 = SignedSaturate(iVar16 * 0x10000 + 0x30000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  if (0x108 < iVar14) {
    iVar14 = 0x109;
  }
  uVar17 = SignedSaturate(DAT_14019418 + iVar18 * -0x10000,0x20);
  SignedDoesSaturate(uVar17,0x20);
  iVar9 = local_49c * 0x10000;
  iVar15 = SignedSaturate((uVar17 & 0xffff0000) + local_49c * -0x10000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  if (iVar16 < 1) {
    iVar18 = 0;
  }
  else {
    sVar13 = 0;
    uVar17 = 0;
    psVar8 = (short *)((int)param_7 + (iVar15 >> 0x10) * 2);
    do {
      uVar17 = SignedSaturate(uVar17 + ((int)*psVar8 >> 3) * ((int)*psVar8 >> 3),0x20);
      SignedDoesSaturate(uVar17,0x20);
      sVar13 = sVar13 + 1;
      psVar8 = psVar8 + 1;
    } while (sVar13 < iVar18);
    uVar17 = uVar17 ^ uVar17 << 1;
    if (uVar17 == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = LZCOUNT(uVar17) << 0x10;
    }
  }
  uVar17 = SignedSaturate(0x60000 - iVar18,0x20);
  SignedDoesSaturate(uVar17,0x20);
  if ((int)uVar17 < 0x10000) {
    *param_6 = 0;
  }
  else {
    iVar18 = SignedSaturate((uVar17 & 0xffff0000) + 0x10000,0x20);
    SignedDoesSaturate(iVar18,0x20);
    uVar17 = iVar18 >> 0x11;
    *param_6 = (short)(iVar18 >> 0x11);
    if (iVar18 < 0) {
      psVar8 = (short *)((int)param_7 + -2);
      if ((int)uVar17 < -0x10) {
        uVar17 = 0xfffffff0;
      }
      piVar11 = aiStack_470;
      do {
        psVar8 = psVar8 + 1;
        sVar13 = *psVar8;
        if (sVar13 != 0) {
          iVar18 = (int)sVar13 << (-uVar17 & 0xff);
          uVar4 = SignedSaturate(iVar18,0xf);
          SignedDoesSaturate(iVar18,0xf);
          sVar13 = (short)uVar4;
        }
        piVar12 = (int *)((int)piVar11 + 2);
        *(short *)piVar11 = sVar13;
        piVar11 = piVar12;
      } while (local_2c != piVar12);
    }
    else {
      if (0x3e < (int)uVar17) {
        uVar17 = 0x3f;
      }
      psVar8 = (short *)((int)param_7 + -2);
      piVar11 = aiStack_470;
      do {
        psVar8 = psVar8 + 1;
        piVar12 = (int *)((int)piVar11 + 2);
        *(short *)piVar11 = (short)((int)*psVar8 >> (uVar17 & 0xff));
        piVar11 = piVar12;
      } while (local_2c != piVar12);
    }
    local_490 = aiStack_470;
  }
  iVar19 = (int)*param_5;
  iVar18 = SignedSaturate(DAT_14019418 + iVar19 * -0x10000,0x20);
  SignedDoesSaturate(iVar18,0x20);
  iVar18 = iVar18 >> 0x10;
  uVar17 = SignedSaturate(DAT_14019418 + iVar19 * -0x10000,0x20);
  SignedDoesSaturate(uVar17,0x20);
  iVar16 = SignedSaturate((uVar17 & 0xffff0000) + local_49c * -0x10000,0x20);
  SignedDoesSaturate(iVar16,0x20);
  iVar15 = (int)*(short *)((int)local_490 + iVar18 * 2);
  iVar23 = (int)*(short *)((int)local_490 + (iVar16 >> 0x10) * 2);
  uVar17 = iVar23 * iVar23;
  local_494 = iVar15 * iVar23;
  psVar8 = (short *)((int)local_490 + (iVar16 >> 0x10) * 2);
  psVar29 = (short *)((int)local_490 + (iVar18 + 1) * 2);
  if (1 < iVar19) {
    psVar10 = psVar29;
    do {
      psVar8 = psVar8 + 1;
      sVar13 = *psVar8;
      uVar17 = SignedSaturate(uVar17 + (int)sVar13 * (int)sVar13,0x20);
      SignedDoesSaturate(uVar17,0x20);
      psVar20 = psVar10 + 1;
      local_494 = SignedSaturate(local_494 + (int)*psVar10 * (int)sVar13,0x20);
      SignedDoesSaturate(local_494,0x20);
      psVar10 = psVar20;
    } while (psVar20 != (short *)((int)local_490 + (iVar18 + iVar19) * 2));
  }
  local_494 = local_494 | (int)local_494 >> 0x1f;
  uVar6 = local_494 ^ local_494 << 1;
  if ((uVar6 == 0) || (iVar16 = LZCOUNT(uVar6), iVar16 == 0)) {
    local_498 = 0;
    uVar6 = local_494;
  }
  else {
    uVar4 = SignedSaturate(iVar16 << 1,0xf);
    SignedDoesSaturate(iVar16 << 1,0xf);
    local_498 = (int)(short)uVar4;
    uVar6 = local_494 << iVar16;
  }
  local_4a8 = SignedSaturate(((int)uVar6 >> 0x10) * ((int)uVar6 >> 0x10) * 2,0x20);
  SignedDoesSaturate(local_4a8,0x20);
  local_4a8 = local_4a8 >> 0x10;
  uVar6 = uVar17 ^ uVar17 << 1;
  if (uVar6 == 0) {
    local_4a0 = 0;
    uVar6 = uVar17;
  }
  else {
    local_4a0 = LZCOUNT(uVar6);
    uVar6 = uVar17 << local_4a0;
  }
  local_4a4 = (int)uVar6 >> 0x10;
  uVar6 = SignedSaturate(DAT_14019418 + iVar19 * -0x10000,0x20);
  SignedDoesSaturate(uVar6,0x20);
  iVar23 = (int)(short)(local_49c + 1);
  iVar16 = SignedSaturate((uVar6 & 0xffff0000) + (local_49c + 1) * -0x10000,0x20);
  SignedDoesSaturate(iVar16,0x20);
  psVar8 = (short *)((int)local_490 + (iVar16 >> 0x10) * 2);
  local_48c = uVar17;
  if (iVar23 <= iVar14) {
    psVar10 = psVar8 + (iVar19 - 2U & 0xffff) + 2;
    iVar16 = (int)psVar8[1];
    do {
      iVar9 = (int)*psVar8;
      uVar6 = iVar15 * iVar9;
      psVar20 = psVar8 + 1;
      psVar24 = psVar29;
      if (1 < iVar19) {
        do {
          psVar21 = psVar20 + 1;
          uVar6 = SignedSaturate(uVar6 + (int)*psVar24 * (int)*psVar20,0x20);
          SignedDoesSaturate(uVar6,0x20);
          psVar20 = psVar21;
          psVar24 = psVar24 + 1;
        } while (psVar21 != psVar10);
        iVar16 = (int)*psVar10;
      }
      iVar16 = SignedSaturate(uVar17 - iVar16 * iVar16,0x20);
      SignedDoesSaturate(iVar16,0x20);
      uVar17 = SignedSaturate(iVar16 + iVar9 * iVar9,0x20);
      SignedDoesSaturate(uVar17,0x20);
      uVar22 = uVar6 ^ uVar6 << 1;
      if ((uVar22 == 0) || (iVar16 = LZCOUNT(uVar22), iVar16 == 0)) {
        iVar16 = 0;
        iVar28 = 0;
        iVar7 = SignedSaturate(((int)uVar6 >> 0x10) * ((int)uVar6 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar7,0x20);
        uVar22 = uVar17 ^ uVar17 << 1;
        if (uVar22 != 0) goto LAB_14019346;
LAB_140195c6:
        iVar25 = 0;
        uVar22 = uVar17;
      }
      else {
        iVar7 = (int)(uVar6 << iVar16) >> 0x10;
        uVar4 = SignedSaturate(iVar16 << 1,0xf);
        SignedDoesSaturate(iVar16 << 1,0xf);
        iVar28 = (int)(short)uVar4;
        iVar7 = SignedSaturate(iVar7 * iVar7 * 2,0x20);
        SignedDoesSaturate(iVar7,0x20);
        uVar22 = uVar17 ^ uVar17 << 1;
        iVar16 = iVar28;
        if (uVar22 == 0) goto LAB_140195c6;
LAB_14019346:
        iVar25 = LZCOUNT(uVar22);
        uVar22 = uVar17 << iVar25;
        iVar28 = iVar16;
      }
      if ((0 < (int)uVar6) && (0 < (int)uVar22 >> 0x10)) {
        iVar16 = SignedSaturate((iVar7 >> 0x10) * local_4a4 * 2,0x20);
        SignedDoesSaturate(iVar16,0x20);
        iVar27 = SignedSaturate(((int)uVar22 >> 0x10) * local_4a8 * 2,0x20);
        SignedDoesSaturate(iVar27,0x20);
        uVar26 = SignedSaturate(iVar28 * 0x10000 + local_4a0 * 0x10000,0x20);
        SignedDoesSaturate(uVar26,0x20);
        uVar1 = SignedSaturate(local_498 * 0x10000 + iVar25 * 0x10000,0x20);
        SignedDoesSaturate(uVar1,0x20);
        iVar2 = SignedSaturate((uVar26 & 0xffff0000) - (uVar1 & 0xffff0000),0x20);
        SignedDoesSaturate(iVar2,0x20);
        uVar26 = iVar2 >> 0x10;
        if (iVar2 < 0) {
          if ((int)uVar26 < -0x3f) {
            uVar26 = 0xffffffc1;
          }
          iVar27 = iVar27 >> (-uVar26 & 0xff);
        }
        else {
          if (0x3e < (int)uVar26) {
            uVar26 = 0x3f;
          }
          iVar16 = iVar16 >> (uVar26 & 0xff);
        }
        iVar16 = SignedSaturate(iVar16 - iVar27,0x20);
        SignedDoesSaturate(iVar16,0x20);
        if (0 < iVar16) {
          local_4a8 = (int)(short)((uint)iVar7 >> 0x10);
          local_4a4 = (int)(short)(uVar22 >> 0x10);
          local_4a0 = iVar25;
          local_49c = iVar23;
          local_498 = iVar28;
          local_494 = uVar6;
          local_48c = uVar17;
        }
      }
      iVar23 = (int)(short)((short)iVar23 + 1);
      psVar10 = psVar10 + -1;
      iVar16 = iVar9;
      psVar8 = psVar8 + -1;
    } while (iVar23 <= iVar14);
    iVar9 = local_49c << 0x10;
  }
  uVar17 = SignedSaturate(DAT_14019418 + iVar19 * -0x10000,0x20);
  SignedDoesSaturate(uVar17,0x20);
  iVar16 = SignedSaturate((uVar17 & 0xffff0000) - iVar9,0x20);
  SignedDoesSaturate(iVar16,0x20);
  psVar8 = (short *)((int)local_490 + (iVar16 >> 0x10) * 2);
  uVar17 = SignedSaturate(0,0x20);
  SignedDoesSaturate(uVar17,0x20);
  if (iVar19 < 1) {
LAB_14019434:
    if (uVar17 == 0) goto LAB_140195ac;
LAB_1401943a:
    uVar6 = SignedSaturate(0,0x20);
    SignedDoesSaturate(uVar6,0x20);
    if (0 < iVar19) {
      while( true ) {
        sVar13 = psVar29[-1];
        if (sVar13 < 0) {
          sVar3 = SignedSaturate(-sVar13,0x10);
          SignedSaturate(-(sVar13 >> 0xf),0x10);
          uVar6 = SignedSaturate(uVar6 + (int)sVar3,0x20);
          SignedDoesSaturate(uVar6,0x20);
        }
        else {
          uVar6 = SignedSaturate(uVar6 + (int)sVar13,0x20);
          SignedDoesSaturate(uVar6,0x20);
        }
        if (psVar29 == (short *)((int)local_490 + (iVar18 + iVar19) * 2)) break;
        psVar29 = psVar29 + 1;
      }
    }
    uVar22 = uVar6 ^ uVar6 << 1;
    if (uVar22 == 0) {
      iVar16 = 0;
      iVar18 = 0;
    }
    else {
      iVar18 = LZCOUNT(uVar22);
      iVar16 = iVar18 << 0x10;
    }
    uVar22 = SignedSaturate(iVar16 + -0x10000,0x20);
    SignedDoesSaturate(uVar22,0x20);
    uVar26 = uVar17 ^ uVar17 << 1;
    iVar16 = 0;
    if (uVar26 != 0) {
      iVar16 = LZCOUNT(uVar26);
    }
    uVar1 = (int)uVar22 >> 0x10;
    if (uVar26 != 0) {
      uVar17 = uVar17 << iVar16;
    }
    if ((int)uVar1 < 1) {
      uVar26 = 0xffffffc1;
      if (-0x3f < (int)uVar1) {
        uVar26 = uVar1;
      }
      iVar18 = (int)uVar6 >> (-uVar26 & 0xff);
    }
    else if ((iVar18 < (int)uVar1) && (uVar6 != 0)) {
      if ((int)uVar6 < 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = 0x7fffffff;
      }
      iVar18 = SignedSaturate(iVar18 * 2,0x20);
      SignedDoesSaturate(iVar18,0x20);
    }
    else {
      iVar18 = uVar6 << (uVar1 & 0xff);
    }
    iVar18 = iVar18 >> 0x10;
    if ((int)uVar17 < 0x10000) goto LAB_14019628;
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401d020(DAT_1401965c,0x311,DAT_14019658,DAT_14019660);
    }
    if ((int)uVar17 >> 0x10 < iVar18) {
      FUN_14016938();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = (uint)(iVar18 << 0xf) / (uint)((int)uVar17 >> 0x10);
    uVar17 = 0x7fff;
    if ((int)uVar6 < 0x8000) {
      uVar17 = uVar6;
    }
    uVar22 = SignedSaturate(iVar16 * 0x10000 - (uVar22 & uRam14019648),0x20);
    SignedDoesSaturate(uVar22,0x20);
    iVar18 = SignedSaturate((uVar22 & uRam14019648) - 0x10000,0x20);
    SignedDoesSaturate(iVar18,0x20);
    uVar22 = iVar18 >> 0x10;
    if ((iVar18 < 0x10000) || (uVar6 == 0)) {
      if ((int)uVar22 < -0x3f) {
        uVar22 = 0xffffffc1;
      }
      sVar13 = (short)((int)uVar17 >> (-uVar22 & 0xff));
    }
    else {
      if (0xf < (int)uVar22) {
        uVar22 = 0x10;
      }
      iVar18 = (int)(short)uVar17 << (uVar22 & 0xff);
      uVar4 = SignedSaturate(iVar18,0xf);
      SignedDoesSaturate(iVar18,0xf);
      sVar13 = (short)uVar4;
    }
    sVar3 = sVar13;
    if (local_494 == 0xffffffff) {
      sVar3 = SignedSaturate(-sVar13,0x10);
      SignedSaturate(-(sVar13 >> 0xf),0x10);
    }
    iVar18 = (int)sVar3;
    if (0x3fff < iVar18) {
      iVar18 = 0x4000;
    }
    if (iVar18 < DAT_1401964c) {
      iVar18 = DAT_1401964c;
    }
    iVar16 = iVar18 * 0x300;
  }
  else {
    psVar10 = psVar8 + iVar19;
    do {
      while( true ) {
        psVar20 = psVar8 + 1;
        sVar13 = *psVar8;
        psVar8 = psVar20;
        if (-1 < sVar13) break;
        sVar3 = SignedSaturate(-sVar13,0x10);
        SignedSaturate(-(sVar13 >> 0xf),0x10);
        uVar17 = SignedSaturate(uVar17 + (int)sVar3,0x20);
        SignedDoesSaturate(uVar17,0x20);
        if (psVar20 == psVar10) goto LAB_14019434;
      }
      uVar17 = SignedSaturate(uVar17 + (int)sVar13,0x20);
      SignedDoesSaturate(uVar17,0x20);
    } while (psVar20 != psVar10);
    if (uVar17 != 0) goto LAB_1401943a;
LAB_140195ac:
    iVar16 = 0;
    iVar18 = iVar16;
  }
  *param_1 = (short)iVar18;
  uVar4 = SignedSaturate(iVar16 * 2,0x20);
  SignedDoesSaturate(uVar4,0x20);
  uVar5 = (ushort)((uint)uVar4 >> 0x10);
  *param_4 = uVar5 & ~((short)uVar5 >> 0xf);
  *param_3 = local_48c;
  *param_2 = local_494;
  if (*DAT_14019650 == local_2c[0]) {
    return local_49c;
  }
  FUN_1401cfd0();
LAB_14019628:
                    /* WARNING: Subroutine does not return */
  FUN_1401d020(DAT_1401965c,0x310,DAT_14019658,DAT_14019654);
}

