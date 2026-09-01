/* FUN_100d9f28 @ 0x100d9f28 */

void FUN_100d9f28(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*DAT_100d9f5c + 4);
  uVar1 = FUN_10131c1c();
  (*pcVar2)(uVar1,param_2);
  FUN_100a5b78(((int)PTR_DAT_100d9f64 - (int)PTR_DAT_100d9f60) * 0x20 & 0xff00U | 0x960031,
               PTR_s__btsrv_avrcp_ctrl_get_volume_cb_100d9f6c,
               PTR_s_Avrcp_remote_reg_notify_get_vol___100d9f68,*param_2);
  return;
}

