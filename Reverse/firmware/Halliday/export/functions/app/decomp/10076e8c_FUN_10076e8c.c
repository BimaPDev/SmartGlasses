/* FUN_10076e8c @ 0x10076e8c */

int FUN_10076e8c(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  ushort local_28;
  byte local_26;
  byte bStack_25;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  uStack_24 = (undefined2)param_4;
  uStack_22 = (undefined2)((uint)param_4 >> 0x10);
  local_28 = (ushort)param_3;
  local_26 = (byte)((uint)param_3 >> 0x10);
  bStack_25 = (byte)((uint)param_3 >> 0x18);
  iVar15 = *(int *)(param_1 + 4);
  uVar13 = (DAT_100770d0 - DAT_100770d4) * 0x20 & 0xff00;
  if (param_2 == (byte *)0x0) {
    FUN_100a5b78(DAT_100770d8 | uVar13,DAT_100770e0,DAT_100770dc,DAT_100770d4,param_1,0);
    return -0x16;
  }
  puVar14 = *(ushort **)(param_2 + 8);
  uVar11 = param_1;
  pbVar10 = param_2;
  FUN_10077630(1);
  FUN_10056ca4(2,1);
  if ((puVar14 == (ushort *)0x0) || (*param_2 == 0)) {
    FUN_100a5b78(DAT_100770e4 | uVar13,DAT_100770e0,DAT_100770e8);
LAB_10076ee0:
    FUN_10077630(0);
    FUN_10056ca4(2,0);
    return -0x16;
  }
  if (*(short *)(param_2 + 2) != 8) {
    FUN_100a5b78(DAT_100770ec | uVar13,DAT_100770e0,DAT_100770f0,*(short *)(param_2 + 2),uVar11,
                 pbVar10);
    goto LAB_10076ee0;
  }
  iVar8 = *(int *)(**(int **)(param_1 + 4) + 0xc);
  if (iVar8 << 0x1f < 0) {
    FUN_100a5b78(uVar13 | 0x7f80031,PTR_s_adc_check_fifo_busy_1007710c,
                 PTR_s_ADC_FIFO0_now_is_working_10077108,iVar8,uVar11,pbVar10);
    FUN_10077630(0);
    FUN_10056ca4(2,0);
    return -0x10;
  }
  FUN_10055be0(*(undefined1 *)(iVar15 + 0x10));
  iVar8 = DAT_10077118;
  iVar15 = DAT_10077114;
  iVar16 = **(int **)(param_1 + 4);
  uVar6 = *(uint *)(iVar16 + 0x30);
  *(uint *)(iVar16 + 0x30) = uVar6 & 0xff3ffff3 | 0x8c0000;
  uVar9 = *(uint *)(iVar16 + 0x30) | 1;
  *(uint *)(iVar16 + 0x30) = uVar9;
  if ((uVar6 & 1) == 0) {
    FUN_100a5b78(DAT_100770f4 | uVar13,DAT_100770fc,DAT_100770f8,uVar9,uVar11,pbVar10);
    *(uint *)(iVar16 + 0x30) = *(uint *)(iVar16 + 0x30) | 2;
    if (*(int *)(iVar15 + 8) == iVar8) {
      FUN_1011598c(5000);
    }
    else {
      FUN_101153fc(5,0);
    }
    *(uint *)(iVar16 + 0x30) = *(uint *)(iVar16 + 0x30) & 0xfffffffd;
  }
  if (*(int *)(iVar15 + 8) == iVar8) {
    FUN_1011598c(1000);
  }
  else {
    FUN_101153fc(1,0);
  }
  *(uint *)(iVar16 + 0x30) = *(uint *)(iVar16 + 0x30) & 0xff3ffff3 | 0xc;
  iVar15 = **(int **)(param_1 + 4);
  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 0xc00000;
  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xfffffff3;
  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 8;
  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffff3f;
  *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 0x80;
  if ((*puVar14 & 0x5000) != 0) {
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xfffffffc;
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 3;
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) & 0xffffffcf;
    *(uint *)(iVar15 + 0x2c) = *(uint *)(iVar15 + 0x2c) | 0x30;
  }
  iVar15 = FUN_10076680(*(undefined4 *)(param_1 + 0x10),*param_2);
  if (iVar15 != 0) {
    FUN_100a5b78(DAT_10077100 | uVar13,DAT_100770e0,PTR_s_Failed_to_config_sample_rate__d_10077104,
                 *param_2);
    FUN_10077630(0);
    FUN_10056ca4(2,0);
    return -3;
  }
  piVar4 = *(int **)(param_1 + 4);
  bVar1 = param_2[4];
  *(uint *)(*piVar4 + 0xc) = *(uint *)(*piVar4 + 0xc) & 0xfffffffc;
  puVar12 = DAT_10077110;
  *DAT_10077110 = *DAT_10077110 & 0xfeffffff;
  uVar6 = *(uint *)(*piVar4 + 0xc) & 0xffffc000;
  if (bVar1 == 0) {
    uVar6 = uVar6 | 0x93;
  }
  else {
    uVar6 = uVar6 | 0x13;
  }
  *(uint *)(*piVar4 + 0xc) = uVar6 | 0x200;
  *puVar12 = *puVar12 | 0x1000000;
  bVar1 = *param_2;
  if (bVar1 < 0x11) {
    iVar15 = 1;
  }
  else if (bVar1 < 0x60) {
    iVar15 = 0;
  }
  else {
    iVar15 = 2;
  }
  puVar12 = (uint *)*piVar4;
  uVar6 = *puVar12 & 0xfffcffcf;
  if (bVar1 < 0x60) {
    uVar9 = uVar6;
    if ((bVar1 != 0x10) && (uVar9 = uVar6 | 0x10000, bVar1 != 0x18)) {
      if (bVar1 == 0x20) {
        uVar9 = uVar6 | 0x20000;
      }
      else if (bVar1 == 0x30) goto LAB_100770bc;
    }
  }
  else {
LAB_100770bc:
    uVar9 = uVar6 | 0x30000;
  }
  uVar2 = *puVar14;
  *puVar12 = uVar9 | iVar15 << 4;
  local_26 = 0;
  bStack_25 = 0;
  uStack_24 = 0;
  if ((int)((uint)*(byte *)((int)piVar4 + 0x1a) << 0x1b) < 0) {
    local_28 = uVar2;
    iVar15 = FUN_1006901c(&local_28);
    if (iVar15 == 0) {
      if (local_26 != 0) {
        if ((local_26 & 3) != 3) {
          puVar12[8] = puVar12[8] & 0xfff8ffff;
          puVar12[8] = puVar12[8] | 0x70000;
        }
        puVar12[8] = puVar12[8] & 0xfffffffc;
        puVar12[8] = puVar12[8] | 3;
        puVar12[8] = puVar12[8] | 0x800;
      }
      if (bStack_25 != 0) {
        if ((bStack_25 & 0xc) != 0xc) {
          puVar12[9] = puVar12[9] & 0xfff8ffff;
          puVar12[9] = puVar12[9] | 0x70000;
        }
        puVar12[9] = puVar12[9] & 0xfffffffc;
        puVar12[9] = puVar12[9] | 3;
        puVar12[9] = puVar12[9] | 0x800;
      }
      FUN_101153fc(0x14,0);
      if (local_26 != 0) {
        puVar12[8] = puVar12[8] & 0xfffff7ff;
      }
      if (bStack_25 != 0) {
        puVar12[9] = puVar12[9] & 0xfffff7ff;
      }
    }
    else {
      FUN_100a5b78(DAT_10077408 | uVar13,DAT_10077410,DAT_1007740c,uVar2);
    }
  }
  iVar8 = **(int **)(param_1 + 4);
  local_26 = '\0';
  bStack_25 = '\0';
  uStack_24 = 0;
  local_28 = uVar2;
  iVar15 = FUN_1006901c(&local_28);
  if (iVar15 == 0) {
    bVar3 = false;
    if (bStack_25 == '\0') {
      if (local_26 != '\0') goto LAB_1007729a;
    }
    else {
      bVar3 = true;
      if (local_26 != '\0') {
LAB_1007729a:
        *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) & 0xfffff80f | 0xc30;
        if (!bVar3) goto LAB_1007718a;
      }
      *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xfffff80f | 0xc30;
    }
  }
  else {
    FUN_100a5b78(DAT_10077414 | uVar13,DAT_10077418,DAT_1007740c,uVar2);
  }
