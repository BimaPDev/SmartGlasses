/* FUN_140c4c20 @ 0x140c4c20 */

undefined4 * FUN_140c4c20(undefined4 *param_1)

{
  *param_1 = DAT_140c4c44;
  FUN_140d86fc(param_1 + 2);
  if ((*(char *)(param_1 + 3) != '\0') && (param_1[6] != 0)) {
    thunk_FUN_140db700();
  }
  FUN_140c0288(param_1);
  return param_1;
}

