/* FUN_2c4e3da4 @ 0x2c4e3da4 */

int * FUN_2c4e3da4(int *param_1)

{
  int iVar1;
  
  FUN_2c4dfbbc();
  iVar1 = DAT_2c4e3de8 + 8;
  param_1[8] = DAT_2c4e3de8 + 0x44;
  *param_1 = iVar1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[10] = DAT_2c4e3dec;
  iVar1 = DAT_2c4e3df0;
  param_1[0x12] = 0x1ff;
  param_1[0x13] = 0x3ff;
  param_1[0xb] = iVar1;
  return param_1;
}

