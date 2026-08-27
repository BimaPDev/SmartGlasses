/* FUN_2c47c63c @ 0x2c47c63c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47c63c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c47c6e4;
  iVar1 = func_0x2c483574(0,param_2,param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x23f,_LAB_2c47c6f0,_LAB_2c47c6f4,_LAB_2c47c6e8,_LAB_2c47c6ec);
  }
  if (*_LAB_2c47c6e4 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

