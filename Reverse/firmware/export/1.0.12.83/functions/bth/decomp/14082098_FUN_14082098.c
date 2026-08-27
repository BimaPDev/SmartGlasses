/* FUN_14082098 @ 0x14082098 */

int FUN_14082098(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 local_11c [7];
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc [7];
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c [7];
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c [7];
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  iVar1 = DAT_1408221c;
  iVar7 = *(int *)(DAT_1408221c + 8);
  local_1c = *DAT_14082220;
  if (iVar7 == 0) {
    puVar2 = (undefined4 *)FUN_140759b8(0x100);
    *(undefined4 **)(iVar1 + 8) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14082234);
    }
    puVar10 = local_11c;
    local_11c[0] = *DAT_14082224;
    local_11c[1] = DAT_14082224[1];
    local_11c[2] = DAT_14082224[2];
    local_11c[3] = DAT_14082224[3];
    local_11c[4] = DAT_14082224[4];
    local_11c[5] = DAT_14082224[5];
    local_11c[6] = DAT_14082224[6];
    uStack_100 = DAT_14082224[7];
    local_fc = DAT_14082224[8];
    uStack_f8 = DAT_14082224[9];
    uStack_f4 = DAT_14082224[10];
    uStack_f0 = DAT_14082224[0xb];
    local_ec = DAT_14082224[0xc];
    uStack_e8 = DAT_14082224[0xd];
    uStack_e4 = DAT_14082224[0xe];
    uStack_e0 = DAT_14082224[0xf];
    puVar9 = local_dc;
    puVar8 = puVar2;
    do {
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar11 = puVar10 + 4;
      puVar10 = puVar10 + 4;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8 = puVar8 + 4;
    } while (puVar11 != puVar9);
    local_dc[0] = *DAT_14082228;
    local_dc[1] = DAT_14082228[1];
    local_dc[2] = DAT_14082228[2];
    local_dc[3] = DAT_14082228[3];
    local_dc[4] = DAT_14082228[4];
    local_dc[5] = DAT_14082228[5];
    local_dc[6] = DAT_14082228[6];
    uStack_c0 = DAT_14082228[7];
    local_bc = DAT_14082228[8];
    uStack_b8 = DAT_14082228[9];
    uStack_b4 = DAT_14082228[10];
    uStack_b0 = DAT_14082228[0xb];
    local_ac = DAT_14082228[0xc];
    uStack_a8 = DAT_14082228[0xd];
    uStack_a4 = DAT_14082228[0xe];
    uStack_a0 = DAT_14082228[0xf];
    puVar10 = local_9c;
    puVar8 = puVar2 + 0x10;
    do {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      puVar11 = puVar9 + 4;
      puVar9 = puVar9 + 4;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8 = puVar8 + 4;
    } while (puVar11 != puVar10);
    local_9c[0] = *DAT_1408222c;
    local_9c[1] = DAT_1408222c[1];
    local_9c[2] = DAT_1408222c[2];
    local_9c[3] = DAT_1408222c[3];
    local_9c[4] = DAT_1408222c[4];
    local_9c[5] = DAT_1408222c[5];
    local_9c[6] = DAT_1408222c[6];
    uStack_80 = DAT_1408222c[7];
    local_7c = DAT_1408222c[8];
    uStack_78 = DAT_1408222c[9];
    uStack_74 = DAT_1408222c[10];
    uStack_70 = DAT_1408222c[0xb];
    local_6c = DAT_1408222c[0xc];
    uStack_68 = DAT_1408222c[0xd];
    uStack_64 = DAT_1408222c[0xe];
    uStack_60 = DAT_1408222c[0xf];
    puVar9 = local_5c;
    puVar8 = puVar2 + 0x20;
    do {
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar11 = puVar10 + 4;
      puVar10 = puVar10 + 4;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8 = puVar8 + 4;
    } while (puVar11 != puVar9);
    local_5c[0] = *DAT_14082230;
    local_5c[1] = DAT_14082230[1];
    local_5c[2] = DAT_14082230[2];
    local_5c[3] = DAT_14082230[3];
    local_5c[4] = DAT_14082230[4];
    local_5c[5] = DAT_14082230[5];
    local_5c[6] = DAT_14082230[6];
    uStack_40 = DAT_14082230[7];
    local_3c = DAT_14082230[8];
    uStack_38 = DAT_14082230[9];
    uStack_34 = DAT_14082230[10];
    uStack_30 = DAT_14082230[0xb];
    local_2c = DAT_14082230[0xc];
    uStack_28 = DAT_14082230[0xd];
    uStack_24 = DAT_14082230[0xe];
    uStack_20 = DAT_14082230[0xf];
    puVar8 = puVar2 + 0x30;
    do {
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      piVar12 = puVar9 + 4;
      puVar9 = puVar9 + 4;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      puVar8 = puVar8 + 4;
    } while (piVar12 != &local_1c);
    if (*(char *)((int)puVar2 + 0xc1) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14082238);
    }
    iVar7 = *(int *)(iVar1 + 8);
  }
  if (*DAT_14082220 == local_1c) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

