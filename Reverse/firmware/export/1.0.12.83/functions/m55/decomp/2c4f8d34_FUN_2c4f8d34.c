/* FUN_2c4f8d34 @ 0x2c4f8d34 */

undefined4 FUN_2c4f8d34(undefined2 param_1)

{
  undefined2 local_90 [66];
  int local_c;
  
  local_c = *DAT_2c4f8d70;
  FUN_2c674268(local_90,0,0x84,0);
  local_90[0] = param_1;
  FUN_2c4f895c(local_90);
  if (*DAT_2c4f8d70 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

