/* FUN_1409ff40 @ 0x1409ff40 */

void FUN_1409ff40(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    FUN_140e5658(param_1,0,0x15c,param_4,param_4);
    param_1[2] = 0xff;
  }
  param_1[0x48] = DAT_1409ffac;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x158;
  *(undefined1 *)(param_1 + 0x4b) = 0xff;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x127) = 0;
  FUN_140e5278(DAT_1409ffb0,param_1,0x15c);
  return;
}

