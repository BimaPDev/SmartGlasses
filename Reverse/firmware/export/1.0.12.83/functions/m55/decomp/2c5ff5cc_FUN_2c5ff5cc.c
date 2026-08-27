/* FUN_2c5ff5cc @ 0x2c5ff5cc */

void FUN_2c5ff5cc(undefined4 *param_1,undefined2 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  if ((*(byte *)*param_1 & 0xfd) != 1) {
    *param_2 = 0xffff;
    param_2[1] = 0xffff;
    return;
  }
  *param_2 = *(undefined2 *)(param_1 + 2);
  param_2[1] = *(undefined2 *)((int)param_1 + 10);
  return;
}

