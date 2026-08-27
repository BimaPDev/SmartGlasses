/* FUN_2c4e8de0 @ 0x2c4e8de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8de0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = func_0x2c4efeec(*param_2);
  uVar2 = func_0x2c4efeec(param_2[1]);
  iVar3 = FUN_2c4eab7c();
  iVar3 = (**(code **)(iVar3 + 0x40))(uVar1,uVar2);
  uVar2 = _LAB_2c4e8e18;
  if (iVar3 == 0) {
    uVar2 = _LAB_2c4e8e1c;
  }
  return uVar2;
}

