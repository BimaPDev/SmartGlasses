/* FUN_2c62ee7c @ 0x2c62ee7c */

undefined4 FUN_2c62ee7c(uint param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 < 0x13) && (uVar1 = param_2 - 1U & 0xff, uVar1 < 5)) {
    return *(undefined4 *)(DAT_2c62ee9c + (uVar1 + param_1 * 5) * 4);
  }
  return 0xff000000;
}

