/* FUN_2c61096c @ 0x2c61096c */

/* WARNING: Instruction at (ram,0x2c620b58) overlaps instruction at (ram,0x2c620b56)
    */

uint FUN_2c61096c(int *param_1,int *param_2,short *param_3,char *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  ushort uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  uint extraout_r2_07;
  undefined4 extraout_r2_08;
  undefined4 extraout_r2_09;
  undefined4 extraout_r2_10;
  undefined4 extraout_r2_11;
  undefined4 extraout_r2_12;
  undefined4 extraout_r2_13;
  uint extraout_r2_14;
  undefined4 extraout_r2_15;
  undefined4 extraout_r2_16;
  undefined4 extraout_r2_17;
  undefined4 extraout_r2_18;
  undefined4 extraout_r2_19;
  undefined4 extraout_r2_20;
  undefined4 extraout_r2_21;
  undefined4 extraout_r2_22;
  undefined4 extraout_r2_23;
  uint extraout_r2_24;
  uint extraout_r2_25;
  uint extraout_r2_26;
  uint extraout_r2_27;
  undefined4 extraout_r2_28;
  undefined4 extraout_r2_29;
  uint extraout_r2_30;
  uint extraout_r2_31;
  uint extraout_r2_32;
  uint extraout_r2_33;
  uint extraout_r2_34;
  uint extraout_r2_35;
  undefined4 extraout_r2_36;
  undefined4 extraout_r2_37;
  undefined4 extraout_r2_38;
  undefined4 extraout_r2_39;
  undefined4 extraout_r2_40;
  uint extraout_r2_41;
  uint extraout_r2_42;
  uint extraout_r2_43;
  uint extraout_r2_44;
  uint extraout_r2_45;
  uint extraout_r2_46;
  uint extraout_r2_47;
  undefined4 extraout_r2_48;
  uint extraout_r2_49;
  uint extraout_r2_50;
  uint extraout_r2_51;
  uint extraout_r2_52;
  uint extraout_r2_53;
  uint extraout_r2_54;
  uint extraout_r2_55;
  uint extraout_r2_56;
  uint extraout_r2_57;
  uint extraout_r2_58;
  uint extraout_r2_59;
  uint extraout_r2_60;
  uint extraout_r2_61;
  uint extraout_r2_62;
  uint extraout_r2_63;
  uint extraout_r2_64;
  uint extraout_r2_65;
  uint extraout_r2_66;
  uint extraout_r2_67;
  uint extraout_r2_68;
  uint extraout_r2_69;
  uint extraout_r2_70;
  uint extraout_r2_71;
  uint extraout_r2_72;
  int iVar14;
  uint extraout_r2_73;
  uint extraout_r2_74;
  uint extraout_r2_75;
  uint extraout_r2_76;
  uint extraout_r2_77;
  uint extraout_r2_78;
  uint extraout_r2_79;
  uint extraout_r2_80;
  uint extraout_r2_81;
  uint extraout_r2_82;
  uint extraout_r2_83;
  uint extraout_r2_84;
  uint extraout_r2_85;
  uint extraout_r2_86;
  uint extraout_r2_87;
  uint extraout_r2_88;
  uint extraout_r2_89;
  uint extraout_r2_90;
  uint extraout_r2_91;
  uint extraout_r2_92;
  uint extraout_r2_93;
  uint extraout_r2_94;
  uint extraout_r2_95;
  uint extraout_r2_96;
  uint extraout_r2_97;
  char *pcVar15;
  byte bVar16;
  undefined1 uVar17;
  char cVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  undefined4 *unaff_r8;
  undefined4 uVar23;
  ushort uVar24;
  undefined4 *puVar25;
  ushort uVar26;
  int iVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  bool bVar31;
  int local_100;
  ushort local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint local_e0;
  int local_d8;
  uint local_d4;
  ushort local_d0;
  ushort local_c8;
  ushort local_c6;
  short local_c4;
  ushort local_c2;
  ushort local_c0;
  ushort local_be;
  short local_bc;
  short local_ba;
  int local_b8;
  ushort local_b2;
  ushort local_b0;
  short local_ae;
  short local_ac;
  byte local_aa;
  ushort *local_a8 [2];
  int local_a0;
  int local_9c;
  undefined1 local_98;
  ushort *local_94;
  undefined1 local_90;
  byte local_8f;
  undefined1 auStack_8c [3];
  undefined1 local_89;
  undefined1 local_5c;
  int local_58;
  undefined2 local_54;
  undefined1 local_48;
  undefined1 local_38;
  int local_34;
  
  local_34 = *DAT_2c610b6c;
  uVar5 = FUN_2c629814(*param_2,&local_b8,param_4,0);
  if (uVar5 == 0) {
    bVar31 = (char *)0xf8fe < param_4;
    if (param_4 != (char *)0xf8ff) {
      bVar31 = (char *)0x1e < param_4;
    }
    if ((bVar31 && (param_4 != (char *)0xf8ff && param_4 != (char *)0x1f)) &&
       (param_4 != (char *)0x200c)) {
      FUN_2c62a624(local_a8,(int)(short)(*param_3 + local_ae),(int)(short)(param_3[1] + local_ac),
                   (int)(short)(local_b2 + *param_3 + local_ae),
                   (int)(short)(local_b0 + param_3[1] + local_ac));
      FUN_2c61314c(auStack_8c);
      local_58 = param_2[3];
      local_89 = 2;
      local_48 = 2;
      local_38 = 2;
      local_5c = 2;
      local_54 = 1;
      uVar5 = (*(code *)param_1[3])(param_1,auStack_8c,local_a8);
    }
switchD_2c610ac0_default:
    if (*DAT_2c610b6c != local_34) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return uVar5;
  }
  if ((local_b0 == 0) || (local_b2 == 0)) goto switchD_2c610ac0_default;
  uVar24 = *param_3 + local_ae;
  psVar9 = (short *)param_1[2];
  iVar27 = (int)(short)uVar24;
  uVar5 = (uint)*psVar9;
  puVar25 = (undefined4 *)(uint)uVar24;
  if (((int)((uint)local_b2 + iVar27) < (int)uVar5) || (psVar9[2] < iVar27))
  goto switchD_2c610ac0_default;
  uVar11 = ((param_3[1] - (local_ac + local_b0)) + *(short *)(*param_2 + 8)) -
           *(short *)(*param_2 + 10);
  pcVar12 = (char *)(int)(short)uVar11;
  uVar5 = (uint)uVar11;
  if (((((int)(pcVar12 + local_b0) < (int)psVar9[1]) || ((int)psVar9[3] < (int)pcVar12)) ||
      (uVar6 = FUN_2c629810(local_b8,param_4), piVar4 = DAT_2c610b78, uVar5 = uVar6, uVar6 == 0)) ||
     ((*(byte *)(local_b8 + 0xc) & 3) != 0)) goto switchD_2c610ac0_default;
  bVar1 = *(byte *)(param_2 + 8);
  uVar5 = (uint)bVar1;
  if ((local_aa & 0xf) == 3) {
    local_d8 = DAT_2c610b70;
    if (uVar5 < 0xfd) {
      if ((*DAT_2c610b74 != uVar5) || (*DAT_2c610b78 != 4)) {
        pbVar20 = (byte *)(DAT_2c610b70 + 0xf);
        pbVar10 = (byte *)(DAT_2c610b70 + -1);
        pbVar29 = DAT_2c610b88;
        do {
          pbVar10 = pbVar10 + 1;
          bVar16 = bVar1;
          if (*pbVar10 != 0xff) {
            bVar16 = (byte)((uint)((int)(short)(ushort)*pbVar10 * (int)(short)(ushort)bVar1) >> 8);
          }
          *pbVar29 = bVar16;
          pbVar29 = pbVar29 + 1;
        } while (pbVar20 != pbVar10);
      }
      *DAT_2c610e3c = bVar1;
      *piVar4 = 4;
      local_d8 = DAT_2c610e40;
    }
    uVar21 = (uint)local_b2;
    local_d0 = local_b2;
    psVar9 = (short *)param_1[2];
    uVar5 = (uint)local_b0;
    local_f8 = local_b0;
    if (iVar27 < *psVar9) {
      local_f0 = *psVar9 - iVar27;
      uVar30 = local_f0 * 4;
      uVar26 = uVar24 + (short)local_f0;
      local_f4 = uVar21 + local_f0;
    }
    else {
      uVar30 = 0;
      local_f0 = 0;
      uVar26 = uVar24;
      local_f4 = uVar21;
    }
    local_ec = uVar21;
    local_e0 = uVar30;
    if ((int)psVar9[2] < (int)(iVar27 + uVar21)) {
      local_ec = (psVar9[2] - iVar27) + 1;
      local_d0 = (ushort)local_ec;
      local_e0 = (local_f4 - local_ec) * 4;
    }
    if ((int)pcVar12 < (int)psVar9[1]) {
      local_d4 = (int)psVar9[1] - (int)pcVar12;
      uVar11 = uVar11 + (short)local_d4;
      uVar30 = local_d4 * uVar21 * 4 + uVar30;
    }
    else {
      local_d4 = 0;
    }
    local_f4 = uVar5;
    if ((int)psVar9[3] < (int)(pcVar12 + uVar5)) {
      local_f4 = ((int)psVar9[3] - (int)pcVar12) + 1;
      local_f8 = (ushort)local_f4;
    }
    pbVar10 = (byte *)(uVar6 + (uVar30 >> 3));
    FUN_2c62c3b0(local_a8,0x1c);
    local_8f = (byte)(((uint)*(byte *)(param_2 + 9) << 0x1a) >> 0x1d);
    local_a0 = param_2[3];
    local_90 = (undefined1)param_2[8];
    FUN_2c601b5c();
    uVar7 = FUN_2c62a47c();
    uVar6 = uVar5 * uVar21;
    if ((int)uVar7 <= (int)(uVar5 * uVar21)) {
      uVar6 = uVar7;
    }
    iVar27 = FUN_2c62bf1c(uVar6);
    local_ba = uVar11 + local_f8;
    local_c4 = local_d0 + (uVar24 - 1);
    iVar22 = (int)(short)((1 - uVar26) + local_c4);
    local_c8 = uVar26;
    local_c6 = uVar11;
    local_c2 = uVar11;
    local_c0 = uVar26;
    local_be = uVar11;
    local_bc = local_c4;
    local_9c = iVar27;
    iVar19 = FUN_2c613fa8(&local_c0);
    local_a8[0] = &local_c8;
    local_94 = local_a8[0];
    if ((int)local_d4 < (int)local_f4) {
      iVar28 = local_ec - local_f0;
      iVar14 = 0;
      do {
        uVar30 = uVar30 & 7;
        uVar5 = 0xf0 >> uVar30;
        local_100 = iVar14;
        if (local_f0 < (int)local_ec) {
          puVar13 = (undefined1 *)(iVar27 + iVar14);
          do {
            uVar21 = (*pbVar10 & uVar5) >> (4 - uVar30 & 0xff) & 0xff;
            uVar17 = 0;
            if (uVar21 != 0) {
              uVar17 = *(undefined1 *)(local_d8 + uVar21);
            }
            *puVar13 = uVar17;
            if (uVar30 < 4) {
              uVar30 = uVar30 + 4;
              uVar5 = uVar5 >> 4;
            }
            else {
              pbVar10 = pbVar10 + 1;
              uVar30 = 0;
              uVar5 = 0xf0;
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != (undefined1 *)(iVar27 + iVar28 + iVar14));
          local_100 = iVar28 + iVar14;
        }
        if (iVar19 != 0) {
          iVar8 = FUN_2c613e90(iVar14 + iVar27,(int)(short)local_c8,(int)(short)local_c2,iVar22);
          local_98 = (undefined1)iVar8;
          if (iVar8 == 0) {
            FUN_2c62c3b0(iVar14 + iVar27,iVar22);
          }
        }
        if ((uint)(local_100 + iVar28) < uVar6) {
          local_c2 = local_c2 + 1;
        }
        else {
          local_100 = 0;
          local_98 = 2;
          FUN_2c60d588(param_1,local_a8);
          local_c6 = local_c2 + 1;
          local_c2 = local_c6;
        }
        local_d4 = local_d4 + 1;
        uVar30 = uVar30 + local_e0;
        pbVar10 = pbVar10 + (uVar30 >> 3);
        iVar14 = local_100;
      } while (local_f4 != local_d4);
    }
    if (local_c6 != local_c2) {
      local_c2 = local_c2 - 1;
      local_98 = 2;
      FUN_2c60d588(param_1,local_a8);
    }
    uVar5 = FUN_2c62c040(iVar27);
    goto switchD_2c610ac0_default;
  }
  iVar19 = (local_aa & 0xf) - 1;
  switch(iVar19) {
  case 0:
  case 1:
switchD_2c610ac0_caseD_1:
    iVar19 = FUN_2c62a4c4(uVar5);
    iVar19 = iVar19 * 10 + 0x50;
    iVar19 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar19 >> 0x26) -
                         (short)(iVar19 >> 0x1f));
    break;
  case 2:
  case 4:
  case 5:
  case 6:
    iVar19 = 0;
    pcVar15 = pcVar12;
code_r0x2c620a02:
    iVar19 = (int)(short)((short)((int)pcVar15 >> 6) - (short)(iVar19 >> 0x1f));
    goto LAB_2c61f236;
  case 3:
    param_4 = (char *)(uVar5 << 0x18);
    iVar19 = FUN_2c62a4c4(iVar19);
    iVar19 = iVar19 * 0x10 + 0x50;
    lVar3 = (longlong)DAT_2c620b68 * (longlong)iVar19;
    FUN_2c62c6f0(iVar27,(int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f)),
                 (int)lVar3);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_84;
      if (iVar22 * 0x18 < 0xf0) goto LAB_2c61df6c;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 0x18 + 0x50;
