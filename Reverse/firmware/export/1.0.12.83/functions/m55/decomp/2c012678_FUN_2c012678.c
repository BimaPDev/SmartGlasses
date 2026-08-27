/* FUN_2c012678 @ 0x2c012678 */

undefined4 FUN_2c012678(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined2 *puVar4;
  int *piVar5;
  char *pcVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  undefined4 uVar22;
  ushort local_36;
  int local_34;
  
  uVar2 = DAT_2c012980;
  pcVar1 = DAT_2c012978;
  local_34 = *DAT_2c012984;
  FUN_2c00b820(4,0x2762,DAT_2c01298c,DAT_2c012988,DAT_2c01297c,DAT_2c012980,*DAT_2c012978);
  cVar12 = *pcVar1;
  *param_1 = 0;
  piVar5 = DAT_2c0129c0;
  if (cVar12 == '\0') {
LAB_2c0126de:
    *DAT_2c012990 = '\0';
  }
  else {
    if (cVar12 == '\x01') {
      iVar8 = FUN_2c013858();
      uVar9 = FUN_2c0138bc(iVar8 - *piVar5);
      if (uVar9 < 200) {
        cVar12 = *pcVar1;
        uVar14 = 2;
        *param_1 = 200 - uVar9;
        goto LAB_2c012700;
      }
      iVar8 = FUN_2c01393c();
      FUN_2c013bbc(0xc);
      pcVar6 = DAT_2c0129c4;
      if (iVar8 != 0) {
        FUN_2c00b820(4,0x277d,DAT_2c012b00,DAT_2c012afc,DAT_2c012b0c,uVar2,iVar8);
        uVar14 = 0xffffffff;
        cVar12 = '\0';
        *pcVar1 = '\0';
        goto LAB_2c012700;
      }
      fVar16 = (float)FUN_2c013a14();
      if (*pcVar6 == '\x02') {
        FUN_2c008e4c(0x6f,&local_36);
        uVar9 = local_36 & 0x1ff;
      }
      else {
        uVar9 = 0;
      }
      pcVar3 = DAT_2c012990;
      if (*DAT_2c012990 == '\0') {
        iVar18 = VectorFloatToUnsigned(fVar16,3);
        iVar8 = VectorFloatToUnsigned(fVar16 * DAT_2c012998,3);
        iVar8 = iVar8 + iVar18 * -100;
        FUN_2c00b820(4,0x278c,DAT_2c01298c,DAT_2c012988,DAT_2c01299c,uVar2,iVar18,iVar8);
      }
      else {
        iVar18 = VectorFloatToUnsigned(fVar16,3);
        iVar8 = VectorFloatToUnsigned(fVar16 * DAT_2c012998,3);
        iVar17 = VectorFloatToUnsigned(*DAT_2c0129a4,3);
        iVar21 = VectorFloatToUnsigned(*DAT_2c0129a4 * DAT_2c012998,3);
        iVar8 = iVar8 + iVar18 * -100;
        FUN_2c00b820(4,0x2785,DAT_2c01298c,DAT_2c012988,DAT_2c0129b0,uVar2,iVar18,iVar8,uVar9,iVar17
                     ,iVar21 + iVar17 * -100,*DAT_2c0129a8);
      }
      fVar7 = DAT_2c0129c8;
      fVar20 = fVar16 - DAT_2c0129c8;
      uVar14 = 0;
      uVar11 = DAT_2c01298c;
      uVar13 = DAT_2c012988;
      if ((int)((uint)(fVar20 < 0.0) << 0x1f) < 0) {
        if (fVar20 <= DAT_2c0129b4) goto LAB_2c012810;
LAB_2c012906:
        uVar10 = 0x2790;
        uVar22 = DAT_2c0129b8;
      }
      else {
        if ((int)((uint)(fVar20 < DAT_2c0129a0) << 0x1f) < 0) goto LAB_2c012906;
LAB_2c012810:
        if (*pcVar3 == '\0') {
LAB_2c01281c:
          uVar15 = 1;
          *DAT_2c0129a4 = fVar16;
          puVar4 = DAT_2c0129a8;
          *pcVar3 = '\x01';
          *puVar4 = (short)uVar9;
          if (fVar16 <= fVar7) {
            if (uVar9 < 2) {
              uVar14 = 0xfffffffd;
              FUN_2c00b820(4,0x27c6,DAT_2c012b00,DAT_2c012afc,DAT_2c012b14,uVar2,uVar9,iVar8);
              cVar12 = '\0';
              *pcVar1 = '\0';
              goto LAB_2c012700;
            }
            if (0x10 < uVar9) {
              uVar15 = uVar9 - 0x10;
            }
          }
          else {
            if (uVar9 == 0x1ff) {
              uVar14 = 0xfffffffe;
              FUN_2c00b820(4,0x27bb,DAT_2c012b00,DAT_2c012afc,DAT_2c012b10,uVar2,0x1ff,iVar8);
              cVar12 = '\0';
              *pcVar1 = '\0';
              goto LAB_2c012700;
            }
            uVar15 = uVar9 + 0x10;
            if (0x1fe < uVar15) {
              uVar15 = 0x1ff;
            }
          }
          FUN_2c00b820(4,0x27d1,DAT_2c01298c,DAT_2c012988,DAT_2c0129ac,uVar2,uVar15,iVar8);
          if (*pcVar6 == '\x02') {
            FUN_2c008e4c(0x6f,&local_36);
            local_36 = local_36 & 0xfe00 | (ushort)uVar15;
            FUN_2c008f74(0x6f);
          }
          uVar14 = 3;
          *pcVar1 = '\x02';
          iVar8 = FUN_2c013858();
          cVar12 = *pcVar1;
          *piVar5 = iVar8;
          *param_1 = 300;
          goto LAB_2c012700;
        }
        fVar19 = *DAT_2c0129a4;
        if ((-1 < (int)((uint)(fVar16 < DAT_2c0129c8) << 0x1f)) || (fVar19 <= DAT_2c0129c8)) {
          if ((-1 < (int)((uint)(fVar19 < DAT_2c0129c8) << 0x1f)) || (fVar16 <= DAT_2c0129c8))
          goto LAB_2c01281c;
          if (DAT_2c0129c8 - fVar19 < fVar20) {
            uVar11 = 0x27ab;
            goto LAB_2c012a4e;
          }
          uVar10 = 0x27a6;
          uVar11 = DAT_2c012b00;
          uVar13 = DAT_2c012afc;
          uVar22 = DAT_2c012af8;
        }
        else {
          if (fVar19 - DAT_2c0129c8 < DAT_2c0129c8 - fVar16) {
            uVar11 = 0x279d;
LAB_2c012a4e:
            FUN_2c00b820(4,uVar11,DAT_2c012b00,DAT_2c012afc,DAT_2c012b04,uVar2,iVar18,iVar8);
            if (*pcVar6 == '\x02') {
              FUN_2c00d698(*DAT_2c012b08);
            }
            *pcVar1 = '\x03';
            iVar8 = FUN_2c013858();
            cVar12 = *pcVar1;
            *piVar5 = iVar8;
            goto LAB_2c012700;
          }
          uVar10 = 0x2798;
          uVar22 = DAT_2c0129bc;
        }
      }
      FUN_2c00b820(4,uVar10,uVar11,uVar13,uVar22,uVar2,iVar18,iVar8);
      cVar12 = '\0';
      *pcVar1 = '\0';
      goto LAB_2c012700;
    }
    if (cVar12 != '\x02') {
      if (cVar12 != '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_2c00c25c(DAT_2c012b18,uVar2);
      }
      iVar8 = FUN_2c013858();
      uVar9 = FUN_2c0138bc(iVar8 - *piVar5);
      if (uVar9 < 300) {
        cVar12 = *pcVar1;
        uVar14 = 5;
        *param_1 = 300 - uVar9;
        goto LAB_2c012700;
      }
      goto LAB_2c0126de;
    }
    iVar8 = FUN_2c013858();
    uVar9 = FUN_2c0138bc(iVar8 - *piVar5);
    if (uVar9 < 300) {
      cVar12 = *pcVar1;
      uVar14 = 4;
      *param_1 = 300 - uVar9;
      goto LAB_2c012700;
    }
  }
  uVar14 = 1;
  FUN_2c0138e0();
  FUN_2c013b3c(0xc);
  *pcVar1 = '\x01';
  iVar8 = FUN_2c013858();
  cVar12 = *pcVar1;
  *piVar5 = iVar8;
  *param_1 = 200;
LAB_2c012700:
  FUN_2c00b820(4,0x27ef,DAT_2c01298c,DAT_2c012988,DAT_2c012994,uVar2,uVar14,cVar12);
  if (*DAT_2c012984 != local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return uVar14;
}

