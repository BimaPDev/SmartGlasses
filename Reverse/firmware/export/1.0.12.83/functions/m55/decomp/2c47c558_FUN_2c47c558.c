/* FUN_2c47c558 @ 0x2c47c558 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47c558(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c47c620;
  iVar1 = func_0x2c483574(0,param_2,param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x25c,_LAB_2c47c630,_LAB_2c47c62c,_LAB_2c47c624,_LAB_2c47c628);
  }
  if (*_LAB_2c47c620 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

