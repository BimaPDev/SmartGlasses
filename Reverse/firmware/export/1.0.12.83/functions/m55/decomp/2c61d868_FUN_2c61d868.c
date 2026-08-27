/* FUN_2c61d868 @ 0x2c61d868 */

undefined4
FUN_2c61d868(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  undefined4 extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  uint extraout_r2_07;
  undefined4 extraout_r2_08;
  undefined4 extraout_r2_09;
  undefined4 extraout_r2_10;
  undefined4 extraout_r2_11;
  uint extraout_r2_12;
  uint extraout_r2_13;
  uint extraout_r2_14;
  undefined4 extraout_r2_15;
  undefined4 extraout_r2_16;
  uint extraout_r2_17;
  uint extraout_r2_18;
  uint extraout_r2_19;
  uint extraout_r2_20;
  uint extraout_r2_21;
  undefined4 extraout_r2_22;
  undefined4 extraout_r2_23;
  undefined4 extraout_r2_24;
  uint extraout_r2_25;
  uint extraout_r2_26;
  uint extraout_r2_27;
  undefined4 extraout_r2_28;
  undefined4 extraout_r2_29;
  undefined4 extraout_r2_30;
  undefined4 extraout_r2_31;
  undefined4 extraout_r2_32;
  undefined4 extraout_r2_33;
  uint extraout_r2_34;
  undefined4 extraout_r2_35;
  undefined4 extraout_r2_36;
  undefined4 extraout_r2_37;
  undefined4 extraout_r2_38;
  undefined4 extraout_r2_39;
  undefined4 extraout_r2_40;
  undefined4 extraout_r2_41;
  undefined4 extraout_r2_42;
  undefined4 extraout_r2_43;
  uint extraout_r2_44;
  uint extraout_r2_45;
  uint extraout_r2_46;
  uint extraout_r2_47;
  undefined4 extraout_r2_48;
  undefined4 extraout_r2_49;
  uint extraout_r2_50;
  uint extraout_r2_51;
  uint extraout_r2_52;
  uint extraout_r2_53;
  uint extraout_r2_54;
  uint extraout_r2_55;
  undefined4 extraout_r2_56;
  undefined4 extraout_r2_57;
  undefined4 extraout_r2_58;
  undefined4 extraout_r2_59;
  undefined4 extraout_r2_60;
  uint extraout_r2_61;
  uint extraout_r2_62;
  uint extraout_r2_63;
  uint extraout_r2_64;
  uint extraout_r2_65;
  uint extraout_r2_66;
  uint extraout_r2_67;
  undefined4 extraout_r2_68;
  uint extraout_r2_69;
  uint extraout_r2_70;
  uint extraout_r2_71;
  uint extraout_r2_72;
  uint uVar11;
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
  int iVar12;
  uint extraout_r2_96;
  uint extraout_r2_97;
  uint extraout_r2_98;
  uint extraout_r2_99;
  uint extraout_r2_x00100;
  uint extraout_r2_x00101;
  uint extraout_r2_x00102;
  uint extraout_r2_x00103;
  uint extraout_r2_x00104;
  uint extraout_r2_x00105;
  uint extraout_r2_x00106;
  uint extraout_r2_x00107;
  uint extraout_r2_x00108;
  uint extraout_r2_x00109;
  uint extraout_r2_x00110;
  uint extraout_r2_x00111;
  uint extraout_r2_x00112;
  uint extraout_r2_x00113;
  uint extraout_r2_x00114;
  uint extraout_r2_x00115;
  uint extraout_r2_x00116;
  uint extraout_r2_x00117;
  uint extraout_r2_x00118;
  uint extraout_r2_x00119;
  uint extraout_r2_x00120;
  uint extraout_r2_x00121;
  uint extraout_r2_x00122;
  uint extraout_r2_x00123;
  uint extraout_r2_x00124;
  uint extraout_r2_x00125;
  uint extraout_r2_x00126;
  uint extraout_r2_x00127;
  uint extraout_r2_x00128;
  uint extraout_r2_x00129;
  uint extraout_r2_x00130;
  uint extraout_r2_x00131;
  uint extraout_r2_x00132;
  uint extraout_r2_x00133;
  uint extraout_r2_x00134;
  uint extraout_r2_x00135;
  uint extraout_r2_x00136;
  uint extraout_r2_x00137;
  uint extraout_r2_x00138;
  char cVar13;
  int *piVar14;
  char *pcVar15;
  int *piVar16;
  undefined4 *local_30;
  
  pcVar4 = DAT_2c61db6c;
  piVar3 = DAT_2c61db68;
  piVar14 = DAT_2c61db70;
  if (*DAT_2c61db68 == 0) {
    *DAT_2c61db6c = '\0';
    iVar7 = lv_mem_alloc(0x248);
    *piVar3 = iVar7;
    piVar14 = DAT_2c620d08;
    *DAT_2c620d08 = iVar7;
  }
  FUN_2c62a470();
  iVar7 = FUN_2c62a47c();
  pcVar15 = DAT_2c61db74;
  if (iVar7 < 0x141) {
    *DAT_2c61db74 = '\x03';
  }
  else {
    FUN_2c62a470();
    pcVar15 = DAT_2c61fbe8;
    iVar7 = FUN_2c62a47c();
    if (iVar7 < 0x2d0) {
      cVar13 = '\x02';
    }
    else {
      cVar13 = '\x01';
    }
    *pcVar15 = cVar13;
  }
  puVar5 = DAT_2c61db78;
  DAT_2c61db78[3] = param_1;
  uVar8 = DAT_2c61db7c;
  puVar5[4] = param_2;
  puVar5[5] = param_3;
  puVar5[6] = param_5;
  puVar5[7] = param_5;
  puVar5[8] = param_5;
  puVar5[9] = param_4;
  *puVar5 = uVar8;
  if (param_4 == 0) {
    uVar8 = FUN_2c62ee7c(0x12,4);
    local_30 = DAT_2c61f854;
    *DAT_2c61f854 = uVar8;
    puVar10 = DAT_2c61f85c;
    if ((int)(puVar5[9] << 0x1f) < 0) goto LAB_2c61d8c6;
    uVar8 = FUN_2c62eea0(0x12,4);
    *puVar10 = uVar8;
  }
  else {
    local_30 = DAT_2c61db80;
    *DAT_2c61db80 = DAT_2c61db84;
LAB_2c61d8c6:
    puVar10 = DAT_2c61db98;
    uVar8 = FUN_2c62ee7c(0x12,5);
    *puVar10 = uVar8;
  }
  piVar16 = DAT_2c61f858;
  iVar7 = DAT_2c61f850;
  piVar6 = DAT_2c61dba0;
  piVar3 = DAT_2c61db9c;
  if ((int)(puVar5[9] << 0x1f) < 0) {
    *DAT_2c61db9c = DAT_2c61f850;
    iVar9 = *piVar14;
    *piVar16 = iVar7 + 0x70707;
    if (*pcVar4 == '\0') goto LAB_2c61f526;
LAB_2c61d906:
    FUN_2c62ae04();
    iVar7 = *piVar14;
    if (*pcVar4 != '\0') goto LAB_2c61d916;
LAB_2c61f536:
    lv_style_init_or_reset(iVar7 + 0xd8);
  }
  else {
    *DAT_2c61db9c = -1;
    iVar7 = FUN_2c62ee7c(0x12,2);
    cVar13 = *pcVar4;
    *piVar6 = iVar7;
    iVar9 = *piVar14;
    piVar16 = piVar6;
    if (cVar13 != '\0') goto LAB_2c61d906;
LAB_2c61f526:
    lv_style_init_or_reset(iVar9 + 0xd0);
    iVar7 = *piVar14;
    if (*pcVar4 == '\0') goto LAB_2c61f536;
LAB_2c61d916:
    FUN_2c62ae04();
  }
  FUN_2c62b03c(DAT_2c61db90,DAT_2c61db8c,DAT_2c61db88,0x50,0x46,0);
  FUN_2c62b03c(DAT_2c61db94,DAT_2c61db8c,DAT_2c61db88,0x50,0,0);
  FUN_2c62c818(*piVar14 + 0xd0,DAT_2c61db90);
  FUN_2c62c818(*piVar14 + 0xd8,DAT_2c61db94);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 8);
    if (-1 < (int)(puVar5[9] << 0x1f)) goto LAB_2c61f93e;
