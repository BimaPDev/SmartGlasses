/* FUN_2c4ef724 @ 0x2c4ef724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ef724(void)

{
  undefined4 uVar1;
  undefined2 uStack_6c;
  undefined1 uStack_69;
  undefined4 uStack_68;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4ef7d8;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c61314c(&uStack_6c);
  uStack_69 = 0xff;
  uStack_68 = 0xff00ff00;
  uStack_6c = 0x7fff;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x11f,0xcf,0x40,0x40,&uStack_6c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x11f,0x57,0x40,0x40,&uStack_6c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x11f,0x147,0x40,0x40,&uStack_6c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0xa7,0xcf,0x40,0x40,&uStack_6c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0x197,0xcf,0x40,0x40,&uStack_6c);
  if (*_LAB_2c4ef7d8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

