/* FUN_2c62e7e8 @ 0x2c62e7e8 */

int FUN_2c62e7e8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x40);
  if (uVar1 != 0xffff) {
    iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30);
    if ((*(byte *)(param_1 + 0x42) & 2) == 0) {
      iVar2 = iVar2 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
    }
    if (1 < uVar1) {
      iVar2 = (uVar1 - 1) *
              (*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) +
              *(int *)(param_1 + 0x2c)) + iVar2;
    }
    return iVar2;
  }
  return -1;
}

