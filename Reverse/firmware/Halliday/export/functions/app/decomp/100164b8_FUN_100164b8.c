/* FUN_100164b8 @ 0x100164b8 */

void FUN_100164b8(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_1001651c;
  local_18 = 0;
  uStack_14 = 0;
  local_10 = param_3 & 0xffff0000;
  FUN_100a4a98(&local_18);
  *(undefined1 *)(param_1 + 0x3a) = local_18._2_1_;
  *(undefined2 *)(param_1 + 0x38) = (undefined2)local_18;
  FUN_100a4afc(param_1 + 0x38);
  FUN_100a5b78((DAT_10016524 - DAT_10016520) * 0x20 & 0xff00U | 0x590031,DAT_1001652c,DAT_10016528);
  if (*DAT_1001651c != local_c) {
    FUN_1013cdc0();
  }
  return;
}

