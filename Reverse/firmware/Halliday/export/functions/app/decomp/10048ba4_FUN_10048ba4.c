/* FUN_10048ba4 @ 0x10048ba4 */

void FUN_10048ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_10048be8;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  (**(code **)(DAT_10048bec + 0x24))();
  local_14 = 0;
  local_18 = 0x3fc;
  local_10 = 0;
  FUN_100506fc(&local_18);
  if (*DAT_10048be8 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

