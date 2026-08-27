/* FUN_2c6052c8 @ 0x2c6052c8 */

void FUN_2c6052c8(int param_1,short *param_2,short *param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 extraout_r2;
  short sVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  int local_64;
  int local_60;
  uint local_5c;
  short local_44;
  
  FUN_2c62a624(param_2,0,0,0xffffffff,0xffffffff);
  FUN_2c62a624(param_3,0,0,0xffffffff,0xffffffff);
  uVar13 = FUN_2c606b94(param_1,0x10);
  if (uVar13 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar14 = FUN_2c62a5c0();
    bVar7 = 3;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x18);
    bVar7 = bVar1 & 3;
    if ((bVar1 & 3) == 0) {
      return;
    }
    iVar14 = FUN_2c62a5c0(0);
    if (bVar7 == 2) {
      while( true ) {
        if (iVar14 == 0) {
          return;
        }
        iVar15 = FUN_2c5ff624(iVar14);
        if (param_1 == iVar15) break;
        iVar14 = FUN_2c62a5c0(iVar14);
      }
    }
  }
  iVar15 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar15 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x12);
  }
  iVar16 = FUN_2c604a50(param_1);
  cVar6 = FUN_2c6033b4(param_1,0,0x16);
  if (cVar6 == '\x01') {
    local_60 = FUN_2c60460c(param_1);
  }
  else if (*(int *)(param_1 + 8) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x10);
  }
  cVar6 = FUN_2c6033b4(param_1,0,0x16);
  local_5c = uVar13;
  if (cVar6 == '\x01') {
    iVar22 = *(int *)(param_1 + 8);
    if (iVar22 == 0) {
      local_5c = 3;
      local_64 = 0;
    }
    else {
      local_64 = (int)*(short *)(iVar22 + 0x10);
      uVar19 = (uint)*(byte *)(iVar22 + 0x19);
      uVar23 = uVar19 & 0xf;
      if ((*(byte *)(iVar22 + 0x19) & 0xc) == 0) goto LAB_2c6053bc;
LAB_2c60539a:
      local_5c = uVar23 & 3;
    }
LAB_2c6053e6:
    uVar19 = uVar13;
    if (bVar7 == 1) {
      if (local_5c != 0) {
        local_5c = 1;
      }
    }
    else if (bVar7 == 3) {
      iVar14 = iVar16;
      if (iVar16 < 1) {
        iVar14 = iVar15;
      }
      if (iVar14 < 1) {
        if (local_5c == 0) {
          return;
        }
        goto LAB_2c60573a;
      }
      uVar19 = 1;
      if (local_5c != 0) {
        iVar14 = local_60;
        if (local_60 < 1) {
          iVar14 = local_64;
        }
        local_5c = (uint)(0 < iVar14);
      }
    }
    else {
      iVar22 = FUN_2c5ff608(iVar14);
      uVar19 = (uint)(iVar22 == 0xc);
      if ((local_5c == 0) || (iVar14 = FUN_2c5ff608(iVar14), local_5c = uVar13, iVar14 != 3)) {
        if (iVar22 != 0xc) {
          return;
        }
        local_5c = 0;
        uVar19 = uVar13;
      }
    }
  }
  else {
    local_64 = FUN_2c6046d8(param_1);
    if (*(int *)(param_1 + 8) == 0) {
      local_5c = 3;
      goto LAB_2c6053e6;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x19);
    uVar19 = (uint)bVar1;
    uVar23 = uVar19 & 0xf;
    if ((bVar1 & 0xc) != 0) goto LAB_2c60539a;
LAB_2c6053bc:
    uVar19 = uVar19 & 0xc;
    if (uVar23 == 0) {
      return;
    }
    if (bVar7 != 1) {
      if (bVar7 != 3) {
        iVar14 = FUN_2c5ff608(iVar14);
        if (iVar14 != 3) {
          return;
        }
        goto LAB_2c605448;
      }
LAB_2c60573a:
      iVar14 = local_60;
      if (local_60 < 1) {
        iVar14 = local_64;
      }
      if (iVar14 < 1) {
        return;
      }
      uVar19 = 0;
      local_5c = (uint)(0 < iVar14);
    }
  }
