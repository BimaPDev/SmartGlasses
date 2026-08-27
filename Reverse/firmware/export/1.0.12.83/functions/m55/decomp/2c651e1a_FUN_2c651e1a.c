/* FUN_2c651e1a @ 0x2c651e1a */

byte * FUN_2c651e1a(int param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    *param_4 = *(undefined4 *)(param_1 + (*param_2 + 0x24) * 4);
    param_4 = param_4 + 1;
  }
  return param_3;
}

