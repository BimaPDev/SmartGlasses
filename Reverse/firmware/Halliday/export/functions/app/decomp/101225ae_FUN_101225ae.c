/* FUN_101225ae @ 0x101225ae */

void FUN_101225ae(char *param_1,int param_2,undefined4 param_3)

{
  *(char *)(param_2 + 0x1a) = (char)param_3;
  *(char *)(param_2 + 0x1b) = (char)((uint)param_3 >> 8);
  if (*param_1 == '\x03') {
    *(char *)(param_2 + 0x14) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_2 + 0x15) = (char)((uint)param_3 >> 0x18);
  }
  return;
}

