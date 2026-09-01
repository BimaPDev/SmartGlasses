/* FUN_100dafd8 @ 0x100dafd8 */

void FUN_100dafd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  FUN_100a5b78(((int)PTR_DAT_100db050 - (int)PTR_DAT_100db04c) * 0x20 & 0xff00U | 0xd3003f,
               PTR_s__btsrv_hfp_clcc_cb_100db058,PTR_s_list_current_calls_result_code__i_100db054,
               param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_48 = param_5;
  uStack_44 = param_6;
  local_58 = param_1;
  uStack_54 = param_2;
  local_50 = param_3;
  uStack_4c = param_4;
  FUN_10118a1c(auStack_40,0x18,PTR_DAT_100db05c,param_7);
  FUN_100d44e4(0xcc,0x51,&local_58,0x30,0);
  return;
}

