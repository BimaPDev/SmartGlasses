/* FUN_2c4cf254 @ 0x2c4cf254 */

void FUN_2c4cf254(int param_1)

{
  int local_c [2];
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x128) = 7;
    local_c[0] = param_1;
    FUN_2c4ceba4();
    if (*(int *)(local_c[0] + 0x360) != 0) {
      FUN_2c4d10a8(local_c[0] + 0x360);
    }
    FUN_2c4d1018(local_c);
  }
  return;
}

