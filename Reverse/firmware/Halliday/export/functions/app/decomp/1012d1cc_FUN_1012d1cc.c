/* FUN_1012d1cc @ 0x1012d1cc */

void FUN_1012d1cc(int *param_1)

{
  if (param_1[1] != 0) {
    FUN_1012d1f4();
  }
  if (*param_1 != 0) {
    FUN_1012d1f4();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1[2] & 0xfff80000;
  return;
}

