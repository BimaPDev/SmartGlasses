/* FUN_1011e768 @ 0x1011e768 */

bool FUN_1011e768(short *param_1)

{
  if ((short)((param_1[2] + 1) - *param_1) < 1) {
    return true;
  }
  return (short)((param_1[3] + 1) - param_1[1]) < 1;
}