LAB_2c61d96c:
    uVar8 = FUN_2c62eea0(0x12,2);
  }
  else {
    FUN_2c62ae04();
    if ((int)(puVar5[9] << 0x1f) < 0) goto LAB_2c61d96c;
LAB_2c61f93e:
    uVar8 = FUN_2c62ee64(0x12);
  }
  lv_obj_set_style_bg_color(*piVar14 + 8,uVar8);
  lv_obj_set_style_radius(*piVar14 + 8,0x7fff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 8;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2);
  if (iVar7 * 7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 7 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)lVar2);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_00);
  if (iVar7 * 5 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 5 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_width(iVar9 + 8,iVar7,(int)lVar2);
  lv_obj_set_style_bg_opa(*piVar14 + 8,0x66);
  FUN_2c62c818(*piVar14 + 8,DAT_2c61db94);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x10);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*piVar14 + 0x10,0xff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*piVar14,0xff);
  lv_obj_set_style_bg_color(*piVar14,*local_30);
  FUN_2c62c7c0(*piVar14,*puVar10);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00117;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620b92;
    }
LAB_2c61da6e:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00109;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620b92;
      }
      goto LAB_2c61da6e;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_01;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61da6e;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620b92:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7,iVar9,(int)uVar1);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00124;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620bb2;
    }
LAB_2c61daa0:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00110;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620bb2;
      }
      goto LAB_2c61daa0;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_02;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61daa0;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620bb2:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f8(iVar7,iVar9,(int)uVar1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x18);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_83;
    if (0xef < iVar9 * 0xc) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0xc;
      goto LAB_2c61f918;
    }
LAB_2c61dada:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_03;
    if (iVar9 * 8 < 0xf0) goto LAB_2c61dada;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 << 3;
LAB_2c61f918:
    uVar1 = (longlong)DAT_2c61fbe4 * (longlong)(iVar9 + 0x50);
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_radius(iVar7 + 0x18,iVar9,(int)uVar1);
  lv_obj_set_style_bg_opa(*piVar14 + 0x18,0xff);
  lv_obj_set_style_bg_color(*piVar14 + 0x18,*piVar3);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x18,*piVar16);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_04);
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x18,iVar7,(int)lVar2);
  FUN_2c62c740(*piVar14 + 0x18,1);
  FUN_2c62c7c0(*piVar14 + 0x18,*puVar10);
  iVar7 = *piVar14 + 0x18;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00116;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620a1a;
    }
LAB_2c61dba4:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00115;
      if (0xef < iVar9 * 0x14) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x14 + 0x50;
        goto LAB_2c620a1a;
      }
      goto LAB_2c61dba4;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_05;
    if (iVar9 * 0x10 < 0xf0) goto LAB_2c61dba4;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x10 + 0x50;
LAB_2c620a1a:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00119;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620a34;
    }
LAB_2c61dbf2:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00114;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620a34;
      }
      goto LAB_2c61dbf2;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_06;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61dbf2;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620a34:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x18,iVar9,(int)uVar1);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00118;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620a54;
    }
LAB_2c61dc26:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00113;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620a54;
      }
      goto LAB_2c61dc26;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_07;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61dc26;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620a54:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f8(iVar7 + 0x18,iVar9,(int)uVar1);
  iVar7 = *piVar14;
  uVar8 = FUN_2c62ee64(0x12);
  FUN_2c62c798(iVar7 + 0x18,uVar8);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_08);
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  FUN_2c62c790(iVar9 + 0x18,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xa0);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c750(*piVar14 + 0xa0,puVar5[4]);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_09);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c748(iVar9 + 0xa0,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_10);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c760(iVar9 + 0xa0,iVar7,(int)lVar2);
  FUN_2c62c758(*piVar14 + 0xa0,0x7f);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xa8);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c750(*piVar14 + 0xa8,puVar5[5]);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_11);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c748(iVar9 + 0xa8,iVar7,(int)lVar2);
  FUN_2c62c758(*piVar14 + 0xa8,0x7f);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x20);
    iVar7 = *piVar14 + 0x20;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f610;
