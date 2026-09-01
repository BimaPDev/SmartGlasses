/* FUN_10035c14 @ 0x10035c14 */

void FUN_10035c14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10035c58;
  FUN_100a5b78(((int)PTR_DAT_10035c5c - (int)PTR_DAT_10035c60) * 0x20 & 0xff00U | 0xc10031,
               PTR_s_ring_click_and_up_handler_10035c68,PTR_s_ring_click_and_up_handler_10035c64,
               PTR_DAT_10035c60,param_1,iVar1,param_3);
  if (*(int *)PTR_DAT_10035c58 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1004375c(0x4c,PTR_s_click_and_up_10035c6c);
  return;
}

