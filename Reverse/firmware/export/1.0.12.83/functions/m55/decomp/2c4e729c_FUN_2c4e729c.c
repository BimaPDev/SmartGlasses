/* FUN_2c4e729c @ 0x2c4e729c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e729c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  
  iStack_c = *_LAB_2c4e7308;
  FUN_2c48b9e4(&uStack_18,param_2,param_3,0);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e730c,uStack_18);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e7310,uStack_10);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e7314,uStack_14);
  iVar1 = FUN_2c4e9354();
  (**(code **)(iVar1 + 0x58))(_LAB_2c4e7318,uStack_e);
  if (*_LAB_2c4e7308 == iStack_c) {
    return _LAB_2c4e731c;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

