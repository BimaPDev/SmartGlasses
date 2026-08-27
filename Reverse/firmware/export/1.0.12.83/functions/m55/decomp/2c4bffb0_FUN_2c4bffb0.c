/* FUN_2c4bffb0 @ 0x2c4bffb0 */

undefined4 FUN_2c4bffb0(int param_1,int param_2)

{
  param_2 = param_2 * 16000;
  if ((param_2 != 0) && (param_2 == 0 || param_2 + -1 != 0)) {
    *(int *)(DAT_2c4bffe0 + param_1 * 4) = param_2 + -1;
    return 0;
  }
  *(undefined4 *)(DAT_2c4bffe0 + param_1 * 4) = 1;
  return 0;
}

