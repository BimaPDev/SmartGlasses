/* FUN_1011c930 @ 0x1011c930 */

undefined4 FUN_1011c930(int param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(char)(param_3 + -1);
  iVar4 = iVar3 << 2;
  while( true ) {
    if (iVar3 < 0) {
      return 0;
    }
    puVar1 = (uint *)(param_1 + iVar4);
    puVar2 = (uint *)(param_2 + iVar4);
    if (*puVar2 < *puVar1) break;
    iVar4 = iVar4 + -4;
    if (*puVar1 < *puVar2) {
      return 0xffffffff;
    }
    iVar3 = (int)(char)((char)iVar3 + -1);
  }
  return 1;
}

