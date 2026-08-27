/* FUN_2c6437ae @ 0x2c6437ae */

void FUN_2c6437ae(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_3 + param_2 * 4))(*param_1,param_1[1],param_1[2],param_1[3]);
  *param_1 = uVar1;
  return;
}

