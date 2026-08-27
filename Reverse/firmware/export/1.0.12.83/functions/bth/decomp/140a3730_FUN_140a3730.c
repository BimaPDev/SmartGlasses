/* FUN_140a3730 @ 0x140a3730 */

undefined4 FUN_140a3730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_58 [17];
  int local_14;
  
  local_14 = *DAT_140a3770;
  thunk_FUN_14041acc(DAT_140a3774,param_2,param_3,0);
  *DAT_140a3778 = 1;
  local_58[0] = 0;
  FUN_140a35e4(4,local_58,0x44);
  if (*DAT_140a3770 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

