/* FUN_140443a8 @ 0x140443a8 */

void FUN_140443a8(undefined1 param_1,undefined1 param_2)

{
  undefined1 local_120 [4];
  undefined1 local_11c;
  undefined1 local_11b;
  int local_14;
  
  local_14 = *DAT_14044414;
  FUN_1402a6e8(4,0x319,DAT_1404440c,DAT_14044410,DAT_14044404,DAT_14044408);
  local_120[0] = 0x14;
  local_11c = param_1;
  local_11b = param_2;
  FUN_14041ad8(local_120,0);
  if (*DAT_14044414 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

