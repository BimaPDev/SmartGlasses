/* FUN_2c4ee390 @ 0x2c4ee390 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ee390(void)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined1 auStack_7c [3];
  undefined1 uStack_79;
  undefined4 uStack_78;
  int iStack_24;
  
  sVar4 = 0x12;
  iStack_24 = *_LAB_2c4ee414;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  do {
    sVar3 = 0x22;
    do {
      FUN_2c61314c(auStack_7c);
      uStack_79 = 0xff;
      uStack_78 = 0xffffffff;
      uVar1 = FUN_2c4eda80();
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 0x100;
      FUN_2c639940(uVar1,iVar2,(int)sVar4,0x3c,0x3c,auStack_7c);
    } while (sVar3 != 0x322);
    sVar4 = sVar4 + 0xc0;
  } while (sVar4 != 0x252);
  if (*_LAB_2c4ee414 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

