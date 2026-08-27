/* FUN_2c4eeeec @ 0x2c4eeeec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eeeec(void)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_1e;
  undefined2 uStack_1c;
  short sStack_1a;
  undefined2 uStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4eef68;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c6120a0(&uStack_28);
  uStack_24 = 2;
  uStack_28 = 0xff00ff00;
  uStack_1e = 0xff;
  sVar2 = 0;
  do {
    sVar3 = sVar2 + 4;
    uStack_1c = 0;
    uStack_18 = 0x280;
    sStack_1a = sVar2;
    sStack_16 = sVar2;
    uVar1 = FUN_2c4eda80();
    FUN_2c639ab4(uVar1,&uStack_1c,2,&uStack_28);
    sVar2 = sVar3;
  } while (sVar3 != 0x1e0);
  if (*_LAB_2c4eef68 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

