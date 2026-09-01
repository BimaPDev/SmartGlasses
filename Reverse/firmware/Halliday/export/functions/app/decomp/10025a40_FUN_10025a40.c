/* FUN_10025a40 @ 0x10025a40 */

void FUN_10025a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10025a8c;
  FUN_100a5b78(((int)PTR_DAT_10025a84 - (int)PTR_DAT_10025a88) * 0x20 & 0xff00U | 0xbf0031,
               PTR_s_notify_pin_filter_set_enable_10025a94,
               PTR_s_notify_pin_filter_set_enable__d_10025a90,param_1,param_1,iVar1,param_3);
  *DAT_10025a98 = (char)param_1;
  if (*(int *)PTR_DAT_10025a8c != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

