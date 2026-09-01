/* FUN_100749f0 @ 0x100749f0 */

undefined4 FUN_100749f0(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint local_68;
  undefined2 local_64 [2];
  undefined4 local_60;
  byte local_58;
  undefined2 local_54;
  byte local_51;
  ushort local_50;
  undefined2 local_4c;
  undefined1 *local_44;
  int local_40;
  undefined *puStack_3c;
  undefined1 auStack_38 [28];
  undefined1 local_1c;
  
  FUN_1011ea48(&local_54,0);
  FUN_1011ea48(auStack_38,0,0x20);
  FUN_1011ea48(local_64,0,0x10);
  local_54 = 0x100;
  local_1c = 0x80;
  local_50 = (ushort)*(byte *)(param_2 + 0xe);
  sVar1 = *(short *)(param_2 + 10);
  local_44 = auStack_38;
  if (sVar1 == 8) {
    local_64[0] = *(undefined2 *)(param_2 + 8);
    iVar3 = FUN_1011f90a(*(undefined4 *)(param_1 + 0x1c),0x111,local_64);
    if (iVar3 == 0) {
      local_68 = (uint)*(ushort *)(param_2 + 8) << 0x10;
      iVar3 = FUN_1011f90a(*(undefined4 *)(param_1 + 0x1c),0x10f,&local_68);
      if (iVar3 == 0) {
        if ((local_68 & 0xfff8) == 0) {
          local_4c = 1;
        }
        goto LAB_10074a9a;
      }
      uVar4 = ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U | 0x1ea0000;
      puVar6 = PTR_s_Failed_to_get_DRQ_level_10074c70;
    }
    else {
      uVar4 = ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U | 0x1dc0000;
      puVar6 = PTR_s_Failed_to_get_ADC_DMA_info_10074c60;
    }
  }
  else {
    if (sVar1 == 0x10) {
      iVar3 = FUN_1011f90a(*(undefined4 *)(param_1 + 0x20),0x111,local_64);
      if (iVar3 == 0) {
LAB_10074a9a:
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar3 = FUN_10112e84(local_60);
          *(int *)(param_1 + 0x18) = iVar3;
          if (iVar3 == 0) {
            FUN_100a5b78(DAT_10074c68 |
                         ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U,
                         PTR_s_audio_in_dma_prepare_10074c64,PTR_s_Bind_DMA_device__s_error_10074c6c
                         ,local_60);
            return 0xfffffffe;
          }
        }
        iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 0x14))
                          (*(int *)(param_1 + 0x18),0xff);
        *(int *)(param_2 + 4) = iVar3;
        if (iVar3 < 0) {
          FUN_100a5b78(DAT_10074c84 |
                       ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U,
                       PTR_s_audio_in_dma_prepare_10074c64,
                       PTR_s_Failed_to_request_dma_channel_10074c88);
          return 0xfffffffa;
        }
        bVar2 = (byte)local_54 & 0x80 | local_58 & 0x7f;
        local_54 = CONCAT11(local_54._1_1_,bVar2);
        if (*(int *)(param_2 + 0x10) != 0) {
          puStack_3c = PTR_FUN_10074904_1_10074c8c;
          local_54 = CONCAT11(local_54._1_1_,bVar2) | 0x400;
          local_40 = param_2;
        }
        if ((int)((uint)*(byte *)(param_2 + 0x20) << 0x1f) < 0) {
          local_51 = local_51 & 7 | 8;
        }
        iVar3 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x18) + 8))
                          (*(int *)(param_1 + 0x18),iVar3,&local_54);
        if (iVar3 == 0) {
          if (*(int *)(param_2 + 0x18) == 0) {
            return 0;
          }
          FUN_100a5b78(DAT_10074c98 |
                       ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U,
                       PTR_s_audio_in_dma_prepare_10074c64,DAT_10074c9c,*(int *)(param_2 + 0x18),
                       *(undefined4 *)(param_2 + 0x1c));
          bVar2 = *(byte *)(param_2 + 0x20);
          iVar3 = *(int *)(param_2 + 0x1c);
          if ((bVar2 & 1) == 0) {
            iVar8 = *(int *)(param_2 + 0x18);
            iVar7 = 0;
          }
          else {
            iVar5 = iVar3 << 1;
            if ((bVar2 & 6) == 0) {
              iVar7 = 0x2000000;
              iVar8 = *(int *)(param_2 + 0x18);
              iVar3 = iVar5;
            }
            else if ((bVar2 & 6) == 4) {
              iVar8 = *(int *)(param_2 + 0x18);
              iVar7 = iVar3 + iVar8;
              iVar3 = iVar5;
            }
            else {
              if ((bVar2 & 6) != 2) {
                return 0;
              }
              iVar8 = 0x2000000;
              iVar7 = *(int *)(param_2 + 0x18);
              iVar3 = iVar5;
            }
          }
          FUN_1011f8ea(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 4),iVar7,iVar8,
                       iVar3);
          return 0;
        }
        iVar3 = (int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c;
        uVar4 = DAT_10074c94;
        puVar6 = PTR_s_DMA_config_error_10074c90;
      }
      else {
        iVar3 = (int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c;
        uVar4 = DAT_10074c78;
        puVar6 = PTR_s_Failed_to_get_I2SRX_DMA_info_10074c74;
      }
      uVar4 = uVar4 | iVar3 * 0x20 & 0xff00U;
      goto LAB_10074a68;
    }
    if (sVar1 != 0x20) {
      FUN_100a5b78(((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U | 0x1f80011,
                   PTR_s_audio_in_dma_prepare_10074c64,DAT_10074c80);
      return 0xffffffea;
    }
    iVar3 = FUN_1011f90a(*(undefined4 *)(param_1 + 0x24),0x111,local_64);
    if (iVar3 == 0) goto LAB_10074a9a;
    uVar4 = ((int)PTR_DAT_10074c58 - (int)PTR_DAT_10074c5c) * 0x20 & 0xff00U | 0x1f40000;
    puVar6 = DAT_10074c7c;
  }
  uVar4 = uVar4 | 0x11;
LAB_10074a68:
  FUN_100a5b78(uVar4,PTR_s_audio_in_dma_prepare_10074c64,puVar6);
  return 0xfffffff2;
}

