/* FUN_2c4bb66c @ 0x2c4bb66c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bb66c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4bb6b4;
  uStack_18 = 0;
  uStack_20 = param_2;
  uStack_1c = param_3;
  FUN_2c4bac38(param_1,&uStack_20,1,param_4,param_5,param_6,0,0xfff);
  if (*_LAB_2c4bb6b4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

