/* FUN_2c5a8314 @ 0x2c5a8314 */

void FUN_2c5a8314(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(char *)(param_1 + 0x11) = (char)param_4;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  FUN_2c5a8198(param_1,param_4);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

