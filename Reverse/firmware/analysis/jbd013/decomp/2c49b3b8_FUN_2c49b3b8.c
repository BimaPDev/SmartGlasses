/* FUN_2c49b3b8 @ 0x2c49b3b8 */

int FUN_2c49b3b8(void)

{
  int iVar1;
  byte local_d;
  int local_c;
  
  local_c = *DAT_2c49b428;
  local_d = 0xff;
  iVar1 = FUN_2c49b318(1,&local_d,0);
  if (iVar1 == 0) {
    *(uint *)(DAT_2c49b42c + 8) = (uint)local_d;
  }
  if (1 < *DAT_2c49b430) {
    if (*DAT_2c49b428 == local_c) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x21c,DAT_2c49b440,DAT_2c49b43c,DAT_2c49b438,DAT_2c49b434,1,local_d,iVar1);
}

