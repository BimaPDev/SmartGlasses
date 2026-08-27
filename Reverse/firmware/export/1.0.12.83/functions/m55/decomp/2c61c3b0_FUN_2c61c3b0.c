/* FUN_2c61c3b0 @ 0x2c61c3b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  short sStack_86;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  short sStack_7c;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_38;
  short sStack_30;
  int iStack_24;
  
  uVar1 = _LAB_2c61c544;
  iStack_24 = *_LAB_2c61c548;
  iVar6 = FUN_2c602110(_LAB_2c61c544,param_2,param_3,0);
  if ((iVar6 == 1) && (iVar6 = FUN_2c602408(param_2), iVar6 == 0x15)) {
    iVar6 = FUN_2c602400(param_2);
    uVar7 = FUN_2c602608(param_2);
    FUN_2c61c284(iVar6,auStack_84,&sStack_86);
    FUN_2c600b9c(auStack_6c,uVar7);
    if (0 < sStack_86) {
      func_0x2c614f78(auStack_80);
      FUN_2c600a20(iVar6,0,auStack_80);
      puStack_48 = auStack_84;
      uStack_68 = uVar1;
      sStack_30 = sStack_86;
      uStack_38 = 0;
      uStack_64 = 0;
      puStack_4c = auStack_80;
      FUN_2c602340(iVar6,0x1a,auStack_6c);
      FUN_2c614f94(uVar7,auStack_80,auStack_84,sStack_30,*(short *)(iVar6 + 0x24),
                   *(short *)(iVar6 + 0x24) + 0x168);
      FUN_2c602340(iVar6,0x1b,auStack_6c);
    }
    sVar2 = FUN_2c6033b4(iVar6,0x20000,0x12);
    sVar3 = FUN_2c6033b4(iVar6,0x20000,0x13);
    sVar4 = FUN_2c6033b4(iVar6,0x20000,0x10);
    sVar5 = FUN_2c6033b4(iVar6,0x20000,0x11);
    if (sVar2 < sVar3) {
      sVar2 = sVar3;
    }
    if (sVar2 < sVar4) {
      sVar2 = sVar4;
    }
    if (sVar2 < sVar5) {
      sVar2 = sVar5;
    }
    if (0 < (short)(sStack_86 - sVar2)) {
      func_0x2c614f78(auStack_80);
      FUN_2c600a20(iVar6,0x20000,auStack_80);
      puStack_48 = auStack_84;
      uStack_68 = uVar1;
      uStack_38 = 0x20000;
      uStack_64 = 1;
      puStack_4c = auStack_80;
      sStack_30 = sStack_86 - sVar2;
      FUN_2c602340(iVar6,0x1a,auStack_6c);
      if (sStack_30 < sStack_7c) {
        sStack_7c = sStack_30;
      }
      FUN_2c614f94(uVar7,auStack_80,auStack_84,sStack_30,
                   *(short *)(iVar6 + 0x24) + *(short *)(iVar6 + 0x26),
                   *(short *)(iVar6 + 0x28) + *(short *)(iVar6 + 0x24));
      FUN_2c602340(iVar6,0x1b,auStack_6c);
    }
  }
  if (*_LAB_2c61c548 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

