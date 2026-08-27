/* FUN_14038c94 @ 0x14038c94 */

void FUN_14038c94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_14038d00;
  FUN_1402a6e8(4,0x391,DAT_14038d08,DAT_14038d0c,DAT_14038d04,param_1,param_2,param_3,param_4);
  local_24 = *DAT_14038d10;
  local_20 = CONCAT13((char)param_4,CONCAT12((char)param_3,CONCAT11((char)param_2,(char)param_1)));
  FUN_140315b0(&local_24,8);
  if (*DAT_14038d00 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

