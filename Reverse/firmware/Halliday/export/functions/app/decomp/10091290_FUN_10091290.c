/* FUN_10091290 @ 0x10091290 */

void FUN_10091290(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 extraout_r2;
  byte bVar16;
  code *pcVar17;
  undefined4 extraout_r3;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined1 local_70;
  char local_6f;
  char local_6e;
  byte local_6d;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  byte local_2c;
  
  uVar6 = FUN_1012691c(param_1,0,*DAT_100914dc);
  local_6d = ~(byte)uVar6 & 1 | (byte)(((uVar6 & 7) >> 2) << 1) | (byte)(((uVar6 & 0xf) >> 3) << 2)
             | local_6d & 0xf8;
  local_70 = FUN_1012691c(param_1,0,*DAT_100914e0);
  local_6f = FUN_1012691c(param_1,0,*DAT_100914e4);
  local_6e = FUN_1012691c(param_1,0,*DAT_100914e8);
  cVar3 = FUN_1012691c(param_1,0,0x16);
  bVar16 = local_6d & 1;
  if ((local_6d & 1) == 0) {
    uVar15 = 0x15;
  }
  else {
    uVar15 = 0x14;
    bVar16 = 0;
  }
  iVar7 = FUN_1012691c(param_1,bVar16,uVar15);
  bVar16 = local_6d & 1;
  if ((local_6d & 1) == 0) {
    uVar15 = 0x14;
  }
  else {
    uVar15 = 0x15;
    bVar16 = 0;
  }
  iVar8 = FUN_1012691c(param_1,bVar16,uVar15);
  if ((int)((uint)local_6d << 0x1f) < 0) {
    uVar15 = FUN_1012579a();
  }
  else {
    uVar15 = FUN_101257c8(param_1);
  }
  iVar9 = FUN_1012691c(param_1,0,0x32);
  iVar20 = *(int *)(param_1 + 0x18);
  iVar10 = FUN_1012691c(param_1,0,0x10);
  local_6c = FUN_10126008(param_1);
  local_6c = (iVar20 + iVar10 + iVar9) - local_6c;
  iVar20 = *(int *)(param_1 + 0x14);
  iVar10 = FUN_1012691c(param_1,0,0x12);
  local_68 = FUN_10125ffe(param_1);
  cVar4 = local_6e;
  local_68 = (iVar20 + iVar10 + iVar9) - local_68;
  piVar19 = &local_68;
  if ((int)((uint)local_6d << 0x1f) < 0) {
    piVar19 = &local_6c;
  }
  iVar9 = FUN_1012691c(param_1,0,1);
  iVar10 = FUN_1012691c(param_1,0,4);
  if ((local_6d & 1) == 0) {
    if ((iVar9 != DAT_100914ec) || ((int)((uint)*(byte *)(param_1 + 0x2b) << 0x1c) < 0)) {
      if (cVar3 == '\x01') {
        if (cVar4 == '\0') goto LAB_100913f2;
        if (cVar4 == '\x01') goto LAB_1009144e;
      }
      goto LAB_100913ca;
    }
    if (cVar3 != '\x01') goto LAB_1009144e;
LAB_100913f2:
    cVar4 = '\x01';
  }
  else {
    if ((iVar10 == DAT_100914ec) && (-1 < (int)((uint)*(byte *)(param_1 + 0x2b) << 0x1d))) {
LAB_1009144e:
      iVar20 = 0;
      local_64 = 0;
      goto LAB_10091452;
    }
LAB_100913ca:
    local_64 = 0;
    if (cVar4 == '\0') {
      iVar20 = 0;
      goto LAB_10091452;
    }
  }
  local_64 = 0;
  iVar23 = 0;
  uVar6 = local_6d & 4;
  iVar20 = 0;
  if ((local_6d & 4) != 0) {
    uVar6 = *(int *)(*(int *)(param_1 + 8) + 4) - 1;
  }
  while (((int)uVar6 < *(int *)(*(int *)(param_1 + 8) + 4) && (-1 < (int)uVar6))) {
    local_2c = local_2c & 0xfe;
    uVar6 = FUN_10090ff0(param_1,&local_70,uVar6,uVar15,iVar8,&local_44);
    iVar20 = iVar20 + local_44 + iVar7;
    iVar23 = iVar23 + 1;
  }
  if (iVar23 != 0) {
    iVar20 = iVar20 - iVar7;
  }
  if ((int)((uint)local_6d << 0x1f) < 0) {
    uVar12 = FUN_101257c8();
  }
  else {
    uVar12 = FUN_1012579a(param_1);
  }
  FUN_1012a3cc(cVar4,uVar12,iVar20,iVar23,piVar19,&local_64);
LAB_10091452:
  uVar6 = local_6d & 4;
  if ((local_6d & 4) != 0) {
    uVar6 = *(int *)(*(int *)(param_1 + 8) + 4) - 1;
  }
  if ((cVar3 == '\x01') && (-1 < (int)((uint)local_6d << 0x1f))) {
    *piVar19 = iVar20 + *piVar19;
  }
  do {
    if ((*(int *)(*(int *)(param_1 + 8) + 4) <= (int)uVar6) || ((int)uVar6 < 0)) {
      if ((iVar9 == DAT_100914ec) || (iVar10 == DAT_100914ec)) {
        FUN_10089680(param_1);
      }
      FUN_10086f50(param_1,0x2b,0);
      return;
    }
    local_2c = local_2c | 1;
    uVar11 = FUN_10090ff0(param_1,&local_70,uVar6,uVar15,iVar8,&local_44);
    if ((cVar3 == '\x01') && (-1 < (int)((uint)local_6d << 0x1f))) {
      *piVar19 = *piVar19 - local_44;
    }
    iVar23 = local_68;
    iVar20 = local_6c;
    local_60 = uVar6;
    pcVar2 = DAT_100916e8;
    pcVar1 = DAT_100916f4;
    pcVar17 = DAT_100916f0;
    if ((local_6d & 1) == 0) {
      pcVar2 = DAT_100916ec;
      pcVar1 = DAT_100916f0;
      pcVar17 = DAT_100916f4;
    }
    do {
      iVar24 = 0;
      iVar21 = local_40 - iStack_3c;
      piVar18 = local_34;
      while (local_34 + local_30 * 6 != piVar18) {
        if ((int)((uint)*(byte *)(piVar18 + 5) << 0x1f) < 0) {
          iVar21 = iVar21 - piVar18[3];
          piVar18 = piVar18 + 6;
        }
        else {
          iVar24 = iVar24 + piVar18[4];
          piVar18 = piVar18 + 6;
        }
      }
      iVar22 = 0;
      for (uVar6 = 0; uVar6 < local_30; uVar6 = uVar6 + 1) {
        if (-1 < (int)((uint)*(byte *)(local_34 + uVar6 * 6 + 5) << 0x1f)) {
          if (iVar24 == 0) {
            uVar27 = FUN_10094174(3,DAT_10091700,0x1b0,DAT_10091704,DAT_100916fc,DAT_100916f8);
            FUN_10119dc2(DAT_1009170c,DAT_10091708,DAT_10091700,0x1b0,uVar27);
            FUN_10119dc2(DAT_10091710);
            FUN_1011a1f0(DAT_10091700,0x1b0,extraout_r2,extraout_r3);
          }
          uVar25 = local_34[uVar6 * 6 + 4] * (iVar21 / iVar24);
          uVar13 = local_34[uVar6 * 6 + 2];
          if ((int)uVar25 <= local_34[uVar6 * 6 + 2]) {
            uVar13 = uVar25;
          }
          iVar24 = iVar24 - local_34[uVar6 * 6 + 4];
          if ((int)uVar13 < local_34[uVar6 * 6 + 1]) {
            uVar13 = local_34[uVar6 * 6 + 1];
          }
          bVar26 = uVar25 - uVar13 != 0;
          if (bVar26) {
            iVar22 = 1;
            uVar25 = (uint)*(byte *)(local_34 + uVar6 * 6 + 5);
          }
          local_34[uVar6 * 6 + 3] = uVar13;
          if (bVar26) {
            *(byte *)(local_34 + uVar6 * 6 + 5) = (byte)uVar25 | 1;
          }
          iVar21 = iVar21 - uVar13;
        }
      }
    } while (iVar22 != 0);
    cVar4 = FUN_1012691c(param_1,0,0x16);
    local_5c = iVar22;
    iStack_58 = iVar22;
    FUN_1012a3cc(local_70,uVar15,local_40,local_38,&local_5c,&iStack_58);
    if (((int)((uint)local_6d << 0x1f) < 0) && (cVar4 == '\x01')) {
      iVar21 = FUN_1012579a(param_1);
      local_5c = iVar21 + local_5c;
    }
    iVar21 = FUN_10126fb4(param_1,local_60);
    while ((iVar21 != 0 && (uVar11 != local_60))) {
      iVar24 = FUN_10124cc6(iVar21,DAT_10091714);
      if (iVar24 == 0) {
        cVar5 = FUN_1012691c(iVar21,0,*DAT_10091718);
        if (cVar5 == '\0') {
          *(byte *)(iVar21 + 0x2b) = *(byte *)(iVar21 + 0x2b) & 0xf3;
        }
        else {
          piVar18 = local_34;
          for (uVar6 = 0; uVar6 != local_30; uVar6 = uVar6 + 1) {
            if (iVar21 == *piVar18) {
              iVar24 = piVar18[3];
              goto LAB_1009172a;
            }
            piVar18 = piVar18 + 6;
          }
          iVar24 = 0;
LAB_1009172a:
          bVar16 = *(byte *)(iVar21 + 0x2b) & 0xf3;
          if ((local_6d & 1) == 0) {
            bVar16 = bVar16 | 4;
          }
          else {
            bVar16 = bVar16 | 8;
          }
          *(byte *)(iVar21 + 0x2b) = bVar16;
          iVar22 = (*pcVar1)(iVar21 + 0x14);
          if (iVar22 != iVar24) {
            FUN_10125af4(iVar21);
            local_54 = *(undefined4 *)(iVar21 + 0x14);
            local_50 = *(undefined4 *)(iVar21 + 0x18);
            local_4c = *(undefined4 *)(iVar21 + 0x1c);
            local_48 = *(undefined4 *)(iVar21 + 0x20);
            (*pcVar2)(iVar21 + 0x14,iVar24);
            FUN_10086f50(iVar21,0x29,&local_54);
            uVar12 = FUN_10126fae(iVar21);
            FUN_10086f50(uVar12,0x22,iVar21);
            FUN_10125af4(iVar21);
          }
        }
        iVar24 = local_44;
        if (local_6f == '\x01') {
          iVar22 = (*pcVar17)(iVar21 + 0x14);
          iVar24 = iVar24 - iVar22;
        }
        else if (local_6f == '\x02') {
          uVar6 = local_44 + 1;
          iVar24 = (*pcVar17)(iVar21 + 0x14);
          iVar24 = (int)((uVar6 & 0xfffffffe) - iVar24) / 2;
        }
        else {
          iVar24 = 0;
        }
        if (((int)((uint)local_6d << 0x1f) < 0) && (cVar4 == '\x01')) {
          iVar22 = (*pcVar1)(iVar21 + 0x14);
          local_5c = local_5c - iVar22;
        }
        uVar6 = FUN_1012691c(iVar21,0,0x6b);
        uVar13 = FUN_1012691c(iVar21,0,0x6c);
        iVar22 = FUN_10125786(iVar21);
        iVar14 = FUN_10125790(iVar21);
        if (((uVar6 & 0x60000000) == 0x20000000) &&
           (uVar25 = uVar6 & 0x9fffffff, (int)uVar25 < 0x7d1)) {
          if (1000 < (int)uVar25) {
            uVar25 = 1000 - uVar25;
          }
          uVar6 = (int)(uVar25 * iVar22) / 100;
        }
        if (((uVar13 & 0x60000000) == 0x20000000) &&
           (uVar25 = uVar13 & 0x9fffffff, (int)uVar25 < 0x7d1)) {
          if (1000 < (int)uVar25) {
            uVar25 = 1000 - uVar25;
          }
          uVar13 = (int)(uVar25 * iVar14) / 100;
        }
        iVar22 = iVar24;
        if ((local_6d & 1) != 0) {
          iVar22 = local_5c;
        }
        iVar22 = uVar6 + (iVar23 - *(int *)(iVar21 + 0x14)) + iVar22;
        if ((local_6d & 1) == 0) {
          iVar24 = local_5c;
        }
        iVar24 = iVar24 + uVar13 + (iVar20 - *(int *)(iVar21 + 0x18));
        if (iVar22 != 0 || iVar24 != 0) {
          FUN_10125af4(iVar21);
          *(int *)(iVar21 + 0x14) = *(int *)(iVar21 + 0x14) + iVar22;
          *(int *)(iVar21 + 0x1c) = *(int *)(iVar21 + 0x1c) + iVar22;
          *(int *)(iVar21 + 0x18) = *(int *)(iVar21 + 0x18) + iVar24;
          *(int *)(iVar21 + 0x20) = *(int *)(iVar21 + 0x20) + iVar24;
          FUN_10125af4(iVar21);
          FUN_1012584c(iVar21,iVar22,iVar24,0);
        }
        if (((int)((uint)local_6d << 0x1f) < 0) && (cVar4 == '\x01')) {
          local_5c = (local_5c - iStack_58) - iVar8;
        }
        else {
          iVar21 = (*pcVar1)(iVar21 + 0x14);
          local_5c = iVar21 + iStack_58 + local_5c + iVar8;
        }
      }
      iVar21 = FUN_1012a43c(param_1 + 8,(local_6d & 7) >> 2,&local_60);
    }
    FUN_10094444(local_34);
    if ((cVar3 == '\x01') && (-1 < (int)((uint)local_6d << 0x1f))) {
      iVar20 = -(iVar7 + local_64);
    }
    else {
      iVar20 = local_44 + local_64 + iVar7;
    }
    *piVar19 = *piVar19 + iVar20;
    uVar6 = uVar11;
  } while( true );
}

