/* FUN_2c627514 @ 0x2c627514 */

void FUN_2c627514(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  short *psVar23;
  uint uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  code *local_a8;
  int local_a4;
  short local_a0;
  code *local_98;
  code *local_7c;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  undefined1 local_5c;
  char local_5b;
  char local_5a;
  byte local_59;
  uint local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_44;
  int local_40;
  uint local_3c;
  byte local_38;
  int local_34;
  
  local_34 = *DAT_2c62778c;
  uVar15 = FUN_2c6033b4(param_1,0,*DAT_2c627788);
  local_59 = ~(byte)uVar15 & 1 | (byte)(((uVar15 & 7) >> 2) << 1) |
             (byte)(((uVar15 & 0xf) >> 3) << 2) | local_59 & 0xf8;
  local_5c = FUN_2c6033b4(param_1,0,*DAT_2c627790);
  local_5b = FUN_2c6033b4(param_1,0,*DAT_2c627794);
  local_5a = FUN_2c6033b4(param_1,0,*DAT_2c627798);
  cVar3 = FUN_2c6033b4(param_1,0,0x16);
  if ((local_59 & 1) == 0) {
    sVar6 = FUN_2c6033b4(param_1,local_59 & 1,0x15);
  }
  else {
    sVar6 = FUN_2c6033b4(param_1,0,0x14);
  }
  if ((local_59 & 1) == 0) {
    sVar7 = FUN_2c6033b4(param_1,local_59 & 1,0x14);
  }
  else {
    sVar7 = FUN_2c6033b4(param_1,0,0x15);
  }
  local_a4 = (int)sVar7;
  if ((int)((uint)local_59 << 0x1f) < 0) {
    uVar16 = FUN_2c607404();
  }
  else {
    uVar16 = FUN_2c607440(param_1);
  }
  sVar8 = FUN_2c6033b4(param_1,0,0x32);
  sVar10 = *(short *)(param_1 + 0x16);
  sVar9 = FUN_2c6033b4(param_1,0,0x10);
  local_66 = FUN_2c604a38(param_1);
  local_66 = (sVar10 + sVar9 + sVar8) - local_66;
  sVar10 = *(short *)(param_1 + 0x14);
  sVar9 = FUN_2c6033b4(param_1,0,0x12);
  local_64 = FUN_2c604a2c(param_1);
  cVar4 = local_5a;
  local_64 = (sVar8 + sVar9 + sVar10) - local_64;
  psVar23 = &local_64;
  if ((int)((uint)local_59 << 0x1f) < 0) {
    psVar23 = &local_66;
  }
  sVar10 = FUN_2c6033b4(param_1,0,1);
  sVar8 = FUN_2c6033b4(param_1,0,4);
  uVar15 = (uint)local_59;
  uVar20 = uVar15 & 1;
  if ((local_59 & 1) == 0) {
    if ((sVar10 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1d))) {
      if (cVar3 == '\x01') {
LAB_2c627d90:
        cVar4 = '\x01';
        goto LAB_2c627680;
      }
      goto LAB_2c62779e;
    }
    if (cVar3 != '\x01') goto LAB_2c627674;
    if (cVar4 == '\0') goto LAB_2c627d90;
    if (cVar4 != '\x01') goto LAB_2c627680;
    uVar24 = 0;
    uVar20 = uVar15 & 4;
    local_62 = 0;
    if ((local_59 & 4) != 0) goto LAB_2c62773a;
    iVar19 = *(int *)(param_1 + 8);
    uVar21 = 1;
    uVar24 = uVar20;
  }
  else {
    if ((sVar8 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1e))) {
LAB_2c62779e:
      uVar24 = 0;
      local_62 = 0;
      if ((local_59 & 4) != 0) goto LAB_2c62773a;
LAB_2c6277a4:
      uVar20 = uVar15 & 4;
      iVar19 = *(int *)(param_1 + 8);
      uVar21 = 1;
    }
    else {
LAB_2c627674:
      if (cVar4 == '\0') goto LAB_2c62779e;
LAB_2c627680:
      local_62 = 0;
      uVar15 = uVar15 & 4;
      if ((local_59 & 4) == 0) {
        iVar19 = *(int *)(*(int *)(param_1 + 8) + 4);
        uVar24 = 1;
      }
      else {
        iVar19 = *(int *)(*(int *)(param_1 + 8) + 4);
        uVar15 = iVar19 - 1;
        uVar24 = (uint)-iVar19 >> 0x1f;
      }
      if (((int)uVar15 < iVar19) && (uVar24 != 0)) {
        iVar19 = 0;
        uVar24 = 0;
        do {
          local_38 = local_38 & 0xfe;
          iVar19 = iVar19 + 1;
          uVar15 = FUN_2c627228(param_1,&local_5c,uVar15,uVar16,local_a4,&local_4c);
          sVar9 = local_4c + (short)uVar24;
          uVar24 = (uint)(short)(sVar9 + sVar6);
          if (*(int *)(*(int *)(param_1 + 8) + 4) <= (int)uVar15) break;
        } while (-1 < (int)uVar15);
        if (iVar19 == 0) {
          uVar20 = local_59 & 1;
          uVar15 = 0;
        }
        else {
          uVar15 = (uint)(short)iVar19;
          uVar20 = local_59 & 1;
          uVar24 = (int)sVar9;
        }
      }
      else {
        uVar15 = 0;
        uVar24 = uVar15;
      }
      if (uVar20 == 0) {
        uVar17 = FUN_2c607404(param_1);
      }
      else {
        uVar17 = FUN_2c607440();
      }
      FUN_2c627144(cVar4,uVar17,uVar24,uVar15,psVar23,&local_62);
      uVar15 = (uint)local_59;
      if ((local_59 & 4) == 0) goto LAB_2c6277a4;
LAB_2c62773a:
      iVar19 = *(int *)(param_1 + 8);
      uVar20 = *(int *)(iVar19 + 4) - 1;
      uVar21 = (uint)-*(int *)(iVar19 + 4) >> 0x1f;
    }
    if ((cVar3 != '\x01') || ((int)(uVar15 << 0x1f) < 0)) goto LAB_2c6277b0;
  }
  *psVar23 = *psVar23 + (short)uVar24;
