/* FUN_140c10e4 @ 0x140c10e4 */

undefined4 * FUN_140c10e4(undefined4 *param_1)

{
  *param_1 = DAT_140c111c;
  if (*(char *)((int)param_1 + 0x43) != '\0') {
    if (param_1[2] != 0) {
      thunk_FUN_140db700();
    }
    if (param_1[5] != 0) {
      thunk_FUN_140db700();
    }
    if (param_1[7] != 0) {
      thunk_FUN_140db700();
    }
    if (param_1[9] != 0) {
      thunk_FUN_140db700();
    }
  }
  FUN_140c0288(param_1);
  return param_1;
}

