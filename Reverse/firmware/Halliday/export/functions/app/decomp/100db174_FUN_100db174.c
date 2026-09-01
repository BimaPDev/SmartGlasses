/* FUN_100db174 @ 0x100db174 */

void FUN_100db174(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_100a5b78(((int)PTR_DAT_100db1b4 - (int)PTR_DAT_100db1b8) * 0x20 & 0xff00U | 0x350031,
               PTR_s__btsrv_hfp_call_cb_100db1c0,PTR_s_hf_call__d_100db1bc,param_2);
  if (param_2 == 0) {
    uVar1 = 10;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uVar1 = 5;
  }
  FUN_100d44a8(0xcc,0x35,param_1,uVar1);
  return;
}

