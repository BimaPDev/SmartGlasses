/* FUN_10138cc4 @ 0x10138cc4 */

undefined4 FUN_10138cc4(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  while( true ) {
    while( true ) {
      if (iVar1 < iVar3) {
        return 0xffffffff;
      }
      iVar2 = (iVar3 + iVar1) / 2;
      uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + iVar2 * 0x10);
      if (uVar4 <= param_2) break;
      iVar1 = iVar2 + -1;
    }
    if (param_2 <= uVar4) break;
    iVar3 = iVar2 + 1;
  }
  *param_3 = iVar2;
  return 0;
}

