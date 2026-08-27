/* FUN_14038c20 @ 0x14038c20 */

void FUN_14038c20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  int local_14;
  
  local_14 = *DAT_14038c84;
  FUN_1402a6e8(4,0x382,DAT_14038c8c,DAT_14038c88,DAT_14038c80,param_1,param_2,param_3);
  local_18 = (undefined1)param_1;
  local_1c = *DAT_14038c90;
  local_17 = (undefined1)param_2;
  local_16 = (undefined1)param_3;
  FUN_140315b0(&local_1c,7);
  if (*DAT_14038c84 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

