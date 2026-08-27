/* FUN_2c520bfc @ 0x2c520bfc */

void FUN_2c520bfc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_2c5206b0(param_1,1);
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    return;
  }
  if (param_4 == 1) {
    FUN_2c5206b0(param_1,2);
    *(undefined1 *)(param_1 + 0x1fc) = 2;
    return;
  }
  if (param_4 == 2) {
    FUN_2c5206b0(param_1,3);
    *(undefined1 *)(param_1 + 0x1fc) = 3;
    return;
  }
  if (param_4 != 3) {
    return;
  }
  FUN_2c5206b0(param_1,0);
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  return;
}