LAB_2c61dd34:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_12;
      if (0xef < iVar9 * 8) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 8 + 0x50;
        goto LAB_2c620a78;
      }
      goto LAB_2c61dd4e;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00100;
    if (iVar9 * 0xc < 0xf0) goto LAB_2c61dd4e;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0xc + 0x50;
LAB_2c620a78:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x20;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61dd34;
LAB_2c61f610:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_77;
    if (0xef < iVar9 * 0x10) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x10 + 0x50;
      goto LAB_2c620a78;
    }
LAB_2c61dd4e:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_radius(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_bg_opa(*piVar14 + 0x20,0xff);
  lv_obj_set_style_bg_color(*piVar14 + 0x20,*piVar16);
  if ((puVar5[9] & 1) == 0) {
    iVar7 = *piVar14;
    uVar8 = FUN_2c62ee64(0x12);
    FUN_2c62c780(iVar7 + 0x20,uVar8);
    iVar9 = *piVar14;
    iVar7 = FUN_2c62a4c4(0);
    if (iVar7 * 3 < 0xf0) {
      iVar7 = 1;
    }
    else {
      iVar7 = FUN_2c62a4c4(0);
      iVar7 = iVar7 * 3 + 0x50;
      iVar7 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar7 >> 0x26) -
                          (short)(iVar7 >> 0x1f));
    }
    FUN_2c62c768(iVar9 + 0x20,iVar7);
    FUN_2c62c788(*piVar14 + 0x20,0x7f);
    iVar9 = *piVar14;
    uVar8 = puVar5[3];
    iVar7 = FUN_2c62a4c4(0);
    if (iVar7 < 0x3c) {
      iVar12 = 1;
LAB_2c61fc44:
      iVar7 = FUN_2c62a4c4(uVar8);
      if (iVar12 * iVar7 < 0xf0) {
        iVar7 = 1;
      }
      else {
        iVar7 = FUN_2c62a4c4(uVar8);
        iVar7 = iVar7 * iVar12 + 0x50;
        iVar7 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar7 >> 0x26) -
                            (short)(iVar7 >> 0x1f));
      }
    }
    else {
      iVar7 = FUN_2c62a4c4(0);
      iVar12 = (int)((longlong)DAT_2c620d04 * (longlong)(iVar7 + 0x14) >> 0x24) -
               (iVar7 + 0x14 >> 0x1f);
      iVar7 = 0;
      if (iVar12 != 0) goto LAB_2c61fc44;
    }
    FUN_2c62c770(iVar9 + 0x20,iVar7);
  }
  FUN_2c62c7c0(*piVar14 + 0x20,*puVar10);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00128;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620a96;
    }
LAB_2c61ddaa:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00104;
      if (0xef < iVar9 * 0x14) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x14 + 0x50;
        goto LAB_2c620a96;
      }
      goto LAB_2c61ddaa;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_13;
    if (iVar9 * 0x10 < 0xf0) goto LAB_2c61ddaa;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x10 + 0x50;
LAB_2c620a96:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar7 + 0x20,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7 + 0x20,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00126;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620ab0;
    }
LAB_2c61dde8:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00108;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620ab0;
      }
      goto LAB_2c61dde8;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_14;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61dde8;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620ab0:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_top(iVar7 + 0x20,iVar9,(int)uVar1);
  lv_obj_set_style_pad_bottom(iVar7 + 0x20,iVar9);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_15);
  if (iVar7 * 5 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 5 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f8(iVar9 + 0x20,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_16);
  if (iVar7 * 5 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 5 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f0(iVar9 + 0x20,iVar7,(int)lVar2);
  iVar7 = *piVar14;
  *DAT_2c61e140 = DAT_2c61e144;
  *DAT_2c61e148 = DAT_2c61e14c;
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(iVar7 + 0x58);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c800(*piVar14 + 0x58,DAT_2c61e140);
  FUN_2c62c808(*piVar14 + 0x58,0x23);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x60);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c800(*piVar14 + 0x60,DAT_2c61e148);
  FUN_2c62c808(*piVar14 + 0x60,0x7f);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xc0);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c7f0(*piVar14 + 0xc0,1);
  FUN_2c62c740(*piVar14 + 0xc0,1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x80);
    iVar7 = *piVar14 + 0x80;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f5bc;
LAB_2c61ded8:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_17;
      if (0xef < iVar9 * 0x10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x10 + 0x50;
        goto LAB_2c620ad4;
      }
      goto LAB_2c61def2;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00101;
    if (iVar9 * 0x14 < 0xf0) goto LAB_2c61def2;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x14 + 0x50;
LAB_2c620ad4:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x80;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61ded8;
LAB_2c61f5bc:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_76;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620ad4;
    }
LAB_2c61def2:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00125;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620af2;
    }
LAB_2c61df3c:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00107;
      if (0xef < iVar9 * 0x14) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x14 + 0x50;
        goto LAB_2c620af2;
      }
      goto LAB_2c61df3c;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_18;
    if (iVar9 * 0x10 < 0xf0) goto LAB_2c61df3c;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x10 + 0x50;
LAB_2c620af2:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x80,iVar9,(int)uVar1);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00121;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620bd6;
    }
LAB_2c61df6c:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00111;
      if (0xef < iVar9 * 0x14) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x14 + 0x50;
        goto LAB_2c620bd6;
      }
      goto LAB_2c61df6c;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_19;
    if (iVar9 * 0x10 < 0xf0) goto LAB_2c61df6c;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x10 + 0x50;
LAB_2c620bd6:
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f8(iVar7 + 0x80,iVar9,(int)uVar1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x78);
    iVar7 = *piVar14 + 0x78;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f704;
LAB_2c61df92:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_20;
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 10;
        goto LAB_2c620bf0;
      }
      goto LAB_2c61dfb0;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00112;
    if (iVar9 * 0xc < 0xf0) goto LAB_2c61dfb0;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xc;
