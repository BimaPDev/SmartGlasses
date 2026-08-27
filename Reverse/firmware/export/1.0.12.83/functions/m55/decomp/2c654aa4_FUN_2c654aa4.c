/* FUN_2c654aa4 @ 0x2c654aa4 */

undefined4 *
FUN_2c654aa4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  *(undefined4 *)(param_1[4] + 0xc) = param_3;
  FUN_2c64f89e(param_1 + 3);
  func_0x2c64e0b4(param_1);
  return param_1;
}

