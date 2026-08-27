/* FUN_2c5067f4 @ 0x2c5067f4 */

undefined4 * FUN_2c5067f4(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_3 + 0x48);
  *param_1 = DAT_2c506818;
  param_1[1] = param_2;
  param_1[2] = param_3;
  uVar1 = (*pcVar2)(param_3);
  *(bool *)(param_1 + 3) = 2 < uVar1;
  return param_1;
}

