/* FUN_2c5e4068 @ 0x2c5e4068 */

void FUN_2c5e4068(undefined4 param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_2c5e40ac;
  local_1c = 0;
  local_10 = 1;
  uStack_14 = 0;
  local_18 = param_1;
  FUN_2c5e4008(&local_1c);
  if (*DAT_2c5e40ac == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

