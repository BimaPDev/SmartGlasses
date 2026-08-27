/* FUN_2c6489c0 @ 0x2c6489c0 */

void FUN_2c6489c0(undefined4 param_1)

{
  int in_stack_00000004;
  
  FUN_2c4c0248(param_1);
  FUN_2c648600(DAT_2c648a60);
  if (*DAT_2c648a58 == in_stack_00000004) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

