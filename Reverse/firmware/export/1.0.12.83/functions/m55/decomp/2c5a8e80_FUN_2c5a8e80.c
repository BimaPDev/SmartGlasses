/* FUN_2c5a8e80 @ 0x2c5a8e80 */

undefined4 * FUN_2c5a8e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c5a8f00;
  param_1[6] = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_2c5a7598(param_1 + 7);
  FUN_2c5a7598(param_1 + 0x2c);
  FUN_2c5a8390(param_1 + 0x51);
  param_1[0x6c] = 0;
  uVar1 = DAT_2c5a8f04;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  uVar1 = FUN_2c62bdd8(uVar1,10000,param_1);
  *DAT_2c5a8f08 = uVar1;
  FUN_2c62be70(uVar1,0xffffffff);
  return param_1;
}

