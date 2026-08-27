/* FUN_2c65f85c @ 0x2c65f85c */

undefined4 * FUN_2c65f85c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c65f880;
  param_1[1] = (uint)(param_3 != 0);
  *param_1 = uVar1;
  param_1[2] = param_2;
  uVar1 = FUN_2c64ce24();
  param_1[4] = uVar1;
  FUN_2c665ec4(param_1,0);
  return param_1;
}

