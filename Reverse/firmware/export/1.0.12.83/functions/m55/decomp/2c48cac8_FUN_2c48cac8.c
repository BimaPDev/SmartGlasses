/* FUN_2c48cac8 @ 0x2c48cac8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48cac8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c48cb10;
  *_LAB_2c48cb0c = param_1;
  uStack_14 = FUN_2c48d068(param_1,param_2,0);
  uStack_10 = 1;
  FUN_2c48d15c(0x5f,uStack_14,&uStack_14,8);
  if (*_LAB_2c48cb10 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