LAB_2c620bd6:
      uVar2 = (longlong)DAT_2c620d04 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_81;
        if (iVar22 * 0x14 < 0xf0) goto LAB_2c61df6c;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 0x14 + 0x50;
        goto LAB_2c620bd6;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2;
      if (0xef < iVar22 * 0x10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 0x10 + 0x50;
        goto LAB_2c620bd6;
      }
LAB_2c61df6c:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f8(iVar19 + 0x80,iVar22,(int)uVar2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x78);
      iVar19 = *param_1 + 0x78;
      cVar18 = *param_4;
      if (cVar18 != '\x01') goto LAB_2c61df92;
LAB_2c61f704:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_57;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61dfb0;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620bf0:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620d04 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      FUN_2c62ae04();
      iVar19 = *param_1 + 0x78;
      cVar18 = *param_4;
      if (cVar18 == '\x01') goto LAB_2c61f704;
LAB_2c61df92:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (cVar18 != '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_00;
        if (iVar22 * 10 < 0xf0) goto LAB_2c61dfb0;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620bf0;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_82;
      if (0xef < iVar22 * 0xc) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620bf0;
      }
LAB_2c61dfb0:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    lv_obj_set_style_pad_top(iVar19,iVar22);
    lv_obj_set_style_pad_bottom(iVar19,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_86;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61dffe;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620c10:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620d04 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_80;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61dffe;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620c10;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_01;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620c10;
      }
