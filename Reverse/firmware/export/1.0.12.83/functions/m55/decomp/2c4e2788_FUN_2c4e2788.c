/* FUN_2c4e2788 @ 0x2c4e2788 */

undefined4 * FUN_2c4e2788(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_2c673c88();
  *param_1 = uVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  return param_1;
}

