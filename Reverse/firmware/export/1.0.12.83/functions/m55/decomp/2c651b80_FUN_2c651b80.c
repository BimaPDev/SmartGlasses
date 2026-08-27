/* FUN_2c651b80 @ 0x2c651b80 */

undefined4 * FUN_2c651b80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c651ba4;
  param_1[1] = (uint)(param_2 != 0);
  *param_1 = uVar1;
  uVar1 = FUN_2c64ce10();
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_2c651eb4(param_1);
  return param_1;
}

