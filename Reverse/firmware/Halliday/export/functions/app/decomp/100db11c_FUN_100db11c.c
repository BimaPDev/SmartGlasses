/* FUN_100db11c @ 0x100db11c */

void FUN_100db11c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_100a5b78(((int)PTR_DAT_100db164 - (int)PTR_DAT_100db168) * 0x20 & 0xff00U | 0x5f0031,
               PTR_s__btsrv_hfp_call_held_cb_100db170,PTR_s_hf_call_held__d_100db16c,param_2);
  if (param_2 == 1) {
    uVar1 = 0xd;
  }
  else if (param_2 == 2) {
    uVar1 = 0xc;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar1 = 0xe;
  }
  FUN_100d44a8(0xcc,0x35,param_1,uVar1);
  return;
}

