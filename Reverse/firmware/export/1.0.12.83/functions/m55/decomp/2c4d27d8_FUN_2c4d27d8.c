/* FUN_2c4d27d8 @ 0x2c4d27d8 */

undefined4 FUN_2c4d27d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = param_3;
    return 0;
  }
  return 0xffffffff;
}

