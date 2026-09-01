/* FUN_1004453c @ 0x1004453c */

undefined4 FUN_1004453c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10044584;
  FUN_100a5b78(((int)PTR_DAT_10044588 - (int)PTR_DAT_1004458c) * 0x20 & 0xff00U | 0x2740031,
               PTR_s__ble_rx_shipping_mode_command_10044594,
               PTR_s__ble_rx_shipping_mode_command_10044590,PTR_DAT_1004458c,param_1,iVar1,param_3);
  FUN_1001c6bc();
  FUN_1003f888(0);
  if (*(int *)PTR_DAT_10044584 != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

