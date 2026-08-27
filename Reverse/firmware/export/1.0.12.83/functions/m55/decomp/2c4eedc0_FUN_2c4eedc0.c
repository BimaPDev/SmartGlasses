/* FUN_2c4eedc0 @ 0x2c4eedc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eedc0(void)

{
  undefined4 uVar1;
  undefined1 auStack_64 [3];
  undefined1 uStack_61;
  undefined4 uStack_60;
  int iStack_c;
  
  iStack_c = *_LAB_2c4eee20;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff00ff00,0xff);
  FUN_2c61314c(auStack_64);
  uStack_61 = 0xff;
  uStack_60 = 0xff000000;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x22,0x19,0x23c,0x1ad,auStack_64);
  if (*_LAB_2c4eee20 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

