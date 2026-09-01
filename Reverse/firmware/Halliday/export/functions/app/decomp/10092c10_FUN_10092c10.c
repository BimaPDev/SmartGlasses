/* FUN_10092c10 @ 0x10092c10 */

void FUN_10092c10(undefined4 *param_1)

{
  FUN_1012a6ec(param_1,0x60);
  *param_1 = 0x140;
  param_1[1] = 0xf0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = param_1[7] & 0xfffe0037 | 0x4108;
  *(undefined2 *)(param_1 + 0x12) = 0x7e0;
  param_1[0x14] = DAT_10092c5c;
  param_1[0x15] = DAT_10092c60;
  param_1[0x16] = 0x58;
  return;
}

