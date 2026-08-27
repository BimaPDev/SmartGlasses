/* FUN_140daba0 @ 0x140daba0 */

void FUN_140daba0(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_140e5658(param_1 + 0x17,0,8);
  uVar1 = DAT_140dabd8;
  param_1[8] = param_1;
  param_1[9] = uVar1;
  param_1[10] = DAT_140dabdc;
  param_1[0xb] = DAT_140dabe0;
  param_1[0xc] = DAT_140dabe4;
  return;
}

