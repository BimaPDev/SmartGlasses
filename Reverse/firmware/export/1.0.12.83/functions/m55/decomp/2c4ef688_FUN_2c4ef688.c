/* FUN_2c4ef688 @ 0x2c4ef688 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ef688(void)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4ef720;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c6120a0(&uStack_30);
  uStack_2c = 2;
  uStack_22 = 0xf0;
  uStack_30 = 0xff00ff00;
  uStack_1e = 0xf0;
  uStack_26 = 0xff;
  uStack_20 = 0x280;
  uStack_24 = 0;
  uVar1 = FUN_2c4eda80();
  FUN_2c639ab4(uVar1,&uStack_24,2,&uStack_30);
  uStack_1a = 0;
  uStack_1c = 0x140;
  uStack_18 = 0x140;
  uStack_16 = 0x1e0;
  uVar1 = FUN_2c4eda80();
  FUN_2c639ab4(uVar1,&uStack_1c,2,&uStack_30);
  if (*_LAB_2c4ef720 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

