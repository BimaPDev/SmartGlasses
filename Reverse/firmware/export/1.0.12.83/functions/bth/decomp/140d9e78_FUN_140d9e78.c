/* FUN_140d9e78 @ 0x140d9e78 */

uint FUN_140d9e78(float *param_1,float *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar12;
  uint *puVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  uint uVar26;
  int local_198;
  int local_18c;
  int local_184;
  uint local_180 [22];
  float local_128 [20];
  float local_d8 [20];
  float local_88 [21];
  float *pfVar11;
  
  fVar24 = DAT_140da120;
  iVar17 = param_4 + -1;
  local_180[0] = param_3;
  iVar15 = *(int *)(DAT_140da114 + param_5 * 4);
  if ((int)param_3 < -4) {
    local_184 = 8;
    local_198 = 0;
  }
  else {
    local_198 = param_3 - 3;
    if (local_198 < 0) {
      local_198 = param_3 + 4;
    }
    local_198 = local_198 >> 3;
    local_184 = (local_198 + 1) * 8;
  }
  local_18c = param_3 - local_184;
  iVar9 = local_198 - iVar17;
  if (-1 < iVar15 + iVar17) {
    pfVar4 = local_128;
    iVar5 = iVar15 + iVar17 + 1 + iVar9;
    do {
      fVar21 = DAT_140da118;
      if (-1 < iVar9) {
        fVar21 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + iVar9 * 4),
                                            (byte)(in_fpscr >> 0x16) & 3);
      }
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar21;
      pfVar4 = pfVar4 + 1;
    } while (iVar9 != iVar5);
  }
  if (-1 < iVar15) {
    pfVar4 = local_88;
    pfVar14 = local_128 + param_4;
    iVar9 = iVar17;
    do {
      pfVar6 = pfVar14;
      pfVar10 = param_1;
      fVar21 = DAT_140da118;
      if (-1 < iVar17) {
        do {
          pfVar11 = pfVar10 + 1;
          fVar21 = fVar21 + *pfVar10 * pfVar6[-1];
          pfVar6 = pfVar6 + -1;
          pfVar10 = pfVar11;
        } while (pfVar11 != param_1 + param_4);
      }
      iVar9 = iVar9 + 1;
      pfVar14 = pfVar14 + 1;
      *pfVar4 = fVar21;
      pfVar4 = pfVar4 + 1;
    } while (iVar9 != iVar15 + param_4);
  }
  puVar2 = local_180 + 2;
  lVar25 = (ulonglong)(uint)DAT_140da11c << 0x20;
  iVar9 = iVar15;
  do {
    fVar21 = local_88[iVar9];
    fVar23 = (float)((ulonglong)lVar25 >> 0x20);
    if (0 < iVar9) {
      pfVar4 = local_88 + iVar9;
      puVar7 = puVar2;
      do {
        pfVar4 = pfVar4 + -1;
        fVar22 = (float)VectorSignedToFloat((int)(fVar21 * fVar24),(byte)(in_fpscr >> 0x16) & 3);
        fVar20 = fVar21 + -fVar22 * fVar23;
        fVar21 = fVar22 + *pfVar4;
        *puVar7 = (int)fVar20;
        puVar7 = puVar7 + 1;
      } while (pfVar4 != local_88);
    }
    fVar21 = (float)FUN_140da7d8();
    fVar20 = (float)FUN_140da7c4(fVar21 * 0.125);
    fVar21 = fVar21 + -fVar20 * 8.0;
    uVar26 = (uint)fVar21;
    fVar20 = (float)VectorSignedToFloat(uVar26,(byte)(in_fpscr >> 0x16) & 3);
    fVar21 = fVar21 - fVar20;
    lVar25 = CONCAT44(fVar23,fVar21);
    if (local_18c < 1) {
      if (local_18c == 0) {
        uVar8 = (int)puVar2[iVar9 + -1] >> 7;
        if (0 < (int)uVar8) goto LAB_140da0cc;
      }
      else {
        uVar8 = in_fpscr & 0xfffffff | (uint)(fVar21 < 0.5) << 0x1f;
        in_fpscr = uVar8 | (uint)NAN(fVar21) << 0x1c;
        if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          uVar26 = uVar26 + 1;
          if (0 < iVar9) {
            uVar8 = 2;
            goto LAB_140da0de;
          }
          uVar8 = 2;
          lVar25 = CONCAT44(fVar23,1.0 - fVar21);
        }
        else {
          uVar8 = 0;
        }
      }
LAB_140d9ffa:
      in_fpscr = in_fpscr & 0xfffffff | (uint)((float)lVar25 == 0.0) << 0x1e;
      bVar3 = (byte)(in_fpscr >> 0x18);
    }
    else {
      iVar5 = (int)puVar2[iVar9 + -1] >> (8U - local_18c & 0xff);
      uVar26 = uVar26 + iVar5;
      uVar12 = puVar2[iVar9 + -1] - (iVar5 << (8U - local_18c & 0xff));
      uVar8 = (int)uVar12 >> (7U - local_18c & 0xff);
      puVar2[iVar9 + -1] = uVar12;
      if ((int)uVar8 < 1) goto LAB_140d9ffa;
LAB_140da0cc:
      uVar26 = uVar26 + 1;
      if (iVar9 < 1) {
        bVar19 = false;
      }
      else {
LAB_140da0de:
        if (local_180[2] == 0) {
          bVar19 = false;
          if (iVar9 != 1) {
            iVar5 = 1;
            puVar7 = puVar2;
            do {
              puVar7 = puVar7 + 1;
              if (*puVar7 != 0) {
                iVar16 = iVar5 + 1;
                uVar12 = *puVar7;
                goto LAB_140da0fa;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 != iVar9);
            bVar19 = false;
          }
        }
        else {
          iVar16 = 1;
          iVar5 = 0;
          uVar12 = local_180[2];
LAB_140da0fa:
          puVar2[iVar5] = 0x100 - uVar12;
          if (iVar16 < iVar9) {
            uVar12 = puVar2[iVar16];
            puVar7 = puVar2 + iVar16;
            while( true ) {
              puVar13 = puVar7 + 1;
              *puVar7 = 0xff - uVar12;
              if (puVar13 == puVar2 + iVar9) break;
              uVar12 = *puVar13;
              puVar7 = puVar13;
            }
          }
          bVar19 = true;
        }
      }
      if (0 < local_18c) {
        if (local_18c == 1) {
          puVar2[iVar9 + -1] = puVar2[iVar9 + -1] & 0x7f;
        }
        else if (local_18c == 2) {
          puVar2[iVar9 + -1] = puVar2[iVar9 + -1] & 0x3f;
        }
      }
      if (uVar8 != 2) goto LAB_140d9ffa;
      lVar25 = CONCAT44(fVar23,1.0 - fVar21);
      if (!bVar19) goto LAB_140d9ffa;
      local_180[1] = uVar8;
      fVar20 = (float)FUN_140da7d8();
      fVar20 = (1.0 - fVar21) - fVar20;
      lVar25 = CONCAT44(fVar23,fVar20);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 == 0.0) << 0x1e;
      bVar3 = (byte)(in_fpscr >> 0x18);
      uVar8 = local_180[1];
    }
    if (bVar3 >> 6 == 0) {
      fVar24 = (float)FUN_140da7d8((int)lVar25,local_184 - local_180[0]);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar24 < DAT_140da11c) << 0x1f;
      in_fpscr = uVar12 | (uint)(NAN(fVar24) || NAN(DAT_140da11c)) << 0x1c;
      if ((byte)(uVar12 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_18c = local_18c + 8;
        fVar21 = (float)VectorSignedToFloat((int)(fVar24 * DAT_140da120),
                                            (byte)(in_fpscr >> 0x16) & 3);
        puVar2[iVar9] = (int)(fVar24 + -fVar21 * DAT_140da11c);
        puVar2[iVar9 + 1] = (int)fVar21;
        iVar5 = iVar9 + 1;
      }
      else {
        puVar2[iVar9] = (int)fVar24;
        iVar5 = iVar9;
      }
      goto LAB_140da240;
    }
    iVar5 = iVar9 + -1;
    if (iVar15 <= iVar5) {
      uVar12 = 0;
      puVar7 = puVar2 + iVar9 + 0x3fffffff;
      do {
        puVar13 = puVar7 + -1;
        uVar12 = uVar12 | *puVar7;
        puVar7 = puVar13;
      } while (puVar13 != local_180 + iVar15 + 1);
      if (uVar12 != 0) break;
    }
    if (puVar2[iVar15 + -1] == 0) {
      iVar5 = 1;
      puVar7 = local_180 + iVar15;
      do {
        uVar26 = *puVar7;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + -1;
      } while (uVar26 == 0);
      iVar5 = iVar5 + iVar9;
    }
    else {
      iVar5 = iVar9 + 1;
    }
    iVar18 = iVar9 + 1;
    pfVar14 = local_88 + iVar18;
    iVar16 = param_6 + (local_198 + iVar18 + 0x3fffffff) * 4;
    pfVar4 = local_128 + param_4 + iVar9;
    do {
      puVar1 = (undefined4 *)(iVar16 + 4);
      iVar16 = iVar16 + 4;
      fVar23 = (float)VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
      pfVar10 = pfVar4 + 1;
      *pfVar4 = fVar23;
      pfVar6 = param_1;
      fVar21 = DAT_140da118;
      if (-1 < iVar17) {
        while( true ) {
          fVar21 = fVar21 + *pfVar6 * fVar23;
          if (pfVar6 + 1 == param_1 + param_4) break;
          pfVar4 = pfVar4 + -1;
          fVar23 = *pfVar4;
          pfVar6 = pfVar6 + 1;
        }
      }
      iVar18 = iVar18 + 1;
      *pfVar14 = fVar21;
      pfVar14 = pfVar14 + 1;
      pfVar4 = pfVar10;
      iVar9 = iVar5;
    } while (iVar18 <= iVar5);
  } while( true );
  local_18c = local_18c + -8;
  if (puVar2[iVar5] == 0) {
    puVar7 = puVar2 + DAT_140da4e0 + iVar9;
    do {
      uVar12 = *puVar7;
      iVar5 = iVar5 + -1;
      local_18c = local_18c + -8;
      puVar7 = puVar7 + -1;
    } while (uVar12 == 0);
  }
