/* FUN_2c5c749c @ 0x2c5c749c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c749c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *_LAB_2c5c74cc;
  func_0x2c5d4f88(param_1,param_2 + 8,param_3,0);
  if (*_LAB_2c5c74cc == iVar1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

