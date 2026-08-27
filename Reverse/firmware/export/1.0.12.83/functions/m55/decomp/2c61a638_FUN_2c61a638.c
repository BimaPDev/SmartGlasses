/* FUN_2c61a638 @ 0x2c61a638 */

void FUN_2c61a638(undefined4 param_1,int param_2)

{
  FUN_2c62c928(param_2 + 0x30,0x14);
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(byte *)(param_2 + 0x3c) = *(byte *)(param_2 + 0x3c) & 0xf0 | 9;
  return;
}

