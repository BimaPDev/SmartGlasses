/* FUN_2c6648e8 @ 0x2c6648e8 */

bool FUN_2c6648e8(uint *param_1,uint param_2)

{
  if (param_2 < *param_1) {
    return true;
  }
  return *param_1 + param_1[1] * 4 < param_2;
}

