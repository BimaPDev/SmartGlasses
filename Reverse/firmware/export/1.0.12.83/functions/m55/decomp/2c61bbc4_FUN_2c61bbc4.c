/* FUN_2c61bbc4 @ 0x2c61bbc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61bbc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c61bc4c;
  FUN_2c606abc(param_2,2,param_3,0);
  FUN_2c62e7b4(&uStack_58);
  uStack_54 = _LAB_2c61bc50;
  uStack_18 = 0xffff;
  uStack_2c = *_LAB_2c61bc54;
  iStack_38 = *_LAB_2c61bc58;
  iStack_30 = iStack_38 + 0x168;
  uStack_58 = param_2;
  iStack_34 = iStack_38;
  FUN_2c62e8ec(&uStack_58);
  uStack_3c = _LAB_2c61bc5c;
  iStack_38 = 0;
  iStack_34 = 0;
  iStack_30 = 0x168;
  uStack_54 = _LAB_2c61bc60;
  FUN_2c62e8ec(&uStack_58);
  FUN_2c6371d4(param_2,0,0x168);
  FUN_2c6371ec(param_2,0x10e);
  if (*_LAB_2c61bc4c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

