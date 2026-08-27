/* FUN_140c4dc0 @ 0x140c4dc0 */

undefined1 * FUN_140c4dc0(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,*param_2);
    *param_2 = uVar1;
  }
  return param_3;
}

