/* FUN_2c52fa6c @ 0x2c52fa6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52fa6c(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = *(undefined4 *)(param_4 + 0xc);
  iStack_c = *param_3;
  FUN_2c53165c(&uStack_10,param_2,0);
  if (*_LAB_2c52fa9c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

