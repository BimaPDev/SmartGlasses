/* FUN_140ae7d8 @ 0x140ae7d8 */

uint FUN_140ae7d8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) & 0xfffffffc;
  }
  return uVar1;
}

