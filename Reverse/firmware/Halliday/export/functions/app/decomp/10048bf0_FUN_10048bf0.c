/* FUN_10048bf0 @ 0x10048bf0 */

void FUN_10048bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_10048c34;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  (**(code **)(DAT_10048c38 + 0x28))();
  local_14 = 0;
  local_18 = 0x4fc;
  local_10 = 0;
  FUN_100506fc(&local_18);
  if (*DAT_10048c34 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

