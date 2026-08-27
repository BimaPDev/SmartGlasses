/* FUN_2c4e74c0 @ 0x2c4e74c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e74c0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_2c66c4ec(uVar3);
  iVar2 = FUN_2c4eab7c();
  iVar2 = (**(code **)(iVar2 + 8))(uVar3,uVar1);
  uVar3 = _LAB_2c4e74e8;
  if (iVar2 == 0) {
    uVar3 = _LAB_2c4e74ec;
  }
  return uVar3;
}

