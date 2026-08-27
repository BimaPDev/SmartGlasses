/* FUN_2c47020c @ 0x2c47020c */

void FUN_2c47020c(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c470244;
  local_18 = *DAT_2c470248;
  uStack_14 = DAT_2c470248[1];
  uStack_10 = DAT_2c470248[2];
  FUN_2c486aac(3,&local_18);
  if (*DAT_2c470244 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

