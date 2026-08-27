/* FUN_2c46d98c @ 0x2c46d98c */

undefined4 FUN_2c46d98c(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  local_c = *DAT_2c46d9cc;
  local_14 = *param_1;
  local_10 = *(undefined2 *)(param_1 + 1);
  local_e = param_3;
  FUN_2c46e1e8(&local_14,7);
  if (*DAT_2c46d9cc == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

