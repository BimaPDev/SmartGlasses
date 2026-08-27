/* FUN_2c5ef844 @ 0x2c5ef844 */

undefined4 FUN_2c5ef844(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (*(char *)(param_1 + 3) != '\0')) {
    FUN_2c481604();
    if (param_1[2] != 0) {
      FUN_2c6043d8();
      param_1[2] = 0;
    }
    FUN_2c62be40(param_1[4]);
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return 1;
  }
  return 0;
}

