/* FUN_100dae5c @ 0x100dae5c */

void FUN_100dae5c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_100a5b78(((int)PTR_DAT_100daeac - (int)PTR_DAT_100daeb0) * 0x20 & 0xff00U | 0x460031,
               PTR_s__btsrv_hfp_call_setup_cb_100daeb8,PTR_s_hf_call_setup__d_100daeb4,param_2);
  switch(param_2) {
  case 0:
    uVar1 = 0xb;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 4;
    break;
  default:
    return;
  }
  FUN_100d44a8(0xcc,0x35,param_1,uVar1);
  return;
}

