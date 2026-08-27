/* FUN_2c478934 @ 0x2c478934 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c478934(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *_LAB_2c478960;
  func_0x2c483624();
  if (*_LAB_2c478960 == iVar1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

