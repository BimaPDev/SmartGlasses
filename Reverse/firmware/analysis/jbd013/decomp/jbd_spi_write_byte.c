/* FUN_2c497518 @ 0x2c497518 */

void FUN_2c497518(undefined1 param_1)

{
  int iVar1;
  undefined1 local_d;
  int local_c;
  
  local_c = *DAT_2c49756c;
  local_d = param_1;
  iVar1 = FUN_2c673fb8(&local_d,1,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb0,DAT_2c497578,DAT_2c497574,DAT_2c497570,iVar1);
  }
  do {
    iVar1 = FUN_2c673a78();
  } while (iVar1 != 0);
  if (*DAT_2c49756c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

