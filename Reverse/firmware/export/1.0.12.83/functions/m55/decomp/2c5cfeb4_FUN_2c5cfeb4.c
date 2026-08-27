/* FUN_2c5cfeb4 @ 0x2c5cfeb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cfeb4(undefined4 param_1)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c5cfef8;
  uStack_1c = 0x2ae;
  uStack_18 = 0x400;
  uStack_24 = 0x151;
  uStack_20 = 0;
  FUN_2c5cfde8(&uStack_24,param_1);
  if (*_LAB_2c5cfef8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

