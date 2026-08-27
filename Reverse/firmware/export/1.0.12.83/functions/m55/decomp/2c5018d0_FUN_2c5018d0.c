/* FUN_2c5018d0 @ 0x2c5018d0 */

undefined4 *
FUN_2c5018d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_3;
  uVar3 = FUN_2c6313f4(param_2);
  param_1[4] = uVar3;
  FUN_2c607048(uVar3,0x20);
  FUN_2c63140c(param_1[4],param_3);
  FUN_2c62e7b4(param_1 + 5);
  uVar2 = DAT_2c501920;
  uVar1 = DAT_2c50191c;
  uVar3 = LAB_2c501918;
  param_1[0x10] = 0x96;
  param_1[5] = param_1;
  param_1[9] = uVar2;
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  return param_1;
}

