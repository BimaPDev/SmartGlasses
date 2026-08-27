/* FUN_2c46bc28 @ 0x2c46bc28 */

void FUN_2c46bc28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uStack_d;
  int local_c;
  
  local_c = *DAT_2c46bc58;
  FUN_2c46bbec(param_1,&uStack_d,param_3,0);
  if (*DAT_2c46bc58 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

