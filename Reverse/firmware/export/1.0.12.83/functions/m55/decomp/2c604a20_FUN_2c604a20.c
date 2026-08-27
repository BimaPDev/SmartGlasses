/* FUN_2c604a20 @ 0x2c604a20 */

uint FUN_2c604a20(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (*(byte *)(*(int *)(param_1 + 8) + 0x18) & 0x3f) >> 4;
  }
  return uVar1;
}