LAB_2c620bf0:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x78;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61df92;
LAB_2c61f704:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_79;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620bf0;
    }
LAB_2c61dfb0:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00123;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620c10;
    }
LAB_2c61dffe:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00106;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620c10;
      }
      goto LAB_2c61dffe;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_21;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61dffe;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620c10:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x78,iVar9,(int)uVar1);
  FUN_2c62c6f8(iVar7 + 0x78,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x88);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_22);
  if (iVar7 * 10 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 10 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f0(iVar9 + 0x88,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_23);
  if (iVar7 * 10 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 10 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f8(iVar9 + 0x88,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x90);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_24);
  if (iVar7 * 0x14 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 0x14 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c7d8(iVar9 + 0x90,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x98);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c7e0(*piVar14 + 0x98,2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x68);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14 + 0x68;
  lv_obj_set_style_pad_left(iVar7,0);
  lv_obj_set_style_pad_right(iVar7,0);
  lv_obj_set_style_pad_top(iVar7,0);
  lv_obj_set_style_pad_bottom(iVar7,0);
  FUN_2c62c6f0(*piVar14 + 0x68,0);
  FUN_2c62c6f8(*piVar14 + 0x68,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x70);
    iVar7 = *piVar14 + 0x70;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f6ae;
LAB_2c61e122:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_25;
      if (0xef < iVar9 * 2) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 2 + 0x50;
        goto LAB_2c620c34;
      }
      goto LAB_2c61e150;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00105;
    if (iVar9 * 6 < 0xf0) goto LAB_2c61e150;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 6 + 0x50;
LAB_2c620c34:
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x70;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61e122;
LAB_2c61f6ae:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_78;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c620c34;
    }
LAB_2c61e150:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00127;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c620c52;
    }
LAB_2c61e19a:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00103;
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6 + 0x50;
        goto LAB_2c620c52;
      }
      goto LAB_2c61e19a;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_26;
    if (iVar9 * 2 < 0xf0) goto LAB_2c61e19a;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 2 + 0x50;
LAB_2c620c52:
    uVar1 = (longlong)DAT_2c620d04 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x70,iVar9,(int)uVar1);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00122;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c6207fe;
    }
LAB_2c61e1ca:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_x00102;
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6 + 0x50;
        goto LAB_2c6207fe;
      }
      goto LAB_2c61e1ca;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_27;
    if (iVar9 * 2 < 0xf0) goto LAB_2c61e1ca;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 2 + 0x50;
LAB_2c6207fe:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f8(iVar7 + 0x70,iVar9,(int)uVar1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x28);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x28,puVar5[4]);
  FUN_2c62c7c0(*piVar14 + 0x28,0xffffffff);
  lv_obj_set_style_bg_opa(*piVar14 + 0x28,0xff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x30);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x30,puVar5[4]);
  FUN_2c62c7c0(*piVar14 + 0x30,puVar5[4]);
  lv_obj_set_style_bg_opa(*piVar14 + 0x30,0x33);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x38);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x38,puVar5[5]);
  FUN_2c62c7c0(*piVar14 + 0x38,0xffffffff);
  lv_obj_set_style_bg_opa(*piVar14 + 0x38,0xff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x40);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x40,puVar5[5]);
  FUN_2c62c7c0(*piVar14 + 0x40,puVar5[5]);
  lv_obj_set_style_bg_opa(*piVar14 + 0x40,0x33);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x48);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x48,*piVar16);
  lv_obj_set_style_bg_opa(*piVar14 + 0x48,0xff);
  FUN_2c62c7c0(*piVar14 + 0x48,*puVar10);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x50);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0x50,*piVar3);
  lv_obj_set_style_bg_opa(*piVar14 + 0x50,0xff);
  FUN_2c62c7c0(*piVar14 + 0x50,*puVar10);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xb0);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_radius(*piVar14 + 0xb0,0x7fff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xb8);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_radius(*piVar14 + 0xb8,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 200);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_28);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6c0(iVar9 + 200,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_29);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6c8(iVar9 + 200,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xf0);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_color(*piVar14 + 0xf0,puVar5[4]);
  lv_obj_set_style_bg_opa(*piVar14 + 0xf0,0xff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 0xf0;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_30);
  if (iVar7 * 6 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 6 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)lVar2);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  lv_obj_set_style_radius(*piVar14 + 0xf0,0x7fff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xe0);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c810(*piVar14 + 0xe0,200);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0xe8);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c810(*piVar14 + 0xe8,0x78);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x100);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c7b0(*piVar14 + 0x100,0xff00ff00);
  FUN_2c62c7b8(*piVar14 + 0x100,0x19);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_31);
  if (iVar7 * 4 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 4 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c7a0(iVar9 + 0x100,iVar7,(int)lVar2);
  FUN_2c62c7a8(*piVar14 + 0x100,1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x108);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c7b0(*piVar14 + 0x108,0xff00ff00);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x130);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c6b8(*piVar14 + 0x130,0x104);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x138);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 0x138;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_32);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)lVar2);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_33);
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x138,iVar7,(int)lVar2);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x138,puVar5[4]);
  lv_obj_set_style_bg_color(*piVar14 + 0x138,*piVar3);
  lv_obj_set_style_bg_opa(*piVar14 + 0x138,0xff);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_84;
    if (0xef < iVar9 * 0xc) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0xc;
      goto LAB_2c61f8f2;
    }
LAB_2c61e578:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_34;
    if (iVar9 * 8 < 0xf0) goto LAB_2c61e578;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 << 3;
