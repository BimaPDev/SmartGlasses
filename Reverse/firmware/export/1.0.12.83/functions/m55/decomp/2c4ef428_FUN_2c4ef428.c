/* FUN_2c4ef428 @ 0x2c4ef428 */

void FUN_2c4ef428(void)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_26;
  int iStack_24;
  
  iStack_24 = *DAT_2c4ef534;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c6120a0(&uStack_30);
  uStack_2c = 1;
  uStack_30 = 0xff00ff00;
  uStack_26 = 0xff;
  FUN_2c4eec08(0xea,0xbe,0x3c,0x18,0xc,1,1,0xff00ff00);
  FUN_2c4eeb78(0xfe,0x96,0x18,0x28,6,2,2,0xff00ff00);
  FUN_2c4eec08(0x162,0xbe,0x3c,0x18,6,2,2,0xff00ff00);
  FUN_2c4eeb78(0x176,0x96,0x18,0x28,6,2,2,0xff00ff00);
  FUN_2c4eec08(0xea,0x10e,0x3c,0x18,4,3,3,0xff00ff00);
  FUN_2c4eeb78(0xff,0xe6,0x18,0x28,4,3,3,0xff00ff00);
  FUN_2c4eec08(0x162,0x10e,0x3c,0x18,3,4,4,0xff00ff00);
  FUN_2c4eeb78(0x176,0xe6,0x18,0x28,3,4,4,0xff00ff00);
  if (*DAT_2c4ef534 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

