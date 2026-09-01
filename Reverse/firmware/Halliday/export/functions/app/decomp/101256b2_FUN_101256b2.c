/* FUN_101256b2 @ 0x101256b2 */

void FUN_101256b2(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 1;
  iVar1 = FUN_10126fa2();
  *(byte *)(iVar1 + 0x2a) = *(byte *)(iVar1 + 0x2a) | 4;
  iVar1 = FUN_1008af34();
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_1012b32c();
    return;
  }
  return;
}

