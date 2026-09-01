/* FUN_1011a8f2 @ 0x1011a8f2 */

uint FUN_1011a8f2(void)

{
  int iVar1;
  
  iVar1 = FUN_1005608c();
  return (*(uint *)(*(int *)(iVar1 + 0x4c) + 8) & 0x3ffff) >> 0x11;
}

