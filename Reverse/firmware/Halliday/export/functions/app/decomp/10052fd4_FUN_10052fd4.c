/* FUN_10052fd4 @ 0x10052fd4 */

void FUN_10052fd4(int param_1)

{
  undefined4 local_54;
  undefined1 auStack_50 [60];
  int local_14;
  
  local_14 = *DAT_10053020;
  if (param_1 != 0) {
    local_54 = 0;
    FUN_1011ea48(auStack_50,0,0x3c,0);
    FUN_1013d306(&local_54,0,0x40,DAT_10053024,param_1);
    FUN_10052c38(0,8,&local_54);
  }
  if (*DAT_10053020 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

