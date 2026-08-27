/* FUN_2c51f4f8 @ 0x2c51f4f8 */

undefined4 * FUN_2c51f4f8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_2c51ea10();
  *param_1 = DAT_2c51f528;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = DAT_2c51f52c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_2c62bdd8(uVar1,10000,param_1);
  param_1[8] = uVar1;
  FUN_2c62be40();
  return param_1;
}

