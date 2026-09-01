/* FUN_10074ca0 @ 0x10074ca0 */

uint * FUN_10074ca0(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint local_40;
  ushort local_34 [2];
  ushort *local_30;
  uint local_2c;
  
  if (param_2 == (uint *)0x0) {
    FUN_100a5b78(DAT_10074f14 | (DAT_10074f10 - DAT_10074f0c) * 0x20 & 0xff00U,DAT_10074f1c,
                 DAT_10074f18);
    return (uint *)0xffffffea;
  }
  uVar6 = *param_2;
  if (uVar6 == DAT_10074f20) {
    bVar1 = (byte)param_2[3];
    if ((int)((uint)bVar1 << 0x1d) < 0) {
      return (uint *)0x0;
    }
    iVar12 = *(int *)(param_1 + 0x10);
    uVar2 = (DAT_10074f10 - DAT_10074f0c) * 0x20 & 0xff00;
    if (*(short *)((int)param_2 + 10) == 8) {
      uVar7 = (uint)*(byte *)(iVar12 + 0x35);
      uVar6 = (uint)*(byte *)(iVar12 + 0x34);
      if (uVar7 == 0) {
        local_34[0] = (ushort)*(byte *)(iVar12 + 0x35);
        local_30 = local_34;
        if (uVar6 != 0) {
          uVar13 = uVar6 + 1;
          *(char *)(iVar12 + 0x34) = (char)uVar13;
          *(uint **)(iVar12 + uVar6 * 4 + 0x2c) = param_2;
          if ((uVar13 & 0xff) != 0) {
            puVar10 = *(uint **)(iVar12 + 0x2c);
            uVar6 = (uint)(byte)puVar10[3];
            if (((uVar6 & 6) == 2) && (*(short *)((int)puVar10 + 10) == 8)) {
              local_34[0] = (ushort)puVar10[2];
              uVar6 = (uint)bVar1;
              puVar10 = param_2;
            }
            local_2c = uVar7;
            FUN_100a5b78(DAT_10074f3c | uVar2,DAT_10074f1c,DAT_10074f40,puVar10,uVar6);
            *(undefined1 *)(iVar12 + 0x34) = 0;
            return (uint *)0xfffffffd;
          }
          *(byte *)(param_2 + 3) = bVar1 | 4;
          local_2c = uVar13 & 0xff;
          puVar10 = (uint *)FUN_1011f90a(*(undefined4 *)(iVar12 + 0x1c),0x200,&local_30);
          uVar3 = DAT_10074f1c;
          if (puVar10 == (uint *)0x0) {
            uVar7 = uVar2 | DAT_10074f74;
            uVar6 = uVar2 | DAT_10074f78;
            puVar10 = (uint *)0x0;
            for (local_40 = 0; (local_40 & 0xff) < (uint)*(byte *)(iVar12 + 0x34);
                local_40 = local_40 + 1) {
              puVar8 = *(uint **)(iVar12 + (local_40 & 0xff) * 4 + 0x2c);
              puVar10 = (uint *)FUN_100749f0(*(undefined4 *)(param_1 + 0x10),puVar8);
              uVar13 = uVar2 | 0x3b40012;
              puVar4 = PTR_s_session__p_DMA_prepare_error__d_10074f4c;
              puVar9 = param_2;
              if ((puVar10 == (uint *)0x0) &&
                 (puVar10 = (uint *)FUN_1011f904(*(undefined4 *)(iVar12 + 0x18),puVar8[1]),
                 uVar13 = uVar6, puVar4 = PTR_s_session__p_DMA_start_error__d_10074f50,
                 puVar9 = puVar8, puVar10 == (uint *)0x0)) {
                FUN_100a5b78(uVar7,uVar3,PTR_s_session__p_started_10074f54,puVar8);
              }
              else {
                FUN_100a5b78(uVar13,uVar3,puVar4,puVar9,puVar10);
              }
            }
            *(undefined1 *)(iVar12 + 0x34) = 0;
            return puVar10;
          }
          FUN_100a5b78(DAT_10074f44 | uVar2,DAT_10074f1c,PTR_s_Failed_to_enable_ADC_err__d_10074f48,
                       puVar10);
          *(char *)(iVar12 + 0x34) = (char)uVar13;
          return puVar10;
        }
        local_34[0] = (ushort)param_2[2];
        local_2c = 1;
        puVar8 = (uint *)FUN_1011f90a(*(undefined4 *)(iVar12 + 0x1c),0x200,&local_30);
        uVar7 = DAT_10074f58;
        puVar5 = PTR_s_Failed_to_enable_ADC_err__d_10074f48;
        puVar11 = puVar8;
        if (puVar8 != (uint *)0x0) goto LAB_10074e84;
        puVar10 = (uint *)FUN_100749f0(*(undefined4 *)(param_1 + 0x10),param_2);
        uVar6 = DAT_10074f5c;
        puVar4 = PTR_s_session__p_DMA_prepare_error__d_10074f4c;
        puVar9 = puVar10;
        if (puVar10 == (uint *)0x0) {
          puVar10 = (uint *)FUN_1011f904(*(undefined4 *)(iVar12 + 0x18),param_2[1]);
          puVar4 = PTR_s_session__p_DMA_start_error__d_10074f50;
          uVar6 = DAT_10074f60;
          uVar7 = DAT_10074f64;
          goto joined_r0x10074eee;
        }
      }
      else {
        if (uVar6 != 0) {
          uVar2 = DAT_10074f2c | uVar2;
          uVar3 = DAT_10074f30;
          goto LAB_10074cec;
        }
        *(undefined1 *)(iVar12 + 0x34) = 1;
        *(uint **)(iVar12 + 0x2c) = param_2;
        *(char *)(iVar12 + 0x35) = (char)(uVar7 - 1);
        puVar10 = (uint *)0x0;
        uVar6 = DAT_10074f38;
        puVar4 = DAT_10074f34;
        puVar9 = (uint *)(uVar7 - 1 & 0xff);
      }
    }
    else {
      *(byte *)(param_2 + 3) = bVar1 | 4;
      puVar10 = (uint *)FUN_100749f0(*(undefined4 *)(param_1 + 0x10));
      uVar6 = DAT_10074f68;
      puVar4 = PTR_s_session__p_DMA_prepare_error__d_10074f4c;
      puVar9 = puVar10;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)FUN_1011f904(*(undefined4 *)(iVar12 + 0x18),param_2[1]);
        puVar4 = PTR_s_session__p_DMA_start_error__d_10074f50;
        uVar6 = DAT_10074f6c;
        uVar7 = DAT_10074f70;
joined_r0x10074eee:
        puVar5 = PTR_s_session__p_started_10074f54;
        puVar8 = param_2;
        puVar11 = (uint *)0x0;
        PTR_s_session__p_DMA_start_error__d_10074f50 = puVar4;
        puVar9 = puVar10;
        if (puVar10 == (uint *)0x0) {
LAB_10074e84:
          FUN_100a5b78(uVar7 | uVar2,DAT_10074f1c,puVar5,puVar8);
          return puVar11;
        }
      }
    }
    FUN_100a5b78(uVar6 | uVar2,DAT_10074f1c,puVar4,param_2,puVar9);
  }
  else {
    uVar2 = DAT_10074f24 | (DAT_10074f10 - DAT_10074f0c) * 0x20 & 0xff00U;
    uVar3 = DAT_10074f28;
LAB_10074cec:
    FUN_100a5b78(uVar2,DAT_10074f1c,uVar3,uVar6);
    puVar10 = (uint *)&DAT_fffffff2;
  }
  return puVar10;
}