LAB_2c6277b0:
  if (((int)uVar20 < *(int *)(iVar19 + 4)) && (uVar21 != 0)) {
    do {
      local_38 = local_38 | 1;
      uVar15 = FUN_2c627228(param_1,&local_5c,uVar20,uVar16,local_a4,&local_4c);
      sVar9 = local_66;
      local_58 = uVar20;
      if (cVar3 == '\x01') {
        if ((int)((uint)local_59 << 0x1f) < 0) {
          local_a0 = local_64;
          local_7c = DAT_2c627dcc;
          local_a8 = DAT_2c627dc8;
          local_98 = DAT_2c627dc4;
        }
        else {
          *psVar23 = *psVar23 - local_4c;
          local_7c = DAT_2c627dc0;
          local_a0 = local_64;
          local_a8 = DAT_2c627dc4;
          local_98 = DAT_2c627dc8;
        }
      }
      else {
        local_a0 = local_64;
        local_a8 = DAT_2c627880;
        local_98 = DAT_2c62787c;
        local_7c = DAT_2c627878;
        if ((local_59 & 1) != 0) {
          local_a8 = DAT_2c62787c;
          local_98 = DAT_2c627880;
          local_7c = DAT_2c627884;
        }
      }
      do {
        if (local_3c == 0) break;
        iVar25 = 0;
        uVar20 = 0;
        iVar19 = (int)(short)(local_4a - local_48);
        iVar27 = local_40;
        do {
          while ((int)((uint)*(byte *)(iVar27 + 0x10) << 0x1f) < 0) {
            psVar2 = (short *)(iVar27 + 8);
            uVar20 = uVar20 + 1;
            iVar27 = iVar27 + 0x14;
            iVar19 = (int)(short)((short)iVar19 - *psVar2);
            if (uVar20 == local_3c) goto LAB_2c627870;
          }
          puVar1 = (undefined4 *)(iVar27 + 0xc);
          uVar20 = uVar20 + 1;
          iVar27 = iVar27 + 0x14;
          iVar25 = (int)(short)((short)iVar25 + (short)*puVar1);
        } while (uVar20 != local_3c);
LAB_2c627870:
        iVar27 = 0;
        bVar22 = 0;
        uVar20 = 0;
        do {
          while( true ) {
            iVar28 = local_40 + iVar27;
            bVar26 = 0 < iVar25 & ~*(byte *)(iVar28 + 0x10);
            if (bVar26 == 0) break;
            sVar13 = (short)(iVar19 / iVar25) * (short)*(undefined4 *)(iVar28 + 0xc);
            sVar14 = *(short *)(iVar28 + 6);
            if (sVar13 <= *(short *)(iVar28 + 6)) {
              sVar14 = sVar13;
            }
            if (sVar14 < *(short *)(iVar28 + 4)) {
              sVar14 = *(short *)(iVar28 + 4);
            }
            if (sVar13 != sVar14) {
              *(byte *)(iVar28 + 0x10) = *(byte *)(iVar28 + 0x10) | 1;
              bVar22 = bVar26;
            }
            *(short *)(iVar28 + 8) = sVar14;
            uVar20 = uVar20 + 1;
            iVar28 = local_40 + iVar27;
            iVar27 = iVar27 + 0x14;
            iVar25 = (int)(short)((short)iVar25 - (short)*(undefined4 *)(iVar28 + 0xc));
            iVar19 = (int)(short)((short)iVar19 - *(short *)(iVar28 + 8));
            if (local_3c <= uVar20) goto LAB_2c6278fc;
          }
          uVar20 = uVar20 + 1;
          iVar27 = iVar27 + 0x14;
        } while (uVar20 < local_3c);
LAB_2c6278fc:
      } while (bVar22 != 0);
      local_64 = local_a0;
      cVar4 = FUN_2c6033b4(param_1,0,0x16);
      local_60 = 0;
      local_5e = 0;
      FUN_2c627144(local_5c,uVar16,(int)local_4a,(int)local_44,&local_60,&local_5e);
      if (((int)((uint)local_59 << 0x1f) < 0) && (cVar4 == '\x01')) {
        sVar13 = FUN_2c607404(param_1);
        local_60 = sVar13 + local_60;
      }
      iVar19 = FUN_2c6041dc(param_1,local_58);
      uVar17 = DAT_2c627ca0;
      while ((local_58 != uVar15 && (iVar19 != 0))) {
        iVar27 = FUN_2c606ba4(iVar19,uVar17);
        if (iVar27 == 0) {
          cVar5 = FUN_2c6033b4(iVar19,0,*DAT_2c627c94);
          if (cVar5 == '\0') {
            *(byte *)(iVar19 + 0x23) = *(byte *)(iVar19 + 0x23) & 0xf9;
          }
          else {
            if (local_3c == 0) {
              iVar27 = 0;
            }
            else {
              iVar27 = 0;
              iVar25 = local_40;
              do {
                if (*(int *)(local_40 + iVar27 * 4) == iVar19) {
                  iVar27 = (int)*(short *)(iVar25 + 8);
                  goto LAB_2c627c10;
                }
                iVar27 = iVar27 + 5;
                iVar25 = iVar25 + 0x14;
              } while (local_3c * 5 != iVar27);
              iVar27 = 0;
            }
LAB_2c627c10:
            if ((local_59 & 1) == 0) {
              bVar22 = *(byte *)(iVar19 + 0x23) | 2;
            }
            else {
              bVar22 = *(byte *)(iVar19 + 0x23) | 4;
            }
            *(byte *)(iVar19 + 0x23) = bVar22;
            iVar25 = (*local_a8)(iVar19 + 0x14);
            if (iVar25 != iVar27) {
              FUN_2c607df0(iVar19);
              local_54 = *(undefined2 *)(iVar19 + 0x14);
              local_52 = *(undefined2 *)(iVar19 + 0x16);
              local_50 = *(undefined2 *)(iVar19 + 0x18);
              local_4e = *(undefined2 *)(iVar19 + 0x1a);
              (*local_7c)(iVar19 + 0x14,iVar27);
              FUN_2c602340(iVar19,0x29,&local_54);
              uVar18 = FUN_2c6041d4(iVar19);
              FUN_2c602340(uVar18,0x22,iVar19);
              FUN_2c607df0(iVar19);
            }
          }
          sVar13 = local_4c;
          if (local_5b == '\x01') {
            sVar14 = (*local_98)(iVar19 + 0x14);
            sVar13 = sVar13 - sVar14;
          }
          else if (local_5b == '\x02') {
            iVar25 = (int)local_4c;
            iVar27 = (*local_98)(iVar19 + 0x14);
            iVar27 = (iVar25 + 1U & 0xfffffffe) - iVar27;
            if (iVar27 < 0) {
              iVar27 = iVar27 + 1;
            }
            sVar13 = (short)((uint)(iVar27 << 0xf) >> 0x10);
          }
          else {
            sVar13 = 0;
          }
          if (((int)((uint)local_59 << 0x1f) < 0) && (cVar4 == '\x01')) {
            sVar14 = (*local_a8)(iVar19 + 0x14);
            local_60 = local_60 - sVar14;
          }
          uVar11 = FUN_2c6033b4(iVar19,0,0x6a);
          uVar12 = FUN_2c6033b4(iVar19,0,0x6b);
          iVar27 = FUN_2c6073ec(iVar19);
          iVar25 = FUN_2c6073f8(iVar19);
          if (((uVar11 & 0x6000) == 0x2000) &&
             (uVar20 = (int)(short)uVar11 & 0xffff9fff, (int)uVar20 < 0x7d1)) {
            if (1000 < (int)uVar20) {
              uVar20 = 1000 - uVar20;
            }
            uVar11 = (short)(int)((longlong)DAT_2c627c9c * (longlong)(int)(uVar20 * iVar27) >> 0x25)
                     - (short)((int)(uVar20 * iVar27) >> 0x1f);
          }
          if (((uVar12 & 0x6000) == 0x2000) &&
             (uVar20 = (int)(short)uVar12 & 0xffff9fff, (int)uVar20 < 0x7d1)) {
            if (1000 < (int)uVar20) {
              uVar20 = 1000 - uVar20;
            }
            uVar12 = (short)(int)((longlong)DAT_2c627c9c * (longlong)(int)(uVar20 * iVar25) >> 0x25)
                     - (short)((int)(uVar20 * iVar25) >> 0x1f);
          }
          sVar14 = local_60;
          if ((local_59 & 1) != 0) {
            sVar14 = sVar13;
            sVar13 = local_60;
          }
          sVar13 = (local_a0 - *(short *)(iVar19 + 0x14)) + uVar11 + sVar13;
          sVar14 = sVar14 + (sVar9 - *(short *)(iVar19 + 0x16)) + uVar12;
          if (sVar14 != 0 || sVar13 != 0) {
            FUN_2c607df0(iVar19);
            *(short *)(iVar19 + 0x14) = *(short *)(iVar19 + 0x14) + sVar13;
            *(short *)(iVar19 + 0x18) = sVar13 + *(short *)(iVar19 + 0x18);
            *(short *)(iVar19 + 0x16) = *(short *)(iVar19 + 0x16) + sVar14;
            *(short *)(iVar19 + 0x1a) = sVar14 + *(short *)(iVar19 + 0x1a);
            FUN_2c607df0(iVar19);
            FUN_2c6075e8(iVar19,(int)sVar13,(int)sVar14,0);
          }
          if (((local_59 & 1) == 0) || (cVar4 != '\x01')) {
            sVar13 = (*local_a8)(iVar19 + 0x14);
            local_60 = local_5e + sVar13 + sVar7 + local_60;
          }
          else {
            local_60 = (local_60 - local_5e) - sVar7;
          }
        }
        iVar19 = FUN_2c6271f8(param_1,(local_59 & 7) >> 2,&local_58);
      }
      FUN_2c62c040(local_40);
      if ((cVar3 == '\x01') && (-1 < (int)((uint)local_59 << 0x1f))) {
        sVar9 = *psVar23 - (sVar6 + local_62);
      }
      else {
        sVar9 = local_4c + local_62 + sVar6 + *psVar23;
      }
      *psVar23 = sVar9;
    } while (((int)uVar15 < *(int *)(*(int *)(param_1 + 8) + 4)) &&
            (uVar20 = uVar15, -1 < (int)uVar15));
  }
  if ((sVar10 == 0x27d1) || (sVar8 == 0x27d1)) {
    FUN_2c608730(param_1);
  }
  FUN_2c602340(param_1,0x2b,0);
  if (*DAT_2c627c98 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

