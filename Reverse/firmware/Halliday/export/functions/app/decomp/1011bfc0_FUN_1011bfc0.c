/* FUN_1011bfc0 @ 0x1011bfc0 */

void FUN_1011bfc0(int param_1)

{
  if (*(int *)(param_1 + 0x18) + 0xcc000000U < 0xc000000) {
    FUN_10056824(3,*(int *)(param_1 + 0x18),
                 (uint)*(ushort *)(param_1 + 0x10) * *(int *)(param_1 + 8));
    if (*(int *)(param_1 + 0x18) + 0xc8000000U < 0x4000000) {
      FUN_10056824(1,*(int *)(param_1 + 0x18),
                   (uint)*(ushort *)(param_1 + 0x10) * *(int *)(param_1 + 8));
    }
    FUN_10056814();
    return;
  }
  return;
}

