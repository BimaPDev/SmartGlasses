/* FUN_2c4b36a2 @ 0x2c4b36a2 */

undefined4
FUN_2c4b36a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
            undefined4 param_9)

{
  FUN_2c674268(param_5 + 4,0,0x34);
  *(undefined1 *)((int)param_5 + 0x11) = param_6;
  *(undefined1 *)(param_5 + 4) = param_7;
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  param_5[10] = param_8;
  param_5[0xb] = param_9;
  *(undefined1 *)(param_5 + 0xc) = 1;
  *(undefined1 *)((int)param_5 + 0x32) = 0x10;
  return 0;
}

