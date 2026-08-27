/* FUN_2c4d2800 @ 0x2c4d2800 */

undefined4 FUN_2c4d2800(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 0;
  }
  return 0xffffffff;
}

