/* FUN_10041ef4 @ 0x10041ef4 */

void FUN_10041ef4(undefined4 param_1)

{
  undefined1 auStack_20 [2];
  undefined1 local_1e;
  undefined4 local_18;
  int local_c;
  
  local_c = *DAT_10041f30;
  FUN_1011ea48(auStack_20,0,0x14,0);
  local_1e = 0x89;
  local_18 = param_1;
  FUN_1009ece8(DAT_10041f34,auStack_20);
  if (*DAT_10041f30 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

