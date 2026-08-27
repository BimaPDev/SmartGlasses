/* FUN_2c4ef5c8 @ 0x2c4ef5c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ef5c8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4ef680;
  uVar2 = FUN_2c4eda80();
  FUN_2c639778(uVar2,0xff000000,0xff);
  FUN_2c6120a0(&uStack_34);
  uStack_30 = 2;
  uStack_34 = 0xff00ff00;
  uStack_2a = 0xff;
  uVar2 = FUN_2c4eda80();
  uStack_28 = 0xd70127;
  uStack_24 = 0xd70159;
  FUN_2c639ab4(uVar2,&uStack_28,2,&uStack_34);
  puVar1 = _LAB_2c4ef684;
  uStack_24 = 0xf00140;
  uStack_28 = 0xbe0140;
  FUN_2c639ab4(uVar2,&uStack_28,2,&uStack_34);
  uStack_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  uStack_18 = puVar1[4];
  uVar2 = FUN_2c4eda80();
  FUN_2c639ab4(uVar2,&uStack_28,5,&uStack_34);
  if (*_LAB_2c4ef680 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

