/* FUN_2c4ee2ec @ 0x2c4ee2ec */

void FUN_2c4ee2ec(void)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined1 auStack_7c [3];
  undefined1 uStack_79;
  undefined4 uStack_78;
  int iStack_24;
  
  sVar4 = 0xc;
  iStack_24 = *DAT_2c4ee374;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  do {
    sVar3 = 0xc;
    do {
      FUN_2c61314c(auStack_7c);
      uStack_79 = 0xff;
      uStack_78 = 0xffffffff;
      uVar1 = FUN_2c4eda80();
      iVar2 = (int)sVar3;
      sVar3 = sVar3 + 0x131;
      FUN_2c639940(uVar1,iVar2,(int)sVar4,5,5,auStack_7c);
    } while (sVar3 != 0x39f);
    sVar4 = sVar4 + 0xe1;
  } while (sVar4 != 0x2af);
  if (*DAT_2c4ee374 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

