/* FUN_2c48c994 @ 0x2c48c994 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48c994(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c48c9dc;
  *_LAB_2c48c9d8 = param_1;
  uStack_14 = FUN_2c48d068(param_1,param_2,0);
  uStack_10 = 1;
  FUN_2c48d15c(0x5b,uStack_14,&uStack_14,8);
  if (*_LAB_2c48c9dc == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

