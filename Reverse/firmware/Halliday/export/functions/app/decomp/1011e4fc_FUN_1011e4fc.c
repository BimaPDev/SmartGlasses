/* FUN_1011e4fc @ 0x1011e4fc */

void FUN_1011e4fc(int param_1,short param_2)

{
  *(short *)(param_1 + 6) = (*(short *)(param_1 + 6) + param_2) - *(short *)(param_1 + 2);
  *(short *)(param_1 + 2) = param_2;
  return;
}

