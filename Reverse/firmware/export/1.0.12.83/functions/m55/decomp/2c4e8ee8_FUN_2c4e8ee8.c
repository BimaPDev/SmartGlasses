/* FUN_2c4e8ee8 @ 0x2c4e8ee8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8ee8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = func_0x2c4efeec(*param_2);
  uVar2 = func_0x2c4efeec(param_2[1]);
  uVar3 = func_0x2c4efeec(param_2[2]);
  iVar4 = FUN_2c4e9354();
  iVar4 = (**(code **)(iVar4 + 0xa8))(uVar1,uVar2,uVar3);
  uVar1 = _LAB_2c4e8f2c;
  if (iVar4 == 0) {
    uVar1 = _LAB_2c4e8f30;
  }
  return uVar1;
}