LAB_2c61f8f2:
    uVar1 = (longlong)DAT_2c61fbe4 * (longlong)(iVar9 + 0x50);
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 + 0x50 >> 0x1f));
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    iVar9 = iVar9 >> 1;
  }
  lv_obj_set_style_radius(iVar7 + 0x138,iVar9,(int)uVar1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x140);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c718(*piVar14 + 0x140,DAT_2c61e8b8);
  FUN_2c62c7c0(*piVar14 + 0x140,0xffffffff);
  FUN_2c62c7d0(*piVar14 + 0x140,puVar5[6]);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x148);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 0x148;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_35);
  if (iVar7 * 4 < 0xf0) {
    iVar7 = -1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 4 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(iVar7 >> 0x1f) - (short)(int)(lVar2 >> 0x26));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)lVar2);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  lv_obj_set_style_bg_color(*piVar14 + 0x148,0xffffffff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x150);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c790(*piVar14 + 0x150,1);
  FUN_2c62c798(*piVar14 + 0x150,*puVar10);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x128);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c740(*piVar14 + 0x128,0);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_36);
  if (iVar7 * 10 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 10 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f8(iVar9 + 0x128,iVar7,(int)lVar2);
  FUN_2c62c798(*piVar14 + 0x128,*piVar16);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x110);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_37);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c790(iVar9 + 0x110,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_38);
  if (iVar7 * 3 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 3 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_radius(iVar9 + 0x110,iVar7,(int)lVar2);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_39);
  if (iVar7 * 8 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 8 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_width(iVar9 + 0x110,iVar7,(int)lVar2);
  lv_obj_set_style_height(iVar9 + 0x110,iVar7);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_40);
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c6f8(iVar9 + 0x110,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x118);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_radius(*piVar14 + 0x118,0x7fff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_41);
  if (iVar7 * 8 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 8 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_width(iVar9 + 0x118,iVar7,(int)lVar2);
  lv_obj_set_style_height(iVar9 + 0x118,iVar7);
  lv_obj_set_style_bg_color(*piVar14 + 0x118,puVar5[4]);
  lv_obj_set_style_bg_opa(*piVar14 + 0x118,0xff);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x120);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_42);
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  FUN_2c62c790(iVar9 + 0x120,iVar7,(int)lVar2);
  FUN_2c62c798(*piVar14 + 0x120,*puVar10);
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 0x120;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_43);
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    lVar2 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)lVar2);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  iVar7 = *piVar14;
  uVar8 = FUN_2c62ee64(0x12);
  FUN_2c62c7c0(iVar7 + 0x120,uVar8);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1a0);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14 + 0x1a0;
  lv_obj_set_style_pad_left(iVar7,0);
  lv_obj_set_style_pad_right(iVar7,0);
  lv_obj_set_style_pad_top(iVar7,0);
  lv_obj_set_style_pad_bottom(iVar7,0);
  iVar7 = *piVar14;
  FUN_2c62c6f0(iVar7 + 0x1a0,0);
  FUN_2c62c6f8(iVar7 + 0x1a0,0);
  lv_obj_set_style_radius(*piVar14 + 0x1a0,0);
  FUN_2c62c7f0(*piVar14 + 0x1a0,1);
  FUN_2c62c738(*piVar14 + 0x1a0,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1d8);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_85;
    if (0xef < iVar9 * 0xc) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0xc;
      goto LAB_2c61f8d4;
    }
LAB_2c61e8de:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_44;
    if (iVar9 * 8 < 0xf0) goto LAB_2c61e8de;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 << 3;
LAB_2c61f8d4:
    uVar1 = (longlong)DAT_2c61fbe4 * (longlong)(iVar9 + 0x50);
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_radius(iVar7 + 0x1d8,iVar9,(int)uVar1);
  FUN_2c62c7f0(*piVar14 + 0x1d8,1);
  lv_obj_set_style_bg_opa(*piVar14 + 0x1d8,0xff);
  lv_obj_set_style_bg_color(*piVar14 + 0x1d8,*piVar3);
  FUN_2c62c7c0(*piVar14 + 0x1d8,*puVar10);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1a8);
    iVar7 = *piVar14 + 0x1a8;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f816;
LAB_2c61e93a:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_45;
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 10;
        goto LAB_2c620818;
      }
      goto LAB_2c61e958;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_87;
    if (iVar9 * 0xc < 0xf0) goto LAB_2c61e958;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xc;
LAB_2c620818:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x1a8;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61e93a;
LAB_2c61f816:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_82;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620818;
    }
LAB_2c61e958:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00133;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620838;
    }
LAB_2c61e996:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_86;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620838;
      }
      goto LAB_2c61e996;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_46;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61e996;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620838:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_top(iVar7 + 0x1a8,iVar9,(int)uVar1);
  lv_obj_set_style_pad_bottom(iVar7 + 0x1a8,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00132;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620858;
    }
LAB_2c61e9d4:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_89;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620858;
      }
      goto LAB_2c61e9d4;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_47;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61e9d4;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620858:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x1a8,iVar9,(int)uVar1);
  FUN_2c62c6f8(iVar7 + 0x1a8,iVar9);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_48);
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x1a8,iVar7,(int)lVar2);
  lv_obj_set_style_prop_0x31(*piVar14 + 0x1a8,0x19);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x1a8,*puVar10);
  FUN_2c62c738(*piVar14 + 0x1a8,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1b0);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14 + 0x1b0;
  lv_obj_set_style_pad_left(iVar7,0);
  lv_obj_set_style_pad_right(iVar7,0);
  lv_obj_set_style_pad_top(iVar7,0);
  lv_obj_set_style_pad_bottom(iVar7,0);
  iVar7 = *piVar14;
  FUN_2c62c6f0(iVar7 + 0x1b0,0);
  FUN_2c62c6f8(iVar7 + 0x1b0,0);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_49);
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x1b0,iVar7,(int)lVar2);
  lv_obj_set_style_prop_0x31(*piVar14 + 0x1b0,0x19);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x1b0,*puVar10);
  FUN_2c62c738(*piVar14 + 0x1b0,8);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1b8);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14 + 0x1b8;
  lv_obj_set_style_pad_left(iVar7,0);
  lv_obj_set_style_pad_right(iVar7,0);
  lv_obj_set_style_pad_top(iVar7,0);
  lv_obj_set_style_pad_bottom(iVar7,0);
  iVar7 = *piVar14;
  FUN_2c62c6f0(iVar7 + 0x1b8,0);
  FUN_2c62c6f8(iVar7 + 0x1b8,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1c8);
    iVar7 = *piVar14 + 0x1c8;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f7d0;
LAB_2c61eb2e:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_50;
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 10;
        goto LAB_2c620878;
      }
      goto LAB_2c61eb4c;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_90;
    if (iVar9 * 0xc < 0xf0) goto LAB_2c61eb4c;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xc;
