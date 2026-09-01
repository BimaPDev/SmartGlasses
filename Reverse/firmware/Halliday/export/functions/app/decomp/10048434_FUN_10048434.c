/* FUN_10048434 @ 0x10048434 */

void FUN_10048434(int param_1)

{
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  
  local_14 = *DAT_1004849c;
  FUN_100a5b78(DAT_100484a8 | (DAT_100484a0 - DAT_100484a4) * 0x20 & 0xff00U,DAT_100484b0,
               DAT_100484ac,param_1);
  local_24 = 0x805;
  local_20 = local_18;
  local_18[0] = param_1 == 0;
  local_1c = 1;
  FUN_100506fc(&local_24);
  if (*DAT_1004849c != local_14) {
    FUN_1013cdc0();
  }
  return;
}

