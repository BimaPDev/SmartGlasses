/* FUN_2c5aa5bc @ 0x2c5aa5bc */

void FUN_2c5aa5bc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_2c5aa568(iVar1);
    *(byte *)(*(int *)(iVar1 + 8) + 0x14) = *(byte *)(*(int *)(iVar1 + 8) + 0x14) | 1;
    return;
  }
  return;
}

