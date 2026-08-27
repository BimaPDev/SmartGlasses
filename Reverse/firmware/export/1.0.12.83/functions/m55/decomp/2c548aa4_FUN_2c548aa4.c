/* FUN_2c548aa4 @ 0x2c548aa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c548aa4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  param_1[0x18] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  param_1[8] = param_1 + 10;
  param_1[0x12] = param_1 + 0x14;
  *param_1 = _LAB_2c548b10;
  FUN_2c52f5f4(param_1 + 1,param_2 + 4);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  FUN_2c52f5f4(param_1 + 8,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x11] = uVar1;
  FUN_2c52f5f4(param_1 + 0x12,param_2 + 0x48);
  return param_1;
}