LAB_2c61dffe:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f0(iVar19 + 0x78,iVar22,(int)uVar2);
    FUN_2c62c6f8(iVar19 + 0x78,iVar22);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x88);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_02);
    if (iVar19 * 10 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 10 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6f0(iVar22 + 0x88,iVar19,(int)lVar3);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_03);
    if (iVar19 * 10 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 10 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6f8(iVar22 + 0x88,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x90);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_04);
    if (iVar19 * 0x14 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 0x14 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c7d8(iVar22 + 0x90,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x98);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c7e0(*param_1 + 0x98,2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x68);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1 + 0x68;
    lv_obj_set_style_pad_left(iVar19,0);
    lv_obj_set_style_pad_right(iVar19,0);
    lv_obj_set_style_pad_top(iVar19,0);
    lv_obj_set_style_pad_bottom(iVar19,0);
    FUN_2c62c6f0(*param_1 + 0x68,0);
    FUN_2c62c6f8(*param_1 + 0x68,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x70);
      iVar19 = *param_1 + 0x70;
      cVar18 = *param_4;
      if (cVar18 != '\x01') goto LAB_2c61e122;
LAB_2c61f6ae:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_56;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61e150;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c620c34:
      uVar2 = (longlong)DAT_2c620d04 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      FUN_2c62ae04();
      iVar19 = *param_1 + 0x70;
      cVar18 = *param_4;
      if (cVar18 == '\x01') goto LAB_2c61f6ae;
LAB_2c61e122:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (cVar18 != '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_05;
        if (iVar22 * 2 < 0xf0) goto LAB_2c61e150;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c620c34;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_79;
      if (0xef < iVar22 * 6) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c620c34;
      }
LAB_2c61e150:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    lv_obj_set_style_pad_top(iVar19,iVar22);
    lv_obj_set_style_pad_bottom(iVar19,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_87;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61e19a;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c620c52:
      uVar2 = (longlong)DAT_2c620d04 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_78;
        if (iVar22 * 6 < 0xf0) goto LAB_2c61e19a;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c620c52;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_06;
      if (0xef < iVar22 * 2) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c620c52;
      }
LAB_2c61e19a:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f0(iVar19 + 0x70,iVar22,(int)uVar2);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_85;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61e1ca;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c6207fe:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_77;
        if (iVar22 * 6 < 0xf0) goto LAB_2c61e1ca;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c6207fe;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_07;
      if (0xef < iVar22 * 2) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c6207fe;
      }
