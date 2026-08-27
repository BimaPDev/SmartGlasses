/* FUN_2c593ce8 @ 0x2c593ce8 */

void FUN_2c593ce8(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  uStack_10 = *(undefined4 *)(DAT_2c593d24 + 4);
  local_c = *DAT_2c593d2c;
  local_14 = DAT_2c593d28;
  FUN_2c593c2c(param_1,&local_14,0);
  if (*DAT_2c593d2c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