LAB_2c605448:
  cVar6 = FUN_2c6033b4(param_1,0x10000,0x16);
  sVar8 = FUN_2c6033b4(param_1,0x10000,0x10);
  uVar9 = FUN_2c6033b4(param_1,0x10000,0x11);
  sVar10 = FUN_2c6033b4(param_1,0x10000,0x12);
  uVar11 = FUN_2c6033b4(param_1,0x10000,0x13);
  sVar12 = FUN_2c6033b4(param_1,0x10000,1);
  iVar22 = FUN_2c6073f8(param_1);
  iVar24 = (int)sVar12;
  iVar17 = FUN_2c6073ec(param_1);
  iVar14 = iVar24;
  if (uVar19 == 0) {
    iVar14 = 0;
  }
  if (local_5c == 0) {
    iVar24 = 0;
  }
  bVar7 = FUN_2c6033b4(param_1,0x10000,0x21);
  if ((bVar7 < 2) && (bVar7 = FUN_2c6033b4(param_1,0x10000,0x31), bVar7 < 2)) {
    return;
  }
  sVar21 = (short)iVar15 + (short)iVar16;
  iVar15 = (int)(short)((short)iVar22 + sVar21);
  if ((iVar15 != 0) && (uVar19 != 0)) {
    param_3[1] = *(short *)(param_1 + 0x16);
    param_3[3] = *(short *)(param_1 + 0x1a);
    if (cVar6 == '\x01') {
      sVar20 = *(short *)(param_1 + 0x14) + sVar10;
      *param_3 = sVar20;
      param_3[2] = sVar20 + sVar12 + -1;
    }
    else {
      sVar20 = *(short *)(param_1 + 0x18) - uVar11;
      param_3[2] = sVar20;
      *param_3 = sVar20 + (1 - sVar12);
    }
    iVar18 = FUN_2c62a4c4(0);
    sVar20 = (short)((iVar22 * (((iVar22 - sVar8) - (int)(short)uVar9) - iVar24)) / iVar15);
    if (iVar18 * 10 < 0xf0) {
      iVar15 = 1;
    }
    else {
      iVar15 = FUN_2c62a4c4(0);
      iVar15 = iVar15 * 10 + 0x50;
      iVar15 = (int)((longlong)DAT_2c605a84 * (longlong)iVar15 >> 0x26) - (iVar15 >> 0x1f);
    }
    if (sVar20 <= iVar15) {
      iVar15 = FUN_2c62a4c4(0);
      if (iVar15 * 10 < 0xf0) {
        sVar20 = 1;
      }
      else {
        iVar15 = FUN_2c62a4c4(0);
        iVar15 = iVar15 * 10 + 0x50;
        sVar20 = (short)(int)((longlong)DAT_2c605a84 * (longlong)iVar15 >> 0x26) -
                 (short)(iVar15 >> 0x1f);
      }
    }
    sVar4 = (short)iVar24;
    if (sVar21 < 1) {
      param_3[1] = *(short *)(param_1 + 0x16) + sVar8;
      param_3[3] = (~uVar9 + *(short *)(param_1 + 0x1a)) - sVar4;
    }
    else {
      sVar5 = (((short)iVar22 - (sVar8 + uVar9)) - sVar4) - sVar20;
      sVar5 = (sVar5 + *(short *)(param_1 + 0x16) + sVar8) -
              (short)(((int)sVar5 * (int)(short)iVar16) / (int)sVar21);
      sVar21 = sVar20 + -1 + sVar5;
      iVar15 = (int)sVar21;
      param_3[1] = sVar5;
      param_3[3] = sVar21;
      if ((int)sVar5 < (int)sVar8 + (int)*(short *)(param_1 + 0x16)) {
        sVar8 = *(short *)(param_1 + 0x16) + sVar8;
        param_3[1] = sVar8;
        uVar26 = FUN_2c62a4c4(0);
        uVar3 = uVar26 >> 0x20;
        if ((int)uVar26 * 10 < 0xf0) {
          iVar16 = 1;
        }
        else {
          iVar15 = FUN_2c62a4c4(0);
          iVar15 = iVar15 * 10 + 0x50;
          uVar3 = (longlong)DAT_2c605a84 * (longlong)iVar15;
          iVar16 = (int)((longlong)uVar3 >> 0x26) - (iVar15 >> 0x1f);
        }
        iVar15 = (int)param_3[3];
        if (iVar15 < sVar8 + iVar16) {
          sVar8 = param_3[1];
          iVar15 = FUN_2c62a4c4(0,(int)uVar3);
          if (iVar15 * 10 < 0xf0) {
            sVar21 = 1;
          }
          else {
            iVar15 = FUN_2c62a4c4(0);
            iVar15 = iVar15 * 10 + 0x50;
            sVar21 = (short)(int)((longlong)DAT_2c605a84 * (longlong)iVar15 >> 0x26) -
                     (short)(iVar15 >> 0x1f);
          }
          iVar15 = (int)(short)(sVar21 + sVar8);
          param_3[3] = sVar21 + sVar8;
        }
      }
      if ((*(short *)(param_1 + 0x1a) - iVar24) - (int)(short)uVar9 < iVar15) {
        sVar4 = (*(short *)(param_1 + 0x1a) - uVar9) - sVar4;
        param_3[3] = sVar4;
        iVar15 = FUN_2c62a4c4(0);
        if (iVar15 * 10 < 0xf0) {
          iVar15 = 1;
        }
        else {
          iVar15 = FUN_2c62a4c4(0);
          iVar15 = iVar15 * 10 + 0x50;
          iVar15 = (int)((longlong)DAT_2c605a84 * (longlong)iVar15 >> 0x26) - (iVar15 >> 0x1f);
        }
        if (sVar4 - iVar15 < (int)param_3[1]) {
          sVar8 = param_3[3];
          iVar15 = FUN_2c62a4c4(0);
          if (iVar15 * 10 < 0xf0) {
            sVar21 = 1;
          }
          else {
            iVar15 = FUN_2c62a4c4(0);
            iVar15 = iVar15 * 10 + 0x50;
            sVar21 = (short)(int)((longlong)DAT_2c605b0c * (longlong)iVar15 >> 0x26) -
                     (short)(iVar15 >> 0x1f);
          }
          param_3[1] = sVar8 - sVar21;
        }
      }
    }
  }
  sVar21 = (short)iVar17;
  sVar8 = sVar21 + (short)local_64 + (short)local_60;
  if (sVar8 == 0) {
    return;
  }
  if (local_5c == 0) {
    return;
  }
  iVar15 = (int)sVar10;
  iVar16 = (int)(short)uVar11;
  sVar20 = *(short *)(param_1 + 0x1a) - uVar9;
  param_2[3] = sVar20;
  param_2[1] = (1 - sVar12) + sVar20;
  *param_2 = *(short *)(param_1 + 0x14);
  sVar12 = (short)((iVar17 * (((iVar17 - iVar15) - iVar16) - iVar14)) / (int)sVar8);
  param_2[2] = *(short *)(param_1 + 0x18);
  uVar25 = FUN_2c62a4c4(0);
  lVar2 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),extraout_r2);
  if ((int)uVar25 * 10 < 0xf0) {
    iVar22 = 1;
  }
  else {
    iVar22 = FUN_2c62a4c4(0);
    iVar22 = iVar22 * 10 + 0x50;
    lVar2 = (longlong)DAT_2c605a84 * (longlong)iVar22;
    iVar22 = (int)(lVar2 >> 0x26) - (iVar22 >> 0x1f);
  }
  if (sVar12 <= iVar22) {
    iVar22 = FUN_2c62a4c4(0,(int)((ulonglong)lVar2 >> 0x20),(int)lVar2);
    if (iVar22 * 10 < 0xf0) {
      sVar12 = 1;
    }
    else {
      iVar22 = FUN_2c62a4c4(0);
      iVar22 = iVar22 * 10 + 0x50;
      sVar12 = (short)(int)((longlong)DAT_2c605a84 * (longlong)iVar22 >> 0x26) -
               (short)(iVar22 >> 0x1f);
    }
  }
  local_44 = (short)iVar14;
  if ((short)(sVar8 - sVar21) < 1) {
    if (cVar6 != '\x01') {
      *param_2 = sVar10 + *(short *)(param_1 + 0x14);
      param_2[2] = (~uVar11 + *(short *)(param_1 + 0x18)) - local_44;
      return;
    }
    *param_2 = local_44 + sVar10 + -1 + *(short *)(param_1 + 0x14);
    param_2[2] = *(short *)(param_1 + 0x18) - uVar11;
    return;
  }
  sVar20 = ((sVar21 - (sVar10 + uVar11)) - local_44) - sVar12;
  sVar20 = sVar20 - (short)(((int)sVar20 * (int)(short)local_64) / (int)(short)(sVar8 - sVar21));
  if (cVar6 == '\x01') {
    sVar20 = sVar20 + *(short *)(param_1 + 0x14) + sVar10 + local_44;
    sVar8 = sVar12 + -1 + sVar20;
    iVar22 = (int)sVar8;
    *param_2 = sVar20;
    param_2[2] = sVar8;
    if ((int)sVar20 < *(short *)(param_1 + 0x14) + iVar15 + iVar14) {
      local_44 = local_44 + sVar10 + *(short *)(param_1 + 0x14);
      *param_2 = local_44;
      iVar14 = FUN_2c62a4c4(0);
      if (iVar14 * 10 < 0xf0) {
        iVar14 = 1;
      }
      else {
        iVar14 = FUN_2c62a4c4(0);
        iVar14 = iVar14 * 10 + 0x50;
        iVar14 = (int)((longlong)DAT_2c605b0c * (longlong)iVar14 >> 0x26) - (iVar14 >> 0x1f);
      }
      iVar22 = (int)param_2[2];
      if (iVar22 < local_44 + iVar14) {
        sVar8 = *param_2;
        iVar14 = FUN_2c62a4c4(0);
        if (iVar14 * 10 < 0xf0) {
          sVar10 = 1;
        }
        else {
          iVar14 = FUN_2c62a4c4(0);
          sVar10 = (short)((iVar14 * 10 + 0x50) / 0xa0);
        }
        iVar22 = (int)(short)(sVar10 + sVar8);
        param_2[2] = sVar10 + sVar8;
      }
    }
    if (iVar22 <= *(short *)(param_1 + 0x18) - iVar16) {
      return;
    }
    local_44 = *(short *)(param_1 + 0x18) - uVar11;
    goto LAB_2c6056cc;
  }
  sVar20 = *(short *)(param_1 + 0x14) + sVar10 + sVar20;
  sVar8 = sVar12 + -1 + sVar20;
  *param_2 = sVar20;
  param_2[2] = sVar8;
  if ((int)sVar20 < iVar15 + *(short *)(param_1 + 0x14)) {
    sVar10 = sVar10 + *(short *)(param_1 + 0x14);
    *param_2 = sVar10;
    iVar15 = FUN_2c62a4c4(0);
    if (iVar15 * 10 < 0xf0) {
      iVar15 = 1;
    }
    else {
      iVar15 = FUN_2c62a4c4(0);
      iVar15 = iVar15 * 10 + 0x50;
      iVar15 = (int)((longlong)DAT_2c605a84 * (longlong)iVar15 >> 0x26) - (iVar15 >> 0x1f);
    }
    iVar22 = (int)param_2[2];
    if (iVar22 < sVar10 + iVar15) {
      sVar10 = *param_2;
      iVar15 = FUN_2c62a4c4(0);
      if (iVar15 * 10 < 0xf0) {
        sVar8 = 1;
      }
      else {
        iVar15 = FUN_2c62a4c4(0);
        sVar8 = (short)((iVar15 * 10 + 0x50) / 0xa0);
      }
      sVar8 = sVar8 + sVar10;
      param_2[2] = sVar8;
      goto LAB_2c6056b0;
    }
  }
  else {
LAB_2c6056b0:
    iVar22 = (int)sVar8;
  }
  if (iVar22 <= (*(short *)(param_1 + 0x18) - iVar14) - iVar16) {
    return;
  }
  local_44 = (*(short *)(param_1 + 0x18) - uVar11) - local_44;
LAB_2c6056cc:
  param_2[2] = local_44;
  iVar14 = FUN_2c62a4c4(0);
  if (iVar14 * 10 < 0xf0) {
    iVar14 = 1;
  }
  else {
    iVar14 = FUN_2c62a4c4(0);
    iVar14 = iVar14 * 10 + 0x50;
    iVar14 = (int)((longlong)DAT_2c605a84 * (longlong)iVar14 >> 0x26) - (iVar14 >> 0x1f);
  }
  if (local_44 - iVar14 < (int)*param_2) {
    sVar8 = param_2[2];
    iVar14 = FUN_2c62a4c4(0);
    if (iVar14 * 10 < 0xf0) {
      sVar10 = 1;
    }
    else {
      iVar14 = FUN_2c62a4c4(0);
      sVar10 = (short)((iVar14 * 10 + 0x50) / 0xa0);
    }
    *param_2 = sVar8 - sVar10;
  }
  return;
}

