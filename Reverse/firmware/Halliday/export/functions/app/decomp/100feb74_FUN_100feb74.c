/* FUN_100feb74 @ 0x100feb74 */

void FUN_100feb74(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_100fb5cc();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

