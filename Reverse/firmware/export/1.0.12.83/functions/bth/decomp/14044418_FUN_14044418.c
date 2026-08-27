/* FUN_14044418 @ 0x14044418 */

void FUN_14044418(undefined4 param_1,undefined1 param_2)

{
  undefined4 *local_124;
  undefined1 local_120 [4];
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined4 local_119;
  undefined2 local_115;
  int local_14;
  
  local_14 = *DAT_14044498;
  FUN_1402a6e8(4,0x325,DAT_1404449c,DAT_140444a0,DAT_14044490,DAT_14044494);
  local_120[0] = 4;
  local_11c = (undefined1)param_1;
  local_11b = param_2;
  FUN_14043500(param_1,&local_124);
  local_119 = *local_124;
  local_115 = *(undefined2 *)(local_124 + 1);
  local_11a = FUN_14043534(param_1);
  FUN_14041ad8(local_120,0);
  if (*DAT_14044498 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

