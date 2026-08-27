/* FUN_2c4e73f4 @ 0x2c4e73f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e73f4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c4e9354();
  if (*(int *)(iVar1 + 0xac) != 0) {
    iVar1 = FUN_2c4e9354();
    uVar2 = (**(code **)(iVar1 + 0xac))();
    iVar1 = FUN_2c4e9354();
    (**(code **)(iVar1 + 0x58))(_LAB_2c4e742c,uVar2);
    return _LAB_2c4e7430;
  }
  return _LAB_2c4e7434;
}

