/* FUN_2c4d8244 @ 0x2c4d8244 */

void FUN_2c4d8244(undefined1 *param_1,int param_2,undefined2 param_3,uint param_4)

{
  *(short *)(param_1 + 0x34) = (short)param_2;
  *(undefined2 *)(param_1 + 0x38) = param_3;
  param_1[0x3a] = (char)param_4;
  if (param_4 == 0) {
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined2 *)(param_1 + 0x44) = param_3;
    *param_1 = 0;
    param_1[0x10] = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x44) = param_3;
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(short *)(param_1 + 0x36) = (short)(1 << (param_4 - 1 & 0xff));
  if ((param_4 & 0xff) == 0x10) {
    if (param_2 == 0x8005) {
      *(undefined4 *)(param_1 + 0x30) = DAT_2c4d82c4;
      return;
    }
    if (param_2 == 0x8021) {
      *(undefined4 *)(param_1 + 0x30) = DAT_2c4d82c0;
      return;
    }
    if (param_2 == 0x1021) {
      *(undefined4 *)(param_1 + 0x30) = DAT_2c4d82bc;
      return;
    }
  }
  return;
}

