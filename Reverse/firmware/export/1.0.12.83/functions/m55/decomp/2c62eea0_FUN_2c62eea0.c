/* FUN_2c62eea0 @ 0x2c62eea0 */

undefined4 FUN_2c62eea0(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 < 0x13) && (uVar1 = param_2 - 1U & 0xff, uVar1 < 4)) {
    return *(undefined4 *)(DAT_2c62eec0 + (uVar1 + param_1 * 4) * 4);
  }
  return 0xff000000;
}

