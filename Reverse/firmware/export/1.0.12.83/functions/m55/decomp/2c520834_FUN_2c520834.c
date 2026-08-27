/* FUN_2c520834 @ 0x2c520834 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c520834(undefined4 param_1)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c520874;
  uStack_14 = 0;
  uStack_10 = 0x400;
  uStack_1c = 0;
  uStack_18 = 0;
  func_0x2c52079c(param_1,&uStack_1c);
  if (*_LAB_2c520874 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

