/* FUN_2c604d1c @ 0x2c604d1c */

void FUN_2c604d1c(short *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short *psVar16;
  uint local_4c;
  
  iVar10 = FUN_2c6041d4(param_2);
  iVar11 = FUN_2c606b94(iVar10,0x10);
  if (iVar11 == 0) {
    return;
  }
  iVar11 = *(int *)(iVar10 + 8);
  psVar16 = param_1;
  if (iVar11 == 0) {
    local_4c = 0xf;
    uVar14 = 0;
  }
  else {
    local_4c = *(byte *)(iVar11 + 0x19) & 0xf;
    uVar14 = (*(byte *)(iVar11 + 0x18) & 0x3f) >> 4;
    if ((*(byte *)(iVar11 + 0x18) & 0x30) != 0) {
      psVar16 = (short *)(param_2 + 0x14);
    }
  }
  sVar5 = FUN_2c6033b4(iVar10,0,0x32);
  sVar6 = FUN_2c6033b4(iVar10,0,0x10);
  sVar6 = sVar6 + sVar5;
  sVar7 = FUN_2c6033b4(iVar10,0,0x11);
  sVar7 = sVar7 + sVar5;
  sVar9 = *(short *)(iVar10 + 0x1a);
  sVar3 = sVar7 + param_3[1];
  sVar1 = psVar16[3];
  iVar11 = (int)(short)(((sVar6 - param_3[1]) + *(short *)(iVar10 + 0x16)) - psVar16[1]);
  sVar2 = (sVar3 - sVar9) + sVar1;
  sVar8 = FUN_2c6073f8(iVar10);
  if (iVar11 < 0) {
LAB_2c605022:
    if (sVar2 < 1) {
LAB_2c604dce:
      iVar13 = *(int *)(iVar10 + 8);
      iVar11 = 0;
    }
    else {
      iVar11 = (int)(short)((sVar9 - sVar3) - sVar1);
      iVar12 = FUN_2c604a50(iVar10);
      iVar13 = *(int *)(iVar10 + 8);
      if (iVar12 + iVar11 < 0) {
        iVar11 = 0;
      }
    }
  }
  else {
    if (-1 < sVar2) goto LAB_2c604dce;
    if (iVar11 < 1) goto LAB_2c605022;
    iVar13 = *(int *)(iVar10 + 8);
    if (iVar13 == 0) {
      iVar11 = 0;
    }
    else if (-*(short *)(iVar13 + 0x12) - iVar11 < 0) {
      iVar11 = 0;
    }
  }
  if (uVar14 == 2) {
    iVar11 = (int)(short)((*(short *)(iVar10 + 0x1a) - sVar7) - psVar16[3]);
  }
  else if (uVar14 == 3) {
    iVar11 = (int)(short)(sVar8 - (sVar7 + sVar6));
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    iVar12 = (int)(short)((psVar16[3] + 1) - psVar16[1]);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    iVar11 = (int)(short)((((sVar6 + *(short *)(iVar10 + 0x16)) - psVar16[1]) + (short)(iVar11 >> 1)
                          ) - (short)(iVar12 >> 1));
  }
  else if (uVar14 == 1) {
    iVar11 = (int)(short)((sVar6 + *(short *)(iVar10 + 0x16)) - psVar16[1]);
  }
  uVar14 = 0;
  if ((iVar13 != 0) &&
     (uVar14 = (*(byte *)(iVar13 + 0x18) & 0xf) >> 2, (*(byte *)(iVar13 + 0x18) & 0xc) != 0)) {
    param_1 = (short *)(param_2 + 0x14);
  }
  sVar6 = FUN_2c6033b4(iVar10,0,0x12);
  sVar6 = sVar6 + sVar5;
  sVar7 = FUN_2c6033b4(iVar10,0,0x13);
  sVar7 = sVar7 + sVar5;
  sVar1 = param_1[2];
  sVar9 = *(short *)(iVar10 + 0x18);
  sVar3 = *param_3 + sVar7;
  uVar15 = (uint)(short)(((sVar6 - *param_3) + *(short *)(iVar10 + 0x14)) - *param_1);
  sVar2 = (sVar3 - sVar9) + sVar1;
  if ((int)uVar15 < 0) {
LAB_2c604f12:
    if (0 < sVar2) {
      cVar4 = FUN_2c6033b4(iVar10,0,0x16);
      uVar15 = (uint)(short)((sVar9 - sVar3) - sVar1);
      if (cVar4 == '\x01') {
        if (*(int *)(iVar10 + 8) == 0) goto LAB_2c604e44;
        iVar13 = (int)*(short *)(*(int *)(iVar10 + 8) + 0x10);
      }
      else {
        iVar13 = FUN_2c6046d8(iVar10);
      }
      iVar13 = iVar13 + uVar15;
joined_r0x2c604f3a:
      if (-1 < iVar13) goto LAB_2c604e46;
    }
  }
  else if (sVar2 < 0) {
    if ((int)uVar15 < 1) goto LAB_2c604f12;
    cVar4 = FUN_2c6033b4(iVar10,0,0x16);
    if (cVar4 == '\x01') {
      iVar13 = FUN_2c60460c(iVar10);
    }
    else {
      if (*(int *)(iVar10 + 8) == 0) goto LAB_2c604e44;
      iVar13 = (int)-*(short *)(*(int *)(iVar10 + 8) + 0x10);
    }
    iVar13 = iVar13 - uVar15;
    goto joined_r0x2c604f3a;
  }
LAB_2c604e44:
  uVar15 = 0;
LAB_2c604e46:
  sVar9 = FUN_2c6073ec(iVar10);
  if (uVar14 == 2) {
    uVar15 = (uint)(short)((*(short *)(iVar10 + 0x18) - sVar7) - param_1[2]);
  }
  else if (uVar14 == 3) {
    iVar13 = (int)(short)(sVar9 - (sVar7 + sVar6));
    iVar12 = (int)(short)((param_1[2] + 1) - *param_1);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    uVar15 = (uint)(short)((((*(short *)(iVar10 + 0x14) + sVar6) - *param_1) - (short)(iVar12 >> 1))
                          + (short)(iVar13 >> 1));
  }
  else if (uVar14 == 1) {
    uVar15 = (uint)(short)((*(short *)(iVar10 + 0x14) + sVar6) - *param_1);
  }
  iVar13 = FUN_2c62e838(iVar10,DAT_2c605060);
  iVar12 = FUN_2c62e838(iVar10,DAT_2c605064);
  if (((iVar13 == 0) && (iVar12 == 0)) || (iVar13 = FUN_2c602340(iVar10,10,0), iVar13 == 1)) {
    if (-1 < (int)(local_4c << 0x1f)) {
      uVar15 = uVar15 & ~((int)uVar15 >> 0x1f);
    }
    if (-1 < (int)(local_4c << 0x1e)) {
      uVar15 = uVar15 & (int)uVar15 >> 0x1f;
    }
    if (-1 < (int)(local_4c << 0x1d)) {
      iVar11 = (int)(short)((ushort)iVar11 & ~(ushort)(iVar11 >> 0x1f));
    }
    if (-1 < (int)(local_4c << 0x1c)) {
      iVar11 = (int)(short)((ushort)iVar11 & (ushort)(iVar11 >> 0x1f));
    }
    if (param_4 == 0) {
      sVar9 = param_3[1];
    }
    else {
      *param_3 = *param_3 + (short)uVar15;
      sVar9 = param_3[1] + (short)iVar11;
    }
    param_3[1] = sVar9;
    if ((short)iVar11 != 0 || (short)uVar15 != 0) {
      FUN_2c6047f8(iVar10,uVar15,iVar11,param_4);
      return;
    }
  }
  return;
}

