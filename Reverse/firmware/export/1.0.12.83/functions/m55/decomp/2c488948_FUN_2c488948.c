/* FUN_2c488948 @ 0x2c488948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c488948(undefined1 param_1)

{
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  puStack_14 = &uStack_19;
  uStack_10 = 1;
  uStack_18 = 0x78;
  iStack_c = *_LAB_2c488998;
  uStack_19 = param_1;
  FUN_2c49737c(0x78,puStack_14,1);
  if (*_LAB_2c488998 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