LAB_2c61e1ca:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f8(iVar19 + 0x70,iVar22,(int)uVar2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x28);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x28,*(undefined4 *)(iVar27 + 0x10));
    FUN_2c62c7c0(*param_1 + 0x28,0xffffffff);
    lv_obj_set_style_bg_opa(*param_1 + 0x28,0xff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x30);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x30,*(undefined4 *)(iVar27 + 0x10));
    FUN_2c62c7c0(*param_1 + 0x30,*(undefined4 *)(iVar27 + 0x10));
    lv_obj_set_style_bg_opa(*param_1 + 0x30,0x33);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x38);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x38,*(undefined4 *)(iVar27 + 0x14));
    FUN_2c62c7c0(*param_1 + 0x38,0xffffffff);
    lv_obj_set_style_bg_opa(*param_1 + 0x38,0xff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x40);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x40,*(undefined4 *)(iVar27 + 0x14));
    FUN_2c62c7c0(*param_1 + 0x40,*(undefined4 *)(iVar27 + 0x14));
    lv_obj_set_style_bg_opa(*param_1 + 0x40,0x33);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x48);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x48,*param_2);
    lv_obj_set_style_bg_opa(*param_1 + 0x48,0xff);
    FUN_2c62c7c0(*param_1 + 0x48,*unaff_r8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x50);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0x50,*puVar25);
    lv_obj_set_style_bg_opa(*param_1 + 0x50,0xff);
    FUN_2c62c7c0(*param_1 + 0x50,*unaff_r8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0xb0);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_radius(*param_1 + 0xb0,0x7fff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0xb8);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_radius(*param_1 + 0xb8,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 200);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_08);
    if (iVar19 * 3 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 3 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6c0(iVar22 + 200,iVar19,(int)lVar3);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_09);
    if (iVar19 * 3 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 3 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6c8(iVar22 + 200,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0xf0);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_color(*param_1 + 0xf0,*(undefined4 *)(iVar27 + 0x10));
    lv_obj_set_style_bg_opa(*param_1 + 0xf0,0xff);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1 + 0xf0;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_10);
    if (iVar19 * 6 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 6 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_pad_left(iVar22,iVar19,(int)lVar3);
    lv_obj_set_style_pad_right(iVar22,iVar19);
    lv_obj_set_style_pad_top(iVar22,iVar19);
    lv_obj_set_style_pad_bottom(iVar22,iVar19);
    lv_obj_set_style_radius(*param_1 + 0xf0,0x7fff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0xe0);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c810(*param_1 + 0xe0,200);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0xe8);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c810(*param_1 + 0xe8,0x78);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x100);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c7b0(*param_1 + 0x100,0xff00ff00);
    FUN_2c62c7b8(*param_1 + 0x100,0x19);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_11);
    if (iVar19 * 4 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 4 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c7a0(iVar22 + 0x100,iVar19,(int)lVar3);
    FUN_2c62c7a8(*param_1 + 0x100,1);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x108);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c7b0(*param_1 + 0x108,0xff00ff00);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x130);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c6b8(*param_1 + 0x130,0x104);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x138);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1 + 0x138;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_12);
    if (iVar19 * 3 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 3 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_pad_left(iVar22,iVar19,(int)lVar3);
    lv_obj_set_style_pad_right(iVar22,iVar19);
    lv_obj_set_style_pad_top(iVar22,iVar19);
    lv_obj_set_style_pad_bottom(iVar22,iVar19);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_13);
    if (iVar19 * 2 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x138,iVar19,(int)lVar3);
    lv_obj_set_style_prop_0x30(*param_1 + 0x138,*(undefined4 *)(iVar27 + 0x10));
    lv_obj_set_style_bg_color(*param_1 + 0x138,*puVar25);
    lv_obj_set_style_bg_opa(*param_1 + 0x138,0xff);
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_61;
      if (iVar22 * 0xc < 0xf0) goto LAB_2c61e578;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 0xc;
LAB_2c61f8f2:
      uVar2 = (longlong)DAT_2c61fbe4 * (longlong)(iVar22 + 0x50);
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 + 0x50 >> 0x1f));
      if (iVar22 < 0) {
        iVar22 = iVar22 + 1;
      }
      iVar22 = iVar22 >> 1;
    }
    else {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_14;
      if (0xef < iVar22 * 8) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 << 3;
        goto LAB_2c61f8f2;
      }
LAB_2c61e578:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 0;
    }
    lv_obj_set_style_radius(iVar19 + 0x138,iVar22,(int)uVar2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x140);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c718(*param_1 + 0x140,DAT_2c61e8b8);
    FUN_2c62c7c0(*param_1 + 0x140,0xffffffff);
    FUN_2c62c7d0(*param_1 + 0x140,*(undefined4 *)(iVar27 + 0x18));
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x148);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1 + 0x148;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_15);
    if (iVar19 * 4 < 0xf0) {
      iVar19 = -1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 4 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(iVar19 >> 0x1f) - (short)(int)(lVar3 >> 0x26));
    }
    lv_obj_set_style_pad_left(iVar22,iVar19,(int)lVar3);
    lv_obj_set_style_pad_right(iVar22,iVar19);
    lv_obj_set_style_pad_top(iVar22,iVar19);
    lv_obj_set_style_pad_bottom(iVar22,iVar19);
    lv_obj_set_style_bg_color(*param_1 + 0x148,0xffffffff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x150);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c790(*param_1 + 0x150,1);
    FUN_2c62c798(*param_1 + 0x150,*unaff_r8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x128);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c740(*param_1 + 0x128,0);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_16);
    if (iVar19 * 10 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 10 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6f8(iVar22 + 0x128,iVar19,(int)lVar3);
    FUN_2c62c798(*param_1 + 0x128,*param_2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x110);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_17);
    if (iVar19 * 3 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 3 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c790(iVar22 + 0x110,iVar19,(int)lVar3);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_18);
    if (iVar19 * 3 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 3 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_radius(iVar22 + 0x110,iVar19,(int)lVar3);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_19);
    if (iVar19 * 8 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 8 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_width(iVar22 + 0x110,iVar19,(int)lVar3);
    lv_obj_set_style_height(iVar22 + 0x110,iVar19);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_20);
    if (iVar19 * 2 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c6f8(iVar22 + 0x110,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x118);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_radius(*param_1 + 0x118,0x7fff);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_21);
    if (iVar19 * 8 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 8 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_width(iVar22 + 0x118,iVar19,(int)lVar3);
    lv_obj_set_style_height(iVar22 + 0x118,iVar19);
    lv_obj_set_style_bg_color(*param_1 + 0x118,*(undefined4 *)(iVar27 + 0x10));
    lv_obj_set_style_bg_opa(*param_1 + 0x118,0xff);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x120);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_22);
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    FUN_2c62c790(iVar22 + 0x120,iVar19,(int)lVar3);
    FUN_2c62c798(*param_1 + 0x120,*unaff_r8);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1 + 0x120;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_23);
    if (iVar19 * 2 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      lVar3 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_pad_left(iVar22,iVar19,(int)lVar3);
    lv_obj_set_style_pad_right(iVar22,iVar19);
    lv_obj_set_style_pad_top(iVar22,iVar19);
    lv_obj_set_style_pad_bottom(iVar22,iVar19);
    iVar19 = *param_1;
    uVar23 = FUN_2c62ee64(0x12);
    FUN_2c62c7c0(iVar19 + 0x120,uVar23);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1a0);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1 + 0x1a0;
    lv_obj_set_style_pad_left(iVar19,0);
    lv_obj_set_style_pad_right(iVar19,0);
    lv_obj_set_style_pad_top(iVar19,0);
    lv_obj_set_style_pad_bottom(iVar19,0);
    iVar19 = *param_1;
    FUN_2c62c6f0(iVar19 + 0x1a0,0);
    FUN_2c62c6f8(iVar19 + 0x1a0,0);
    lv_obj_set_style_radius(*param_1 + 0x1a0,0);
    FUN_2c62c7f0(*param_1 + 0x1a0,1);
    FUN_2c62c738(*param_1 + 0x1a0,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1d8);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_62;
      if (iVar22 * 0xc < 0xf0) goto LAB_2c61e8de;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 0xc;
