/* FUN_10119e76 @ 0x10119e76 */

uint FUN_10119e76(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 8) < 0x8000) {
    iVar1 = 4;
  }
  else {
    iVar1 = 8;
  }
  return (uint)(iVar1 + param_2 + 7) >> 3;
}

