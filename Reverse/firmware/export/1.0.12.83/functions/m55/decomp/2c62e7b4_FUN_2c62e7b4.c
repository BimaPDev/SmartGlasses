/* FUN_2c62e7b4 @ 0x2c62e7b4 */

void FUN_2c62e7b4(int param_1)

{
  undefined4 uVar1;
  
  FUN_2c62c3b0(param_1,0x44);
  *(undefined4 *)(param_1 + 0x2c) = 500;
  *(undefined4 *)(param_1 + 0x28) = 100;
  uVar1 = DAT_2c62e7e4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

