/* FUN_2c6485a8 @ 0x2c6485a8 */

uint FUN_2c6485a8(void)

{
  uint uVar1;
  int local_18;
  uint local_14;
  int local_c;
  
  local_c = *DAT_2c6485f8;
  FUN_2c644134(&local_18,0x400,0xffffffff,0);
  if (local_18 == 8) {
    uVar1 = (local_14 & 0x7ff) >> 10;
    FUN_2c644114(*DAT_2c6485fc,0xffff);
  }
  else {
    uVar1 = 0;
  }
  if (*DAT_2c6485f8 == local_c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

