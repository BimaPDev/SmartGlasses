/* FUN_2c4a4338 @ 0x2c4a4338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a4338(void)

{
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4a43a4;
  if (*_LAB_2c4a43a8 != *_LAB_2c4a43ac) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x166,_LAB_2c4a43c0,_LAB_2c4a43bc,_LAB_2c4a43b8,_LAB_2c4a43b4,0x166,*_LAB_2c4a43a8);
  }
  if (*_LAB_2c4a43b0 == 1) {
    uStack_16 = 1;
    uStack_18 = 0;
    FUN_2c4a4300(&uStack_18);
  }
  if (*_LAB_2c4a43a4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

