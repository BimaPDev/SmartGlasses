/* FUN_2c63ebfc @ 0x2c63ebfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63ebfc(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_2c640dc0();
  if (iVar3 == 0) {
    func_0x2c640ccc(1);
  }
  piVar1 = _LAB_2c63ec20;
  FUN_2c62be40(*_LAB_2c63ec20);
  iVar3 = *piVar1;
  uVar2 = FUN_2c629df4();
  *(undefined4 *)(iVar3 + 4) = uVar2;
  return;
}

