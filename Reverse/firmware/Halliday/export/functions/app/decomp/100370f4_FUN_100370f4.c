/* FUN_100370f4 @ 0x100370f4 */

void FUN_100370f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_c = *DAT_10037118;
  uStack_8 = 0;
  if (*DAT_10037118 != local_c) {
    local_10 = param_1;
    uStack_8 = param_3;
    param_1 = FUN_1013cdc0();
    uStack_8 = extraout_r2;
  }
  local_c = *(int *)PTR_DAT_100370e0;
  local_10 = CONCAT13((char)((uint)param_1 >> 0x18),0x203);
  FUN_100358f0(0xf0,&local_10,3);
  FUN_100a5b78(((int)PTR_DAT_100370e8 - (int)PTR_DAT_100370e4) * 0x20 & 0xff00U | 0x10a0031,
               PTR_s_notify_ring_to_disconnect_100370f0,PTR_s_notify_ring_to_disconnect_100370ec);
  if (*(int *)PTR_DAT_100370e0 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

