/* FUN_2c4e4b10 @ 0x2c4e4b10 */

int * FUN_2c4e4b10(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  
  FUN_2c4dfbbc();
  iVar1 = DAT_2c4e4b48 + 0x44;
  *param_1 = DAT_2c4e4b48 + 8;
  param_1[8] = iVar1;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0x11] = param_5;
  param_1[0x12] = param_7;
  param_1[0x13] = param_8;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = param_6;
  return param_1;
}

