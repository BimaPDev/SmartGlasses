/* FUN_10125ff0 @ 0x10125ff0 */

uint FUN_10125ff0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (*(byte *)(*(int *)(param_1 + 8) + 0x20) & 0x3f) >> 4;
  }
  return uVar1;
}

