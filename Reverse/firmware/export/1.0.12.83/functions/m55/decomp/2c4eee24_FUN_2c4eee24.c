/* FUN_2c4eee24 @ 0x2c4eee24 */

void FUN_2c4eee24(void)

{
  undefined4 uVar1;
  undefined1 auStack_64 [3];
  undefined1 uStack_61;
  undefined4 uStack_60;
  int iStack_c;
  
  iStack_c = *DAT_2c4eee84;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff00ff00,0xff);
  FUN_2c61314c(auStack_64);
  uStack_61 = 0xff;
  uStack_60 = 0xff000000;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x2b,0x20,0x22a,0x19f,auStack_64);
  if (*DAT_2c4eee84 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

