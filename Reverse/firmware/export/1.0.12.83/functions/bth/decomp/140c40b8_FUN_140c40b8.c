/* FUN_140c40b8 @ 0x140c40b8 */

void FUN_140c40b8(int *param_1)

{
  if (*param_1 != DAT_140c40e4) {
    if (0 < *(int *)(*param_1 + -4)) {
      FUN_140c4024(param_1,0,0);
    }
    *(undefined4 *)(*param_1 + -4) = 0xffffffff;
  }
  return;
}

