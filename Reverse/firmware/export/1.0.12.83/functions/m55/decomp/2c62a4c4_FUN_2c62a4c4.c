/* FUN_2c62a4c4 @ 0x2c62a4c4 */

uint FUN_2c62a4c4(int *param_1)

{
  if ((param_1 == (int *)0x0) && (param_1 = (int *)*DAT_2c62a4dc, param_1 == (int *)0x0)) {
    return 0x82;
  }
  return (*(uint *)(*param_1 + 0x10) & 0x1ffff) >> 7;
}

