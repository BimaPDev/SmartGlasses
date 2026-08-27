/* FUN_2c62a290 @ 0x2c62a290 */

void FUN_2c62a290(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_2c62c3b0(param_1,0x50);
  uVar3 = DAT_2c62a2cc & param_1[4];
  *param_1 = DAT_2c62a2d0;
  param_1[0xe] = 0xff00ff00;
  uVar2 = DAT_2c62a2d8;
  uVar1 = DAT_2c62a2d4;
  param_1[1] = 0xffffffff;
  param_1[4] = uVar3 | 0x4108;
  param_1[0x10] = uVar2;
  param_1[2] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = 0x58;
  return;
}

