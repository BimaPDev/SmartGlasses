/* FUN_2c4788a4 @ 0x2c4788a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4788a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4788f0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = FUN_2c4eab7c(param_1,param_2,0);
  iVar1 = (**(code **)(iVar1 + 0x2c))(&uStack_24,0x18);
  if (iVar1 != 0) {
    FUN_2c46df44(&uStack_24);
  }
  if (*_LAB_2c4788f0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

