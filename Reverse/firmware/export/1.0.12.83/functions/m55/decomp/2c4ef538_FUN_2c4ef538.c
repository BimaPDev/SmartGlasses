/* FUN_2c4ef538 @ 0x2c4ef538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ef538(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uStack_98;
  undefined4 auStack_94 [8];
  undefined1 auStack_74 [3];
  undefined1 uStack_71;
  undefined4 uStack_70;
  int iStack_1c;
  
  sVar3 = 0;
  iStack_1c = *_LAB_2c4ef5c4;
  puVar4 = &uStack_98;
  FUN_2c61314c(auStack_74,param_2,param_3,0);
  uStack_71 = 0xff;
  auStack_94[0] = 0xff00ff00;
  auStack_94[1] = 0xff00e000;
  auStack_94[2] = 0xff00c000;
  auStack_94[3] = 0xff00a000;
  auStack_94[4] = 0xff008000;
  auStack_94[5] = 0xff006000;
  auStack_94[6] = 0xff004000;
  auStack_94[7] = 0xff002000;
  do {
    puVar4 = puVar4 + 1;
    uStack_70 = *puVar4;
    uVar1 = FUN_2c4eda80();
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 0x3c;
    FUN_2c639940(uVar1,0,iVar2,0x280,0x3c,auStack_74);
  } while (sVar3 != 0x1e0);
  if (*_LAB_2c4ef5c4 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

