/* FUN_2c4887c0 @ 0x2c4887c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4887c0(int param_1,undefined2 param_2,int param_3)

{
  undefined1 auStack_10 [4];
  int iStack_c;
  
  auStack_10[0] = param_1 != param_3;
  iStack_c = *_LAB_2c488814;
  FUN_2c49737c(0x28,auStack_10,param_2);
  if (*_LAB_2c488814 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

