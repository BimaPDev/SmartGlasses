/* FUN_2c48876c @ 0x2c48876c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48876c(undefined1 param_1)

{
  undefined1 auStack_10 [4];
  int iStack_c;
  
  iStack_c = *_LAB_2c4887b8;
  auStack_10[0] = param_1;
  FUN_2c49737c(0x2a,auStack_10,1);
  if (*_LAB_2c4887b8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

