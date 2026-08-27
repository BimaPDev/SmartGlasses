/* FUN_2c5c7434 @ 0x2c5c7434 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7434(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_1c [8];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5c7498;
  iVar1 = func_0x2c5d4f80(param_1 + 8,param_2,param_3,0);
  if (iVar1 != 0) {
    FUN_2c5e9058(auStack_1c);
    FUN_2c620fa4(0x3fd,auStack_1c);
    func_0x2c5cd908(param_1 + 0x2d8);
    func_0x2c5c8638(param_1 + 0x298);
    func_0x2c5c9384(param_1 + 0x3a0);
    func_0x2c5d4fbc(param_1 + 8);
  }
  if (*_LAB_2c5c7498 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

