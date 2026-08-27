/* FUN_2c51890c @ 0x2c51890c */

undefined4 FUN_2c51890c(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U & 0xff;
  if (uVar1 < 0xf) {
    return *(undefined4 *)(DAT_2c518920 + uVar1 * 4);
  }
  return DAT_2c518924;
}

