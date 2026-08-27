/* FUN_2c5e9058 @ 0x2c5e9058 */

undefined4 FUN_2c5e9058(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_2c5e9084;
  FUN_2c5e74dc();
  if (*DAT_2c5e9084 == iVar1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

