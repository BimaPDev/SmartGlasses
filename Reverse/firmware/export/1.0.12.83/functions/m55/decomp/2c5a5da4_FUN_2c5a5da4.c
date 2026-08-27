/* FUN_2c5a5da4 @ 0x2c5a5da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a5da4(undefined4 param_1)

{
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c5a5ddc;
  uStack_10 = 1;
  uStack_18 = param_1;
  FUN_2c5e4008(auStack_1c,0);
  if (*_LAB_2c5a5ddc == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

