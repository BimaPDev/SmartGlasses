/* FUN_2c66909c @ 0x2c66909c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c66909c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = _LAB_2c6690d8 - (int)_LAB_2c6690d4;
  puVar4 = _LAB_2c6690d4;
  for (iVar5 = 0; iVar2 = _LAB_2c6690e0, puVar1 = _LAB_2c6690dc, iVar5 != iVar3 >> 2;
      iVar5 = iVar5 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  func_0x2c67393c();
  puVar4 = puVar1;
  for (iVar3 = 0; iVar3 != iVar2 - (int)puVar1 >> 2; iVar3 = iVar3 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  return;
}

