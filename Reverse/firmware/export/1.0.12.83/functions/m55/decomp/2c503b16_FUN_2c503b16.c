/* FUN_2c503b16 @ 0x2c503b16 */

undefined4 *
FUN_2c503b16(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 4) = param_2;
  *(char *)(param_1 + 6) = (char)param_4;
  *(short *)((int)param_1 + 0x1a) = (short)param_4;
  *param_1 = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_4;
  uVar1 = FUN_2c629df4();
  param_1[0xe] = uVar1;
  param_1[0xf] = 0xff;
  return param_1;
}

