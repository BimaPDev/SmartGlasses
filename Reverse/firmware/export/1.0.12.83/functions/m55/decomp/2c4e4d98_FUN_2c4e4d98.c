/* FUN_2c4e4d98 @ 0x2c4e4d98 */

int FUN_2c4e4d98(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (*param_4 == param_2) {
      return param_4[1];
    }
    param_1 = param_1 + -1;
    param_4 = param_4 + 2;
  } while (param_1 != 0);
  return 0;
}

