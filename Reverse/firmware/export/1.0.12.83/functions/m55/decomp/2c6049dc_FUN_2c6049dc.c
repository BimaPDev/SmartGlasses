/* FUN_2c6049dc @ 0x2c6049dc */

void FUN_2c6049dc(int param_1,byte param_2)

{
  FUN_2c606bc8();
  *(byte *)(*(int *)(param_1 + 8) + 0x18) =
       *(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xcf | (param_2 & 3) << 4;
  return;
}

