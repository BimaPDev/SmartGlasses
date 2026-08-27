/* FUN_2c617ec0 @ 0x2c617ec0 */

void FUN_2c617ec0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((-1 < (int)((uint)*(byte *)(param_2 + 0xe) << 0x1d)) && (*(int *)(param_2 + 4) != 0)) {
    FUN_2c62bea8();
  }
  *(undefined4 *)(param_2 + 4) = param_3;
  *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) | 4;
  FUN_2c607df0(param_1);
  return;
}

