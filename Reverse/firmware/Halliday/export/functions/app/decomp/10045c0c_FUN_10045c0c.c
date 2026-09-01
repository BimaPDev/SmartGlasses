/* FUN_10045c0c @ 0x10045c0c */

void FUN_10045c0c(void)

{
  undefined1 local_19;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *(int *)PTR_DAT_10045c84;
  local_19 = 0;
  local_19 = (**(code **)(PTR_DAT_10045c88 + 0x1c))();
  local_18 = 0x4402;
  local_14 = &local_19;
  local_10 = 0x80001;
  FUN_100506fc(&local_18);
  FUN_100a5b78(((int)PTR_DAT_10045c90 - (int)PTR_DAT_10045c8c) * 0x20 & 0xff00U | 0x6800031,
               PTR_s_ble_to_app_screen_zoom_10045c98,PTR_s_ble_to_app_screen_zoom_zoom_leve_10045c94
               ,local_19);
  if (*(int *)PTR_DAT_10045c84 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

