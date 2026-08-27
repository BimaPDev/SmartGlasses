/* FUN_2c613f44 @ 0x2c613f44 */

void FUN_2c613f44(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      if (-1 < *(int *)(iVar1 + 0x10)) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
        return;
      }
      FUN_2c62bea8(*(undefined4 *)(iVar1 + 4));
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x14));
      return;
    }
  }
  else if (*(char *)(param_1 + 4) == '\x05') {
    FUN_2c62bea8(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

