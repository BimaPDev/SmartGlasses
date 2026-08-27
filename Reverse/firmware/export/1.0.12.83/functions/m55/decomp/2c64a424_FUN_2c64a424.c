/* FUN_2c64a424 @ 0x2c64a424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c64a424(undefined1 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c64a49c;
  uStack_2c = 0;
  uStack_28 = 0;
  FUN_2c673c58(&uStack_2c,param_2,0);
  uStack_24 = uStack_2c;
  _uStack_20 = CONCAT13(param_3,CONCAT12((char)param_2,CONCAT11(param_1,(char)uStack_28)));
  iVar1 = FUN_2c64a21c(&uStack_24);
  if (iVar1 != 0) {
    func_0x2c6740c8(&uStack_24);
    FUN_2c648600(_LAB_2c64a4a0);
    FUN_2c64a31c();
    FUN_2c648600(_LAB_2c64a4a4);
    FUN_2c64a3a0();
  }
  if (*_LAB_2c64a49c == iStack_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

