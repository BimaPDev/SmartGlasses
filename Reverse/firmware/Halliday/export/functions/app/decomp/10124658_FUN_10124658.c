/* FUN_10124658 @ 0x10124658 */

uint FUN_10124658(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(byte *)(param_1 + 0x1c) & 3) >> 1;
  }
  return uVar1;
}

