/* FUN_2c504298 @ 0x2c504298 */

undefined4 *
FUN_2c504298(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c5042b8;
  param_1[0x12] = 0;
  FUN_2c62e838(param_1 + 0x12,uVar1,param_3,param_4,param_4);
  uVar1 = DAT_2c5042bc;
  *param_1 = 0;
  FUN_2c62e838(param_1,uVar1);
  return param_1;
}

