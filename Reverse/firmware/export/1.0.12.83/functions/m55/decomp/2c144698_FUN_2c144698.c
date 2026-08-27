/* FUN_2c144698 @ 0x2c144698 */

void FUN_2c144698(int param_1)

{
  if (*DAT_2c1446b0 != 0) {
    *DAT_2c1446b0 = param_1 + *DAT_2c1446b0;
    return;
  }
  *DAT_2c1446b0 = param_1 + DAT_2c1446b4;
  return;
}

