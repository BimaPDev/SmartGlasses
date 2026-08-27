/* FUN_2c5f9bd4 @ 0x2c5f9bd4 */

void FUN_2c5f9bd4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) == param_1) {
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 4);
        iVar1 = *(int *)(iVar2 + 0x14);
      }
      else {
        iVar1 = *(int *)(iVar2 + 0x14);
      }
      if (iVar1 == param_1) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 8);
        return;
      }
    }
  }
  return;
}

