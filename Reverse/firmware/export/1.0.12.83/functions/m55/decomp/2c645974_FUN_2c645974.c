/* FUN_2c645974 @ 0x2c645974 */

void FUN_2c645974(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x1c) == -1) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      *(int *)(DAT_2c6459b4 + 0x30) = iVar2;
      return;
    }
  }
  else {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar2 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = *(undefined4 *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      *(int *)(DAT_2c6459b4 + 0x2c) = iVar2;
      return;
    }
  }
  *(int *)(iVar1 + 0x10) = iVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