LAB_2c620878:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x1c8;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61eb2e;
LAB_2c61f7d0:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_81;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620878;
    }
LAB_2c61eb4c:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00131;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c62089c;
    }
LAB_2c61eb86:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_88;
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6 + 0x50;
        goto LAB_2c62089c;
      }
      goto LAB_2c61eb86;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_51;
    if (iVar9 * 2 < 0xf0) goto LAB_2c61eb86;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 2 + 0x50;
LAB_2c62089c:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_top(iVar7 + 0x1c8,iVar9,(int)uVar1);
  lv_obj_set_style_pad_bottom(iVar7 + 0x1c8,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00136;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c6208b6;
    }
LAB_2c61ebc4:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_92;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c6208b6;
      }
      goto LAB_2c61ebc4;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_52;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61ebc4;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c6208b6:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 0x1c8,iVar9,(int)uVar1);
  FUN_2c62c6f8(iVar7 + 0x1c8,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1d0);
    iVar7 = *piVar14 + 0x1d0;
    cVar13 = *pcVar15;
    if (cVar13 == '\x01') goto LAB_2c61f79a;
LAB_2c61ebf6:
    uVar8 = puVar5[3];
    if (cVar13 != '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_53;
      if (0xef < iVar9 * 2) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 2 + 0x50;
        goto LAB_2c6208da;
      }
      goto LAB_2c61ec10;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_95;
    if (iVar9 * 6 < 0xf0) goto LAB_2c61ec10;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 6 + 0x50;
LAB_2c6208da:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  else {
    FUN_2c62ae04();
    iVar7 = *piVar14 + 0x1d0;
    cVar13 = *pcVar15;
    if (cVar13 != '\x01') goto LAB_2c61ebf6;
LAB_2c61f79a:
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_80;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c6208da;
    }
LAB_2c61ec10:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00138;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c6208f8;
    }
LAB_2c61ec4a:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_94;
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6 + 0x50;
        goto LAB_2c6208f8;
      }
      goto LAB_2c61ec4a;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_54;
    if (iVar9 * 2 < 0xf0) goto LAB_2c61ec4a;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 2 + 0x50;
LAB_2c6208f8:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_top(iVar7 + 0x1d0,iVar9,(int)uVar1);
  lv_obj_set_style_pad_bottom(iVar7 + 0x1d0,iVar9);
  FUN_2c62c788(*piVar14 + 0x1d0,0);
  lv_obj_set_style_bg_opa(*piVar14 + 0x1d0,0);
  FUN_2c62c7c0(*piVar14 + 0x1d0,*puVar10);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1c0);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  lv_obj_set_style_pad_left(iVar7 + 0x1c0,0);
  lv_obj_set_style_pad_right(iVar7 + 0x1c0,0);
  iVar7 = *piVar14;
  FUN_2c62c6f0(iVar7 + 0x1c0,0);
  FUN_2c62c6f8(iVar7 + 0x1c0,0);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1e0);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*piVar14 + 0x1e0,0x33);
  iVar7 = *piVar14;
  uVar8 = FUN_2c62ee64(0x12);
  lv_obj_set_style_bg_color(iVar7 + 0x1e0,uVar8);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1e8);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*piVar14 + 0x1e8,0);
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    uVar8 = puVar5[3];
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00137;
    if (0xef < iVar9 * 8) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      goto LAB_2c620916;
    }
LAB_2c61ed38:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    uVar8 = puVar5[3];
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_93;
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6 + 0x50;
        goto LAB_2c620916;
      }
      goto LAB_2c61ed38;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_55;
    if (iVar9 * 2 < 0xf0) goto LAB_2c61ed38;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 2 + 0x50;
LAB_2c620916:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_top(iVar7 + 0x1e8,iVar9,(int)uVar1);
  lv_obj_set_style_pad_bottom(iVar7 + 0x1e8,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x160);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_56);
  if (iVar7 * 5 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 5 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c790(iVar9 + 0x160,iVar7,(int)lVar2);
  FUN_2c62c798(*piVar14 + 0x160,*puVar10);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_57);
  if (iVar7 * 0x14 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 0x14 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_width(iVar9 + 0x160,iVar7,(int)lVar2);
  lv_obj_set_style_height(iVar9 + 0x160,iVar7);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_58);
  if (iVar7 * 0xf < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 0xf + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9 + 0x160,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x168);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_radius(*piVar14 + 0x168,0x7fff);
  lv_obj_set_style_bg_color(*piVar14 + 0x168,*puVar10);
  lv_obj_set_style_bg_opa(*piVar14 + 0x168,0xff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_59);
  if (iVar7 * 0xf < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 0xf + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_width(iVar9 + 0x168,iVar7,(int)lVar2);
  lv_obj_set_style_height(iVar9 + 0x168,iVar7);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x158);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(uVar8,extraout_r2_60);
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x158,iVar7,(int)lVar2);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x158,*piVar16);
  FUN_2c62c738(*piVar14 + 0x158,3);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x170);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_prop_0x30(*piVar14 + 0x170,*puVar10);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_61;
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x170,iVar7,(int)uVar1);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_62;
  if (iVar7 < 0xf0) {
    iVar7 = -1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(iVar7 + 0x50 >> 0x1f) - (short)(int)((longlong)uVar1 >> 0x26));
  }
  lv_obj_set_style_pad_left(iVar9 + 0x170,iVar7,(int)uVar1);
  FUN_2c62c738(*piVar14 + 0x170,4);
  FUN_2c62c810(*piVar14 + 0x170,400);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x178);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  if ((int)(puVar5[9] << 0x1f) < 0) {
    uVar8 = FUN_2c62eea0(0x12,2);
  }
  else {
    uVar8 = FUN_2c62ee7c(0x12,1);
  }
  FUN_2c62c7c0(iVar7 + 0x178,uVar8);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x180);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar7 = *piVar14 + 0x180;
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00120;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620930;
    }
LAB_2c61ef7c:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_99;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620930;
      }
      goto LAB_2c61ef7c;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_63;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61ef7c;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620930:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar7,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00130;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620950;
    }
