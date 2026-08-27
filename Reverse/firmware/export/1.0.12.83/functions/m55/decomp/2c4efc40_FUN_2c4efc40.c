/* FUN_2c4efc40 @ 0x2c4efc40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4efc40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 auStack_3c [3];
  undefined4 uStack_30;
  undefined1 uStack_1a;
  int iStack_14;
  
  uVar1 = _LAB_2c4efcf8;
  iStack_14 = *_LAB_2c4efcf4;
  uVar2 = FUN_2c4eda80();
  FUN_2c639778(uVar2,0xff000000,0xff);
  FUN_2c6129e4(auStack_3c);
  uStack_30 = 0xff00ff00;
  uStack_1a = 2;
  auStack_3c[0] = _LAB_2c4efcfc;
  uVar2 = FUN_2c4eda80();
  FUN_2c639a08(uVar2,0,0x50,0x280,auStack_3c,uVar1);
  uVar2 = FUN_2c4eda80();
  FUN_2c639a08(uVar2,0,0xa0,0x280,auStack_3c,uVar1);
  uVar2 = FUN_2c4eda80();
  FUN_2c639a08(uVar2,0,0xf0,0x280,auStack_3c,uVar1);
  uVar2 = FUN_2c4eda80();
  FUN_2c639a08(uVar2,0,0x140,0x280,auStack_3c,uVar1);
  uVar2 = FUN_2c4eda80();
  FUN_2c639a08(uVar2,0,400,0x280,auStack_3c,uVar1);
  if (*_LAB_2c4efcf4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

