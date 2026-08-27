/* FUN_2c5c0e68 @ 0x2c5c0e68 */

void FUN_2c5c0e68(void)

{
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_2c5c0ebc;
  local_1c = DAT_2c5c0eb0;
  local_10 = 0;
  local_20[0] = 5;
  local_18 = DAT_2c5c0eb8;
  uStack_14 = DAT_2c5c0eb4;
  FUN_2c5245b0(local_20);
  if (*DAT_2c5c0ebc == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

