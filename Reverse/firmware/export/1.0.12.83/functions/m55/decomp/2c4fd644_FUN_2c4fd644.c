/* FUN_2c4fd644 @ 0x2c4fd644 */

void FUN_2c4fd644(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_c;
  
  local_c = *DAT_2c4fd67c;
  local_18 = 0;
  uStack_14 = 0;
  thunk_FUN_2c63b6c8(&local_18,0);
  if ((*DAT_2c4fd67c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_18,uStack_14,*DAT_2c4fd67c ^ local_c,0);
}

