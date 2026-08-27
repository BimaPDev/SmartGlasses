/* FUN_2c5c6a68 @ 0x2c5c6a68 */

undefined4 FUN_2c5c6a68(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_2c5c6a98;
  FUN_2c5cd87c(param_1,param_2 + 0x2d8,param_3,0);
  if (*DAT_2c5c6a98 == iVar1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

