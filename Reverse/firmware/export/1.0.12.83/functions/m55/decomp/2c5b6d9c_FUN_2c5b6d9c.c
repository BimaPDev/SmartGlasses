/* FUN_2c5b6d9c @ 0x2c5b6d9c */

undefined4 * FUN_2c5b6d9c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_2c5b6dd8;
  if (*(char *)(param_1 + 0xe) != '\0') {
    FUN_2c62ae04(param_1 + 6);
    FUN_2c62ae04(param_1 + 8);
  }
  uVar1 = DAT_2c5b6ddc;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = uVar1;
  FUN_2c5dc800(param_1 + 0xc);
  return param_1;
}