LAB_2c61efc8:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 0;
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_98;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620950;
      }
      goto LAB_2c61efc8;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_64;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61efc8;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620950:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    iVar9 = iVar9 >> 1;
  }
  FUN_2c62c6f0(iVar7 + 0x180,iVar9,(int)uVar1);
  FUN_2c62c6f8(iVar7 + 0x180,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x188);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_65;
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x188,iVar7,(int)uVar1);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x188,*piVar16);
  lv_obj_set_style_bg_color(*piVar14 + 0x188,*piVar3);
  lv_obj_set_style_bg_opa(*piVar14 + 0x188,0x33);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 400);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00135;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c620978;
    }
LAB_2c61f06e:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_97;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620978;
      }
      goto LAB_2c61f06e;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_66;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61f06e;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c620978:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar7 + 400,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7 + 400,iVar9);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 0xe < 0xf0) goto LAB_2c61f0aa;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xe;
LAB_2c620224:
    iVar9 = iVar9 * iVar12 + 0x50;
    iVar9 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar9 >> 0x26) -
                        (short)(iVar9 >> 0x1f));
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620224;
      }
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 10 + 0x50;
        iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar9 >> 0x26) -
                            (short)(iVar9 >> 0x1f));
        goto LAB_2c61f0ac;
      }
    }
LAB_2c61f0aa:
    iVar9 = 1;
  }
LAB_2c61f0ac:
  lv_obj_set_style_pad_top(iVar7 + 400,iVar9);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 8 < 0xf0) goto LAB_2c61f0d8;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 << 3;
LAB_2c620090:
    iVar9 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)(iVar9 + 0x50) >> 0x26) -
                        (short)(iVar9 + 0x50 >> 0x1f));
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 6) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 6;
        goto LAB_2c620090;
      }
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 2) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 2 + 0x50;
        iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar9 >> 0x26) -
                            (short)(iVar9 >> 0x1f));
        goto LAB_2c61f0da;
      }
    }
LAB_2c61f0d8:
    iVar9 = 1;
  }
LAB_2c61f0da:
  lv_obj_set_style_pad_bottom(iVar7 + 400,iVar9);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00129;
    if (0xef < iVar9 * 0xe) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0xe;
      goto LAB_2c6209d8;
    }
LAB_2c61f10a:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_91;
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c6209d8;
      }
      goto LAB_2c61f10a;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_67;
    if (iVar9 * 10 < 0xf0) goto LAB_2c61f10a;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 10;
LAB_2c6209d8:
    iVar9 = iVar9 * iVar12 + 0x50;
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  FUN_2c62c6f0(iVar7 + 400,iVar9,(int)uVar1);
  FUN_2c62c6f8(iVar7 + 400,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x198);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  lVar2 = CONCAT44(iVar7 * 10,extraout_r2_68);
  if (iVar7 * 10 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 10 + 0x50;
    lVar2 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)(lVar2 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c7a0(iVar9 + 0x198,iVar7,(int)lVar2);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1f8);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14 + 0x1f8;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_69;
  if (iVar7 * 4 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 4 + 0x50;
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar9,iVar7,(int)uVar1);
  lv_obj_set_style_pad_right(iVar9,iVar7);
  lv_obj_set_style_pad_top(iVar9,iVar7);
  lv_obj_set_style_pad_bottom(iVar9,iVar7);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x1f0);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c6a8(*piVar14 + 0x1f0,0x2064);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x200);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  uVar8 = FUN_2c62ee64(0x12);
  lv_obj_set_style_bg_color(iVar7 + 0x200,uVar8);
  lv_obj_set_style_bg_opa(*piVar14 + 0x200,0x7f);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x208);
  }
  else {
    FUN_2c62ae04();
  }
  FUN_2c62c768(*piVar14 + 0x208,0);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x03') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 8 < 0xf0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar9 >> 0x26) -
                          (short)(iVar9 >> 0x1f));
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
    }
  }
  else if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 0xc < 0xf0) goto LAB_2c61f234;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0xc + 0x50;
    iVar9 = (int)(short)((short)(int)((longlong)DAT_2c61ffd4 * (longlong)iVar9 >> 0x26) -
                        (short)(iVar9 >> 0x1f));
  }
  else {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 8 < 0xf0) {
LAB_2c61f234:
      iVar9 = 1;
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 8 + 0x50;
      iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar9 >> 0x26) -
                          (short)(iVar9 >> 0x1f));
    }
  }
  lv_obj_set_style_radius(iVar7 + 0x208,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x238);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_prop_0x30(*piVar14 + 0x238,puVar5[4]);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_70;
  if (iVar7 * 2 < 0xf0) {
    iVar7 = 2;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)(((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 >> 0x1f)) * 2);
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x238,iVar7,(int)uVar1);
  FUN_2c62c738(*piVar14 + 0x238,1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x230);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_71;
  if (iVar7 * 2 < 0xf0) {
    iVar7 = -1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 2 + 0x50;
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(iVar7 >> 0x1f) - (short)(int)((longlong)uVar1 >> 0x26));
  }
  FUN_2c62c760(iVar9 + 0x230,iVar7,(int)uVar1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x210);
  }
  else {
    FUN_2c62ae04();
  }
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_x00134;
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x18 + 0x50;
      goto LAB_2c620b10;
    }
LAB_2c61f2f2:
    uVar1 = (ulonglong)uVar11;
    iVar9 = 1;
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      uVar11 = extraout_r2_96;
      if (0xef < iVar9 * 0x14) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 0x14 + 0x50;
        goto LAB_2c620b10;
      }
      goto LAB_2c61f2f2;
    }
    iVar9 = FUN_2c62a4c4(uVar8);
    uVar11 = extraout_r2_72;
    if (iVar9 * 0x10 < 0xf0) goto LAB_2c61f2f2;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar9 = iVar9 * 0x10 + 0x50;
