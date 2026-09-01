/* FUN_10121d3e @ 0x10121d3e */

undefined4 FUN_10121d3e(int param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *(byte **)(*(int *)(param_1 + 0xc) + 0x74);
  iVar2 = 0;
  while( true ) {
    if (*(int *)((uint)*pbVar1 * 0x1c + *(int *)(param_1 + 0xc) + 0x3c) == iVar2) {
      return 0;
    }
    if (*(ushort *)(*(int *)(pbVar1 + 0xc) + iVar2 * 8) == param_2) break;
    iVar2 = iVar2 + 1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  return 1;
}

