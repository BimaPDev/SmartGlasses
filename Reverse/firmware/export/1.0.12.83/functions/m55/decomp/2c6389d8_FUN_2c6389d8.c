/* FUN_2c6389d8 @ 0x2c6389d8 */

void FUN_2c6389d8(undefined4 param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  short sVar23;
  short *psVar24;
  int local_134;
  uint local_130;
  int local_128;
  code *local_120;
  short local_114;
  short local_112;
  short local_110;
  short local_10e;
  short local_10c;
  short local_10a;
  short local_108;
  short local_106;
  short local_104;
  short local_102;
  short local_100;
  short local_fe;
  undefined1 auStack_fc [24];
  undefined1 auStack_e4 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  short *local_d8;
  short *local_d4;
  undefined4 local_b0;
  short local_9c;
  undefined2 local_9a;
  short local_98;
  undefined2 local_96;
  short local_94;
  undefined2 local_92;
  short local_90;
  undefined2 local_8e;
  short local_8c;
  char local_89;
  char local_5c;
  undefined1 local_52;
  char local_38;
  int local_34;
  
  local_34 = *DAT_2c638cb0;
  iVar9 = FUN_2c602400();
  uVar10 = FUN_2c602608(param_1);
  FUN_2c607338(iVar9,&local_114);
  sVar3 = FUN_2c6033b4(iVar9,0,0x68);
  sVar4 = FUN_2c6033b4(iVar9,0,0x69);
  local_110 = local_110 + sVar3;
  local_10e = local_10e + sVar4;
  uVar11 = *(uint *)(iVar9 + 0x28);
  iVar14 = *(int *)(iVar9 + 0x2c);
  iVar17 = iVar14 - uVar11;
  if (iVar17 == 0) {
    local_114 = local_114 - sVar3;
    local_112 = local_112 - sVar4;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c639100,0x118,DAT_2c6390fc,DAT_2c6390f8,iVar14,uVar11);
  }
  iVar20 = (int)(short)((sVar3 + 1 + local_110) - local_114);
  iVar19 = (int)(short)((local_10e + sVar4 + 1) - local_112);
  local_130 = (uint)(0 < iVar14) & uVar11 >> 0x1f;
  if ((*(byte *)(iVar9 + 100) & 3) != 1) {
    local_130 = 0;
  }
  if (local_130 != 0) {
    local_130 = (uint)(*(uint *)(iVar9 + 0x30) == uVar11);
  }
  local_114 = local_114 - sVar3;
  local_112 = local_112 - sVar4;
  sVar5 = FUN_2c6033b4(iVar9,0,0x12);
  sVar6 = FUN_2c6033b4(iVar9,0,0x13);
  sVar7 = FUN_2c6033b4(iVar9,0,0x10);
  sVar8 = FUN_2c6033b4(iVar9,0,0x11);
  sVar4 = local_112 + sVar7;
  sVar23 = local_110 - sVar6;
  *(short *)(iVar9 + 0x36) = sVar4;
  sVar1 = local_10e - sVar8;
  sVar3 = local_114 + sVar5;
  psVar18 = (short *)(iVar9 + 0x34);
  *(short *)(iVar9 + 0x38) = sVar23;
  *(short *)(iVar9 + 0x3a) = sVar1;
  *(short *)(iVar9 + 0x34) = sVar3;
  if (iVar20 < iVar19) {
    local_128 = (int)(short)((sVar23 + 1) - sVar3);
    if (local_128 < 4) {
      iVar14 = iVar20;
      if (iVar20 < 0) {
        iVar14 = iVar20 + 1;
      }
      sVar3 = *(short *)(iVar9 + 0x14) + (short)(iVar14 >> 1);
      local_128 = 5;
      *(short *)(iVar9 + 0x34) = sVar3 + -2;
      *(short *)(iVar9 + 0x38) = sVar3 + 2;
    }
    psVar15 = (short *)(iVar9 + 0x36);
    psVar24 = (short *)(iVar9 + 0x3a);
    local_120 = DAT_2c6390f0;
    sVar4 = (sVar1 + 1) - sVar4;
    iVar14 = *(int *)(iVar9 + 0x5c);
    iVar22 = (int)sVar4;
    iVar16 = *(int *)(iVar9 + 0x28);
    local_134 = iVar22;
    if (iVar14 != -1) goto LAB_2c638b52;
LAB_2c638e1a:
    iVar14 = *(int *)(iVar9 + 0x48);
    sVar3 = (short)((iVar22 * (*(int *)(iVar9 + 0x30) - iVar16)) / iVar17);
    if (iVar14 != -1) goto LAB_2c638b90;
LAB_2c638e34:
    sVar23 = (short)((iVar22 * (*(int *)(iVar9 + 0x24) - iVar16)) / iVar17);
  }
  else {
    sVar4 = (sVar1 + 1) - sVar4;
    local_134 = (int)sVar4;
    if (local_134 < 4) {
      iVar14 = iVar19;
      if (iVar19 < 0) {
        iVar14 = iVar19 + 1;
      }
      local_134 = 5;
      sVar1 = *(short *)(iVar9 + 0x16) + (short)(iVar14 >> 1);
      sVar4 = 5;
      *(short *)(iVar9 + 0x36) = sVar1 + -2;
      *(short *)(iVar9 + 0x3a) = sVar1 + 2;
    }
    iVar14 = *(int *)(iVar9 + 0x5c);
    psVar24 = (short *)(iVar9 + 0x38);
    iVar22 = (int)(short)((sVar23 + 1) - sVar3);
    local_120 = DAT_2c638cb4;
    iVar16 = *(int *)(iVar9 + 0x28);
    psVar15 = psVar18;
    local_128 = iVar22;
    if (iVar14 == -1) goto LAB_2c638e1a;
LAB_2c638b52:
    sVar3 = (short)((iVar22 * (*(int *)(iVar9 + 0x54) - iVar16)) / iVar17);
    iVar14 = iVar14 * ((int)(short)((iVar22 * (*(int *)(iVar9 + 0x58) - iVar16)) / iVar17) -
                      (int)sVar3);
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    sVar3 = sVar3 + (short)((uint)iVar14 >> 8);
    iVar14 = *(int *)(iVar9 + 0x48);
    if (iVar14 == -1) goto LAB_2c638e34;
LAB_2c638b90:
    sVar23 = (short)((iVar22 * (*(int *)(iVar9 + 0x40) - iVar16)) / iVar17);
    iVar14 = iVar14 * ((int)(short)((iVar22 * (*(int *)(iVar9 + 0x44) - iVar16)) / iVar17) -
                      (int)sVar23);
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    sVar23 = sVar23 + (short)((uint)iVar14 >> 8);
  }
  cVar2 = FUN_2c6033b4(iVar9,0,0x16);
  local_d8 = psVar18;
  if ((cVar2 == '\x01') && (iVar19 <= iVar20)) {
    sVar23 = -sVar23;
    sVar3 = -sVar3;
    psVar21 = psVar15;
    psVar15 = psVar24;
LAB_2c638bf2:
    *psVar21 = sVar23 + *psVar15;
    sVar23 = *psVar15;
    *psVar15 = sVar3 + sVar23;
    if (local_130 == 0) {
LAB_2c638c12:
      iVar14 = (*local_120)(psVar18);
      if (iVar14 < 2) {
        FUN_2c600b9c(auStack_e4,uVar10);
        local_e0 = DAT_2c639104;
        local_b0 = 0x20000;
        local_dc = 0;
        FUN_2c602340(iVar9,0x1a,auStack_e4);
        FUN_2c602340(iVar9,0x1b,auStack_e4);
        goto LAB_2c638e9c;
      }
    }
    else {
      sVar3 = sVar3 + sVar23 + (short)((iVar22 * -*(int *)(iVar9 + 0x28)) / iVar17);
      if (sVar3 < *psVar21) {
        *psVar15 = sVar3;
      }
      else {
        *psVar15 = *psVar21;
        *psVar21 = sVar3;
      }
    }
  }
  else {
    psVar21 = psVar24;
    if (iVar19 <= iVar20) goto LAB_2c638bf2;
    *psVar15 = (*psVar24 + 1) - sVar23;
    sVar23 = *psVar24;
    *psVar24 = sVar23 - sVar3;
    if (local_130 == 0) goto LAB_2c638c12;
    sVar3 = ((sVar23 - sVar3) + 1) - (short)((iVar22 * -*(int *)(iVar9 + 0x28)) / iVar17);
    if (sVar3 < *psVar15) {
      *psVar24 = sVar3;
      sVar23 = sVar3;
      sVar3 = *psVar15;
    }
    else {
      *psVar24 = *psVar15;
      *psVar15 = sVar3;
      sVar23 = *psVar24;
    }
    if (sVar23 < sVar3) {
      *psVar15 = sVar23;
      *psVar24 = sVar3;
    }
  }
  FUN_2c61314c(&local_8c);
  FUN_2c6004cc(iVar9,0x20000,&local_8c);
  FUN_2c600b9c(auStack_e4,uVar10);
  local_dc = 0;
  local_b0 = 0x20000;
  local_e0 = DAT_2c638cb8;
  local_d4 = &local_8c;
  FUN_2c602340(iVar9,0x1a,auStack_e4);
  sVar3 = FUN_2c6033b4(iVar9,0,0xb);
  if (local_128 <= local_134) {
    local_134 = local_128;
  }
  iVar14 = iVar19;
  if (iVar20 <= iVar19) {
    iVar14 = iVar20;
  }
  iVar17 = iVar14 >> 1;
  if ((int)sVar3 <= iVar14 >> 1) {
    iVar17 = (int)sVar3;
  }
  iVar14 = local_134 >> 1;
  if ((int)local_8c <= local_134 >> 1) {
    iVar14 = (int)local_8c;
  }
  if (iVar20 < iVar19) {
    if (iVar14 * 2 < (int)(short)((*(short *)(iVar9 + 0x3a) + 1) - *(short *)(iVar9 + 0x36))) {
LAB_2c638ec8:
      local_89 = 0;
      local_5c = 0;
      local_52 = 0;
      FUN_2c61319c(uVar10,&local_8c,psVar18);
    }
  }
  else if (iVar14 * 2 < (int)(short)((*(short *)(iVar9 + 0x38) + 1) - *(short *)(iVar9 + 0x34)))
  goto LAB_2c638ec8;
  local_10c = *(short *)(iVar9 + 0x14) + sVar5;
  local_108 = *(short *)(iVar9 + 0x18) - sVar6;
  local_10a = *(short *)(iVar9 + 0x16) + sVar7;
  local_106 = *(short *)(iVar9 + 0x1a) - sVar8;
  FUN_2c6144a0(auStack_fc,&local_10c,iVar17,0);
  uVar12 = FUN_2c613e5c(auStack_fc,0);
  local_102 = local_112 + sVar7;
  local_100 = local_110 - sVar6;
  local_fe = local_10e - sVar8;
  local_104 = local_114 + sVar5;
  local_38 = 0;
  local_52 = 0;
  if (iVar20 < iVar19) {
    if ((short)((local_100 + 1) - local_104) < 4) {
      if (iVar20 < 0) {
        iVar20 = iVar20 + 1;
      }
      local_100 = *(short *)(iVar9 + 0x14) + (short)(iVar20 >> 1);
      local_104 = local_100 + -2;
      local_100 = local_100 + 2;
    }
  }
  else if ((short)((local_fe + 1) - local_102) < 4) {
    if (iVar19 < 0) {
      iVar19 = iVar19 + 1;
    }
    local_fe = *(short *)(iVar9 + 0x16) + (short)(iVar19 >> 1);
    local_102 = local_fe + -2;
    local_fe = local_fe + 2;
  }
  cVar2 = *(char *)(iVar9 + 0x65);
  if (cVar2 == '\0') {
    iVar14 = lv_mem_alloc(0x18);
    if (iVar14 == 0) {
LAB_2c638e54:
      uVar13 = 0xffffffff;
      FUN_2c61319c(uVar10,&local_8c,&local_104);
      local_89 = '\0';
      local_5c = local_89;
      local_38 = local_89;
      FUN_2c61319c(uVar10,&local_8c,psVar18);
      FUN_2c613f44(auStack_fc);
    }
    else {
      FUN_2c6144a0(iVar14,psVar18,(int)local_8c,0);
      uVar13 = FUN_2c613e5c(iVar14,0);
      FUN_2c61319c(uVar10,&local_8c,&local_104);
      local_89 = cVar2;
      local_5c = cVar2;
      local_38 = cVar2;
      FUN_2c61319c(uVar10,&local_8c,psVar18);
      FUN_2c613f44(auStack_fc);
      if (*(char *)(iVar9 + 0x65) == '\0') {
LAB_2c638dba:
        FUN_2c613f44(iVar14);
        FUN_2c62bea8(iVar14);
      }
    }
  }
  else {
    iVar14 = lv_mem_alloc(0x10);
    if (iVar14 == 0) goto LAB_2c638e54;
    local_9c = *(short *)(iVar9 + 0x34);
    local_90 = local_9c + sVar4;
    local_94 = *(short *)(iVar9 + 0x38);
    local_98 = local_94 - sVar4;
    local_9a = *(undefined2 *)(iVar9 + 0x36);
    local_92 = *(undefined2 *)(iVar9 + 0x3a);
    local_96 = local_9a;
    local_8e = local_92;
    FUN_2c61495c(iVar14,&local_9c,4);
    uVar13 = FUN_2c613e5c(iVar14,0);
    FUN_2c61319c(uVar10,&local_8c,&local_104);
    local_89 = '\0';
    local_5c = '\0';
    local_38 = '\0';
    FUN_2c61319c(uVar10,&local_8c,psVar18);
    FUN_2c613f44(auStack_fc);
    if (*(char *)(iVar9 + 0x65) != '\0') goto LAB_2c638dba;
  }
  FUN_2c613ee4(uVar13);
  FUN_2c613ee4(uVar12);
  FUN_2c602340(iVar9,0x1b,auStack_e4);
LAB_2c638e9c:
  if (*DAT_2c6390f4 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

