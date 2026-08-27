/* FUN_2c644e70 @ 0x2c644e70 */

undefined4 FUN_2c644e70(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 == -6)) {
    FUN_2c643be0(param_1,*(undefined4 *)(param_1 + 0x28));
    return *(undefined4 *)(param_1 + 0x28);
  }
  FUN_2c643be0(param_1,0);
  return 0;
}

