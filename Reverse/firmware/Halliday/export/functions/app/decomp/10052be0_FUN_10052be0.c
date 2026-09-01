/* FUN_10052be0 @ 0x10052be0 */

void FUN_10052be0(int param_1,int param_2)

{
  undefined1 auStack_94 [64];
  undefined1 auStack_54 [64];
  int local_14;
  
  local_14 = *DAT_10052c34;
  FUN_1011ea48(auStack_94,0,0x80,0);
  if (param_1 != 0) {
    FUN_1011e9f8(auStack_94,param_1,0x3f);
  }
  if (param_2 != 0) {
    FUN_1011e9f8(auStack_54,param_2,0x3f);
  }
  FUN_10052a24(0x11,0,auStack_94,0x80);
  if (*DAT_10052c34 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

