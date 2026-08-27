/* FUN_2c659290 @ 0x2c659290 */

undefined4 * FUN_2c659290(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c6592b4;
  param_1[1] = (uint)(param_3 != 0);
  *param_1 = uVar1;
  param_1[2] = param_2;
  uVar1 = FUN_2c64ce24();
  param_1[4] = uVar1;
  FUN_2c665c68(param_1,0);
  return param_1;
}

