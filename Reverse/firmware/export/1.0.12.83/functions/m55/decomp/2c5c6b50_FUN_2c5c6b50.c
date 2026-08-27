/* FUN_2c5c6b50 @ 0x2c5c6b50 */

void FUN_2c5c6b50(int param_1,int param_2)

{
  FUN_2c5d4d50(param_1 + 8);
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5cf0c8,0x297,DAT_2c5cf0c4,DAT_2c5cf0c0);
  }
  if ((*DAT_2c5cf0bc ^ *DAT_2c5cf0bc) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(param_1 + 0x40c,0,*DAT_2c5cf0bc ^ *DAT_2c5cf0bc,0);
}

