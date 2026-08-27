/* FUN_2c4e74f0 @ 0x2c4e74f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e74f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4eab7c();
  iVar1 = (**(code **)(iVar1 + 0xc))(param_3,param_4);
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e7520,param_3);
  uVar3 = _LAB_2c4e7528;
  if (iVar1 == 0) {
    uVar3 = _LAB_2c4e7524;
  }
  return uVar3;
}

