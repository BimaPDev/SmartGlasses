/* FUN_2c46cd4c @ 0x2c46cd4c */

void FUN_2c46cd4c(int param_1,int param_2,undefined4 param_3)

{
  int local_38 [7];
  int local_1c;
  
  local_1c = *DAT_2c46cff8;
  local_38[0] = 0;
  if (param_1 < 2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe,DAT_2c46d004,DAT_2c46d000,DAT_2c46d024);
  }
  FUN_2c46c9d8(local_38,0x38,param_3,0);
  if (local_38[0] != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18,DAT_2c46d004,DAT_2c46d000,DAT_2c46cffc,*(undefined4 *)(param_2 + 4));
  }
  if (*DAT_2c46cff8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

