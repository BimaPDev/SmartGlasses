/* FUN_2c4efacc @ 0x2c4efacc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4efacc(void)

{
  undefined4 uVar1;
  undefined4 auStack_94 [3];
  undefined4 uStack_88;
  undefined1 uStack_72;
  undefined1 auStack_6c [3];
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  int iStack_14;
  
  iStack_14 = *DAT_2c4efc14;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c61314c(auStack_6c);
  uStack_68 = 0xff000000;
  uStack_69 = 0xff;
  uStack_34 = 10;
  uStack_32 = 0xff;
  uStack_38 = 0xff00ff00;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0,0,0x280,0x1e0,auStack_6c);
  FUN_2c6129e4(auStack_94);
  uStack_72 = 1;
  auStack_94[0] = _LAB_2c4efc18;
  uStack_88 = 0xff00ff00;
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x5a,0x50,0x14,auStack_94,_LAB_2c4efc1c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,300,0x50,0x14,auStack_94,_LAB_2c4efc20);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x203,0x50,0x14,auStack_94,_LAB_2c4efc24);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x58,0xf0,0x14,auStack_94,_LAB_2c4efc28);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,300,0xf0,0x14,auStack_94,_LAB_2c4efc2c);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x203,0xf0,0x14,auStack_94,_LAB_2c4efc30);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x5a,400,0x14,auStack_94,DAT_2c4efc34);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,300,400,0x14,auStack_94,DAT_2c4efc38);
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x203,400,0x14,auStack_94,DAT_2c4efc3c);
  if (*DAT_2c4efc14 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

