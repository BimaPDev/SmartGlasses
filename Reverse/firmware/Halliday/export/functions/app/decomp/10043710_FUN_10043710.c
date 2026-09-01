/* FUN_10043710 @ 0x10043710 */

void FUN_10043710(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_10043758;
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  FUN_100436c8();
  local_10 = local_10 & 0xffff0000;
  local_18 = 0x8000000;
  local_14 = 0x7a000b;
  FUN_10043300(&local_18);
  if (*DAT_10043758 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

