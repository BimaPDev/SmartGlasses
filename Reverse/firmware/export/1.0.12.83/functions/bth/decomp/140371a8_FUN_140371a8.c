/* FUN_140371a8 @ 0x140371a8 */

void FUN_140371a8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int *local_60;
  undefined4 *local_5c;
  int local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  float local_38;
  int local_34;
  
  local_34 = *DAT_140374a8;
  iVar1 = FUN_140e5848();
  uVar2 = DAT_140374b0;
  iVar7 = -200;
  local_4c = DAT_140374ac;
  iVar13 = 0;
  local_48 = 0;
  local_44 = 0;
  local_50 = 0;
  fVar16 = DAT_140374ac;
  do {
    fVar15 = (float)FUN_14036b34(uVar2,(int)(short)local_48,(int)(short)iVar7,1);
    if ((int)((uint)(fVar15 < fVar16) << 0x1f) < 0) {
      iVar13 = iVar7;
      fVar16 = fVar15;
      local_50 = iVar7;
      local_4c = fVar15;
    }
    iVar7 = iVar7 + 0x32;
  } while (iVar7 != 0xfa);
  local_44 = FUN_14036ee0(iVar13,local_48,&local_50,&local_4c);
  uVar2 = DAT_1403774c;
  if (DAT_140374b4 < local_4c) {
    iVar8 = -200;
    iVar7 = 0;
    fVar16 = DAT_14037500;
    do {
      fVar15 = (float)FUN_14036b34(uVar2,(int)(short)iVar8,(int)(short)local_44,1);
      if ((int)((uint)(fVar15 < fVar16) << 0x1f) < 0) {
        iVar7 = iVar8;
        fVar16 = fVar15;
        local_4c = fVar15;
      }
      iVar8 = iVar8 + 0x32;
    } while (iVar8 != 0xfa);
    iVar3 = (int)(short)local_44;
    iVar8 = iVar7 + -0x32;
    fVar15 = (float)FUN_14036b34(DAT_1403774c,(int)(short)iVar8,iVar3,1);
    iVar9 = iVar7 + 0x32;
    fVar16 = (float)FUN_14036b34(DAT_1403774c,(int)(short)iVar9,iVar3,1);
    uVar2 = DAT_1403774c;
    iVar11 = iVar8 - iVar9;
    do {
      iVar5 = (iVar8 + iVar9) / 2;
      if (iVar11 + 0x10U < 0x21) {
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
      fVar17 = (float)FUN_14036b34(uVar2,(int)(short)iVar5,iVar3,uVar4);
      iVar10 = iVar5;
      iVar12 = iVar8;
      fVar18 = fVar17;
      fVar19 = fVar15;
      if (fVar16 < fVar15) {
        iVar8 = iVar9;
        iVar10 = iVar9;
        iVar12 = iVar5;
        fVar15 = fVar16;
        fVar18 = fVar16;
        fVar19 = fVar17;
      }
      fVar16 = fVar18;
      if (fVar15 < local_4c) {
        iVar7 = iVar8;
      }
      iVar11 = iVar12 - iVar10;
      if (fVar15 < local_4c) {
        local_4c = fVar15;
      }
      iVar9 = iVar10;
      iVar8 = iVar12;
      fVar15 = fVar19;
    } while (6 < iVar11 + 3U);
    if (fVar19 <= fVar16) {
      iVar10 = iVar12;
      fVar16 = fVar19;
    }
    fVar15 = fVar16;
    if (((local_4c <= fVar16) && (fVar15 = local_4c, iVar10 != iVar7)) &&
       (fVar18 = (float)FUN_14036b34(DAT_1403774c,(int)(short)iVar7,iVar3,3), fVar15 = fVar16,
       -1 < (int)((uint)(fVar16 < fVar18) << 0x1f))) {
      iVar10 = iVar7;
      fVar15 = fVar18;
    }
    local_4c = fVar15;
    local_48 = iVar10;
    if (DAT_14037750 < local_4c) {
      local_44 = FUN_14036ee0(iVar13,iVar10,&local_50,&local_4c);
    }
  }
  FUN_1402a6e8(4,0x3b4,DAT_140374c0,DAT_140374bc,DAT_140374b8,local_48,local_44);
  local_48 = FUN_1403714c(&local_48);
  local_5c = DAT_140374c4;
  local_60 = DAT_140374c8;
  local_44 = FUN_1403714c(&local_44);
  fVar16 = (float)FUN_14036b34(DAT_140374b0,(int)(short)local_48,(int)(short)local_44,1);
  iVar13 = 0;
  FUN_1402a6e8(4,0x3b8,DAT_140374c0,DAT_140374bc,DAT_140374cc,local_48,local_44,(int)fVar16,
               (int)local_4c);
  *DAT_140374d0 = local_48;
  *DAT_140374d4 = local_44;
  local_40 = *(uint *)(DAT_140374d8 + 0x334) & 0xff7fffff;
  *(uint *)(DAT_140374d8 + 0x334) = local_40;
  do {
    uVar6 = DAT_1403775c;
    uVar4 = DAT_140374f8;
    uVar2 = DAT_140374e4;
    if (iVar13 == 0) {
      *(undefined4 *)(DAT_140374dc + 0xc00) = DAT_140374f4;
    }
    else if (iVar13 == 1) {
      *(undefined4 *)(DAT_14037754 + 0xc00) = DAT_14037758;
      uVar4 = uVar6;
    }
    else {
      *(undefined4 *)(DAT_140374dc + 0xc00) = DAT_140374e0;
      uVar4 = uVar2;
    }
    iVar8 = -200;
    iVar7 = 0;
    local_38 = DAT_140374ac;
    local_3c = 0;
    fVar16 = DAT_140374ac;
    do {
      fVar15 = (float)FUN_14036c5c(uVar4,(int)(short)iVar8,0,1);
      if ((int)((uint)(fVar15 < fVar16) << 0x1f) < 0) {
        iVar7 = iVar8;
        fVar16 = fVar15;
        local_3c = iVar8;
        local_38 = fVar15;
      }
      iVar8 = iVar8 + 0x32;
    } while (iVar8 != 0xfa);
    uVar2 = FUN_14036dcc(uVar4,iVar7,0,&local_3c,&local_38);
    if (DAT_140374fc < local_38) {
      iVar9 = -200;
      iVar8 = 0;
      iVar11 = (int)(short)uVar2;
      fVar16 = DAT_140374ac;
      do {
        fVar15 = (float)FUN_14036c5c(uVar4,iVar11,(int)(short)iVar9,1);
        if ((int)((uint)(fVar15 < fVar16) << 0x1f) < 0) {
          iVar8 = iVar9;
          fVar16 = fVar15;
          local_38 = fVar15;
        }
        iVar9 = iVar9 + 0x32;
      } while (iVar9 != 0xfa);
      iVar9 = iVar8 + -0x32;
      fVar15 = (float)FUN_14036c5c(uVar4,iVar11,(int)(short)iVar9,2);
      iVar3 = iVar8 + 0x32;
      fVar16 = (float)FUN_14036c5c(uVar4,iVar11,(int)(short)iVar3,2);
      iVar5 = iVar9 - iVar3;
      do {
        iVar10 = (iVar9 + iVar3) / 2;
        if (iVar5 + 7U < 0xf) {
          uVar6 = 4;
        }
        else {
          uVar6 = 2;
        }
        fVar17 = (float)FUN_14036c5c(uVar4,iVar11,(int)(short)iVar10,uVar6);
        iVar12 = iVar10;
        iVar14 = iVar9;
        fVar18 = fVar17;
        fVar19 = fVar15;
        if (fVar16 < fVar15) {
          iVar9 = iVar3;
          iVar12 = iVar3;
          iVar14 = iVar10;
          fVar15 = fVar16;
          fVar18 = fVar16;
          fVar19 = fVar17;
        }
        fVar16 = fVar18;
        if (fVar15 < local_38) {
          iVar8 = iVar9;
        }
        iVar5 = iVar14 - iVar12;
        if (fVar15 < local_38) {
          local_38 = fVar15;
        }
        iVar3 = iVar12;
        iVar9 = iVar14;
        fVar15 = fVar19;
      } while (2 < iVar5 + 1U);
      if (fVar19 <= fVar16) {
        iVar12 = iVar14;
        fVar16 = fVar19;
      }
      if (local_38 <= fVar16) {
        if (iVar12 == iVar8) {
          iVar9 = (int)(short)iVar12;
          iVar8 = iVar12;
        }
        else {
          iVar9 = (int)(short)iVar8;
          local_38 = (float)FUN_14036b34(uVar4,iVar11,iVar9,3);
          if ((int)((uint)(fVar16 < local_38) << 0x1f) < 0) goto LAB_14037592;
        }
      }
      else {
LAB_14037592:
        iVar9 = (int)(short)iVar12;
        iVar8 = iVar12;
        local_38 = fVar16;
      }
      if (DAT_140374fc < local_38) {
        uVar2 = FUN_14036dcc(uVar4,iVar7,iVar8,&local_3c,&local_38);
        iVar11 = (int)(short)uVar2;
      }
    }
    else {
      iVar9 = 0;
      iVar8 = 0;
      iVar11 = (int)(short)uVar2;
    }
    fVar16 = (float)FUN_14036c5c(uVar4,iVar11,iVar9,1);
    FUN_1402a6e8(4,0x40e,DAT_140374c0,DAT_140374bc,DAT_140374e8,iVar13,uVar2,iVar8,(int)fVar16,
                 (int)local_38);
    *local_5c = uVar2;
    *local_60 = iVar8;
    if (iVar13 == 0) {
      iVar8 = 0x19;
      iVar7 = 0;
    }
    else if (iVar13 == 1) {
      iVar8 = 0x33;
      iVar7 = 0x1a;
    }
    else {
      iVar8 = 0x4e;
      iVar7 = 0x34;
    }
    do {
      iVar3 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      FUN_14036aa8(&DAT_d0310000 + iVar3,iVar11,iVar9);
      uVar2 = DAT_140374ec;
    } while (iVar7 <= iVar8);
    iVar13 = iVar13 + 1;
    local_60 = local_60 + 1;
    local_5c = local_5c + 1;
    if (iVar13 == 3) {
      local_38 = (float)(*(uint *)(DAT_140374d8 + 0x250) & 0x7fffffff | 0x80000000);
      *(float *)(DAT_140374d8 + 0x250) = local_38;
      iVar13 = FUN_140e5848();
      uVar4 = FUN_140e5548(iVar13 - iVar1);
      FUN_1402a6e8(4,0x426,DAT_140374c0,DAT_140374bc,DAT_140374f0,uVar2,uVar4);
      if (*DAT_140374a8 != local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return;
    }
  } while( true );
}

