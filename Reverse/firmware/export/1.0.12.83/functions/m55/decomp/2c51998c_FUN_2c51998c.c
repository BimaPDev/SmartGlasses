/* FUN_2c51998c @ 0x2c51998c */

undefined4 * FUN_2c51998c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_2c62e7b4(param_1 + 2);
  uVar2 = DAT_2c5199c0;
  uVar1 = DAT_2c5199bc;
  param_1[0xd] = 200;
  uVar3 = DAT_2c5199c4;
  param_1[0xc] = 0xff;
  param_1[2] = param_1;
  param_1[6] = uVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}