LAB_2c61f8d4:
      uVar2 = (longlong)DAT_2c61fbe4 * (longlong)(iVar22 + 0x50);
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 + 0x50 >> 0x1f));
    }
    else {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_24;
      if (0xef < iVar22 * 8) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 << 3;
        goto LAB_2c61f8d4;
      }
LAB_2c61e8de:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_radius(iVar19 + 0x1d8,iVar22,(int)uVar2);
    FUN_2c62c7f0(*param_1 + 0x1d8,1);
    lv_obj_set_style_bg_opa(*param_1 + 0x1d8,0xff);
    lv_obj_set_style_bg_color(*param_1 + 0x1d8,*puVar25);
    FUN_2c62c7c0(*param_1 + 0x1d8,*unaff_r8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1a8);
      iVar19 = *param_1 + 0x1a8;
      cVar18 = *param_4;
      if (cVar18 != '\x01') goto LAB_2c61e93a;
LAB_2c61f816:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_60;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61e958;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620818:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      FUN_2c62ae04();
      iVar19 = *param_1 + 0x1a8;
      cVar18 = *param_4;
      if (cVar18 == '\x01') goto LAB_2c61f816;
LAB_2c61e93a:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (cVar18 != '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_25;
        if (iVar22 * 10 < 0xf0) goto LAB_2c61e958;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620818;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_64;
      if (0xef < iVar22 * 0xc) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620818;
      }
LAB_2c61e958:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_92;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61e996;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620838:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_63;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61e996;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620838;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_26;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620838;
      }
LAB_2c61e996:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_top(iVar19 + 0x1a8,iVar22,(int)uVar2);
    lv_obj_set_style_pad_bottom(iVar19 + 0x1a8,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_91;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61e9d4;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620858:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_66;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61e9d4;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620858;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_27;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620858;
      }
LAB_2c61e9d4:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f0(iVar19 + 0x1a8,iVar22,(int)uVar2);
    FUN_2c62c6f8(iVar19 + 0x1a8,iVar22);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_28);
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x1a8,iVar19,(int)lVar3);
    lv_obj_set_style_prop_0x31(*param_1 + 0x1a8,0x19);
    lv_obj_set_style_prop_0x30(*param_1 + 0x1a8,*unaff_r8);
    FUN_2c62c738(*param_1 + 0x1a8,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1b0);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1 + 0x1b0;
    lv_obj_set_style_pad_left(iVar19,0);
    lv_obj_set_style_pad_right(iVar19,0);
    lv_obj_set_style_pad_top(iVar19,0);
    lv_obj_set_style_pad_bottom(iVar19,0);
    iVar19 = *param_1;
    FUN_2c62c6f0(iVar19 + 0x1b0,0);
    FUN_2c62c6f8(iVar19 + 0x1b0,0);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_29);
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x1b0,iVar19,(int)lVar3);
    lv_obj_set_style_prop_0x31(*param_1 + 0x1b0,0x19);
    lv_obj_set_style_prop_0x30(*param_1 + 0x1b0,*unaff_r8);
    FUN_2c62c738(*param_1 + 0x1b0,8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1b8);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1 + 0x1b8;
    lv_obj_set_style_pad_left(iVar19,0);
    lv_obj_set_style_pad_right(iVar19,0);
    lv_obj_set_style_pad_top(iVar19,0);
    lv_obj_set_style_pad_bottom(iVar19,0);
    iVar19 = *param_1;
    FUN_2c62c6f0(iVar19 + 0x1b8,0);
    FUN_2c62c6f8(iVar19 + 0x1b8,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1c8);
      iVar19 = *param_1 + 0x1c8;
      cVar18 = *param_4;
      if (cVar18 != '\x01') goto LAB_2c61eb2e;
LAB_2c61f7d0:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_59;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61eb4c;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620878:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      FUN_2c62ae04();
      iVar19 = *param_1 + 0x1c8;
      cVar18 = *param_4;
      if (cVar18 == '\x01') goto LAB_2c61f7d0;
LAB_2c61eb2e:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (cVar18 != '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_30;
        if (iVar22 * 10 < 0xf0) goto LAB_2c61eb4c;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620878;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_67;
      if (0xef < iVar22 * 0xc) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620878;
      }
LAB_2c61eb4c:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_90;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61eb86;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c62089c:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_65;
        if (iVar22 * 6 < 0xf0) goto LAB_2c61eb86;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c62089c;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_31;
      if (0xef < iVar22 * 2) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c62089c;
      }
LAB_2c61eb86:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_top(iVar19 + 0x1c8,iVar22,(int)uVar2);
    lv_obj_set_style_pad_bottom(iVar19 + 0x1c8,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_95;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61ebc4;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c6208b6:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_69;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61ebc4;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c6208b6;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_32;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c6208b6;
      }
LAB_2c61ebc4:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f0(iVar19 + 0x1c8,iVar22,(int)uVar2);
    FUN_2c62c6f8(iVar19 + 0x1c8,iVar22);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1d0);
      iVar19 = *param_1 + 0x1d0;
      cVar18 = *param_4;
      if (cVar18 != '\x01') goto LAB_2c61ebf6;
LAB_2c61f79a:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_58;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61ec10;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c6208da:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      FUN_2c62ae04();
      iVar19 = *param_1 + 0x1d0;
      cVar18 = *param_4;
      if (cVar18 == '\x01') goto LAB_2c61f79a;
LAB_2c61ebf6:
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (cVar18 != '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_33;
        if (iVar22 * 2 < 0xf0) goto LAB_2c61ec10;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c6208da;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_72;
      if (0xef < iVar22 * 6) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c6208da;
      }
LAB_2c61ec10:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_97;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61ec4a;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c6208f8:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_71;
        if (iVar22 * 6 < 0xf0) goto LAB_2c61ec4a;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c6208f8;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_34;
      if (0xef < iVar22 * 2) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c6208f8;
      }
