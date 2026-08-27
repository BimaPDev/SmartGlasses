/* FUN_140c4584 @ 0x140c4584 */

void FUN_140c4584(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = *param_2;
  }
  else if (param_3 != 0) {
    FUN_140e5838(param_1,param_2,param_3 << 2);
    return;
  }
  return;
}

