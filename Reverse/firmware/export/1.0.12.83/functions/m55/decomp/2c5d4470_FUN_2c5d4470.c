/* FUN_2c5d4470 @ 0x2c5d4470 */

undefined4 FUN_2c5d4470(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_2c5d44a0;
  FUN_2c5dab10(param_1,param_2 + 0x98,param_3,0);
  if (*DAT_2c5d44a0 == iVar1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

