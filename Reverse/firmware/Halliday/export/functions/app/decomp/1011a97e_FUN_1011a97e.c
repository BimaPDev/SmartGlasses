/* FUN_1011a97e @ 0x1011a97e */

uint FUN_1011a97e(void)

{
  int iVar1;
  
  iVar1 = FUN_1005608c();
  return *(uint *)(*(int *)(iVar1 + 0x4c) + 0x1c) & 0x3ffffff;
}

