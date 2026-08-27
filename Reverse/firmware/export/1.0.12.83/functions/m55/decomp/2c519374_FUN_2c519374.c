/* FUN_2c519374 @ 0x2c519374 */

void FUN_2c519374(undefined4 param_1,int param_2)

{
  FUN_2c62bea8(*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) & 0xf8 | 3;
  return;
}

