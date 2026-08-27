/* FUN_2c518a74 @ 0x2c518a74 */

undefined4 FUN_2c518a74(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 4) {
    return *(undefined4 *)(DAT_2c518a88 + uVar1 * 4);
  }
  return DAT_2c518a8c;
}