LAB_2c61ec4a:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_top(iVar19 + 0x1d0,iVar22,(int)uVar2);
    lv_obj_set_style_pad_bottom(iVar19 + 0x1d0,iVar22);
    FUN_2c62c788(*param_1 + 0x1d0,0);
    lv_obj_set_style_bg_opa(*param_1 + 0x1d0,0);
    FUN_2c62c7c0(*param_1 + 0x1d0,*unaff_r8);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1c0);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    lv_obj_set_style_pad_left(iVar19 + 0x1c0,0);
    lv_obj_set_style_pad_right(iVar19 + 0x1c0,0);
    iVar19 = *param_1;
    FUN_2c62c6f0(iVar19 + 0x1c0,0);
    FUN_2c62c6f8(iVar19 + 0x1c0,0);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1e0);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_opa(*param_1 + 0x1e0,0x33);
    iVar19 = *param_1;
    uVar23 = FUN_2c62ee64(0x12);
    lv_obj_set_style_bg_color(iVar19 + 0x1e0,uVar23);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1e8);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_bg_opa(*param_1 + 0x1e8,0);
    iVar19 = *param_1;
    if (*param_4 == '\x01') {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_96;
      if (iVar22 * 8 < 0xf0) goto LAB_2c61ed38;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 8 + 0x50;
LAB_2c620916:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      uVar23 = *(undefined4 *)(iVar27 + 0xc);
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_70;
        if (iVar22 * 6 < 0xf0) goto LAB_2c61ed38;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 6 + 0x50;
        goto LAB_2c620916;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_35;
      if (0xef < iVar22 * 2) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 2 + 0x50;
        goto LAB_2c620916;
      }
LAB_2c61ed38:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_top(iVar19 + 0x1e8,iVar22,(int)uVar2);
    lv_obj_set_style_pad_bottom(iVar19 + 0x1e8,iVar22);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x160);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_36);
    if (iVar19 * 5 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 5 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c790(iVar22 + 0x160,iVar19,(int)lVar3);
    FUN_2c62c798(*param_1 + 0x160,*unaff_r8);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_37);
    if (iVar19 * 0x14 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 0x14 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_width(iVar22 + 0x160,iVar19,(int)lVar3);
    lv_obj_set_style_height(iVar22 + 0x160,iVar19);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_38);
    if (iVar19 * 0xf < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 0xf + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_pad_left(iVar22 + 0x160,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x168);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_radius(*param_1 + 0x168,0x7fff);
    lv_obj_set_style_bg_color(*param_1 + 0x168,*unaff_r8);
    lv_obj_set_style_bg_opa(*param_1 + 0x168,0xff);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_39);
    if (iVar19 * 0xf < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 0xf + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_width(iVar22 + 0x168,iVar19,(int)lVar3);
    lv_obj_set_style_height(iVar22 + 0x168,iVar19);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x158);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(uVar23,extraout_r2_40);
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x158,iVar19,(int)lVar3);
    lv_obj_set_style_prop_0x30(*param_1 + 0x158,*param_2);
    FUN_2c62c738(*param_1 + 0x158,3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x170);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_prop_0x30(*param_1 + 0x170,*unaff_r8);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_41;
    if (iVar19 * 2 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x170,iVar19,(int)uVar2);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_42;
    if (iVar19 < 0xf0) {
      iVar19 = -1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(iVar19 + 0x50 >> 0x1f) - (short)(int)((longlong)uVar2 >> 0x26));
    }
    lv_obj_set_style_pad_left(iVar22 + 0x170,iVar19,(int)uVar2);
    FUN_2c62c738(*param_1 + 0x170,4);
    FUN_2c62c810(*param_1 + 0x170,400);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x178);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    if (*(int *)(iVar27 + 0x24) << 0x1f < 0) {
      uVar23 = FUN_2c62eea0(0x12,2);
    }
    else {
      uVar23 = FUN_2c62ee7c(0x12,1);
    }
    FUN_2c62c7c0(iVar19 + 0x178,uVar23);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x180);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar19 = *param_1 + 0x180;
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_83;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61ef7c;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620930:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_76;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61ef7c;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620930;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_43;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620930;
      }
LAB_2c61ef7c:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19,iVar22);
    lv_obj_set_style_pad_top(iVar19,iVar22);
    lv_obj_set_style_pad_bottom(iVar19,iVar22);
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_89;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61efc8;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620950:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
      if (iVar22 < 0) {
        iVar22 = iVar22 + 1;
      }
      iVar22 = iVar22 >> 1;
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_75;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61efc8;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620950;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_44;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620950;
      }
LAB_2c61efc8:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 0;
    }
    FUN_2c62c6f0(iVar19 + 0x180,iVar22,(int)uVar2);
    FUN_2c62c6f8(iVar19 + 0x180,iVar22);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x188);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_45;
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x188,iVar19,(int)uVar2);
    lv_obj_set_style_prop_0x30(*param_1 + 0x188,*param_2);
    lv_obj_set_style_bg_color(*param_1 + 0x188,*puVar25);
    lv_obj_set_style_bg_opa(*param_1 + 0x188,0x33);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 400);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_94;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61f06e;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620978:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_74;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61f06e;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c620978;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_46;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c620978;
      }
LAB_2c61f06e:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19 + 400,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19 + 400,iVar22);
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61f0aa;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c620224:
      iVar22 = iVar22 * iVar14 + 0x50;
      iVar22 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar22 >> 0x26) -
                           (short)(iVar22 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar22 * 0xc) {
          iVar22 = FUN_2c62a4c4(uVar23);
          iVar14 = 0xc;
          goto LAB_2c620224;
        }
      }
      else {
        iVar22 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar22 * 10) {
          iVar22 = FUN_2c62a4c4(uVar23);
          iVar22 = iVar22 * 10 + 0x50;
          iVar22 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar22 >> 0x26) -
                               (short)(iVar22 >> 0x1f));
          goto LAB_2c61f0ac;
        }
      }
LAB_2c61f0aa:
      iVar22 = 1;
    }
LAB_2c61f0ac:
    lv_obj_set_style_pad_top(iVar19 + 400,iVar22);
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      if (iVar22 * 8 < 0xf0) goto LAB_2c61f0d8;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 << 3;
LAB_2c620090:
      iVar22 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)(iVar22 + 0x50) >> 0x26)
                           - (short)(iVar22 + 0x50 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar22 * 6) {
          iVar22 = FUN_2c62a4c4(uVar23);
          iVar22 = iVar22 * 6;
          goto LAB_2c620090;
        }
      }
      else {
        iVar22 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar22 * 2) {
          iVar22 = FUN_2c62a4c4(uVar23);
          iVar22 = iVar22 * 2 + 0x50;
          iVar22 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar22 >> 0x26) -
                               (short)(iVar22 >> 0x1f));
          goto LAB_2c61f0da;
        }
      }
LAB_2c61f0d8:
      iVar22 = 1;
    }
LAB_2c61f0da:
    lv_obj_set_style_pad_bottom(iVar19 + 400,iVar22);
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_88;
      if (iVar22 * 0xe < 0xf0) goto LAB_2c61f10a;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0xe;
