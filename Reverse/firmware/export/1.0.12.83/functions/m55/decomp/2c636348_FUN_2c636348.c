/* FUN_2c636348 @ 0x2c636348 */

void FUN_2c636348(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    return;
  }
  FUN_2c62bea8(*(undefined4 *)(param_2 + 0x24));
  *(uint *)(param_2 + 0x24) = bVar1 & 1;
  return;
}

