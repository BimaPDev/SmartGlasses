/* FUN_2c651c0c @ 0x2c651c0c */

undefined1 * FUN_2c651c0c(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar1 = (**(code **)(*param_1 + 8))(param_1,*param_2);
    *param_2 = uVar1;
  }
  return param_3;
}

