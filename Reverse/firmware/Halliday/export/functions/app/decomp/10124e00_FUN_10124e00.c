/* FUN_10124e00 @ 0x10124e00 */

bool FUN_10124e00(int *param_1)

{
  do {
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return false;
    }
  } while ((*(byte *)(param_1 + 7) & 0xc) == 0);
  return (*(byte *)(param_1 + 7) & 0xc) == 4;
}

