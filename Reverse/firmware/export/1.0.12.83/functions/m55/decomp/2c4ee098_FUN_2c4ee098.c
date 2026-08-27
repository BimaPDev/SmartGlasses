/* FUN_2c4ee098 @ 0x2c4ee098 */

void FUN_2c4ee098(undefined1 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_6c [3];
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  int iStack_14;
  
  iStack_14 = *DAT_2c4ee100;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c61314c(auStack_6c);
  uStack_69 = 0xff;
  uStack_68 = 0;
  uStack_66 = 0xff00;
  uStack_67 = param_1;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0xdc,0xa4,200,0x98,auStack_6c);
  if (*DAT_2c4ee100 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