LAB_140da240:
  fVar21 = (float)FUN_140da7d8(0x3f800000,local_18c);
  fVar24 = DAT_140da4f0;
  if (iVar5 < 0) {
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_140da308;
joined_r0x140da3b6:
      if (uVar8 == 0) {
        param_2[2] = fVar24;
        *param_2 = local_d8[0];
        param_2[1] = local_d8[1];
      }
      else {
        param_2[2] = -fVar24;
        *param_2 = -local_d8[0];
        param_2[1] = -local_d8[1];
      }
      goto LAB_140da308;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_140da308;
joined_r0x140da2fc:
      if (uVar8 != 0) {
        fVar24 = -fVar24;
      }
      *param_2 = fVar24;
      goto LAB_140da308;
    }
    if (uVar8 == 0) goto LAB_140da414;
LAB_140da47c:
    local_d8[0] = local_d8[0] - fVar24;
    *param_2 = -fVar24;
    if (0 < iVar5) goto LAB_140da428;
LAB_140da43c:
    local_d8[0] = -local_d8[0];
  }
  else {
    pfVar14 = local_88 + iVar5;
    pfVar4 = local_88 + iVar5 + 1;
    puVar7 = puVar2 + iVar5 + 1;
    do {
      puVar7 = puVar7 + -1;
      fVar23 = (float)VectorSignedToFloat(*puVar7,(byte)(in_fpscr >> 0x16) & 3);
      fVar23 = fVar23 * fVar21;
      fVar21 = fVar21 * DAT_140da4e4;
      pfVar4 = pfVar4 + -1;
      *pfVar4 = fVar23;
    } while (puVar7 != puVar2);
    iVar17 = 0;
    do {
      fVar21 = DAT_140da4f0;
      if (-1 < iVar15) {
        iVar9 = 0;
        pfVar4 = DAT_140da4ec;
        pfVar6 = pfVar14;
        fVar23 = DAT_140da4e8;
        while( true ) {
          iVar9 = iVar9 + 1;
          fVar20 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          fVar21 = fVar21 + fVar20 * fVar23;
          if ((iVar15 < iVar9) || (iVar17 < iVar9)) break;
          fVar23 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
      }
      bVar19 = iVar5 != iVar17;
      pfVar14 = pfVar14 + -1;
      iVar9 = iVar17 + 1;
      local_d8[iVar17] = fVar21;
      iVar17 = iVar9;
    } while (bVar19);
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_140da308;
      if (iVar5 != 0) {
        pfVar4 = local_d8 + iVar5;
        fVar21 = local_d8[iVar5];
        do {
          pfVar14 = pfVar4 + -1;
          fVar20 = *pfVar14;
          fVar23 = fVar21 + fVar20;
          *pfVar14 = fVar23;
          *pfVar4 = (fVar20 - fVar23) + fVar21;
          pfVar4 = pfVar14;
          fVar21 = fVar23;
        } while (local_d8 != pfVar14);
        if (1 < iVar5) {
          pfVar4 = local_d8 + iVar5 + 0x40000000;
          fVar21 = local_d8[iVar5];
          do {
            pfVar14 = pfVar4 + -1;
            fVar20 = *pfVar14;
            fVar23 = fVar21 + fVar20;
            *pfVar14 = fVar23;
            *pfVar4 = (fVar20 - fVar23) + fVar21;
            pfVar4 = pfVar14;
            fVar21 = fVar23;
          } while (local_d8 + 1 != pfVar14);
          pfVar4 = local_d8 + iVar5 + 0x40000001;
          do {
            pfVar4 = pfVar4 + -1;
            fVar24 = fVar24 + *pfVar4;
          } while (local_d8 + 2 != pfVar4);
        }
      }
      goto joined_r0x140da3b6;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_140da308;
      pfVar4 = local_d8 + iVar5 + 1;
      do {
        pfVar4 = pfVar4 + -1;
        fVar24 = fVar24 + *pfVar4;
      } while (local_d8 != pfVar4);
      goto joined_r0x140da2fc;
    }
    pfVar4 = local_d8 + iVar9;
    do {
      pfVar4 = pfVar4 + -1;
      fVar24 = fVar24 + *pfVar4;
    } while (local_d8 != pfVar4);
    if (uVar8 != 0) goto LAB_140da47c;
LAB_140da414:
    *param_2 = fVar24;
    local_d8[0] = local_d8[0] - fVar24;
    if (0 < iVar5) {
LAB_140da428:
      pfVar4 = local_d8;
      iVar15 = 1;
      do {
        pfVar4 = pfVar4 + 1;
        iVar15 = iVar15 + 1;
        local_d8[0] = local_d8[0] + *pfVar4;
      } while (iVar15 <= iVar5);
      if (uVar8 != 0) goto LAB_140da43c;
    }
  }
  param_2[1] = local_d8[0];
LAB_140da308:
  return uVar26 & 7;
}

