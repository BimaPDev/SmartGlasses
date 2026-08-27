/* FUN_2c519834 @ 0x2c519834 */

void FUN_2c519834(int param_1)

{
  if (*(char *)(param_1 + 0x2d) <= *(char *)(param_1 + 0x2e)) {
    return;
  }
  *(char *)(param_1 + 0x2e) = *(char *)(param_1 + 0x2e) + '\x01';
  FUN_2c607df0();
  return;
}

