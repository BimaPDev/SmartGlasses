/* FUN_10124dec @ 0x10124dec */

bool FUN_10124dec(int *param_1)

{
  do {
    param_1 = (int *)*param_1;
    if (param_1 == (int *)0x0) {
      return false;
    }
  } while ((*(byte *)(param_1 + 7) & 3) == 0);
  return (*(byte *)(param_1 + 7) & 3) == 1;
}

