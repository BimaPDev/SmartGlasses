/* FUN_2c4fd2b0 @ 0x2c4fd2b0 */

void FUN_2c4fd2b0(void)

{
  int extraout_r1;
  bool bVar1;
  undefined1 auStack_4c [8];
  int local_44;
  undefined1 auStack_2c [8];
  int local_24;
  uint local_c;
  
  local_c = *DAT_2c4fd308;
  FUN_2c4fc8a8(1,0,auStack_4c,0x20);
  FUN_2c4fc8a8(2,0,auStack_2c,0x20);
  bVar1 = local_44 != local_24;
  if (bVar1) {
    FUN_2c4fcc2c(2);
    local_44 = extraout_r1;
  }
  if ((*DAT_2c4fd308 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(bVar1,local_44,*DAT_2c4fd308 ^ local_c,0);
  }
  return;
}

