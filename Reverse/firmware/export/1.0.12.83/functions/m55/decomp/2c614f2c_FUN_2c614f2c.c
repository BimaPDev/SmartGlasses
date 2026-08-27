/* FUN_2c614f2c @ 0x2c614f2c */

undefined1 FUN_2c614f2c(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 4U & 0xff;
  if (uVar1 < 0xb) {
    return *(undefined1 *)(DAT_2c614f40 + uVar1);
  }
  return 0;
}

