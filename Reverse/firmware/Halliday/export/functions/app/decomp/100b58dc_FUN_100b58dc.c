/* FUN_100b58dc @ 0x100b58dc */

int FUN_100b58dc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1012da4a(PTR_s__NAND__100b5980);
  uVar2 = ((int)PTR_DAT_100b5984 - (int)PTR_DAT_100b5988) * 0x20 & 0xff00;
  if ((iVar1 == 0) && (iVar1 = FUN_100b5864(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)) {
    FUN_100a5b78(uVar2 | 0x610011,PTR_s_ota_backend_sdcard_open_100b5990,
                 PTR_s_cannot_found_ota_file___s__in_sd_100b598c,*(undefined4 *)(param_1 + 0x14));
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_100a11ec(*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_100a5b78(uVar2 | 0x670011,PTR_s_ota_backend_sdcard_open_100b5990,
                   PTR_s_stream_create_failed_100b5994,0);
      iVar1 = -5;
    }
    else {
      FUN_100a5b78(uVar2 | 0x6b0031,PTR_s_ota_backend_sdcard_open_100b5990,
                   PTR_s_create_stream__p_100b5998,iVar1);
      iVar1 = FUN_100a03c0(*(undefined4 *)(param_1 + 0xc),1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 1;
        FUN_100a5b78(uVar2 | 0x740031,PTR_s_ota_backend_sdcard_open_100b5990,
                     PTR_s_open_stream__p_100b59a0,*(undefined4 *)(param_1 + 0xc));
      }
      else {
        FUN_100a5b78(uVar2 | 0x6e0011,PTR_s_ota_backend_sdcard_open_100b5990,
                     PTR_s_stream_open_failed_1014e08d_0x17_100b599c);
      }
    }
  }
  return iVar1;
}

