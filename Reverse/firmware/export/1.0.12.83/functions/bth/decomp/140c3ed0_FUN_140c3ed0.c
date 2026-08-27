/* FUN_140c3ed0 @ 0x140c3ed0 */

void FUN_140c3ed0(int *param_1,int param_2)

{
  if (param_1 != DAT_140c3ee4) {
    *param_1 = param_2;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + param_2 + 0xc) = 0;
  }
  return;
}

