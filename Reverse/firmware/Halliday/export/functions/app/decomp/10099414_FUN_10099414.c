/* FUN_10099414 @ 0x10099414 */

void FUN_10099414(int param_1)

{
  int local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int local_28;
  int local_1c;
  undefined2 local_14;
  
  local_28 = FUN_1012691c(param_1,0x70000,0x65);
  if (local_28 == 0) {
    FUN_100932b0(param_1,DAT_10099470);
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 1;
  }
  else {
    FUN_10093284(&local_54);
    local_50 = DAT_10099470;
    local_34 = 1;
    uStack_30 = 1;
    local_2c = 0;
    local_38 = DAT_10099474;
    local_14 = 0xffff;
    local_54 = param_1;
    local_1c = local_28;
    FUN_1009331c(&local_54);
  }
  return;
}

