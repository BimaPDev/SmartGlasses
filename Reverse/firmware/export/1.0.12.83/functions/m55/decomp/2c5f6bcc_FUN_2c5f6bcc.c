/* FUN_2c5f6bcc @ 0x2c5f6bcc */

void FUN_2c5f6bcc(int param_1,uint param_2)

{
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  if ((int)param_2 < *(int *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = param_2;
    *(undefined1 *)(*(int *)(param_1 + 4) + param_2) = 0;
  }
  return;
}

