/* FUN_2c509324 @ 0x2c509324 */

void FUN_2c509324(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if ((uint)*(byte *)(iVar1 + 0x15) == (int)*(char *)(*(int *)(iVar1 + 0x44) + -1) - 1U) {
      FUN_2c509040(iVar1);
      if (*(int *)(iVar1 + 0x4c) != 0) {
        FUN_2c62be74();
        *(byte *)(*(int *)(iVar1 + 0x4c) + 0x14) = *(byte *)(*(int *)(iVar1 + 0x4c) + 0x14) & 0xfe;
        return;
      }
    }
  }
  return;
}

