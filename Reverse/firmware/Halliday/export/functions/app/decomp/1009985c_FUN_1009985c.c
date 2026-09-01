/* FUN_1009985c @ 0x1009985c */

void FUN_1009985c(int param_1)

{
  int local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20;
  
  if (*(short *)(param_1 + 0x44) == 0) {
    FUN_100997e0();
  }
  else {
    FUN_10093284(&local_4c);
    local_48 = DAT_1009989c;
    local_20 = (uint)*(ushort *)(param_1 + 0x44);
    local_2c = 0;
    uStack_28 = 0;
    local_24 = 1;
    local_30 = DAT_100998a0;
    local_40 = DAT_100998a4;
    local_4c = param_1;
    FUN_1009331c(&local_4c);
  }
  return;
}

