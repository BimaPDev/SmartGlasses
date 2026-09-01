/* FUN_1004fa28 @ 0x1004fa28 */

void FUN_1004fa28(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_1004fa84;
  iVar1 = FUN_1004f9b4();
  FUN_100a5b78(((int)PTR_DAT_1004fa88 - (int)PTR_DAT_1004fa8c) * 0x20 & 0xff00U | 0xb30033,
               PTR_s_stream_ble_tx_cfg_changed_1004fa98,PTR_s__s_attr__p__enable__d_1004fa94,
               PTR_s_WEST_TOPDIR_application_bt_watch_1004fa90,param_1,param_2);
  *(byte *)(*(int *)(iVar1 + 0x54) + 0x2c) =
       *(byte *)(*(int *)(iVar1 + 0x54) + 0x2c) & 0xf9 | (byte)((param_2 & 3) << 1);
  if (*(int *)PTR_DAT_1004fa84 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

