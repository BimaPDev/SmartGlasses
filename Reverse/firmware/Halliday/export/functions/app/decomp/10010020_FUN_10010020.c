/* FUN_10010020 @ 0x10010020 */

void FUN_10010020(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 local_10 [3];
  undefined1 local_d;
  int local_c;
  undefined4 uStack_8;
  
  local_c = *DAT_10010060;
  _local_10 = CONCAT13(param_2,CONCAT12(0,CONCAT11(param_1,0xaa)));
  uStack_8 = param_3;
  FUN_100b6474(local_10,4,100);
  if (*DAT_10010060 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

