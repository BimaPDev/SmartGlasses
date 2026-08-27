/* FUN_2c4e760c @ 0x2c4e760c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e760c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4e9354();
  iVar1 = (**(code **)(iVar1 + 0x20))(param_3,param_4);
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e7640,param_3);
  uVar3 = _LAB_2c4e7648;
  if (iVar1 == 0) {
    uVar3 = _LAB_2c4e7644;
  }
  return uVar3;
}

