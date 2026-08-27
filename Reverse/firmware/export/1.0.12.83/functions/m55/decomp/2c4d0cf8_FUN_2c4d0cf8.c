/* FUN_2c4d0cf8 @ 0x2c4d0cf8 */

void FUN_2c4d0cf8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  FUN_2c674268(param_1 + 1,0,0x80);
  FUN_2c674268(param_2,0,0x80,param_4);
  return;
}