LAB_2c620b10:
    uVar1 = (longlong)DAT_2c620b68 * (longlong)iVar9;
    iVar9 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar9 >> 0x1f));
  }
  lv_obj_set_style_pad_left(iVar7 + 0x210,iVar9,(int)uVar1);
  lv_obj_set_style_pad_right(iVar7 + 0x210,iVar9);
  iVar7 = *piVar14;
  lv_obj_set_style_pad_top(iVar7 + 0x210,0);
  lv_obj_set_style_pad_bottom(iVar7 + 0x210,0);
  iVar7 = *piVar14;
  FUN_2c62c6f0(iVar7 + 0x210,0);
  FUN_2c62c6f8(iVar7 + 0x210,0);
  FUN_2c62c7f0(*piVar14 + 0x210,1);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x218);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_73;
  if (iVar7 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)(iVar7 + 0x50);
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 + 0x50 >> 0x1f));
  }
  lv_obj_set_style_prop_0x32(iVar9 + 0x218,iVar7,(int)uVar1);
  lv_obj_set_style_prop_0x30(*piVar14 + 0x218,*piVar16);
  FUN_2c62c738(*piVar14 + 0x218,1);
  uVar8 = puVar5[3];
  iVar7 = *piVar14 + 0x218;
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 0xe < 0xf0) goto LAB_2c61f3b0;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xe;
LAB_2c6201f4:
    iVar9 = iVar9 * iVar12 + 0x50;
    iVar9 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar9 >> 0x26) -
                        (short)(iVar9 >> 0x1f));
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c6201f4;
      }
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 10 + 0x50;
        iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar9 >> 0x26) -
                            (short)(iVar9 >> 0x1f));
        goto LAB_2c61f3b2;
      }
    }
LAB_2c61f3b0:
    iVar9 = 1;
  }
LAB_2c61f3b2:
  lv_obj_set_style_pad_left(iVar7);
  lv_obj_set_style_pad_right(iVar7,iVar9);
  lv_obj_set_style_pad_top(iVar7,iVar9);
  lv_obj_set_style_pad_bottom(iVar7,iVar9);
  iVar7 = *piVar14;
  uVar8 = puVar5[3];
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (iVar9 * 0xe < 0xf0) goto LAB_2c61f3fc;
    iVar9 = FUN_2c62a4c4(uVar8);
    iVar12 = 0xe;
LAB_2c620190:
    iVar9 = iVar9 * iVar12 + 0x50;
    iVar9 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar9 >> 0x26) -
                        (short)(iVar9 >> 0x1f));
  }
  else {
    if (*pcVar15 == '\x02') {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 0xc) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar12 = 0xc;
        goto LAB_2c620190;
      }
    }
    else {
      iVar9 = FUN_2c62a4c4(uVar8);
      if (0xef < iVar9 * 10) {
        iVar9 = FUN_2c62a4c4(uVar8);
        iVar9 = iVar9 * 10 + 0x50;
        iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620b68 * (longlong)iVar9 >> 0x26) -
                            (short)(iVar9 >> 0x1f));
        goto LAB_2c61f3fe;
      }
    }
LAB_2c61f3fc:
    iVar9 = 1;
  }
LAB_2c61f3fe:
  FUN_2c62c6f8(iVar7 + 0x218,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x220);
  }
  else {
    FUN_2c62ae04();
  }
  uVar8 = puVar5[3];
  iVar7 = *piVar14;
  if (*pcVar15 == '\x01') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (0xef < iVar9 * 0x18) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0x18;
LAB_2c62013e:
      iVar9 = iVar9 * iVar12 + 0x50;
      iVar9 = (int)(short)((short)(int)((longlong)DAT_2c6203fc * (longlong)iVar9 >> 0x26) -
                          (short)(iVar9 >> 0x1f));
      goto LAB_2c61f43e;
    }
  }
  else if (*pcVar15 == '\x02') {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (0xef < iVar9 * 0x14) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar12 = 0x14;
      goto LAB_2c62013e;
    }
  }
  else {
    iVar9 = FUN_2c62a4c4(uVar8);
    if (0xef < iVar9 * 0x10) {
      iVar9 = FUN_2c62a4c4(uVar8);
      iVar9 = iVar9 * 0x10 + 0x50;
      iVar9 = (int)(short)((short)(int)((longlong)DAT_2c620d04 * (longlong)iVar9 >> 0x26) -
                          (short)(iVar9 >> 0x1f));
      goto LAB_2c61f43e;
    }
  }
  iVar9 = 1;
LAB_2c61f43e:
  FUN_2c62c6c0(iVar7 + 0x220,iVar9);
  if (*pcVar4 == '\0') {
    lv_style_init_or_reset(*piVar14 + 0x240);
  }
  else {
    FUN_2c62ae04();
  }
  lv_obj_set_style_bg_opa(*piVar14 + 0x240,0xff);
  lv_obj_set_style_bg_color(*piVar14 + 0x240,0xffffffff);
  iVar7 = *piVar14;
  uVar8 = FUN_2c62ee64(0x12);
  FUN_2c62c710(iVar7 + 0x240,uVar8);
  lv_obj_set_style_radius(*piVar14 + 0x240,0x7fff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_74;
  if (iVar7 * 0xf < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 0xf + 0x50;
    uVar1 = (longlong)DAT_2c61ffd4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c768(iVar9 + 0x240,iVar7,(int)uVar1);
  FUN_2c62c780(*piVar14 + 0x240,0xffffffff);
  uVar8 = puVar5[3];
  iVar9 = *piVar14;
  iVar7 = FUN_2c62a4c4(uVar8);
  uVar1 = (ulonglong)extraout_r2_75;
  if (iVar7 * 5 < 0xf0) {
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_2c62a4c4(uVar8);
    iVar7 = iVar7 * 5 + 0x50;
    uVar1 = (longlong)DAT_2c61fbe4 * (longlong)iVar7;
    iVar7 = (int)(short)((short)(int)((longlong)uVar1 >> 0x26) - (short)(iVar7 >> 0x1f));
  }
  FUN_2c62c778(iVar9 + 0x240,iVar7,(int)uVar1);
  if ((param_1 == 0) || (puVar10 = (undefined4 *)FUN_2c5feea8(param_1), puVar5 == puVar10)) {
    FUN_2c603814(0);
  }
  uVar8 = DAT_2c61f84c;
  *pcVar4 = '\x01';
  return uVar8;
}

