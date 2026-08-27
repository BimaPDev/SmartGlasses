/* FUN_2c49e1e8 @ 0x2c49e1e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49e1e8(void)

{
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c49e24c;
  if (*_LAB_2c49e250 != *_LAB_2c49e254) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x167,_LAB_2c49e264,_LAB_2c49e260,_LAB_2c49e25c,*_LAB_2c49e250);
  }
  if (*_LAB_2c49e258 == 1) {
    uStack_16 = 1;
    uStack_18 = 0;
    FUN_2c49e1b0(&uStack_18);
  }
  if (*_LAB_2c49e24c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

