/* FUN_100316a8 @ 0x100316a8 */

void FUN_100316a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r2;
  undefined8 local_18;
  undefined4 local_10;
  int local_c;
  
  local_18 = CONCAT44(param_2,param_1);
  local_c = *DAT_100316cc;
  local_10 = 0;
  if (*DAT_100316cc != local_c) {
    local_10 = param_1;
    local_18 = FUN_1013cdc0();
    local_10 = extraout_r2;
  }
  local_c = *DAT_100484f8;
  FUN_101188d0(DAT_100484fc,(int)((ulonglong)local_18 >> 0x20),local_10,0);
  local_18._4_4_ = 0;
  local_18._0_4_ = 0x905;
  local_10 = 0;
  FUN_100506fc(&local_18);
  if (*DAT_100484f8 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

