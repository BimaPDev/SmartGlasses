/* FUN_2c604a14 @ 0x2c604a14 */

uint FUN_2c604a14(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (*(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xf) >> 2;
  }
  return uVar1;
}

