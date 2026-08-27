/* FUN_2c6514b0 @ 0x2c6514b0 */

void FUN_2c6514b0(int *param_1,int param_2)

{
  if (param_1 != DAT_2c6514c4) {
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[param_2 + 3] = 0;
  }
  return;
}

