/* FUN_100c0470 @ 0x100c0470 */

void FUN_100c0470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined4 local_24;
  
  FUN_1011ea48(auStack_2c,0,0x14);
  puVar1 = PTR_DAT_100c04c8;
  local_2a = 0xc9;
  local_29 = (undefined1)param_1;
  local_28 = (undefined1)param_3;
  local_24 = param_2;
  FUN_1009ece8(PTR_s_dual_ble_100c04c4,auStack_2c);
  FUN_100a5b78(((int)puVar1 - (int)PTR_DAT_100c04cc) * 0x20 & 0xff00U | 0xa30033,
               PTR_s_dualble_send_msg_to_app_100c04d4,
               PTR_s_dualble_send_event_code_0x_x__st_100c04d0,param_1,param_2,param_3);
  return;
}

