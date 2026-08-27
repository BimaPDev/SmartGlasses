/* FUN_2c64dcc8 @ 0x2c64dcc8 */

undefined4 * FUN_2c64dcc8(undefined4 *param_1)

{
  *param_1 = DAT_2c64dd00;
  if (*(char *)(param_1 + 0x1b) != '\0') {
    if (param_1[2] != 0) {
      thunk_FUN_2c669588();
    }
    if (param_1[7] != 0) {
      thunk_FUN_2c669588();
    }
    if (param_1[9] != 0) {
      thunk_FUN_2c669588();
    }
    if (param_1[0xb] != 0) {
      thunk_FUN_2c669588();
    }
  }
  FUN_2c64cdcc(param_1);
  return param_1;
}

