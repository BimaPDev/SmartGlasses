/* FUN_10035c70 @ 0x10035c70 */

void FUN_10035c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10035cb4;
  FUN_100a5b78(((int)PTR_DAT_10035cb8 - (int)PTR_DAT_10035cbc) * 0x20 & 0xff00U | 0xc70031,
               PTR_s_ring_click_and_down_handler_10035cc4,PTR_s_ring_click_and_down_handler_10035cc0
               ,PTR_DAT_10035cbc,param_1,iVar1,param_3);
  if (*(int *)PTR_DAT_10035cb4 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1004375c(0x4c,PTR_s_click_and_down_10035cc8);
  return;
}

