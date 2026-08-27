/* FUN_2c1424a8 @ 0x2c1424a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1424a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = _DAT_2c1424e4 - (int)_DAT_2c1424e0;
  puVar4 = _DAT_2c1424e0;
  for (iVar5 = 0; iVar2 = _DAT_2c1424ec, puVar1 = _DAT_2c1424e8, iVar5 != iVar3 >> 2;
      iVar5 = iVar5 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  func_0x2c1457d0();
  puVar4 = puVar1;
  for (iVar3 = 0; iVar3 != iVar2 - (int)puVar1 >> 2; iVar3 = iVar3 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  return;
}

