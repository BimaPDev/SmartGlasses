/* FUN_140c4634 @ 0x140c4634 */

void FUN_140c4634(int *param_1,int param_2)

{
  if (param_1 != DAT_140c4648) {
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[param_2 + 3] = 0;
  }
  return;
}

