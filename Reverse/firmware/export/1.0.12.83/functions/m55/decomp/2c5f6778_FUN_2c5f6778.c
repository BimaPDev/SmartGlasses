/* FUN_2c5f6778 @ 0x2c5f6778 */

void FUN_2c5f6778(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *DAT_2c5f67c8;
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_2c66c4ec(param_2,param_2,param_3,0);
  }
  local_24 = param_2;
  FUN_2c5f5170(param_1,&local_24,param_3,param_4 != 0);
  if (*DAT_2c5f67c8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

