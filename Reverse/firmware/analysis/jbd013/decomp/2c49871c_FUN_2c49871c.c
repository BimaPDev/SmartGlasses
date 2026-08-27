/* FUN_2c49871c @ 0x2c49871c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c49871c(void)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c498768;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c497824(0,&uStack_1c,0x10,0);
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c497824(1,&uStack_1c,0x10);
  if (*_LAB_2c498768 == iStack_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

