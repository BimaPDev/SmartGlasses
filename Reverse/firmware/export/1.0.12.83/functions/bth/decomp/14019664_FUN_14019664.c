/* FUN_14019664 @ 0x14019664 */

void FUN_14019664(uint *param_1,int param_2,uint param_3,uint param_4,short param_5)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  uint auStack_380 [213];
  uint local_2c [2];
  
  uVar10 = (uint)param_5;
  local_2c[0] = *DAT_14019754;
  if (0 < (int)uVar10) {
    uVar9 = uVar10;
    if (0x3e < (int)uVar10) {
      uVar9 = 0x3f;
    }
    psVar17 = (short *)((int)param_1 + -2);
    puVar14 = auStack_380;
    do {
      psVar17 = psVar17 + 1;
      puVar15 = (uint *)((int)puVar14 + 2);
      *(short *)puVar14 = (short)((int)*psVar17 >> (uVar9 & 0xff));
      param_1 = auStack_380;
      puVar14 = puVar15;
    } while (local_2c != puVar15);
  }
  if (param_2 < 1) {
    uVar16 = 0;
    uVar9 = 0;
  }
  else {
    uVar16 = 0;
    uVar9 = 0;
    psVar17 = (short *)((int)param_1 + (0x1aa - param_2) * 2 + -2);
    do {
      psVar1 = psVar17 + 1;
      sVar2 = *psVar1;
      uVar9 = SignedSaturate(uVar9 + (int)sVar2 * (int)sVar2,0x20);
      SignedDoesSaturate(uVar9,0x20);
      uVar16 = SignedSaturate(uVar16 + (int)*psVar17 * (int)sVar2,0x20);
      SignedDoesSaturate(uVar16,0x20);
      psVar17 = psVar1;
    } while ((short *)((int)param_1 + (param_2 - 1U & 0xffff) * 2 + (0x1aa - param_2) * 2) != psVar1
            );
  }
  uVar18 = param_3 ^ param_3 << 1;
  uVar12 = param_3;
  if ((uVar18 != 0) && (iVar6 = LZCOUNT(uVar18), iVar6 != 0)) {
    SignedSaturate(iVar6 << 1,0xf);
    SignedDoesSaturate(iVar6 << 1,0xf);
    uVar12 = param_3 << iVar6;
  }
  uVar3 = SignedSaturate(((int)uVar12 >> 0x10) * ((int)uVar12 >> 0x10) * 2,0x20);
  SignedDoesSaturate(uVar3,0x20);
  uVar12 = param_4 ^ param_4 << 1;
  iVar6 = 0;
  if (uVar12 != 0) {
    iVar6 = LZCOUNT(uVar12);
  }
  if (uVar9 == 0) {
    iVar5 = 0;
    iVar7 = 0;
    iVar6 = 0;
LAB_14019714:
    iVar13 = SignedSaturate(iVar5 + -0x1b000000,0x20);
    SignedDoesSaturate(iVar13,0x20);
    uVar3 = SignedSaturate((iVar13 >> 1) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    iVar5 = SignedSaturate(iVar7 * 2,0x20);
    SignedDoesSaturate(iVar5,0x20);
    iVar5 = SignedSaturate((iVar13 >> 1) + iVar5,0x20);
    SignedDoesSaturate(iVar5,0x20);
    iVar6 = SignedSaturate(iVar6 * 2,0x20);
    SignedDoesSaturate(iVar6,0x20);
    iVar6 = SignedSaturate(iVar5 + iVar6,0x20);
    SignedDoesSaturate(iVar6,0x20);
    iVar6 = SignedSaturate(iVar6 + 0x8000,0x20);
    SignedDoesSaturate(iVar6,0x20);
    uVar10 = *DAT_14019754 ^ local_2c[0];
    if (uVar10 == 0) {
      return;
    }
    FUN_1401cfd0(iVar6 >> 0x10,iVar7,uVar10,0);
  }
  else {
    if ((int)uVar9 < 1) {
      uVar8 = 0;
      uVar12 = uVar8;
    }
    else {
      uVar12 = uVar9 ^ uVar9 << 1;
      if (uVar12 == 0) {
        iVar5 = 0;
        uVar12 = uVar9;
      }
      else {
        iVar5 = LZCOUNT(uVar12);
        uVar12 = uVar9 << iVar5;
        iVar5 = iVar5 << 0x10;
      }
      uVar11 = SignedSaturate(0x1e0000 - iVar5,0x20);
      SignedDoesSaturate(uVar11,0x20);
      uVar8 = SignedSaturate(((int)uVar12 >> 0x19) * 0x10000 + -0x200000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      iVar7 = *(short *)(DAT_14019bc0 + ((int)uVar8 >> 0x10) * 2) * 0x10000;
      iVar5 = SignedSaturate((uVar8 & DAT_14019bc4) + 0x10000,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar5 = SignedSaturate(iVar7 + *(short *)(DAT_14019bc0 + (iVar5 >> 0x10) * 2) * -0x10000,0x20)
      ;
      SignedDoesSaturate(iVar5,0x20);
      iVar5 = SignedSaturate((iVar5 >> 0x10) * ((uVar12 & 0x1ffffff) >> 10) * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar5 = SignedSaturate(iVar7 - iVar5,0x20);
      SignedDoesSaturate(iVar5,0x20);
      uVar8 = iVar5 >> 0x10;
      uVar12 = uVar11 & DAT_14019bc4;
    }
    uVar10 = SignedSaturate(uVar10 * 0x10000 + -0x10000,0x20);
    SignedDoesSaturate(uVar10,0x20);
    uVar11 = uVar12;
    if (uVar10 >> 0x10 == 0) {
      uVar10 = SignedSaturate(uVar12 + 0x20000,0x20);
      SignedDoesSaturate(uVar10,0x20);
      uVar11 = uVar10 & 0xffff0000;
    }
    iVar5 = SignedSaturate(uVar8 * 2,0x20);
    SignedDoesSaturate(iVar5,0x20);
    uVar10 = SignedSaturate(uVar11 + iVar5,0x20);
    SignedDoesSaturate(uVar10,0x20);
    uVar11 = uVar10 ^ uVar10 << 1;
    if (((uVar11 == 0) || ((uint)LZCOUNT(uVar11) < 9)) && (uVar10 != 0)) {
      if ((int)uVar10 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0x7fffffff;
      }
      iVar5 = SignedSaturate(iVar5 * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
    }
    else {
      iVar5 = uVar10 << 9;
    }
    iVar7 = 0;
    if (param_4 == 0) {
LAB_14019936:
      uVar10 = uVar16;
      if ((int)uVar16 < 0) {
        uVar10 = SignedSaturate(-uVar16,0x20);
        SignedDoesSaturate(uVar10,0x20);
      }
      uVar12 = uVar10 ^ uVar10 << 1;
      if (uVar12 == 0) {
        iVar6 = 0;
        iVar13 = 0;
      }
      else {
        iVar13 = LZCOUNT(uVar12);
        iVar6 = iVar13 << 0x10;
      }
      uVar12 = SignedSaturate(iVar6 + -0x10000,0x20);
      SignedDoesSaturate(uVar12,0x20);
      uVar18 = uVar9 ^ uVar9 << 1;
      iVar6 = 0;
      if (uVar18 != 0) {
        iVar6 = LZCOUNT(uVar18);
      }
      uVar8 = (int)uVar12 >> 0x10;
      if (uVar18 != 0) {
        uVar9 = uVar9 << iVar6;
      }
      if ((int)uVar8 < 1) {
        uVar18 = 0xffffffc1;
        if (-0x3f < (int)uVar8) {
          uVar18 = uVar8;
        }
        iVar13 = (int)uVar10 >> (-uVar18 & 0xff);
      }
      else if ((iVar13 < (int)uVar8) && (uVar10 != 0)) {
        if ((int)uVar10 < 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 0x7fffffff;
        }
        iVar13 = SignedSaturate(iVar13 * 2,0x20);
        SignedDoesSaturate(iVar13,0x20);
      }
      else {
        iVar13 = uVar10 << (uVar8 & 0xff);
      }
      iVar13 = iVar13 >> 0x10;
      if ((int)uVar9 < 0x10000) {
LAB_14019b8a:
                    /* WARNING: Subroutine does not return */
        FUN_1401d020(DAT_14019bb8,0x310,DAT_14019bb4,DAT_14019bb0);
      }
      if (iVar13 < 0) goto LAB_14019ba0;
      if (iVar13 <= (int)uVar9 >> 0x10) {
        uVar10 = (uint)(iVar13 << 0xf) / (uint)((int)uVar9 >> 0x10);
        if ((int)uVar10 < 0x8000) {
          iVar6 = SignedSaturate(iVar6 * 0x10000 + (uVar12 >> 0x10) * -0x10000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          uVar9 = iVar6 >> 0x10;
          if (iVar6 < 0x10000) {
            if ((int)uVar9 < -0x3f) {
              uVar9 = 0xffffffc1;
            }
            iVar6 = (int)(short)((int)uVar10 >> (-uVar9 & 0xff));
          }
          else {
            iVar6 = 0;
            if (uVar10 != 0) goto LAB_14019a0c;
          }
        }
        else {
          iVar6 = SignedSaturate(iVar6 * 0x10000 + (uVar12 >> 0x10) * -0x10000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          uVar9 = iVar6 >> 0x10;
          if (iVar6 < 0x10000) {
            if ((int)uVar9 < -0x3f) {
              uVar9 = 0xffffffc1;
            }
            iVar6 = 0x7fff >> (-uVar9 & 0xff);
          }
          else {
            uVar10 = 0x7fff;
LAB_14019a0c:
            if (0xf < (int)uVar9) {
              uVar9 = 0x10;
            }
            iVar6 = uVar10 << (uVar9 & 0xff);
            uVar3 = SignedSaturate(iVar6,0xf);
            SignedDoesSaturate(iVar6,0xf);
            iVar6 = (int)(short)uVar3;
          }
        }
        if ((int)uVar16 < 0) {
          sVar2 = SignedSaturate(-(short)iVar6,0x10);
          SignedSaturate(-(short)((uint)iVar6 >> 0x10),0x10);
          iVar6 = (int)sVar2;
        }
        iVar6 = iVar6 * 0xc00;
        iVar7 = iVar7 << 0xe;
        goto LAB_14019714;
      }
    }
    else {
      uVar10 = param_3;
      if ((int)param_3 < 0) {
        uVar10 = SignedSaturate(-param_3,0x20);
        SignedDoesSaturate(uVar10,0x20);
        uVar18 = uVar10 ^ uVar10 << 1;
      }
      if (uVar18 == 0) {
        iVar7 = 0;
        iVar13 = 0;
      }
      else {
        iVar13 = LZCOUNT(uVar18);
        iVar7 = iVar13 << 0x10;
      }
      uVar11 = SignedSaturate(iVar7 + -0x10000,0x20);
      SignedDoesSaturate(uVar11,0x20);
      uVar18 = (int)uVar11 >> 0x10;
      if ((int)uVar18 < 1) {
        uVar19 = 0xffffffc1;
        if (-0x3f < (int)uVar18) {
          uVar19 = uVar18;
        }
        iVar7 = (int)uVar10 >> (-uVar19 & 0xff);
      }
      else if ((iVar13 < (int)uVar18) && (uVar10 != 0)) {
        if ((int)uVar10 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0x7fffffff;
        }
        iVar7 = SignedSaturate(iVar7 * 2,0x20);
        SignedDoesSaturate(iVar7,0x20);
      }
      else {
        iVar7 = uVar10 << (uVar18 & 0xff);
      }
      iVar7 = iVar7 >> 0x10;
      uVar10 = (int)(param_4 << iVar6) >> 0x10;
      if ((int)(param_4 << iVar6) < 0x10000) goto LAB_14019b8a;
      if (iVar7 < 0) goto LAB_14019ba0;
      if (iVar7 <= (int)uVar10) {
        uVar10 = (uint)(iVar7 << 0xf) / uVar10;
        uVar18 = 0x7fff;
        if ((int)uVar10 < 0x8000) {
          uVar18 = uVar10;
        }
        uVar11 = SignedSaturate(iVar6 * 0x10000 - (uVar11 & DAT_14019bc4),0x20);
        SignedDoesSaturate(uVar11,0x20);
        iVar6 = SignedSaturate((uVar11 & DAT_14019bc4) - 0x10000,0x20);
        SignedDoesSaturate(iVar6,0x20);
        uVar11 = iVar6 >> 0x10;
        if ((iVar6 < 0x10000) || (uVar10 == 0)) {
          uVar10 = 0xffffffc1;
          if (-0x3f < (int)uVar11) {
            uVar10 = uVar11;
          }
          sVar2 = (short)((int)uVar18 >> (-uVar10 & 0xff));
        }
        else {
          if (0xf < (int)uVar11) {
            uVar11 = 0x10;
          }
          iVar6 = (int)(short)uVar18 << (uVar11 & 0xff);
          uVar3 = SignedSaturate(iVar6,0xf);
          SignedDoesSaturate(iVar6,0xf);
          sVar2 = (short)uVar3;
        }
        sVar4 = sVar2;
        if ((int)param_3 < 0) {
          sVar4 = SignedSaturate(-sVar2,0x10);
          SignedSaturate(-(sVar2 >> 0xf),0x10);
        }
        iVar6 = SignedSaturate(((int)param_3 >> 0x10) * 0x8000,0x20);
        SignedDoesSaturate(iVar6,0x20);
        uVar3 = SignedSaturate(((int)param_3 >> 1) - iVar6,0x20);
        SignedDoesSaturate(uVar3,0x20);
        iVar6 = SignedSaturate(((int)param_3 >> 0x10) * (int)sVar4 * 2,0x20);
        SignedDoesSaturate(iVar6,0x20);
        iVar7 = SignedSaturate((int)(short)uVar3 * (int)sVar4 * 2,0x20);
        SignedDoesSaturate(iVar7,0x20);
        iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar7,0x20);
        uVar10 = SignedSaturate(iVar6 + iVar7,0x20);
        SignedDoesSaturate(uVar10,0x20);
        uVar18 = uVar10 ^ uVar10 << 1;
        iVar6 = uVar10 << 1;
        if (((uVar18 == 0) || (LZCOUNT(uVar18) == 0)) && (uVar10 != 0)) {
          if ((int)uVar10 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 0x7fffffff;
          }
          iVar6 = SignedSaturate(iVar6 * 2,0x20);
          SignedDoesSaturate(iVar6,0x20);
        }
        uVar10 = SignedSaturate(uVar9 - iVar6,0x20);
        SignedDoesSaturate(uVar10,0x20);
        if (uVar10 == 0) {
          uVar3 = SignedSaturate(0x2800,0xf);
          SignedDoesSaturate(0x2800,0xf);
          iVar7 = (int)(short)uVar3;
        }
        else {
          if ((int)uVar10 < 1) {
            uVar18 = 0;
            uVar10 = uVar18;
          }
          else {
            uVar18 = uVar10 ^ uVar10 << 1;
            iVar6 = 0;
            if (uVar18 != 0) {
              iVar6 = LZCOUNT(uVar18);
              uVar10 = uVar10 << iVar6;
              iVar6 = iVar6 << 0x10;
            }
            uVar11 = SignedSaturate(0x1e0000 - iVar6,0x20);
            SignedDoesSaturate(uVar11,0x20);
            uVar18 = SignedSaturate(((int)uVar10 >> 0x19) * 0x10000 + -0x200000,0x20);
            SignedDoesSaturate(uVar18,0x20);
            iVar7 = *(short *)(DAT_14019bc0 + ((int)uVar18 >> 0x10) * 2) * 0x10000;
            iVar6 = SignedSaturate((uVar18 & DAT_14019bc4) + 0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar6 = SignedSaturate(iVar7 + *(short *)(DAT_14019bc0 + (iVar6 >> 0x10) * 2) * -0x10000
                                   ,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar6 = SignedSaturate((iVar6 >> 0x10) * ((uVar10 & 0x1ffffff) >> 10) * 2,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar6 = SignedSaturate(iVar7 - iVar6,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar18 = iVar6 >> 0x10;
            uVar10 = uVar11 & DAT_14019bc4;
          }
          iVar6 = SignedSaturate(uVar8 * 2,0x20);
          SignedDoesSaturate(iVar6,0x20);
          iVar6 = SignedSaturate(uVar12 + iVar6,0x20);
          SignedDoesSaturate(iVar6,0x20);
          iVar7 = SignedSaturate(uVar18 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate(uVar10 + iVar7,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate(iVar6 - iVar7,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar6 = SignedSaturate((iVar7 >> 0x10) * 0x8000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          uVar3 = SignedSaturate((iVar7 >> 1) - iVar6,0x20);
          SignedDoesSaturate(uVar3,0x20);
          iVar6 = SignedSaturate((iVar7 >> 0x10) * 0xc0a8,0x20);
          SignedDoesSaturate(iVar6,0x20);
          iVar7 = SignedSaturate((short)uVar3 * 0xc0a8,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          uVar10 = SignedSaturate(iVar6 + iVar7,0x20);
          SignedDoesSaturate(uVar10,0x20);
          uVar12 = uVar10 ^ uVar10 << 1;
          if (((uVar12 == 0) || ((uint)LZCOUNT(uVar12) < 0xb)) && (uVar10 != 0)) {
            if ((int)uVar10 < 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0x7fffffff;
            }
            iVar6 = SignedSaturate(iVar6 * 2,0x20);
            SignedDoesSaturate(iVar6,0x20);
          }
          else {
            iVar6 = uVar10 << 0xb;
          }
          iVar7 = SignedSaturate(iVar6 + 0x8000,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = iVar7 >> 0x10;
        }
        goto LAB_14019936;
      }
    }
  }
  FUN_14016938();
LAB_14019ba0:
                    /* WARNING: Subroutine does not return */
  FUN_1401d020(DAT_14019bb8,0x311,DAT_14019bb4,DAT_14019bbc);
}

