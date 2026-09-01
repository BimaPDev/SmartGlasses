/* FUN_1012a6f4 @ 0x1012a6f4 */

void FUN_1012a6f4(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  FUN_1012a6ec(param_1,0x2c,param_3,param_4,param_4);
  if (3 < param_3) {
    param_3 = 4;
  }
  *(char *)(param_1 + 4) = (char)param_3;
  FUN_1011ea40(param_1,param_2,param_3 << 2);
  param_1[5] = *param_1;
  param_1[6] = param_4;
  param_1[7] = (uint)*(byte *)(param_1 + 4);
  param_1[8] = 0;
  return;
}