LAB_1007718a:
  local_26 = 0;
  bStack_25 = 0;
  uStack_24 = 0;
  local_28 = uVar2;
  iVar15 = FUN_1006901c(&local_28);
  bVar1 = bStack_25;
  if (iVar15 != 0) {
    FUN_100a5b78(uVar13 | 0x6980011,DAT_1007741c,DAT_1007740c,uVar2);
    FUN_100a5b78(DAT_10077420 | uVar13,DAT_10077428,DAT_10077424,0xfffffffe);
    iVar15 = -2;
    goto LAB_100771c8;
  }
  if (local_26 != 0) {
    FUN_10076514(param_1,0,local_26 == 0xff);
  }
  if (bVar1 != 0) {
    FUN_10076514(param_1,1,bVar1 == 0xff);
  }
  uVar2 = *puVar14;
  iVar15 = **(int **)(param_1 + 4);
  *(uint *)(iVar15 + 0x28) = *(uint *)(iVar15 + 0x28) | 0x10000000;
  *(uint *)(iVar15 + 0x28) = *(uint *)(iVar15 + 0x28) | 0x400000;
  *(uint *)(iVar15 + 0x28) = *(uint *)(iVar15 + 0x28) | 6;
  local_26 = 0;
  bStack_25 = 0;
  uStack_24 = 0;
  local_28 = uVar2;
  iVar15 = FUN_1006901c(&local_28);
  if (iVar15 == 0) {
    pbVar10 = (byte *)(uint)bStack_25;
    uVar11 = (uint)local_26;
    FUN_100a5b78(DAT_1007742c | uVar13,DAT_10077434,DAT_10077430,uVar2,uVar11,pbVar10);
    uVar6 = (uint)local_26;
    iVar15 = **(int **)(param_1 + 4);
    if ((uVar6 - 1 & 0xff) < 0xfe) {
      if (1 < uVar6 - 2) {
        FUN_100a5b78(DAT_10077438 | uVar13,PTR_s___adc_ch0_analog_control_10077440,
                     PTR_s_invalid_input_0x_x_for_ADC0_1007743c,uVar6,uVar11,pbVar10);
        iVar15 = -0x16;
        goto LAB_10077362;
      }
      uVar9 = uVar6;
      if (uVar6 != 3) {
        uVar9 = DAT_1007744c;
      }
      uVar5 = DAT_10077448 & *(uint *)(iVar15 + 0x20);
      if (uVar6 != 3) {
        uVar5 = uVar9 | uVar5;
      }
      else {
        uVar5 = uVar5 | 0x1003c0;
      }
      *(uint *)(iVar15 + 0x20) = uVar5 | 0x30;
    }
    uVar6 = (uint)bStack_25;
    if ((uVar6 - 1 & 0xff) < 0xfe) {
      uVar9 = DAT_10077448 & *(uint *)(iVar15 + 0x24);
      if (uVar6 == 0xc) {
        uVar9 = uVar9 | 0x100300;
LAB_100773b4:
        uVar9 = uVar9 | 0xc0;
      }
      else {
        uVar9 = DAT_1007744c | uVar9;
        if ((int)(uVar6 << 0x1d) < 0) goto LAB_100773b4;
      }
      uVar5 = *(uint *)(iVar15 + 0x20);
      if ((int)(uVar6 << 0x1c) < 0) {
        uVar9 = uVar9 | 0x30;
      }
      if ((int)(uVar6 << 0x1f) < 0) {
        uVar5 = uVar5 | 0xc0;
      }
      *(uint *)(iVar15 + 0x20) = uVar5;
      *(uint *)(iVar15 + 0x24) = uVar9;
    }
    iVar15 = FUN_1007678c(param_1,*puVar14,puVar14 + 1);
    if (iVar15 == 0) {
      return 0;
    }
    uVar13 = DAT_10077450 | uVar13;
    puVar7 = DAT_10077454;
  }
  else {
    iVar15 = -2;
LAB_10077362:
    uVar13 = uVar13 | 0x8c00011;
    puVar7 = PTR_s_ADC_input_config_error__d_10077444;
  }
  FUN_100a5b78(uVar13,DAT_10077428,puVar7,iVar15,uVar11,pbVar10);
LAB_100771c8:
  FUN_1007676c(param_1);
  FUN_10077630(0);
  FUN_10056ca4(2,0);
  return iVar15;
}

