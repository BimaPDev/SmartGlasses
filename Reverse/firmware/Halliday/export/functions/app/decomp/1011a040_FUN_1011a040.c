/* FUN_1011a040 @ 0x1011a040 */

int FUN_1011a040(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) < 0x8000) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  return 0x1f - LZCOUNT((param_2 + 1) - iVar1);
}

