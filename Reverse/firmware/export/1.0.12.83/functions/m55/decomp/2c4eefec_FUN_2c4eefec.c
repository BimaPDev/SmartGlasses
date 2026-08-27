/* FUN_2c4eefec @ 0x2c4eefec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eefec(void)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_1e;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  int iStack_14;
  
  sVar3 = 0x50;
  iStack_14 = *_LAB_2c4ef078;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c6120a0(&uStack_28);
  uStack_24 = 1;
  uStack_28 = 0xff00ff00;
  uStack_1e = 0xff;
  do {
    sStack_1a = sVar3;
    sVar2 = 0x59;
    do {
      sStack_1c = sVar2;
      sStack_18 = sStack_1c + 0x25;
      sVar2 = sStack_1c + 0xd5;
      sStack_16 = sStack_1a;
      uVar1 = FUN_2c4eda80();
      FUN_2c639ab4(uVar1,&sStack_1c,2,&uStack_28);
    } while (sVar2 != 0x2d8);
    sVar3 = sVar3 + 0xa0;
  } while (sVar3 != 0x230);
  if (*_LAB_2c4ef078 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

