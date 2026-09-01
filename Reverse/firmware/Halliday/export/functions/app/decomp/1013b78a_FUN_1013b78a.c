/* FUN_1013b78a @ 0x1013b78a */

undefined4 FUN_1013b78a(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 - 1U < 3)) {
    *(char *)(param_1 + 0x32) = (char)param_2;
    return 0;
  }
  return 1;
}

