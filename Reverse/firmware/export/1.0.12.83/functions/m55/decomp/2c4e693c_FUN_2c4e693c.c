/* FUN_2c4e693c @ 0x2c4e693c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e693c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = _LAB_2c4e6968;
  iVar2 = *_LAB_2c4e6968;
  if (iVar2 == 0) {
    iVar2 = FUN_2c478b68();
    *piVar1 = iVar2;
  }
  uVar3 = (**(code **)(iVar2 + 0x1c))();
  iVar2 = FUN_2c4e9354();
  (**(code **)(iVar2 + 0x58))(_LAB_2c4e696c,uVar3);
  return _LAB_2c4e6970;
}

