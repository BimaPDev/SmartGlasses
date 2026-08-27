/* FUN_2c4e6ba0 @ 0x2c4e6ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e6ba0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4e6bf4;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  iVar1 = FUN_2c4eab7c(param_1,param_2,0);
  (**(code **)(iVar1 + 0x2c))(&uStack_24,0x18);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e6bf8,&uStack_24);
  if (*_LAB_2c4e6bf4 == iStack_c) {
    return _LAB_2c4e6bfc;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

