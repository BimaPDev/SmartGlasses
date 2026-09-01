/* FUN_1013d7a2 @ 0x1013d7a2 */

int FUN_1013d7a2(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_1 + 0x10) - iVar4;
  if (iVar3 == 0) {
    puVar1 = (uint *)(param_1 + 0x14U) + iVar4;
    puVar2 = (uint *)(param_2 + 0x14 + iVar4 * 4);
    do {
      puVar1 = puVar1 + -1;
      puVar2 = puVar2 + -1;
      if (*puVar1 != *puVar2) {
        if (*puVar2 <= *puVar1) {
          return 1;
        }
        return -1;
      }
    } while ((uint *)(param_1 + 0x14U) < puVar1);
  }
  return iVar3;
}

