/* FUN_2c4de404 @ 0x2c4de404 */

int * FUN_2c4de404(int *param_1)

{
  int iVar1;
  
  FUN_2c4dfbbc();
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar1 = DAT_2c4de438;
  *param_1 = DAT_2c4de438 + 8;
  param_1[8] = iVar1 + 0x2c;
  param_1[0xc] = iVar1 + 0x38;
  FUN_2c4df4e6(param_1 + 4,0x2000);
  return param_1;
}

