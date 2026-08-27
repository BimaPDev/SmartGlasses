/* FUN_2c641174 @ 0x2c641174 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c641174(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c640e8c();
  piVar1 = _LAB_2c6411a4;
  func_0x2c63de34();
  FUN_2c63f77c();
  iVar2 = FUN_2c62bdd8(_LAB_2c6411a8,3000,0);
  *piVar1 = iVar2;
  FUN_2c62be70(iVar2,0xffffffff);
  iVar2 = *piVar1;
  *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 1;
  return;
}

