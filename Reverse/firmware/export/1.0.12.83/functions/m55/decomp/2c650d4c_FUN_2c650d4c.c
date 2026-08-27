/* FUN_2c650d4c @ 0x2c650d4c */

void FUN_2c650d4c(int *param_1,int param_2)

{
  if (param_1 != DAT_2c650d60) {
    *param_1 = param_2;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + param_2 + 0xc) = 0;
  }
  return;
}

