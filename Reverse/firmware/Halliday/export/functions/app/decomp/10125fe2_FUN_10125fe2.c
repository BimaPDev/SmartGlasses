/* FUN_10125fe2 @ 0x10125fe2 */

uint FUN_10125fe2(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (*(byte *)(*(int *)(param_1 + 8) + 0x20) & 0xf) >> 2;
  }
  return uVar1;
}

