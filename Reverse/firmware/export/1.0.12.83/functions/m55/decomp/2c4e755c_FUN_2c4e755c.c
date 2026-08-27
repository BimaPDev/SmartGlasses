/* FUN_2c4e755c @ 0x2c4e755c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e755c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4eab7c();
  iVar1 = (**(code **)(iVar1 + 4))(param_3,param_4);
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e7594,param_3);
  FUN_2c4f0008(param_3,0x20);
  uVar3 = _LAB_2c4e759c;
  if (iVar1 == 0) {
    uVar3 = _LAB_2c4e7598;
  }
  return uVar3;
}