LAB_2c6209d8:
      iVar22 = iVar22 * iVar14 + 0x50;
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_68;
        if (iVar22 * 0xc < 0xf0) goto LAB_2c61f10a;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 0xc;
        goto LAB_2c6209d8;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_47;
      if (0xef < iVar22 * 10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar14 = 10;
        goto LAB_2c6209d8;
      }
LAB_2c61f10a:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    FUN_2c62c6f0(iVar19 + 400,iVar22,(int)uVar2);
    FUN_2c62c6f8(iVar19 + 400,iVar22);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x198);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    lVar3 = CONCAT44(iVar19 * 10,extraout_r2_48);
    if (iVar19 * 10 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 10 + 0x50;
      lVar3 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)(lVar3 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    FUN_2c62c7a0(iVar22 + 0x198,iVar19,(int)lVar3);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1f8);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1 + 0x1f8;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_49;
    if (iVar19 * 4 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 4 + 0x50;
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 >> 0x1f));
    }
    lv_obj_set_style_pad_left(iVar22,iVar19,(int)uVar2);
    lv_obj_set_style_pad_right(iVar22,iVar19);
    lv_obj_set_style_pad_top(iVar22,iVar19);
    lv_obj_set_style_pad_bottom(iVar22,iVar19);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x1f0);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c6a8(*param_1 + 0x1f0,0x2064);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x200);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    uVar23 = FUN_2c62ee64(0x12);
    lv_obj_set_style_bg_color(iVar19 + 0x200,uVar23);
    lv_obj_set_style_bg_opa(*param_1 + 0x200,0x7f);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x208);
    }
    else {
      FUN_2c62ae04();
    }
    FUN_2c62c768(*param_1 + 0x208,0);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    unaff_r8 = (undefined4 *)(*param_1 + 0x208);
    if (*param_4 == '\x03') {
      iVar19 = FUN_2c62a4c4(uVar23);
      if (iVar19 * 8 < 0xf0) {
        iVar19 = 0;
      }
      else {
        iVar19 = FUN_2c62a4c4(uVar23);
        iVar19 = iVar19 * 8 + 0x50;
        iVar19 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar19 >> 0x26) -
                             (short)(iVar19 >> 0x1f));
        if (iVar19 < 0) {
          iVar19 = iVar19 + 1;
        }
        iVar19 = iVar19 >> 1;
      }
    }
    else {
      if (*param_4 == '\x01') {
        iVar19 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar19 * 0xc) {
          iVar19 = FUN_2c62a4c4(uVar23);
          iVar19 = iVar19 * 0xc + 0x50;
          iVar19 = (int)(short)((short)(int)((longlong)DAT_2c61ffd4 * (longlong)iVar19 >> 0x26) -
                               (short)(iVar19 >> 0x1f));
          goto LAB_2c61f236;
        }
      }
      else {
        iVar19 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar19 * 8) {
          iVar19 = FUN_2c62a4c4(uVar23);
          iVar19 = iVar19 * 8 + 0x50;
          pcVar15 = (char *)((ulonglong)((longlong)DAT_2c620b68 * (longlong)iVar19) >> 0x20);
          goto code_r0x2c620a02;
        }
      }
      iVar19 = 1;
    }
LAB_2c61f236:
    lv_obj_set_style_radius(unaff_r8,iVar19);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x238);
    }
    else {
      FUN_2c62ae04();
    }
    lv_obj_set_style_prop_0x30(*param_1 + 0x238,*(undefined4 *)(iVar27 + 0x10));
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_50;
    if (iVar19 * 2 < 0xf0) {
      iVar19 = 2;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)(((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 >> 0x1f)) * 2);
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x238,iVar19,(int)uVar2);
    FUN_2c62c738(*param_1 + 0x238,1);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x230);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_51;
    if (iVar19 * 2 < 0xf0) {
      iVar19 = -1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar19 = iVar19 * 2 + 0x50;
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
      iVar19 = (int)(short)((short)(iVar19 >> 0x1f) - (short)(int)((longlong)uVar2 >> 0x26));
    }
    FUN_2c62c760(iVar22 + 0x230,iVar19,(int)uVar2);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x210);
    }
    else {
      FUN_2c62ae04();
    }
    iVar19 = *param_1;
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    if (*param_4 == '\x01') {
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_93;
      if (iVar22 * 0x18 < 0xf0) goto LAB_2c61f2f2;
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 0x18 + 0x50;
LAB_2c620b10:
      uVar2 = (longlong)DAT_2c620b68 * (longlong)iVar22;
      iVar22 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar22 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar22 = FUN_2c62a4c4(uVar23);
        uVar5 = extraout_r2_73;
        if (iVar22 * 0x14 < 0xf0) goto LAB_2c61f2f2;
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 0x14 + 0x50;
        goto LAB_2c620b10;
      }
      iVar22 = FUN_2c62a4c4(uVar23);
      uVar5 = extraout_r2_52;
      if (0xef < iVar22 * 0x10) {
        iVar22 = FUN_2c62a4c4(uVar23);
        iVar22 = iVar22 * 0x10 + 0x50;
        goto LAB_2c620b10;
      }
LAB_2c61f2f2:
      uVar2 = (ulonglong)uVar5;
      iVar22 = 1;
    }
    lv_obj_set_style_pad_left(iVar19 + 0x210,iVar22,(int)uVar2);
    lv_obj_set_style_pad_right(iVar19 + 0x210,iVar22);
    iVar19 = *param_1;
    lv_obj_set_style_pad_top(iVar19 + 0x210,0);
    lv_obj_set_style_pad_bottom(iVar19 + 0x210,0);
    iVar19 = *param_1;
    FUN_2c62c6f0(iVar19 + 0x210,0);
    FUN_2c62c6f8(iVar19 + 0x210,0);
    FUN_2c62c7f0(*param_1 + 0x210,1);
    if (*pcVar12 == '\0') {
      lv_style_init_or_reset(*param_1 + 0x218);
    }
    else {
      FUN_2c62ae04();
    }
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    iVar22 = *param_1;
    iVar19 = FUN_2c62a4c4(uVar23);
    uVar2 = (ulonglong)extraout_r2_53;
    if (iVar19 < 0xf0) {
      iVar19 = 1;
    }
    else {
      iVar19 = FUN_2c62a4c4(uVar23);
      uVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar19 + 0x50);
      iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 + 0x50 >> 0x1f));
    }
    lv_obj_set_style_prop_0x32(iVar22 + 0x218,iVar19,(int)uVar2);
    lv_obj_set_style_prop_0x30(*param_1 + 0x218,*param_2);
    FUN_2c62c738(*param_1 + 0x218,1);
    uVar23 = *(undefined4 *)(iVar27 + 0xc);
    unaff_r8 = (undefined4 *)(*param_1 + 0x218);
    if (*param_4 == '\x01') {
      iVar19 = FUN_2c62a4c4(uVar23);
      if (iVar19 * 0xe < 0xf0) goto LAB_2c61f3b0;
      iVar19 = FUN_2c62a4c4(uVar23);
      iVar22 = 0xe;
LAB_2c6201f4:
      iVar19 = iVar19 * iVar22 + 0x50;
      iVar19 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar19 >> 0x26) -
                           (short)(iVar19 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar19 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar19 * 0xc) {
          iVar19 = FUN_2c62a4c4(uVar23);
          iVar22 = 0xc;
          goto LAB_2c6201f4;
        }
      }
      else {
        iVar19 = FUN_2c62a4c4(uVar23);
        if (0xef < iVar19 * 10) {
          iVar19 = FUN_2c62a4c4(uVar23);
          iVar19 = iVar19 * 10 + 0x50;
switchD_2c610ac0_caseD_7:
          iVar19 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar19 >> 0x26) -
                               (short)(iVar19 >> 0x1f));
          goto LAB_2c61f3b2;
        }
      }
