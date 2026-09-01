/* FUN_10044954 @ 0x10044954 */

void FUN_10044954(void)

{
  undefined4 uVar1;
  undefined1 local_21;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *(int *)PTR_DAT_100449c4;
  local_20 = 0;
  local_1c = (undefined1 *)0x0;
  local_18 = 0;
  local_21 = 0;
  uVar1 = FUN_1001238c();
  local_21 = (undefined1)uVar1;
  FUN_100a5b78(((int)PTR_DAT_100449c8 - (int)PTR_DAT_100449cc) * 0x20 & 0xff00U | 0x3680031,
               PTR_s_ble_to_app_ota_state_100449d4,PTR_s_ble_to_app_ota_state_state___d_100449d0,
               uVar1);
  local_20 = CONCAT22(local_20._2_2_,0x201);
  local_1c = &local_21;
  local_18 = CONCAT13(local_18._3_1_,1);
  FUN_100506fc(&local_20);
  if (*(int *)PTR_DAT_100449c4 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

