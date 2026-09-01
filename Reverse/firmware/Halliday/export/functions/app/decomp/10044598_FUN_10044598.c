/* FUN_10044598 @ 0x10044598 */

undefined4 FUN_10044598(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_100445e8;
  FUN_100a5b78(((int)PTR_DAT_100445e0 - (int)PTR_DAT_100445e4) * 0x20 & 0xff00U | 0x27c0031,
               PTR_s__ble_rx_updata_param_command_100445f0,
               PTR_s_app__ble_rx_updata_param_command_100445ec,*param_1,param_1,iVar1,param_3);
  FUN_10131906(*param_1);
  if (*(int *)PTR_DAT_100445e8 != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

