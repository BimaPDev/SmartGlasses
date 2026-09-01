/* FUN_100db060 @ 0x100db060 */

void FUN_100db060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 local_40;
  undefined1 auStack_3c [44];
  
  FUN_1011ea48(&local_40,0,0x30);
  FUN_100a5b78(((int)PTR_DAT_100db0b8 - (int)PTR_DAT_100db0bc) * 0x20 & 0xff00U | 0x8c0032,
               PTR_s__btsrv_hfp_ccwa_cb_100db0c4,PTR_s_Call_waiting_phone_number__s__ty_100db0c0,
               param_2,param_3);
  local_40 = param_1;
  sVar1 = FUN_10118a1c(auStack_3c,0x2c,PTR_DAT_100db0c8,param_2);
  FUN_100d44e4(0xcc,0x4d,&local_40,sVar1 + 4,0);
  return;
}

