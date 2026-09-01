/* FUN_1013c7ee @ 0x1013c7ee */

void FUN_1013c7ee(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_1011ea40(param_2);
  }
  FUN_10113b60(param_1);
  return;
}

