/* FUN_2c5e93ee @ 0x2c5e93ee */

void FUN_2c5e93ee(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    FUN_2c5e73a0();
    FUN_2c6043d8(*param_2);
    *param_2 = 0;
  }
  if (*(char *)(param_2 + 10) == '\0') {
    FUN_2c62bea8(param_2[2]);
    param_2[2] = 0;
    FUN_2c62bea8(param_2[3]);
    param_2[3] = 0;
    FUN_2c62bea8(param_2[4]);
    param_2[4] = 0;
  }
  FUN_2c62bea8(param_2[6]);
  param_2[6] = 0;
  FUN_2c62bea8(param_2[5]);
  param_2[5] = 0;
  if ((param_2 != DAT_2c62beb8) && (param_2 != (undefined4 *)0x0)) {
    FUN_2c4726f0();
    return;
  }
  return;
}

