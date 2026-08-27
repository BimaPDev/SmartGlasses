/* FUN_2c49b5d0 @ 0x2c49b5d0 */

void FUN_2c49b5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte local_d;
  int local_c;
  
  local_c = *DAT_2c49b61c;
  iVar1 = FUN_2c49b318(0x1d,&local_d,param_3,0);
  if (iVar1 == 0) {
    if (-1 < (char)local_d) {
      local_d = local_d | 0x80;
      FUN_2c49b2c0(0x1d);
    }
  }
  if (*DAT_2c49b61c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

