/* FUN_2c5207e8 @ 0x2c5207e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5207e8(undefined4 param_1)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c520830;
  uStack_1c = 0x151;
  uStack_18 = 0;
  uStack_14 = 0x2ae;
  uStack_10 = 0x400;
  func_0x2c52079c(param_1,&uStack_1c);
  if (*_LAB_2c520830 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

