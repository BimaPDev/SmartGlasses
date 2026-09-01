/* thunk_FUN_101306c4 @ 0x101305b6 */

void thunk_FUN_101306c4(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    if ((*(ushort *)(param_1 + 0xa2) & 0x4180) == 0x80) {
      if (*(int *)(param_1 + 0xd0) != 0) {
        FUN_1012df9a();
      }
      *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 1;
    }
    return;
  }
  if ((*(ushort *)(param_1 + 0xa2) & 0x180) == 0x80) {
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_1012df9a();
    }
    *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 1;
  }
  return;
}

