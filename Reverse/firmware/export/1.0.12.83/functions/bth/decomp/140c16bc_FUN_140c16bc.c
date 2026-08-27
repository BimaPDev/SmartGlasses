/* FUN_140c16bc @ 0x140c16bc */

undefined4 * FUN_140c16bc(undefined4 *param_1)

{
  *param_1 = DAT_140c16ec;
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (param_1[2] != 0) {
      thunk_FUN_140db700();
    }
    if (param_1[5] != 0) {
      thunk_FUN_140db700();
    }
    if (param_1[7] != 0) {
      thunk_FUN_140db700();
    }
  }
  FUN_140c0288(param_1);
  return param_1;
}

