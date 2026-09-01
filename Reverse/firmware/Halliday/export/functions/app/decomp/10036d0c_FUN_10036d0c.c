/* FUN_10036d0c @ 0x10036d0c */

void FUN_10036d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10036d58;
  FUN_100a5b78(((int)PTR_DAT_10036d50 - (int)PTR_DAT_10036d54) * 0x20 & 0xff00U | 0x1a0031,
               PTR_s_ring_set_connect_state_10036d60,PTR_s_ring_set_connect_state__d_10036d5c,
               param_1,param_1,iVar1,param_3);
  *DAT_10036d64 = (char)param_1;
  if (*(int *)PTR_DAT_10036d58 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

