/* FUN_2c47792c @ 0x2c47792c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47792c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [8];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4779d0;
  uVar1 = FUN_2c46de74();
  auStack_30[0] = 0;
  FUN_2c482a9c(auStack_24,uVar1);
  iVar2 = FUN_2c47380c(auStack_24,6,0x32,param_1,param_2,auStack_30);
  *_LAB_2c4779d4 = 0x32;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2b0,_LAB_2c4779d8,_LAB_2c4779e4,_LAB_2c4779e0,_LAB_2c4779dc,auStack_30[0]);
  }
  FUN_2c6741e8(0x711,_LAB_2c4779ec,_LAB_2c4779dc);
  if (*_LAB_2c4779d0 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

