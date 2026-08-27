/* FUN_140b96d8 @ 0x140b96d8 */

void FUN_140b96d8(undefined1 *param_1,int param_2,undefined2 param_3,uint param_4)

{
  param_1[0x3a] = (char)param_4;
  *(short *)(param_1 + 0x34) = (short)param_2;
  *(undefined2 *)(param_1 + 0x38) = param_3;
  if (param_4 != 0) {
    *(undefined2 *)(param_1 + 0x44) = param_3;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(short *)(param_1 + 0x36) = (short)(1 << (param_4 - 1 & 0xff));
    *param_1 = 0;
    param_1[0x10] = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((param_4 & 0xff) == 0x10) {
      if (param_2 == 0x8005) {
        *(undefined4 *)(param_1 + 0x30) = DAT_140b975c;
      }
      else if (param_2 == 0x8021) {
        *(undefined4 *)(param_1 + 0x30) = DAT_140b9758;
      }
      else if (param_2 == 0x1021) {
        *(undefined4 *)(param_1 + 0x30) = DAT_140b9754;
      }
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x44) = param_3;
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

