/* FUN_1403f59c @ 0x1403f59c */

undefined4 FUN_1403f59c(undefined4 param_1,undefined1 *param_2)

{
  undefined1 local_120 [4];
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  int local_14;
  
  local_14 = *DAT_1403f610;
  FUN_1402a6e8(4,0x5ca,DAT_1403f618,DAT_1403f614,DAT_1403f60c,DAT_1403f608,*param_2,param_2[1],
               param_2[2]);
  local_11c = *param_2;
  local_11b = param_2[1];
  local_11a = param_2[2];
  local_120[0] = 0x17;
  FUN_14041ad8(local_120,0);
  if (*DAT_1403f610 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

