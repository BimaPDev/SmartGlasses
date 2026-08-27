/* FUN_2c6049c4 @ 0x2c6049c4 */

void FUN_2c6049c4(int param_1,byte param_2)

{
  FUN_2c606bc8();
  *(byte *)(*(int *)(param_1 + 8) + 0x18) =
       *(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xf3 | (param_2 & 3) << 2;
  return;
}

