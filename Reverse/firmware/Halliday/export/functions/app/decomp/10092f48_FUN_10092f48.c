/* FUN_10092f48 @ 0x10092f48 */

uint FUN_10092f48(int *param_1)

{
  if ((param_1 == (int *)0x0) && (param_1 = (int *)*DAT_10092f60, param_1 == (int *)0x0)) {
    return 0x82;
  }
  return (*(uint *)(*param_1 + 0x1c) & 0x1ffff) >> 7;
}

