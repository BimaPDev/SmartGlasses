/* FUN_1011a86a @ 0x1011a86a */

uint FUN_1011a86a(void)

{
  int iVar1;
  
  iVar1 = FUN_1005608c();
  return *(uint *)(*(int *)(iVar1 + 0x48) + 0x10) & 1;
}