LAB_2c61f3b0:
      iVar19 = 1;
    }
LAB_2c61f3b2:
    lv_obj_set_style_pad_left(unaff_r8);
    lv_obj_set_style_pad_right(unaff_r8,iVar19);
    lv_obj_set_style_pad_top(unaff_r8,iVar19);
    lv_obj_set_style_pad_bottom(unaff_r8,iVar19);
    uVar5 = *(uint *)(iVar27 + 0xc);
    unaff_r8 = (undefined4 *)(*param_1 + 0x218);
    if (*param_4 == '\x01') {
      iVar19 = FUN_2c62a4c4(uVar5);
      if (iVar19 * 0xe < 0xf0) goto LAB_2c61f3fc;
      iVar19 = FUN_2c62a4c4(uVar5);
      iVar22 = 0xe;
LAB_2c620190:
      iVar19 = iVar19 * iVar22 + 0x50;
      iVar19 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar19 >> 0x26) -
                           (short)(iVar19 >> 0x1f));
    }
    else {
      if (*param_4 == '\x02') {
        iVar19 = FUN_2c62a4c4(uVar5);
        if (0xef < iVar19 * 0xc) {
          iVar19 = FUN_2c62a4c4(uVar5);
          iVar22 = 0xc;
          goto LAB_2c620190;
        }
      }
      else {
        iVar19 = FUN_2c62a4c4(uVar5);
        if (0xef < iVar19 * 10) goto switchD_2c610ac0_caseD_1;
      }
LAB_2c61f3fc:
      iVar19 = 1;
    }
    break;
  case 7:
    goto switchD_2c610ac0_caseD_7;
  default:
    goto switchD_2c610ac0_default;
  }
  FUN_2c62c6f8(unaff_r8,iVar19);
  if (*pcVar12 == '\0') {
    lv_style_init_or_reset(*param_1 + 0x220);
  }
  else {
    FUN_2c62ae04();
  }
  uVar23 = *(undefined4 *)(iVar27 + 0xc);
  iVar19 = *param_1;
  if (*param_4 == '\x01') {
    iVar22 = FUN_2c62a4c4(uVar23);
    if (0xef < iVar22 * 0x18) {
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0x18;
LAB_2c62013e:
      iVar22 = iVar22 * iVar14 + 0x50;
      iVar22 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar22 >> 0x26) -
                           (short)(iVar22 >> 0x1f));
      goto LAB_2c61f43e;
    }
  }
  else if (*param_4 == '\x02') {
    iVar22 = FUN_2c62a4c4(uVar23);
    if (0xef < iVar22 * 0x14) {
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar14 = 0x14;
      goto LAB_2c62013e;
    }
  }
  else {
    iVar22 = FUN_2c62a4c4(uVar23);
    if (0xef < iVar22 * 0x10) {
      iVar22 = FUN_2c62a4c4(uVar23);
      iVar22 = iVar22 * 0x10 + 0x50;
      iVar22 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar22 >> 0x26) -
                           (short)(iVar22 >> 0x1f));
      goto LAB_2c61f43e;
    }
  }
  iVar22 = 1;
LAB_2c61f43e:
  FUN_2c62c6c0(iVar19 + 0x220,iVar22);
  if (*pcVar12 == '\0') {
    lv_style_init_or_reset(*param_1 + 0x240);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*param_1 + 0x240,0xff);
  lv_obj_set_style_bg_color(*param_1 + 0x240,0xffffffff);
  iVar19 = *param_1;
  uVar23 = FUN_2c62ee64(0x12);
  FUN_2c62c710(iVar19 + 0x240,uVar23);
  lv_obj_set_style_radius(*param_1 + 0x240,0x7fff);
  uVar23 = *(undefined4 *)(iVar27 + 0xc);
  iVar22 = *param_1;
  iVar19 = FUN_2c62a4c4(uVar23);
  uVar2 = (ulonglong)extraout_r2_54;
  if (iVar19 * 0xf < 0xf0) {
    iVar19 = 1;
  }
  else {
    iVar19 = FUN_2c62a4c4(uVar23);
    iVar19 = iVar19 * 0xf + 0x50;
    uVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar19;
    iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 >> 0x1f));
  }
  FUN_2c62c768(iVar22 + 0x240,iVar19,(int)uVar2);
  FUN_2c62c780(*param_1 + 0x240,0xffffffff);
  uVar23 = *(undefined4 *)(iVar27 + 0xc);
  iVar22 = *param_1;
  iVar19 = FUN_2c62a4c4(uVar23);
  uVar2 = (ulonglong)extraout_r2_55;
  if (iVar19 * 5 < 0xf0) {
    iVar19 = 1;
  }
  else {
    iVar19 = FUN_2c62a4c4(uVar23);
    iVar19 = iVar19 * 5 + 0x50;
    uVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar19;
    iVar19 = (int)(short)((short)(int)((longlong)uVar2 >> 0x26) - (short)(iVar19 >> 0x1f));
  }
  FUN_2c62c778(iVar22 + 0x240,iVar19,(int)uVar2);
  if ((pcVar12 == (char *)0x0) || (iVar19 = FUN_2c5feea8(pcVar12), iVar27 == iVar19)) {
    FUN_2c603814(0);
  }
  uVar5 = DAT_2c61f84c;
  *pcVar12 = '\x01';
  return uVar5;
}

