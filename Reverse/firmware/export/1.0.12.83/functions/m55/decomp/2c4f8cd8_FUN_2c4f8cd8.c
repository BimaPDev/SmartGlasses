/* FUN_2c4f8cd8 @ 0x2c4f8cd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f8cd8(undefined2 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined1 auStack_94 [4];
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined4 uStack_8b;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4f8d30;
  FUN_2c674268(auStack_94,0,0x80,0);
  uStack_96 = 1;
  uStack_90 = 1;
  auStack_94[0] = 9;
  uStack_98 = param_1;
  uStack_8c = param_3;
  uStack_8b = param_2;
  FUN_2c4f895c(&uStack_98);
  if (*_LAB_2c4f8d30 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

