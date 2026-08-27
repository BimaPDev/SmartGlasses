/* FUN_1403cee4 @ 0x1403cee4 */

undefined4 FUN_1403cee4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_1404d1d8;
  FUN_14048a70(&local_14,1,param_3,0);
  FUN_14048ac8(DAT_1404d1dc,local_14,uStack_10,1);
  if (*DAT_1404d1d8 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

