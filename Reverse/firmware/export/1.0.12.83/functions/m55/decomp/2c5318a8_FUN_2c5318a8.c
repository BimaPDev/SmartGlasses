/* FUN_2c5318a8 @ 0x2c5318a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5318a8(int param_1)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c5318f4;
  if (param_1 == 0) {
    uStack_14 = _LAB_2c531900;
    uStack_24 = _DAT_2c531904;
    uStack_20 = _LAB_2c5318f8;
    uStack_1c = _LAB_2c5318f8;
    uStack_18 = _LAB_2c5318fc;
    uStack_10 = FUN_2c48e738();
    FUN_2c4861f4(&uStack_24);
  }
  if (*_LAB_2c5318f4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

