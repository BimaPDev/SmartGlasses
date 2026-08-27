/* FUN_2c49b090 @ 0x2c49b090 */

uint FUN_2c49b090(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_2c49b0a8 + 0xfc);
  *(uint *)(DAT_2c49b0a8 + 0xfc) = *(uint *)(DAT_2c49b0a8 + 0xfc) | 0x1000000;
  return (uVar1 & 0x1ffffff) >> 0x18;
}

