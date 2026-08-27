/* FUN_2c4e75e8 @ 0x2c4e75e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e75e8(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = FUN_2c4e9354();
  pcVar3 = *(code **)(iVar1 + 0x58);
  iVar1 = FUN_2c4e9354();
  uVar2 = (**(code **)(iVar1 + 0x1c))();
  (*pcVar3)(_LAB_2c4e7604,uVar2);
  return _LAB_2c4e7608;
}

