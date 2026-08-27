/* FUN_2c65e990 @ 0x2c65e990 */

bool FUN_2c65e990(uint *param_1,uint param_2)

{
  if (param_2 < *param_1) {
    return true;
  }
  return param_1[1] + *param_1 < param_2;
}

