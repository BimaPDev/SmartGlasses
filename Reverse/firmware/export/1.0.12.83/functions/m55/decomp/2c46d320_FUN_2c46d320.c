/* FUN_2c46d320 @ 0x2c46d320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46d320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c46d390;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  func_0x2c673c68(param_2,0,&uStack_28,&uStack_24,&uStack_20);
  iVar1 = func_0x2c673c38(param_1,param_2,param_3,param_4,uStack_28,uStack_24,uStack_20,0x2000,
                          param_5);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c46d394,iVar1);
  }
  if (*_LAB_2c46d390 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

