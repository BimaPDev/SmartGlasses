/* FUN_140a7480 @ 0x140a7480 */

void FUN_140a7480(int param_1)

{
  undefined1 auStack_34 [12];
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  int local_c;
  
  local_c = *DAT_140a74e8;
  FUN_1402a6e8(4,0x3dd,DAT_140a74f0,DAT_140a74ec,DAT_140a74e0,DAT_140a74e4,param_1);
  FUN_1402fe38(0);
  uStack_24 = param_1 == 0 | 0x50000;
  local_28 = 2;
  local_20 = 0;
  FUN_140b4a50(auStack_34);
  if (*DAT_140a74e8 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

