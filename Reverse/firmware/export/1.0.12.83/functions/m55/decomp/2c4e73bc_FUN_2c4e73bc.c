/* FUN_2c4e73bc @ 0x2c4e73bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e73bc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c4e9354();
  if (*(int *)(iVar1 + 0xb0) != 0) {
    uVar2 = func_0x2c4efeec(*param_2);
    iVar1 = FUN_2c4e9354();
    iVar1 = (**(code **)(iVar1 + 0xb0))(uVar2);
    if (iVar1 == 0) {
      return _LAB_2c4e73ec;
    }
  }
  return _LAB_2c4e73f0;
}

