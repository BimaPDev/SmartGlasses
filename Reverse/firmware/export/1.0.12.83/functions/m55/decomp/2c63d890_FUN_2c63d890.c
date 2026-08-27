/* FUN_2c63d890 @ 0x2c63d890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63d890(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_2c63eb94();
  if (iVar3 == 0) {
    FUN_2c63ea8c(1);
  }
  piVar1 = _LAB_2c63d8b4;
  FUN_2c62be40(*_LAB_2c63d8b4);
  iVar3 = *piVar1;
  uVar2 = FUN_2c629df4();
  *(undefined4 *)(iVar3 + 4) = uVar2;
  return;
}

