/* FUN_2c5c837c @ 0x2c5c837c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c837c(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5c8608 == *_LAB_2c5c8608) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

