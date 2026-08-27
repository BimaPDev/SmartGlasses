/* FUN_140cba44 @ 0x140cba44 */

undefined4 * FUN_140cba44(undefined4 *param_1)

{
  *param_1 = DAT_140cba78;
  FUN_140cba08(param_1,0);
  FUN_140cba22(param_1);
  if ((undefined4 *)param_1[0x1a] != param_1 + 9) {
    if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
      thunk_FUN_140db700();
    }
    param_1[0x1a] = 0;
  }
  FUN_140c0378(param_1 + 0x1b);
  return param_1;
}

