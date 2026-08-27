/* FUN_2c6129e4 @ 0x2c6129e4 */

void FUN_2c6129e4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_2c62c3b0(param_1,0x28);
  uVar1 = DAT_2c612a1c;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *param_1 = uVar1;
  param_1[3] = 0xff000000;
  param_1[4] = 0xff000000;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  uVar1 = FUN_2c62ee64(5);
  param_1[5] = uVar1;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  return;
}

