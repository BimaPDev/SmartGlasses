/* FUN_10048d70 @ 0x10048d70 */

void FUN_10048d70(undefined4 param_1,ushort param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_10048db0;
  local_18 = 0x1fa;
  local_10 = (uint)param_2;
  local_14 = param_1;
  FUN_100506fc(&local_18);
  if (*DAT_10048db0 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

