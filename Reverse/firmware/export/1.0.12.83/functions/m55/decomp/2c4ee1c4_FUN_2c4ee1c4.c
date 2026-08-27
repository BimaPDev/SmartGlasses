/* FUN_2c4ee1c4 @ 0x2c4ee1c4 */

void FUN_2c4ee1c4(void)

{
  undefined4 uVar1;
  undefined1 auStack_64 [3];
  undefined1 uStack_61;
  undefined4 uStack_60;
  int iStack_c;
  
  iStack_c = *DAT_2c4ee224;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c61314c(auStack_64);
  uStack_61 = 0xff;
  uStack_60 = 0xffffffff;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x5d,0x46,0x1c5,0x153,auStack_64);
  if (*DAT_2c4ee224 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

