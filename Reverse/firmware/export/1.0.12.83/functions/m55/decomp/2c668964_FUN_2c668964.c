/* FUN_2c668964 @ 0x2c668964 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c668964(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _LAB_2c668984;
  iVar2 = _LAB_2c668988 - _LAB_2c668984 >> 2;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    (**(code **)(iVar1 + iVar2 * 4))();
  }
  return;
}

