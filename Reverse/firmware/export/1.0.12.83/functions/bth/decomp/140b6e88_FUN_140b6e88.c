/* FUN_140b6e88 @ 0x140b6e88 */

void FUN_140b6e88(int param_1)

{
  int local_c [2];
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x128) = 7;
    local_c[0] = param_1;
    FUN_140b6800();
    if (*(int *)(local_c[0] + 0x360) != 0) {
      FUN_140b707c(local_c[0] + 0x360);
    }
    FUN_140b6fec(local_c);
  }
  return;
}

