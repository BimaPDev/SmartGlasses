/* FUN_2c47f6cc @ 0x2c47f6cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47f6cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c47f724;
  FUN_2c47f554(auStack_3c,param_3);
  FUN_2c47f554(param_1,param_1,auStack_3c,param_4);
  FUN_2c47f554(auStack_3c,auStack_3c,param_3,param_4);
  FUN_2c47f554(param_2,param_2,auStack_3c,param_4);
  if (*_LAB_2c47f724 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

