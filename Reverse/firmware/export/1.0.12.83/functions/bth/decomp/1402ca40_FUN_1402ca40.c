/* FUN_1402ca40 @ 0x1402ca40 */

void FUN_1402ca40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_1402ca88;
  local_18 = 0;
  local_20 = param_2;
  local_1c = param_3;
  FUN_1402be10(param_1,&local_20,1,param_4,param_5,param_6,0,0xfff);
  if (*DAT_1402ca88 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

