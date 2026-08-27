/* FUN_2c4e70e0 @ 0x2c4e70e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e70e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4e94fc();
  iVar1 = (**(code **)(iVar1 + 4))(0);
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e710c,iVar1);
  uVar3 = _LAB_2c4e7114;
  if (iVar1 != 0) {
    uVar3 = _LAB_2c4e7110;
  }
  return uVar3;
}

