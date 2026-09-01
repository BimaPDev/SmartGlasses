/* FUN_10117464 @ 0x10117464 */

uint FUN_10117464(float *param_1,float *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
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
  
  fVar24 = DAT_101177d8;
  iVar17 = param_4 + -1;
  local_180[0] = param_3;
  iVar14 = *(int *)(DAT_101177d4 + param_5 * 4);
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
  if (-1 < iVar14 + iVar17) {
    pfVar4 = local_128;
    iVar5 = iVar14 + iVar17 + 1 + iVar9;
    do {
      fVar21 = DAT_101177e0;
      if (-1 < iVar9) {
        fVar21 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + iVar9 * 4),
                                            (byte)(in_fpscr >> 0x16) & 3);
      }
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar21;
      pfVar4 = pfVar4 + 1;
    } while (iVar9 != iVar5);
  }
  if (-1 < iVar14) {
    pfVar4 = local_88;
    pfVar3 = local_128 + param_4;
    iVar9 = iVar17;
    do {
      while (pfVar6 = pfVar3, pfVar10 = param_1, fVar21 = DAT_101177e0, iVar17 < 0) {
        iVar9 = iVar9 + 1;
        pfVar3 = pfVar3 + 1;
        *pfVar4 = DAT_101177e0;
        pfVar4 = pfVar4 + 1;
        if (iVar9 == iVar14 + param_4) goto LAB_10117522;
      }
      do {
        pfVar11 = pfVar10 + 1;
        fVar21 = fVar21 + *pfVar10 * pfVar6[-1];
        pfVar6 = pfVar6 + -1;
        pfVar10 = pfVar11;
      } while (pfVar11 != param_1 + param_4);
      iVar9 = iVar9 + 1;
      pfVar3 = pfVar3 + 1;
      *pfVar4 = fVar21;
      pfVar4 = pfVar4 + 1;
    } while (iVar9 != iVar14 + param_4);
  }
LAB_10117522:
  puVar16 = local_180 + 2;
  lVar25 = (ulonglong)(uint)DAT_101177dc << 0x20;
  iVar9 = iVar14;
