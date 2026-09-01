/* FUN_100b4740 @ 0x100b4740 */

undefined4 FUN_100b4740(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  while( true ) {
    if (param_3 < 1) {
      return 0;
    }
    param_4 = FUN_100a0654(*param_1,param_2,param_3,param_4,puVar1,iVar2);
    if (param_4 < 1) break;
    param_3 = param_3 - param_4;
    param_2 = param_2 + param_4;
  }
  FUN_100a5b78(((int)PTR_DAT_100b4790 - (int)PTR_DAT_100b478c) * 0x20 & 0xff00U | 0x990012,
               PTR_s_svc_prot_get_rx_data_100b4798,PTR_s_need_read__d_bytes__but_only_got_100b4794,
               param_3,param_4);
  return 0xfffffffb;
}

