/* FUN_2c4a58fc @ 0x2c4a58fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a58fc(void)

{
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4a5968;
  if (*_LAB_2c4a596c != *_LAB_2c4a5970) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1c3,_LAB_2c4a5984,_LAB_2c4a5980,_LAB_2c4a597c,_LAB_2c4a5978,0x1c3,*_LAB_2c4a596c);
  }
  if (*_LAB_2c4a5974 == 1) {
    uStack_16 = 1;
    uStack_18 = 0;
    FUN_2c4a58c4(&uStack_18);
  }
  if (*_LAB_2c4a5968 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

