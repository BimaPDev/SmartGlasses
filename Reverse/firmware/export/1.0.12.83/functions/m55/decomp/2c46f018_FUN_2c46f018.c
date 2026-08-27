/* FUN_2c46f018 @ 0x2c46f018 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f018(void)

{
  undefined1 auStack_80c [2048];
  int iStack_c;
  
  iStack_c = *_LAB_2c46f05c;
  FUN_2c674268(auStack_80c,5,0x800,0);
  FUN_2c4713d0(0,auStack_80c);
  if (*_LAB_2c46f05c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

