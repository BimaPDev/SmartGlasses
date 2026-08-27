/* FUN_2c651cfe @ 0x2c651cfe */

undefined4 * FUN_2c651cfe(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar1 = func_0x2c66d6e0(*param_2);
    *param_2 = uVar1;
  }
  return param_3;
}

