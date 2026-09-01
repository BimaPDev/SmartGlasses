/* FUN_1012c322 @ 0x1012c322 */

void FUN_1012c322(int param_1,byte param_2)

{
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0xfd | (param_2 & 1) << 1;
  return;
}

