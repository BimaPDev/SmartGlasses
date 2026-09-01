/* FUN_10047f50 @ 0x10047f50 */

void FUN_10047f50(byte param_1)

{
  undefined1 uVar1;
  undefined4 local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  undefined2 local_10;
  int local_c;
  
  local_c = *DAT_10047fa4;
  local_10 = (ushort)param_1;
  uVar1 = FUN_1003f71c();
  local_1c = 0x1102;
  local_18 = &local_10;
  local_10 = CONCAT11(uVar1,(undefined1)local_10);
  local_14 = 2;
  FUN_100506fc(&local_1c);
  if (*DAT_10047fa4 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

