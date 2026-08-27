/* FUN_2c4ee418 @ 0x2c4ee418 */

void FUN_2c4ee418(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_36;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  int iStack_2c;
  
  sVar5 = 0x4e;
  sVar3 = 0x12;
  iStack_2c = *DAT_2c4ee4cc;
  uVar2 = FUN_2c4eda80();
  FUN_2c639778(uVar2,0xff000000,0xff);
  do {
    sVar6 = 0x22;
    do {
      sVar1 = sVar3;
      do {
        sVar4 = sVar1;
        FUN_2c6120a0(&uStack_40);
        uStack_40 = 0xff00ff00;
        uStack_3c = 2;
        uStack_36 = 0xff;
        sStack_34 = sVar6;
        sStack_32 = sVar4;
        sStack_30 = sVar6 + 0x3c;
        sStack_2e = sVar4;
        uVar2 = FUN_2c4eda80();
        FUN_2c639ab4(uVar2,&sStack_34,2,&uStack_40);
        sVar1 = sVar4 + 4;
      } while ((short)(sVar4 + 4) != sVar5);
      sVar6 = sVar6 + 0x100;
    } while (sVar6 != 0x322);
    sVar5 = sVar4 + 0xc4;
    sVar3 = sVar3 + 0xc0;
  } while (sVar5 != 0x28e);
  if (*DAT_2c4ee4cc == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

