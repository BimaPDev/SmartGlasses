/* FUN_2c66f130 @ 0x2c66f130 */

char * FUN_2c66f130(int param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5,
                   int *param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  double *pdVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  uint uVar27;
  uint in_fpscr;
  double in_d0;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  char *local_6c;
  undefined8 local_68;
  char *local_60;
  int local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_38;
  int local_34 [2];
  
  uVar20 = SUB84(in_d0,0);
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar3 = (undefined4 *)FUN_2c669578(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      uVar10 = 0xea;
      uVar6 = DAT_2c66f408;
      goto LAB_2c66f160;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
  }
  iVar11 = **(int **)(param_1 + 0x24);
  if (iVar11 != 0) {
    uVar16 = (*(int **)(param_1 + 0x24))[1];
    *(uint *)(iVar11 + 4) = uVar16;
    *(int *)(iVar11 + 8) = 1 << (uVar16 & 0xff);
    FUN_2c670760(param_1);
    **(undefined4 **)(param_1 + 0x24) = 0;
  }
  if ((longlong)in_d0 < 0) {
    local_68 = ABS(in_d0);
    *param_5 = 1;
  }
  else {
    *param_5 = 0;
    local_68 = in_d0;
  }
  dVar31 = local_68;
  local_48 = local_68._4_4_;
  if ((DAT_2c66f410 & ~local_68._4_4_) == 0) {
    *param_4 = 9999;
    if (((ulonglong)local_68 & 0xfffff00000000) == 0 && uVar20 == 0) {
      if (param_6 == (int *)0x0) {
        return DAT_2c66fc08;
      }
      local_6c = DAT_2c66f418;
      pcVar19 = DAT_2c66f418 + 8;
    }
    else {
      if (param_6 == (int *)0x0) {
        return DAT_2c66f414;
      }
      local_6c = DAT_2c66f414;
      pcVar19 = DAT_2c66f414 + 3;
    }
    *param_6 = (int)pcVar19;
    return local_6c;
  }
  uVar16 = in_fpscr & 0xfffffff | (uint)(local_68 == 0.0) << 0x1e;
  if ((byte)(uVar16 >> 0x1e) != 0) {
    *param_4 = 1;
    iVar11 = DAT_2c66f41c;
    if (param_6 == (int *)0x0) {
      return DAT_2c66fc04;
    }
    *param_6 = DAT_2c66f41c;
    return (char *)(iVar11 + -1);
  }
  iVar11 = SUB84(local_68,0);
  uVar10 = FUN_2c670ec4(iVar11,param_1,local_34,&local_38);
  uVar12 = (local_68._4_4_ & 0x7fffffff) >> 0x14;
  if (uVar12 == 0) {
    iVar13 = local_34[0] + local_38;
    iVar4 = iVar13 + 0x432;
    if (iVar4 < 0x21) {
      uVar20 = uVar20 << (0x20U - iVar4 & 0xff);
    }
    else {
      uVar20 = local_68._4_4_ << (0x40U - iVar4 & 0xff) | uVar20 >> (iVar13 + 0x412U & 0xff);
    }
    iVar13 = iVar13 + -1;
    uVar30 = VectorUnsignedToFloat(uVar20,(byte)(uVar16 >> 0x16) & 3);
    iVar4 = (int)uVar30;
    uVar20 = (int)((ulonglong)uVar30 >> 0x20) + 0xfe100000;
    bVar2 = true;
  }
  else {
    iVar13 = uVar12 - 0x3ff;
    bVar2 = false;
    uVar20 = local_68._4_4_ & 0xfffff | 0x3ff00000;
    iVar4 = iVar11;
  }
  dVar28 = (double)VectorSignedToFloat(iVar13,(byte)(uVar16 >> 0x16) & 3);
  dVar28 = DAT_2c66f3f8 + ((double)CONCAT44(uVar20,iVar4) - 1.5) * DAT_2c66f3f0 +
           dVar28 * DAT_2c66f400;
  uVar16 = uVar16 & 0xfffffff;
  uVar20 = VectorFloatToSigned(dVar28,3);
  if (dVar28 < 0.0) {
    dVar29 = (double)VectorSignedToFloat(uVar20,(byte)(uVar16 >> 0x16) & 3);
    uVar16 = uVar16 | (uint)(dVar29 == dVar28) << 0x1e;
    if ((byte)(uVar16 >> 0x1e) == 0) {
      uVar20 = uVar20 - 1;
    }
  }
  if (uVar20 < 0x17) {
    uVar16 = uVar16 & 0xfffffff;
    if (local_68 < *(double *)(DAT_2c66f420 + uVar20 * 8)) {
      uVar20 = uVar20 - 1;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_5c = (local_38 - iVar13) + -1;
  if (local_5c < 0) {
    local_60 = (char *)(1 - (local_38 - iVar13));
    local_5c = 0;
  }
  else {
    local_60 = (char *)0x0;
  }
  if ((int)uVar20 < 0) {
    local_60 = (char *)((int)local_60 - uVar20);
    local_4c = 0;
    iVar13 = -uVar20;
  }
  else {
    local_5c = local_5c + uVar20;
    iVar13 = 0;
    local_4c = uVar20;
  }
  if (9 < param_2) {
    bVar22 = true;
    local_58 = 0;
switchD_2c66f340_default:
    bVar15 = true;
    local_50 = 0;
    uVar12 = 0x12;
    uVar27 = 0xffffffff;
    param_3 = 0xffffffff;
    goto LAB_2c66f370;
  }
  local_58 = param_2;
  if (5 < (int)param_2) {
    local_58 = param_2 - 4;
  }
  bVar22 = 5 >= (int)param_2;
  local_50 = param_3;
  switch(local_58) {
  case 2:
    bVar15 = false;
    break;
  case 3:
    bVar15 = false;
    goto LAB_2c66f3a2;
  case 4:
    bVar15 = true;
    break;
  case 5:
    bVar15 = true;
LAB_2c66f3a2:
    param_3 = uVar20 + param_3;
    uVar27 = param_3 + 1;
    uVar12 = uVar27;
    if ((int)uVar27 < 1) {
      uVar12 = 1;
    }
    goto LAB_2c66f370;
  default:
    goto switchD_2c66f340_default;
  }
  uVar12 = param_3;
  uVar27 = param_3;
  if ((int)param_3 < 1) {
    local_50 = 1;
    uVar12 = 1;
    uVar27 = 1;
    param_3 = 1;
  }
LAB_2c66f370:
  iVar23 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar23 + 4) = 0;
  for (iVar4 = 4; iVar4 + 0x14U <= uVar12; iVar4 = iVar4 << 1) {
    *(int *)(iVar23 + 4) = *(int *)(iVar23 + 4) + 1;
  }
  pcVar19 = (char *)FUN_2c6706e0(param_1);
  if (pcVar19 == (char *)0x0) {
    uVar10 = 0x1aa;
    uVar6 = DAT_2c66f424;
    goto LAB_2c66f160;
  }
  **(undefined4 **)(param_1 + 0x24) = pcVar19;
  uVar12 = uVar20;
  if ((uVar27 < 0xf) && (bVar22)) {
    if ((int)uVar20 < 1) {
      if (uVar20 == 0) {
        iVar4 = 2;
      }
      else {
        bVar22 = false;
        iVar4 = 2;
        local_68 = local_68 * *(double *)(DAT_2c66f748 + (-uVar20 & 0xf) * 8);
        pdVar5 = DAT_2c66f74c;
        dVar28 = local_68;
        for (iVar23 = (int)-uVar20 >> 4; iVar23 != 0; iVar23 = iVar23 >> 1) {
          if (iVar23 << 0x1f < 0) {
            iVar4 = iVar4 + 1;
            bVar22 = true;
            dVar28 = dVar28 * *pdVar5;
          }
          pdVar5 = pdVar5 + 1;
        }
        if (bVar22) {
          local_68 = dVar28;
        }
      }
    }
    else {
      uVar14 = (int)uVar20 >> 4;
      dVar28 = *(double *)(DAT_2c66f748 + (uVar20 & 0xf) * 8);
      pdVar5 = DAT_2c66f74c;
      if ((uVar20 & 0x100) == 0) {
        iVar4 = 2;
      }
      else {
        uVar14 = uVar14 & 0xf;
        iVar4 = 3;
        local_68 = local_68 / DAT_2c66f74c[4];
      }
      for (; uVar14 != 0; uVar14 = (int)uVar14 >> 1) {
        if ((int)(uVar14 << 0x1f) < 0) {
          iVar4 = iVar4 + 1;
          dVar28 = dVar28 * *pdVar5;
        }
        pdVar5 = pdVar5 + 1;
      }
      local_68 = local_68 / dVar28;
    }
    uVar14 = uVar27;
    if (((bVar1) && (uVar16 = uVar16 & 0xfffffff, local_68 < 1.0)) && (uVar27 != 0)) {
      if ((int)param_3 < 1) goto LAB_2c66f50e;
      iVar4 = iVar4 + 1;
      local_68 = local_68 * 10.0;
      uVar14 = param_3;
      uVar12 = uVar20 - 1;
    }
    dVar28 = (double)VectorSignedToFloat(iVar4,(byte)(uVar16 >> 0x16) & 3);
    dVar28 = dVar28 * local_68 + 7.0;
    uVar17 = (int)((ulonglong)dVar28 >> 0x20) + 0xfcc00000;
    if (uVar14 != 0) {
      dVar29 = (double)(((ulonglong)uVar17 << 0x20) + ((ulonglong)dVar28 & 0xffffffff));
      dVar28 = *(double *)(DAT_2c66f748 + uVar14 * 8 + -8);
      pcVar26 = pcVar19 + uVar14;
      if (bVar15) {
        dVar29 = 0.5 / dVar28 - dVar29;
        pcVar24 = pcVar19;
        while( true ) {
          uVar6 = VectorFloatToSigned(local_68,3);
          dVar28 = (double)VectorSignedToFloat(uVar6,(byte)(uVar16 >> 0x16) & 3);
          local_68 = local_68 - dVar28;
          pcVar25 = pcVar24 + 1;
          *pcVar24 = (char)uVar6 + '0';
          uVar16 = uVar16 & 0xfffffff;
          if (local_68 < dVar29) break;
          pcVar24 = pcVar25;
          if (1.0 - local_68 < dVar29) goto LAB_2c66f716;
          if (pcVar25 == pcVar26) goto LAB_2c66f50e;
          dVar29 = dVar29 * 10.0;
          local_68 = local_68 * 10.0;
        }
        goto LAB_2c66f6ee;
      }
      dVar29 = dVar29 * dVar28;
      pcVar25 = pcVar19;
      while( true ) {
        uVar6 = VectorFloatToSigned(local_68,3);
        dVar28 = (double)VectorSignedToFloat(uVar6,(byte)(uVar16 >> 0x16) & 3);
        local_68 = local_68 - dVar28;
        pcVar24 = pcVar25 + 1;
        *pcVar25 = (char)uVar6 + '0';
        if (pcVar24 == pcVar26) break;
        local_68 = local_68 * 10.0;
        pcVar25 = pcVar24;
      }
      uVar16 = uVar16 & 0xfffffff;
      if (dVar29 + 0.5 < local_68) {
LAB_2c66f716:
        do {
          pcVar25 = pcVar24;
          pcVar24 = pcVar25 + -1;
          if (*pcVar24 != '9') goto LAB_2c66f72e;
        } while (pcVar19 != pcVar24);
        uVar12 = uVar12 + 1;
        *pcVar19 = '0';
LAB_2c66f72e:
        *pcVar24 = *pcVar24 + '\x01';
        goto LAB_2c66f6ee;
      }
      if (local_68 < 0.5 - dVar29) {
        do {
          pcVar25 = pcVar26;
          pcVar26 = pcVar25 + -1;
        } while (pcVar25[-1] == '0');
        goto LAB_2c66f6ee;
      }
      goto LAB_2c66f50e;
    }
    dVar28 = (double)(((ulonglong)uVar17 << 0x20) + ((ulonglong)dVar28 & 0xffffffff));
    uVar16 = uVar16 & 0xfffffff;
    if (local_68 - 5.0 <= dVar28) {
      if (-dVar28 <= local_68 - 5.0) goto LAB_2c66f50e;
LAB_2c66f9ba:
      iVar4 = 0;
      iVar23 = 0;
      goto LAB_2c66f982;
    }
    iVar11 = 0;
    iVar13 = 0;
LAB_2c66f558:
    uVar20 = uVar12 + 1;
    *pcVar19 = '1';
    iVar4 = iVar11;
    iVar23 = iVar13;
    local_60 = pcVar19 + 1;
LAB_2c66f98c:
    iVar11 = 0;
  }
  else {
LAB_2c66f50e:
    if ((-1 < local_34[0]) && ((int)uVar20 < 0xf)) {
      dVar28 = *(double *)(DAT_2c66f748 + uVar20 * 8);
      pcVar26 = pcVar19;
      if ((-1 < (int)local_50) || (0 < (int)uVar27)) {
        do {
          iVar11 = VectorFloatToSigned(dVar31 / dVar28,3);
          dVar29 = (double)VectorSignedToFloat(iVar11,(byte)(uVar16 >> 0x16) & 3);
          dVar31 = dVar31 + -dVar29 * dVar28;
          pcVar25 = pcVar26 + 1;
          *pcVar26 = (char)iVar11 + '0';
          if (uVar27 == (int)pcVar25 - (int)pcVar19) {
            pcVar24 = pcVar25;
            uVar12 = uVar20;
            if ((dVar28 < dVar31 + dVar31) || ((dVar31 + dVar31 == dVar28 && (iVar11 << 0x1f < 0))))
            goto LAB_2c66f716;
            break;
          }
          dVar31 = dVar31 * 10.0;
          uVar16 = uVar16 & 0xfffffff | (uint)(dVar31 == 0.0) << 0x1e;
          pcVar26 = pcVar25;
          uVar12 = uVar20;
        } while ((byte)(uVar16 >> 0x1e) == 0);
        goto LAB_2c66f6ee;
      }
      if (uVar27 != 0) goto LAB_2c66f9ba;
      iVar4 = 0;
      iVar23 = 0;
      iVar11 = 0;
      iVar13 = 0;
      uVar12 = uVar20;
      if (dVar28 * 5.0 < dVar31) goto LAB_2c66f558;
LAB_2c66f982:
      uVar20 = ~local_50;
      local_60 = pcVar19;
      goto LAB_2c66f98c;
    }
    iVar4 = iVar13;
    pcVar26 = local_60;
    if (bVar15) {
      if ((int)local_58 < 2) {
        if (bVar2) {
          uVar16 = local_34[0] + 0x433;
        }
        else {
          uVar16 = 0x36 - local_38;
        }
      }
      else {
        iVar23 = uVar27 - 1;
        if (iVar13 < iVar23) {
          local_4c = local_4c + (iVar23 - iVar13);
          iVar4 = 0;
          iVar13 = iVar23;
        }
        else {
          iVar4 = iVar13 - iVar23;
        }
        uVar16 = uVar27;
        if ((int)uVar27 < 0) {
          uVar16 = 0;
          pcVar26 = (char *)((int)local_60 - uVar27);
        }
      }
      local_60 = (char *)((int)local_60 + uVar16);
      local_5c = local_5c + uVar16;
      iVar23 = FUN_2c670968(param_1,1);
    }
    else {
      iVar23 = 0;
    }
    if ((0 < (int)pcVar26) && (0 < local_5c)) {
      iVar7 = local_5c;
      if ((int)pcVar26 <= local_5c) {
        iVar7 = (int)pcVar26;
      }
      local_60 = (char *)((int)local_60 - iVar7);
      pcVar26 = (char *)((int)pcVar26 - iVar7);
      local_5c = local_5c - iVar7;
    }
    if (iVar13 != 0) {
      if (bVar15) {
        uVar6 = uVar10;
        if (0 < iVar4) {
          iVar23 = FUN_2c670ae4(param_1,iVar23,iVar4);
          uVar6 = FUN_2c670994(param_1,iVar23,uVar10);
          FUN_2c670760(param_1,uVar10);
        }
        iVar13 = iVar13 - iVar4;
        uVar10 = uVar6;
        if (iVar13 == 0) goto LAB_2c66f7f2;
      }
      uVar10 = FUN_2c670ae4(param_1,uVar10,iVar13);
    }
LAB_2c66f7f2:
    iVar4 = FUN_2c670968(param_1,1);
    if ((int)local_4c < 1) {
      if ((int)local_58 < 2) goto LAB_2c66f90c;
LAB_2c66f93e:
      local_48 = 0;
LAB_2c66f932:
      if (local_4c != 0) goto LAB_2c66f81a;
      iVar11 = 1;
    }
    else {
      iVar4 = FUN_2c670ae4(param_1,iVar4,local_4c);
      if ((int)local_58 < 2) {
LAB_2c66f90c:
        if (iVar11 != 0) goto LAB_2c66f93e;
        if (((ulonglong)dVar31 & 0xfffff00000000) == 0) {
          local_48 = local_48 & 0x7ff00000;
          if (((ulonglong)dVar31 & 0x7ff0000000000000) != 0) {
            local_60 = (char *)((int)local_60 + 1);
            local_5c = local_5c + 1;
            local_48 = 1;
          }
        }
        else {
          local_48 = 0;
        }
        goto LAB_2c66f932;
      }
      local_48 = 0;
LAB_2c66f81a:
      iVar11 = FUN_2c6708c8(*(undefined4 *)(iVar4 + *(int *)(iVar4 + 0x10) * 4 + 0x10));
      iVar11 = 0x20 - iVar11;
    }
    uVar16 = iVar11 + local_5c & 0x1f;
    iVar11 = 0;
    if (uVar16 == 0) {
LAB_2c66f844:
      iVar11 = iVar11 + 0x1c;
      pcVar26 = (char *)((int)pcVar26 + iVar11);
      local_60 = (char *)((int)local_60 + iVar11);
      local_5c = local_5c + iVar11;
    }
    else {
      iVar11 = 0x20 - uVar16;
      if (4 < iVar11) {
        iVar11 = -uVar16;
        goto LAB_2c66f844;
      }
      if (iVar11 != 4) goto LAB_2c66f844;
    }
    if (0 < (int)local_60) {
      uVar10 = FUN_2c670b98(param_1,uVar10,local_60);
    }
    if (0 < local_5c) {
      iVar4 = FUN_2c670b98(param_1,iVar4,local_5c);
    }
    pcVar25 = pcVar19;
    if ((bVar1) && (iVar11 = FUN_2c670c78(uVar10,iVar4), iVar11 < 0)) {
      uVar10 = FUN_2c6707a4(param_1,uVar10,10,0);
      uVar20 = uVar20 - 1;
      uVar27 = param_3;
      if (bVar15) {
        iVar23 = FUN_2c6707a4(param_1,iVar23,10,0);
        if ((0 < (int)param_3) || ((int)local_58 < 3)) goto LAB_2c66f9d2;
      }
      else if ((0 < (int)param_3) || ((int)local_58 < 3)) goto LAB_2c66fbd6;
LAB_2c66f960:
      if (uVar27 == 0) {
        iVar4 = FUN_2c6707a4(param_1,iVar4,5,0);
        iVar7 = FUN_2c670c78(uVar10,iVar4);
        iVar11 = iVar4;
        iVar13 = iVar23;
        uVar12 = uVar20;
        if (0 < iVar7) goto LAB_2c66f558;
      }
      goto LAB_2c66f982;
    }
    if (((int)uVar27 < 1) && (2 < (int)local_58)) goto LAB_2c66f960;
    param_3 = uVar27;
    if (bVar15) {
LAB_2c66f9d2:
      iVar11 = iVar23;
      if (0 < (int)pcVar26) {
        iVar11 = FUN_2c670b98(param_1,iVar23,pcVar26);
      }
      iVar23 = iVar11;
      if (local_48 != 0) {
        iVar13 = FUN_2c6706e0(param_1,*(undefined4 *)(iVar11 + 4));
        if (iVar13 == 0) {
          uVar10 = 0x2ea;
          uVar6 = DAT_2c66fc00;
LAB_2c66f160:
                    /* WARNING: Subroutine does not return */
          FUN_2c668484(DAT_2c66f40c,uVar10,0,uVar6);
        }
        FUN_2c674668(iVar13 + 0xc,iVar11 + 0xc,(*(int *)(iVar11 + 0x10) + 2) * 4);
        iVar23 = FUN_2c670b98(param_1,iVar13,1);
      }
      pcVar26 = pcVar19;
LAB_2c66fa34:
      local_60 = pcVar26 + 1;
      iVar13 = FUN_2c66f008(uVar10,iVar4);
      iVar21 = iVar13 + 0x30;
      iVar7 = FUN_2c670c78(uVar10,iVar11);
      iVar8 = FUN_2c670cb0(param_1,iVar4,iVar23);
      if (*(int *)(iVar8 + 0xc) == 0) {
        iVar9 = FUN_2c670c78(uVar10,iVar8);
      }
      else {
        iVar9 = 1;
      }
      FUN_2c670760(param_1,iVar8);
      if (((ulonglong)dVar31 & 1) == 0 && (local_58 == 0 && iVar9 == 0)) {
        if (iVar21 == 0x39) {
LAB_2c66faea:
          *pcVar26 = '9';
          pcVar26 = local_60;
          goto LAB_2c66faf2;
        }
        if (0 < iVar7) {
LAB_2c66fa9c:
          iVar21 = iVar13 + 0x31;
        }
LAB_2c66faa0:
        cVar18 = (char)iVar21;
        goto LAB_2c66faa2;
      }
      if ((iVar7 < 0) || ((local_58 == 0 && iVar7 == 0) && ((ulonglong)dVar31 & 1) == 0)) {
        if (0 < iVar9) {
          uVar10 = FUN_2c670b98(param_1,uVar10,1);
          iVar7 = FUN_2c670c78(uVar10,iVar4);
          if ((0 < iVar7) || ((iVar7 == 0 && (iVar13 << 0x1f < 0)))) {
            if (iVar21 != 0x39) goto LAB_2c66fa9c;
            goto LAB_2c66faea;
          }
        }
        goto LAB_2c66faa0;
      }
      if (0 < iVar9) {
        if (iVar21 == 0x39) goto LAB_2c66faea;
        iVar21 = iVar13 + 0x31;
        goto LAB_2c66faa0;
      }
      *pcVar26 = (char)iVar21;
      if (local_60 != pcVar19 + param_3) {
        uVar10 = FUN_2c6707a4(param_1,uVar10,10,0);
        pcVar26 = local_60;
        if (iVar11 == iVar23) {
          iVar23 = FUN_2c6707a4(param_1,iVar11,10,0);
          iVar11 = iVar23;
        }
        else {
          iVar11 = FUN_2c6707a4(param_1,iVar11,10,0);
          iVar23 = FUN_2c6707a4(param_1,iVar23,10,0);
        }
        goto LAB_2c66fa34;
      }
    }
    else {
LAB_2c66fbd6:
      while( true ) {
        iVar21 = FUN_2c66f008(uVar10,iVar4);
        iVar21 = iVar21 + 0x30;
        *pcVar25 = (char)iVar21;
        if ((int)uVar27 <= (int)(pcVar25 + 1) - (int)pcVar19) break;
        uVar10 = FUN_2c6707a4(param_1,uVar10,10,0);
        pcVar25 = pcVar25 + 1;
      }
      iVar11 = 0;
      if ((int)uVar27 < 1) {
        uVar27 = 1;
      }
      local_60 = pcVar19 + uVar27;
    }
    uVar10 = FUN_2c670b98(param_1,uVar10,1);
    iVar13 = FUN_2c670c78(uVar10,iVar4);
    pcVar26 = local_60;
    if ((iVar13 < 1) && ((iVar13 != 0 || (-1 < iVar21 << 0x1f)))) {
      do {
        local_60 = pcVar26;
        pcVar26 = local_60 + -1;
      } while (local_60[-1] == '0');
    }
    else {
LAB_2c66faf2:
      do {
        local_60 = pcVar26;
        pcVar26 = local_60 + -1;
        if (local_60[-1] != '9') {
          *pcVar26 = local_60[-1] + '\x01';
          goto LAB_2c66f990;
        }
      } while (pcVar19 != pcVar26);
      uVar20 = uVar20 + 1;
      cVar18 = '1';
      pcVar26 = pcVar19;
LAB_2c66faa2:
      *pcVar26 = cVar18;
    }
  }
LAB_2c66f990:
  FUN_2c670760(param_1,iVar4);
  pcVar25 = local_60;
  uVar12 = uVar20;
  if (iVar23 != 0) {
    if ((iVar11 != 0) && (iVar11 != iVar23)) {
      FUN_2c670760(param_1,iVar11);
    }
    FUN_2c670760(param_1,iVar23);
  }
LAB_2c66f6ee:
  FUN_2c670760(param_1,uVar10);
  *pcVar25 = '\0';
  *param_4 = uVar12 + 1;
  if (param_6 != (int *)0x0) {
    *param_6 = (int)pcVar25;
  }
  return pcVar19;
}

