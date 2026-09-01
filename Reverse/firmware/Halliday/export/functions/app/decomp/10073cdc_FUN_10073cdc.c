/* FUN_10073cdc @ 0x10073cdc */

undefined4 FUN_10073cdc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_68;
  byte local_64 [4];
  undefined4 local_60;
  byte local_58;
  undefined2 local_54;
  byte local_51;
  ushort local_50;
  undefined4 local_4c;
  undefined1 *local_44;
  int local_40;
  undefined *puStack_3c;
  undefined1 auStack_38 [28];
  byte local_1c;
  
  FUN_1011ea48(&local_54,0);
  FUN_1011ea48(auStack_38,0,0x20);
  FUN_1011ea48(local_64,0,0x10);
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x1e) < 0) {
    return 0;
  }
  local_54 = local_54 & 0xfc7f | 0x80;
  local_4c = 0x80008;
  local_1c = local_1c & 0xbf | (*(byte *)(param_2 + 0x23) & 1) << 6;
  local_50 = (ushort)*(byte *)(param_2 + 0x22);
  local_64[0] = *(byte *)(param_2 + 8);
  local_44 = auStack_38;
  if ((local_64[0] < 2) || (local_64[0] == 3)) {
    iVar1 = FUN_1011f8d0(*(undefined4 *)(param_1 + 0x1c),0x112,local_64);
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_2 + 8);
      if (uVar2 == 3) {
        uVar2 = 1;
      }
      local_68 = uVar2 << 0x10;
      iVar1 = FUN_1011f8d0(*(undefined4 *)(param_1 + 0x1c),0x10f,&local_68);
      if (iVar1 == 0) {
        if ((byte)local_68 < 3) {
          local_4c = CONCAT22(1,(undefined2)local_4c);
        }
        goto LAB_10073da6;
      }
      uVar6 = ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00;
      uVar2 = DAT_10073f08;
      puVar3 = DAT_10073f04;
    }
    else {
      uVar6 = ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00;
      uVar2 = DAT_10073ef8;
      puVar3 = PTR_s_Failed_to_get_DAC_DMA_info_10073ef4;
    }
  }
  else {
    if ((local_64[0] != 2) ||
       (iVar1 = FUN_1011f8d0(*(undefined4 *)(param_1 + 0x20),0x112,local_64), iVar1 == 0)) {
LAB_10073da6:
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar1 = FUN_10112e84(local_60);
        *(int *)(param_1 + 0x18) = iVar1;
        if (iVar1 == 0) {
          FUN_100a5b78(DAT_10073efc |
                       ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00U,
                       PTR_s_audio_out_dma_prepare_10073ef0,DAT_10073f00,local_60);
          return 0xfffffffe;
        }
      }
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 0x14))
                        (*(int *)(param_1 + 0x18),0xff);
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 < 0) {
        FUN_100a5b78(DAT_10073f14 | ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00U
                     ,PTR_s_audio_out_dma_prepare_10073ef0,
                     PTR_s_Failed_to_request_dma_channel_10073f18);
        return 0xfffffffa;
      }
      bVar5 = 0;
      if (*(int *)(param_2 + 0x10) != 0) {
        puStack_3c = PTR_LAB_10073b28_1_10073f20;
        if ((*(byte *)(param_2 + 0x23) & 1) != 0) {
          puStack_3c = PTR_LAB_10073b64_1_10073f1c;
        }
        local_54._1_1_ = local_54._1_1_ | 4;
        local_40 = param_2;
        bVar5 = local_54._1_1_;
      }
      local_54 = CONCAT11(local_54._1_1_,(byte)local_54 & 0x80 | local_58 & 0x7f);
      iVar4 = (uint)*(byte *)(param_2 + 0x23) << 0x1e;
      bVar8 = iVar4 < 0;
      if (bVar8) {
        iVar4 = 1;
        bVar5 = local_51;
      }
      if (bVar8) {
        local_51 = bVar5 & 7 | (byte)(iVar4 << 3);
      }
      iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x18) + 8))
                        (*(int *)(param_1 + 0x18),iVar1,&local_54);
      if (iVar1 == 0) {
        if ((int)((uint)*(byte *)(param_2 + 0x23) << 0x1f) < 0) {
          iVar1 = *(int *)(param_2 + 0x1c);
          bVar8 = (int)((uint)*(byte *)(param_2 + 0x23) << 0x1e) < 0;
          if (bVar8) {
            iVar1 = iVar1 << 1;
          }
          uVar7 = *(undefined4 *)(param_2 + 0x18);
          if (!bVar8) {
            uVar7 = 0;
          }
          FUN_1011f8a8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 0x18),uVar7,iVar1);
        }
        *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 2;
        return 0;
      }
      uVar2 = ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00U | 0x3c00011;
      puVar3 = PTR_s_DMA_config_error_10073f24;
      goto LAB_10073d70;
    }
    uVar6 = ((int)PTR_DAT_10073eec - (int)PTR_DAT_10073ee8) * 0x20 & 0xff00;
    uVar2 = DAT_10073f10;
    puVar3 = DAT_10073f0c;
  }
  uVar2 = uVar2 | uVar6;
LAB_10073d70:
  FUN_100a5b78(uVar2,PTR_s_audio_out_dma_prepare_10073ef0,puVar3);
  return 0xfffffff2;
}