LAB_10117546:
  fVar21 = local_88[iVar9];
  fVar23 = (float)((ulonglong)lVar25 >> 0x20);
  if (0 < iVar9) {
    pfVar4 = local_88 + iVar9;
    puVar7 = puVar16;
    do {
      pfVar4 = pfVar4 + -1;
      fVar22 = (float)VectorSignedToFloat((int)(fVar21 * fVar24),(byte)(in_fpscr >> 0x16) & 3);
      fVar20 = fVar21 + -fVar22 * fVar23;
      fVar21 = fVar22 + *pfVar4;
      *puVar7 = (int)fVar20;
      puVar7 = puVar7 + 1;
    } while (pfVar4 != local_88);
  }
  fVar21 = (float)FUN_10117b98();
  fVar20 = (float)FUN_10117b84(fVar21 * 0.125);
  fVar21 = fVar21 + -fVar20 * 8.0;
  uVar26 = (uint)fVar21;
  fVar20 = (float)VectorSignedToFloat(uVar26,(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = fVar21 - fVar20;
  lVar25 = CONCAT44(fVar23,fVar21);
  if (local_18c < 1) {
    if (local_18c == 0) {
      uVar8 = (int)puVar16[iVar9 + -1] >> 8;
      if (0 < (int)uVar8) goto LAB_101176ca;
    }
    else {
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar21 < 0.5) << 0x1f;
      in_fpscr = uVar8 | (uint)NAN(fVar21) << 0x1c;
      if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        uVar26 = uVar26 + 1;
        if (0 < iVar9) {
          uVar8 = 2;
          goto LAB_101176dc;
        }
        uVar8 = 2;
        lVar25 = CONCAT44(fVar23,1.0 - fVar21);
      }
      else {
        uVar8 = 0;
      }
    }
LAB_101175ec:
    in_fpscr = in_fpscr & 0xfffffff | (uint)((float)lVar25 == 0.0) << 0x1e;
    bVar2 = (byte)(in_fpscr >> 0x18);
  }
  else {
    iVar5 = (int)puVar16[iVar9 + -1] >> (8U - local_18c & 0xff);
    uVar26 = uVar26 + iVar5;
    uVar12 = puVar16[iVar9 + -1] - (iVar5 << (8U - local_18c & 0xff));
    uVar8 = (int)uVar12 >> (7U - local_18c & 0xff);
    puVar16[iVar9 + -1] = uVar12;
    if ((int)uVar8 < 1) goto LAB_101175ec;
LAB_101176ca:
    uVar26 = uVar26 + 1;
    if (iVar9 < 1) {
      bVar19 = false;
    }
    else {
LAB_101176dc:
      if (local_180[2] == 0) {
        bVar19 = false;
        if (iVar9 != 1) {
          iVar5 = 1;
          puVar7 = puVar16;
          do {
            puVar7 = puVar7 + 1;
            if (*puVar7 != 0) {
              iVar15 = iVar5 + 1;
              uVar12 = *puVar7;
              goto LAB_101176fa;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar9);
          bVar19 = false;
        }
      }
      else {
        iVar15 = 1;
        iVar5 = 0;
        uVar12 = local_180[2];
LAB_101176fa:
        puVar16[iVar5] = 0x100 - uVar12;
        if (iVar15 < iVar9) {
          uVar12 = puVar16[iVar15];
          puVar7 = puVar16 + iVar15;
          while( true ) {
            puVar13 = puVar7 + 1;
            *puVar7 = 0xff - uVar12;
            if (puVar13 == puVar16 + iVar9) break;
            uVar12 = *puVar13;
            puVar7 = puVar13;
          }
        }
        bVar19 = true;
      }
    }
    if (0 < local_18c) {
      if (local_18c == 1) {
        puVar16[iVar9 + -1] = puVar16[iVar9 + -1] & 0x7f;
      }
      else if (local_18c == 2) {
        puVar16[iVar9 + -1] = puVar16[iVar9 + -1] & 0x3f;
      }
    }
    if (uVar8 != 2) goto LAB_101175ec;
    lVar25 = CONCAT44(fVar23,1.0 - fVar21);
    if (!bVar19) goto LAB_101175ec;
    local_180[1] = uVar8;
    fVar20 = (float)FUN_10117b98();
    fVar20 = (1.0 - fVar21) - fVar20;
    lVar25 = CONCAT44(fVar23,fVar20);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 == 0.0) << 0x1e;
    bVar2 = (byte)(in_fpscr >> 0x18);
    uVar8 = local_180[1];
  }
  if (bVar2 >> 6 == 0) {
    fVar24 = (float)FUN_10117b98((int)lVar25,local_184 - local_180[0]);
    uVar12 = in_fpscr & 0xfffffff | (uint)(fVar24 < DAT_101177dc) << 0x1f;
    in_fpscr = uVar12 | (uint)(NAN(fVar24) || NAN(DAT_101177dc)) << 0x1c;
    if ((byte)(uVar12 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      local_18c = local_18c + 8;
      fVar21 = (float)VectorSignedToFloat((int)(fVar24 * DAT_101177d8),(byte)(in_fpscr >> 0x16) & 3)
      ;
      puVar16[iVar9] = (int)(fVar24 + -fVar21 * DAT_101177dc);
      puVar16[iVar9 + 1] = (int)fVar21;
      iVar5 = iVar9 + 1;
    }
    else {
      puVar16[iVar9] = (int)fVar24;
      iVar5 = iVar9;
    }
    goto LAB_1011784a;
  }
  iVar5 = iVar9 + -1;
  if (iVar14 <= iVar5) {
    uVar12 = 0;
    puVar7 = puVar16 + iVar9 + 0x3fffffff;
    do {
      puVar13 = puVar7 + -1;
      uVar12 = uVar12 | *puVar7;
      puVar7 = puVar13;
    } while (puVar13 != local_180 + iVar14 + 1);
    if (uVar12 != 0) goto LAB_10117820;
  }
  if (puVar16[iVar14 + -1] == 0) {
    iVar5 = 1;
    puVar7 = local_180 + iVar14;
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
  pfVar3 = local_88 + iVar18;
  iVar15 = param_6 + (iVar18 + local_198 + 0x3fffffff) * 4;
  pfVar4 = local_128 + param_4 + iVar9;
  do {
    while( true ) {
      puVar1 = (undefined4 *)(iVar15 + 4);
      iVar15 = iVar15 + 4;
      fVar23 = (float)VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
      pfVar10 = pfVar4 + 1;
      *pfVar4 = fVar23;
      pfVar6 = param_1;
      fVar21 = DAT_101177e0;
      iVar9 = iVar5;
      if (iVar17 < 0) break;
      while( true ) {
        fVar21 = fVar21 + *pfVar6 * fVar23;
        if (pfVar6 + 1 == param_1 + param_4) break;
        pfVar4 = pfVar4 + -1;
        fVar23 = *pfVar4;
        pfVar6 = pfVar6 + 1;
      }
      iVar18 = iVar18 + 1;
      *pfVar3 = fVar21;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar10;
      if (iVar5 < iVar18) goto LAB_10117546;
    }
    iVar18 = iVar18 + 1;
    *pfVar3 = DAT_101177e0;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar10;
  } while (iVar18 <= iVar5);
  goto LAB_10117546;
LAB_10117820:
  local_18c = local_18c + -8;
  if (puVar16[iVar5] == 0) {
    puVar7 = puVar16 + DAT_10117ae0 + iVar9;
    do {
      uVar12 = *puVar7;
      iVar5 = iVar5 + -1;
      local_18c = local_18c + -8;
      puVar7 = puVar7 + -1;
    } while (uVar12 == 0);
  }
LAB_1011784a:
  fVar21 = (float)FUN_10117b98(0x3f800000,local_18c);
  fVar24 = DAT_10117af0;
  if (iVar5 < 0) {
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_10117910;
joined_r0x101179b4:
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
      goto LAB_10117910;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_10117910;
joined_r0x10117904:
      if (uVar8 != 0) {
        fVar24 = -fVar24;
      }
      *param_2 = fVar24;
      goto LAB_10117910;
    }
    if (uVar8 == 0) goto LAB_10117a16;
LAB_10117a7c:
    local_d8[0] = local_d8[0] - fVar24;
    *param_2 = -fVar24;
    if (0 < iVar5) goto LAB_10117a28;
LAB_10117a3c:
    local_d8[0] = -local_d8[0];
  }
  else {
    pfVar3 = local_88 + iVar5;
    pfVar4 = local_88 + iVar5 + 1;
    puVar7 = puVar16 + iVar5 + 1;
    do {
      puVar7 = puVar7 + -1;
      fVar23 = (float)VectorSignedToFloat(*puVar7,(byte)(in_fpscr >> 0x16) & 3);
      fVar23 = fVar23 * fVar21;
      fVar21 = fVar21 * DAT_10117ae4;
      pfVar4 = pfVar4 + -1;
      *pfVar4 = fVar23;
    } while (puVar7 != puVar16);
    iVar17 = 0;
    do {
      fVar21 = DAT_10117af0;
      if (-1 < iVar14) {
        iVar9 = 0;
        pfVar4 = DAT_10117aec;
        pfVar6 = pfVar3;
        fVar23 = DAT_10117ae8;
        while( true ) {
          iVar9 = iVar9 + 1;
          fVar20 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          fVar21 = fVar21 + fVar20 * fVar23;
          if ((iVar14 < iVar9) || (iVar17 < iVar9)) break;
          fVar23 = *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
      }
      bVar19 = iVar5 != iVar17;
      pfVar3 = pfVar3 + -1;
      iVar9 = iVar17 + 1;
      local_d8[iVar17] = fVar21;
      iVar17 = iVar9;
    } while (bVar19);
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_10117910;
      if (iVar5 != 0) {
        pfVar4 = local_d8 + iVar5;
        fVar21 = local_d8[iVar5];
        do {
          pfVar3 = pfVar4 + -1;
          fVar20 = *pfVar3;
          fVar23 = fVar21 + fVar20;
          *pfVar3 = fVar23;
          *pfVar4 = (fVar20 - fVar23) + fVar21;
          pfVar4 = pfVar3;
          fVar21 = fVar23;
        } while (local_d8 != pfVar3);
        if (1 < iVar5) {
          pfVar4 = local_d8 + iVar5 + 0x40000000;
          fVar21 = local_d8[iVar5];
          do {
            pfVar3 = pfVar4 + -1;
            fVar20 = *pfVar3;
            fVar23 = fVar21 + fVar20;
            *pfVar3 = fVar23;
            *pfVar4 = (fVar20 - fVar23) + fVar21;
            pfVar4 = pfVar3;
            fVar21 = fVar23;
          } while (local_d8 + 1 != pfVar3);
          pfVar4 = local_d8 + iVar5 + 0x40000001;
          do {
            pfVar4 = pfVar4 + -1;
            fVar24 = fVar24 + *pfVar4;
          } while (local_d8 + 2 != pfVar4);
        }
      }
      goto joined_r0x101179b4;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_10117910;
      pfVar4 = local_d8 + iVar5 + 1;
      do {
        pfVar4 = pfVar4 + -1;
        fVar24 = fVar24 + *pfVar4;
      } while (local_d8 != pfVar4);
      goto joined_r0x10117904;
    }
    pfVar4 = local_d8 + iVar9;
    do {
      pfVar4 = pfVar4 + -1;
      fVar24 = fVar24 + *pfVar4;
    } while (local_d8 != pfVar4);
    if (uVar8 != 0) goto LAB_10117a7c;
LAB_10117a16:
    *param_2 = fVar24;
    local_d8[0] = local_d8[0] - fVar24;
    if (0 < iVar5) {
LAB_10117a28:
      pfVar4 = local_d8;
      iVar14 = 1;
      do {
        pfVar4 = pfVar4 + 1;
        iVar14 = iVar14 + 1;
        local_d8[0] = local_d8[0] + *pfVar4;
      } while (iVar14 <= iVar5);
      if (uVar8 != 0) goto LAB_10117a3c;
    }
  }
  param_2[1] = local_d8[0];
LAB_10117910:
  return uVar26 & 7;
}

